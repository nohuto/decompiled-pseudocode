/*
 * XREFs of _SetDeferredDpiStateForWindowAndChildren @ 0x1402847CC
 * Callers:
 *     UpdateWindowMonitor @ 0x140033EB0 (UpdateWindowMonitor.c)
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 *     xxxNotifyMonitorChanged @ 0x1400654C0 (xxxNotifyMonitorChanged.c)
 *     NtUserDeferWindowDpiChanges @ 0x14020D890 (NtUserDeferWindowDpiChanges.c)
 *     xxxRestoreWindowFromDeferredStateIfNeeded @ 0x140284CA8 (xxxRestoreWindowFromDeferredStateIfNeeded.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x1400D99FC (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     WPP_RECORDER_AND_TRACE_SF_dqss @ 0x140284454 (WPP_RECORDER_AND_TRACE_SF_dqss.c)
 */

__int64 __fastcall SetDeferredDpiStateForWindowAndChildren(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  char v4; // r15
  int v5; // r14d
  int v6; // r12d
  __int64 v8; // rcx
  __int16 v10; // r13
  bool v11; // r14
  __int64 UserSessionState; // rax
  int v13; // r8d
  int v14; // edx
  char v15; // bp
  char v16; // si
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // r8d
  int v20; // edx
  __int64 *v21; // rbx
  __int64 *v22; // rsi
  _DWORD *v23; // rax
  _DWORD *v24; // rax
  _DWORD *v25; // rcx
  _BYTE v26[8]; // [rsp+60h] [rbp-48h] BYREF
  __int64 v27; // [rsp+68h] [rbp-40h]

  v3 = *((_DWORD *)a1 + 95);
  v4 = 0;
  v5 = a3;
  v6 = a2;
  if ( (v3 & 0x40) != 0 && !a3 )
    return 0LL;
  v8 = a1[5];
  if ( (_DWORD)a2 == (*(_WORD *)(v8 + 286) != 0) )
  {
    if ( (v3 & 0x40) == 0 && a3 )
    {
      *((_DWORD *)a1 + 95) = v3 | 0x40;
      return 1LL;
    }
    return 0LL;
  }
  if ( (_DWORD)a2 )
  {
    v10 = *(_WORD *)(v8 + 284);
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) >= 5u )
    {
      v4 = 1;
    }
    v11 = *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
       && *(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL);
    if ( v4 || v11 )
    {
      UserSessionState = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v13) = v11;
      LOBYTE(v14) = v4;
      WPP_RECORDER_AND_TRACE_SF_dqss(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v14,
        v13,
        *(_QWORD *)(UserSessionState + 69160));
    }
    v5 = a3;
  }
  else
  {
    v10 = 0;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 44LL) & 8) == 0
      || (v15 = 1, *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 41LL) < 5u) )
    {
      v15 = 0;
    }
    if ( *(unsigned int **)&WPP_RECORDER_INITIALIZED == &WPP_RECORDER_INITIALIZED
      || (v16 = 1, !*(_WORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 72LL)) )
    {
      v16 = 0;
    }
    if ( v15 || v16 )
    {
      v17 = *a1;
      v18 = W32GetUserSessionState(*(_QWORD *)&WPP_GLOBAL_Control, a2);
      LOBYTE(v19) = v16;
      LOBYTE(v20) = v15;
      WPP_RECORDER_AND_TRACE_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 24LL),
        v20,
        v19,
        *(_QWORD *)(v18 + 69160),
        5,
        4,
        24,
        (__int64)&WPP_bd5572f5d1ad3e1a276576d737b3d2ca_Traceguids,
        v17);
    }
  }
  v26[0] = 0;
  v21 = a1;
  v27 = 0LL;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v26, a2);
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = v21;
      if ( v21 != a1 && (*((_DWORD *)v21 + 95) & 0x40) != 0 )
        goto LABEL_49;
      *(_WORD *)(v21[5] + 286) = v10;
      if ( v6 )
      {
        if ( !gbIgnoreStressedOutStuff && v21[37] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2844);
        v23 = (_DWORD *)a1[36];
        v21[37] = (__int64)v23;
        ++*v23;
      }
      else
      {
        if ( !gbIgnoreStressedOutStuff && !v21[37] )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2853);
        v24 = (_DWORD *)v21[37];
        if ( v24 )
        {
          --*v24;
          v25 = (_DWORD *)v21[37];
          if ( !*v25 )
            Win32FreePool(v25);
          v21[37] = 0LL;
        }
      }
      if ( !v21[14] )
        break;
      v21 = (__int64 *)v21[14];
    }
    if ( v21 == a1 )
      break;
LABEL_49:
    v21 = (__int64 *)v21[11];
    if ( !v21 )
    {
      while ( 1 )
      {
        v21 = (__int64 *)v22[11];
        if ( v21 )
          break;
        v22 = (__int64 *)v22[13];
        if ( v22 == a1 )
          goto LABEL_54;
      }
      if ( v22 == a1 )
        break;
    }
  }
LABEL_54:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)v26);
  if ( v5 && v6 )
    *((_DWORD *)a1 + 95) |= 0x40u;
  else
    *((_DWORD *)a1 + 95) &= ~0x40u;
  return 1LL;
}
