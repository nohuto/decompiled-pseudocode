/*
 * XREFs of ?xxxCapture@@YAXPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x1400625CC
 * Callers:
 *     xxxReleaseCapture @ 0x14006247C (xxxReleaseCapture.c)
 *     xxxSetCapture @ 0x140062528 (xxxSetCapture.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     xxxMNSetCapture @ 0x1402677EC (xxxMNSetCapture.c)
 *     xxxCancelTrackingForThread @ 0x1402AC860 (xxxCancelTrackingForThread.c)
 *     xxxSBTrackInit @ 0x1402E8980 (xxxSBTrackInit.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x140019B64 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x14001BAA0 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     xxxCancelMouseMoveTracking @ 0x140021AE8 (xxxCancelMouseMoveTracking.c)
 *     xxxWindowEvent @ 0x14002EAB0 (xxxWindowEvent.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x1400461EC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ?zzzEndDeferWinEventNotify@@YAXXZ @ 0x14005F888 (-zzzEndDeferWinEventNotify@@YAXXZ.c)
 *     ?WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z @ 0x1400681AC (-WakeSomeone@@YAXPEAUtagQ@@PEAUtagTHREADINFO@@IPEAUtagQMSG@@@Z.c)
 *     LockCaptureWindow @ 0x140121D68 (LockCaptureWindow.c)
 *     ?SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z @ 0x140121EA8 (-SetCapture@Mouse@InputTraceLogging@@SAXPEBUtagQ@@PEAUtagWND@@_N@Z.c)
 *     xxxSendMessageCallback @ 0x14012B834 (xxxSendMessageCallback.c)
 *     IsMiPEnabledForWindow @ 0x14015DEA0 (IsMiPEnabledForWindow.c)
 *     IsMiPEnabledForThread @ 0x14015DEF8 (IsMiPEnabledForThread.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x140271C68 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 */

void __fastcall xxxCapture(struct tagTHREADINFO *a1, struct tagWND *a2, int a3)
{
  const struct tagQ **v3; // r14
  struct tagWND *v5; // rdi
  struct tagWND *v6; // rsi
  __int64 v7; // rcx
  int v8; // ebp
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  const struct tagQ *v12; // r14
  __int64 v13; // rbx
  struct tagWND *v14; // rax
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // ebp
  __int64 v21; // r15
  struct tagQ *v22; // rbx
  __int64 v23; // rax
  int v24; // ecx
  __int64 v25; // rdx
  __int64 v26; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-38h] BYREF

  v3 = (const struct tagQ **)((char *)a1 + 472);
  v5 = a2;
  v6 = 0LL;
  v7 = 2LL;
  if ( a3 == 6 )
  {
    BugCheckParameter3[1] = (ULONG_PTR)a2;
    BugCheckParameter3[0] = W32GetUserSessionState(2LL, a2) + 16264;
    HMAssignmentLock(BugCheckParameter3, 0LL);
    InputTraceLogging::Mouse::SetCapture(*v3, v5, 1);
    v7 = 2LL;
    v8 = 2;
  }
  else
  {
    v8 = a3;
    if ( !a3 )
    {
      if ( *(_QWORD *)(W32GetUserSessionState(2LL, a2) + 16264) )
      {
        v10 = *(_QWORD *)(W32GetUserSessionState(v9, a2) + 16264);
        if ( a1 == *(struct tagTHREADINFO **)(v10 + 16) )
        {
          UserSessionState = W32GetUserSessionState(v10, a2);
          HMAssignmentUnlock(UserSessionState + 16264);
          InputTraceLogging::Mouse::SetCapture(*v3, 0LL, 1);
        }
      }
      v7 = 2LL;
    }
  }
  v12 = *v3;
  if ( v12 )
  {
    v13 = *((_QWORD *)a1 + 62);
    if ( (*(_DWORD *)(v13 + 48) & 0xC0) != 0 && *(_DWORD *)(v13 + 200) == 1 )
    {
      if ( (v14 = *(struct tagWND **)(v13 + 192), v14 == v5) && v8 != 2
        || v14 == *((struct tagWND **)v12 + 14) && *((_DWORD *)v12 + 39) != 2 )
      {
        LOBYTE(BugCheckParameter3[0]) = 0;
        BugCheckParameter3[1] = 0LL;
        AtomicExecutionCheck::Arm((AtomicExecutionCheck *)BugCheckParameter3);
        xxxCancelMouseMoveTracking(*(_DWORD *)(v13 + 48), *(_QWORD *)(v13 + 192), *(_DWORD *)(v13 + 200), 192);
        AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)BugCheckParameter3);
      }
    }
    v15 = LockCaptureWindow(v12, v5);
    *((_DWORD *)v12 + 39) = v8;
    v6 = (struct tagWND *)v15;
    if ( v5 )
    {
      if ( (unsigned int)IsMiPEnabledForThread(*((_QWORD *)v5 + 2)) )
      {
        if ( !(unsigned int)IsMiPEnabledForWindow(v5) )
        {
          a2 = *(struct tagWND **)(v16 + 1512);
          if ( a2 )
          {
            v7 = *(unsigned int *)a2;
            if ( (v7 & 4) == 0 && (v7 & 2) == 0 && (v7 & 0x10) == 0 && (v7 & 1) != 0 )
            {
              if ( (v7 & 0x20) != 0 || (*((_DWORD *)a2 + 9) & 0x1F0) != 0 )
                v7 = (unsigned int)v7 | 4;
              else
                v7 = (unsigned int)v7 | 2;
              *(_DWORD *)a2 = v7;
              **(_DWORD **)(v16 + 1512) &= ~0x10u;
            }
          }
        }
      }
    }
  }
  v17 = W32GetUserSessionState(v7, a2);
  v20 = 3;
  ++*(_DWORD *)(v17 + 70600);
  if ( v5 )
  {
    if ( !v6 )
    {
LABEL_38:
      if ( !*(_DWORD *)(W32GetUserSessionState(v19, v18) + 70600) )
        v20 = 1;
      xxxWindowEvent(8u, v5, 0, 0, v20);
      goto LABEL_41;
    }
  }
  else
  {
    if ( !v6 )
    {
LABEL_49:
      zzzEndDeferWinEventNotify();
      return;
    }
    v21 = *((_QWORD *)v6 + 2);
    if ( _bittest64((const signed __int64 *)(v21 + 688), 0x3Cu) )
    {
      v22 = *(struct tagQ **)(v21 + 472);
      *((_DWORD *)v22 + 103) |= 0x20u;
      SetSystemInputSource((char *)v22 + 436);
      WakeSomeone(v22, (struct tagTHREADINFO *)v21, 0x200u, 0LL);
    }
    GenerateMouseMove(0LL);
  }
  v23 = W32GetUserSessionState(v19, v18);
  v24 = 3;
  if ( !*(_DWORD *)(v23 + 70600) )
    v24 = 1;
  xxxWindowEvent(9u, v6, 0, 0, v24);
  if ( v5 )
    goto LABEL_38;
LABEL_41:
  if ( !v6 || *(__int16 *)(*((_QWORD *)v6 + 5) + 42LL) < 0 )
    goto LABEL_49;
  if ( *((_QWORD *)a1 + 81) && v5 )
    *((_DWORD *)v12 + 103) |= 0x100000u;
  Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, (__int64)v6);
  zzzEndDeferWinEventNotify();
  xxxSendMessageCallback(v6, 0x215u, 0LL, 0LL, 0, 0, 1);
  Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>((ULONG_PTR)BugCheckParameter3, v25);
  v26 = *((_QWORD *)a1 + 59);
  if ( !v26 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 358LL);
  *(_DWORD *)(v26 + 412) &= ~0x100000u;
}
