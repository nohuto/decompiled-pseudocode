/*
 * XREFs of UserPowerStateCallout @ 0x1401118A8
 * Callers:
 *     W32CalloutDispatchWorker @ 0x140120DDC (W32CalloutDispatchWorker.c)
 * Callees:
 *     ?UserSessionSwitchBlock_Start@@YAJXZ @ 0x1401116D8 (-UserSessionSwitchBlock_Start@@YAJXZ.c)
 *     ?UserSessionSwitchBlock_End@@YAXXZ @ 0x1401117CC (-UserSessionSwitchBlock_End@@YAXXZ.c)
 *     ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x140111C50 (-AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z.c)
 *     IsLogonConnected @ 0x140111CC0 (IsLogonConnected.c)
 *     QueuePowerRequest @ 0x140111D40 (QueuePowerRequest.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall UserPowerStateCallout(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  unsigned int v5; // esi
  char v6; // r14
  int v7; // r13d
  int v8; // r15d
  __int64 v9; // rbx
  unsigned int v10; // r12d
  int v11; // edx
  int v12; // ecx
  int v13; // r8d
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  __int64 v17; // rax
  struct _KEVENT *v18; // rcx
  int v19; // r8d
  int v20; // edx
  int v21; // eax
  unsigned int v22; // ecx
  int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  _QWORD *v26; // rcx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  int v30; // edx
  int v31; // ecx
  int v32; // r8d
  int v33; // edx
  int v34; // ecx
  int v35; // r8d
  int v36; // edx
  int v37; // ecx
  int v38; // r8d
  int v39; // ecx
  int v40; // edx
  int v41; // r8d
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned int v45; // eax
  __int64 v46; // rax
  _QWORD v47[4]; // [rsp+20h] [rbp-48h] BYREF

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v5 = *(_DWORD *)(a1 + 32);
  v6 = *(_BYTE *)(a1 + 16);
  v7 = *(_DWORD *)(a1 + 20);
  v8 = *(_DWORD *)(a1 + 24);
  v9 = UserSessionState + 2960;
  v10 = *(_DWORD *)(a1 + 28);
  AddPowerStateLogEntry(1LL, v5);
  if ( !v5 )
  {
    v27 = UserSessionSwitchBlock_Start();
    goto LABEL_20;
  }
  if ( v5 == 7 )
  {
    UserSessionSwitchBlock_End();
    if ( *(_DWORD *)(W32GetUserSessionState(v31, v30, v32) + 2700) )
    {
      if ( *(_BYTE *)W32GetUserGdiSessionState() )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3209LL);
      v47[0] = 0LL;
      v47[1] = 0LL;
      v47[2] = 4LL;
      *(_DWORD *)(W32GetUserSessionState(v34, v33, v35) + 2700) = 0;
      v39 = *(_DWORD *)(W32GetUserSessionState(v37, v36, v38) + 2704);
      v47[3] = v39;
      v42 = W32GetUserSessionState(v39, v40, v41);
      v25 = 0LL;
      v26 = v47;
      *(_DWORD *)(v42 + 2704) = 0;
      goto LABEL_19;
    }
    goto LABEL_22;
  }
  if ( *(_DWORD *)(W32GetUserGdiSessionState() + 32)
    && *(_DWORD *)(W32GetUserSessionState(v12, v11, v13) + 2728)
    && (unsigned int)IsLogonConnected() )
  {
    v17 = W32GetUserSessionState(v15, v14, v16);
    ExEnterCriticalRegionAndAcquireFastMutexUnsafe(*(_QWORD *)(v17 + 512));
    v20 = 1;
    if ( v5 == 1 )
    {
      v21 = *(_DWORD *)v9;
      if ( v6 )
      {
        if ( (v21 & 1) != 0 )
          goto LABEL_9;
      }
      else if ( (v21 & 1) == 0 )
      {
LABEL_9:
        *(_DWORD *)v9 |= 1u;
        *(_DWORD *)v9 = v10 & 4 | *(_DWORD *)v9 & 0xFFFFFFFB;
        *(_DWORD *)v9 = (v10 >> 30) & 2 | *(_DWORD *)v9 & 0xFFFFFFFD;
        *(_DWORD *)v9 ^= ((unsigned __int8)*(_DWORD *)v9 ^ (unsigned __int8)(8 * v10)) & 8;
        v22 = (8 * (v10 & 2)) | *(_DWORD *)v9 & 0xFFFFFFEF;
        *(_DWORD *)(v9 + 56) = v7;
        *(_DWORD *)v9 = v22;
        v23 = *(_DWORD *)v9;
        *(_DWORD *)(v9 + 60) = v8;
        *(_DWORD *)(v9 + 64) = v10;
        if ( (v23 & 4) != 0 )
          *(_DWORD *)(v9 + 20) = 40;
        if ( (*(_DWORD *)v9 & 2) != 0 )
          *(_DWORD *)(v9 + 20) = 9;
        v18 = *(struct _KEVENT **)(v9 + 8);
        if ( v18 )
          KeSetEvent(v18, 1, 0);
LABEL_15:
        if ( !v6 )
          goto LABEL_16;
LABEL_36:
        v46 = W32GetUserSessionState((_DWORD)v18, v20, v19);
        ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v46 + 512));
LABEL_22:
        AddPowerStateLogEntry(2LL, 0LL);
        return 0LL;
      }
      v43 = W32GetUserSessionState((_DWORD)v18, 1, v19);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v43 + 512));
      AddPowerStateLogEntry(2LL, 2151546888LL);
      return 2151546888LL;
    }
    else
    {
      if ( v5 == 14 )
      {
        *(_DWORD *)(v9 + 60) = v8;
        goto LABEL_15;
      }
      if ( (*(_DWORD *)v9 & 1) != 0 )
      {
        if ( !v6 )
        {
          if ( v5 != 8 )
          {
LABEL_16:
            if ( v5 == 2 || v5 == 13 )
              *(_DWORD *)(v9 + 76) = *(_DWORD *)(a1 + 36);
            *(_DWORD *)(v9 + 72) = v5;
            v24 = W32GetUserSessionState((_DWORD)v18, v20, v19);
            ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v24 + 512));
            LOBYTE(v25) = 1;
            v26 = 0LL;
LABEL_19:
            v27 = QueuePowerRequest(v26, v25);
LABEL_20:
            v28 = v27;
            AddPowerStateLogEntry(2LL, v27);
            return v28;
          }
          v45 = *(_DWORD *)v9 & 0xFFFFFFFE;
          *(_QWORD *)(v9 + 8) = 0LL;
          *(_DWORD *)v9 = v45;
        }
        goto LABEL_36;
      }
      v44 = W32GetUserSessionState((_DWORD)v18, 1, v19);
      ExReleaseFastMutexUnsafeAndLeaveCriticalRegion(*(_QWORD *)(v44 + 512));
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
