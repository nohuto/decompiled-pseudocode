/*
 * XREFs of UserPowerStateCallout @ 0x1401B27F4
 * Callers:
 *     W32CalloutDispatchWorker @ 0x1400DB04C (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1400E1920 (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     QueuePowerRequest @ 0x1400E9340 (QueuePowerRequest.c)
 *     EnterPowerCrit @ 0x1400E95D0 (EnterPowerCrit.c)
 *     LeavePowerCrit @ 0x1400E9600 (LeavePowerCrit.c)
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x14012EA64 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     IsLogonConnected @ 0x1401515F0 (IsLogonConnected.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401B6C6C (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 */

__int64 __fastcall UserPowerStateCallout(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  unsigned int v4; // esi
  char v5; // r14
  int v6; // r13d
  int v7; // r15d
  __int64 v8; // rbx
  unsigned int v9; // r12d
  __int64 v10; // rcx
  unsigned int v11; // eax
  unsigned int v12; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rax
  char v24; // dl
  _OWORD *v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _KEVENT *v32; // rcx
  __int64 v33; // rdx
  int v34; // eax
  unsigned int v35; // ecx
  int v36; // eax
  unsigned int v37; // eax
  _QWORD v38[4]; // [rsp+20h] [rbp-48h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2);
  v4 = *(_DWORD *)(a1 + 32);
  v5 = *(_BYTE *)(a1 + 16);
  v6 = *(_DWORD *)(a1 + 20);
  v7 = *(_DWORD *)(a1 + 24);
  v8 = UserSessionState + 2960;
  v9 = *(_DWORD *)(a1 + 28);
  AddPowerStateLogEntry(1LL, v4);
  if ( !v4 )
  {
    v11 = UserSessionSwitchBlock_Start();
LABEL_3:
    v12 = v11;
    AddPowerStateLogEntry(2LL, v11);
    return v12;
  }
  if ( v4 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( *(_DWORD *)(W32GetUserSessionState(v15, v14) + 2700) )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState(v16) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 3155);
      v38[0] = 0LL;
      v38[1] = 0LL;
      v38[2] = 4LL;
      *(_DWORD *)(W32GetUserSessionState(v18, v17) + 2700) = 0;
      v21 = *(int *)(W32GetUserSessionState(v20, v19) + 2704);
      v38[3] = v21;
      v23 = W32GetUserSessionState(v21, v22);
      v24 = 0;
      v25 = v38;
      *(_DWORD *)(v23 + 2704) = 0;
LABEL_9:
      v11 = QueuePowerRequest(v25, v24);
      goto LABEL_3;
    }
    goto LABEL_10;
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState(v10) + 32)
    && *(_DWORD *)(W32GetUserSessionState(v27, v26) + 2728)
    && IsLogonConnected(v29, v28) )
  {
    EnterPowerCrit(v31, v30);
    v33 = 1LL;
    if ( v4 == 1 )
    {
      v34 = *(_DWORD *)v8;
      if ( v5 )
      {
        if ( (v34 & 1) != 0 )
        {
LABEL_17:
          *(_DWORD *)v8 |= 1u;
          *(_DWORD *)v8 = v9 & 4 | *(_DWORD *)v8 & 0xFFFFFFFB;
          *(_DWORD *)v8 = (v9 >> 30) & 2 | *(_DWORD *)v8 & 0xFFFFFFFD;
          *(_DWORD *)v8 ^= ((unsigned __int8)*(_DWORD *)v8 ^ (unsigned __int8)(8 * v9)) & 8;
          v35 = (8 * (v9 & 2)) | *(_DWORD *)v8 & 0xFFFFFFEF;
          *(_DWORD *)(v8 + 56) = v6;
          *(_DWORD *)v8 = v35;
          v36 = *(_DWORD *)v8;
          *(_DWORD *)(v8 + 60) = v7;
          *(_DWORD *)(v8 + 64) = v9;
          if ( (v36 & 4) != 0 )
            *(_DWORD *)(v8 + 20) = 40;
          if ( (*(_DWORD *)v8 & 2) != 0 )
            *(_DWORD *)(v8 + 20) = 9;
          v32 = *(struct _KEVENT **)(v8 + 8);
          if ( v32 )
            KeSetEvent(v32, 1, 0);
LABEL_27:
          if ( !v5 )
            goto LABEL_28;
          goto LABEL_37;
        }
      }
      else if ( (v34 & 1) == 0 )
      {
        goto LABEL_17;
      }
      LeavePowerCrit((__int64)v32, 1LL);
      AddPowerStateLogEntry(2LL, 2151546888LL);
      return 2151546888LL;
    }
    else
    {
      if ( v4 == 14 )
      {
        *(_DWORD *)(v8 + 60) = v7;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)v8 & 1) != 0 )
      {
        if ( !v5 )
        {
          if ( v4 != 8 )
          {
LABEL_28:
            if ( v4 == 2 || v4 == 13 )
              *(_DWORD *)(v8 + 76) = *(_DWORD *)(a1 + 36);
            *(_DWORD *)(v8 + 72) = v4;
            LeavePowerCrit((__int64)v32, v33);
            v24 = 1;
            v25 = 0LL;
            goto LABEL_9;
          }
          v37 = *(_DWORD *)v8 & 0xFFFFFFFE;
          *(_QWORD *)(v8 + 8) = 0LL;
          *(_DWORD *)v8 = v37;
        }
LABEL_37:
        LeavePowerCrit((__int64)v32, v33);
LABEL_10:
        AddPowerStateLogEntry(2LL, 0LL);
        return 0LL;
      }
      LeavePowerCrit((__int64)v32, 1LL);
      AddPowerStateLogEntry(2LL, 2151546889LL);
      return 2151546889LL;
    }
  }
  else
  {
    AddPowerStateLogEntry(2LL, 2151546887LL);
    return 2151546887LL;
  }
}
