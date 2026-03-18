/*
 * XREFs of NtUserLayoutCompleted @ 0x140023670
 * Callers:
 *     <none>
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PostIAMShellHookMessage@@YAXI_J@Z @ 0x140023794 (-PostIAMShellHookMessage@@YAXI_J@Z.c)
 *     EtwTraceLayoutChangeStop @ 0x1400239A8 (EtwTraceLayoutChangeStop.c)
 *     GreWindowLayoutComplete @ 0x140023DA8 (GreWindowLayoutComplete.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HandleAsyncResizeComplete @ 0x14022CBAC (HandleAsyncResizeComplete.c)
 *     ?ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z @ 0x1402939A0 (-ValidateReceivingHwnd@@YAPEAUtagWND@@PEAUHWND__@@W4ValidateHwndCheck@@@Z.c)
 *     DwmAsyncCancelRotationDelay @ 0x140324464 (DwmAsyncCancelRotationDelay.c)
 */

__int64 __fastcall NtUserLayoutCompleted(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 v5; // rsi
  void *v6; // rax
  __int64 TopLevelWindow; // rax
  struct tagTHREADINFO *v8; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = EnterCrit(0LL, 0LL);
  v3 = ValidateReceivingHwnd(a1, 0LL);
  v4 = 0LL;
  v5 = v3;
  if ( v3 )
  {
    Win32HM_LockIntoThread<0>(v2, v3, BugCheckParameter3);
    EtwTraceLayoutChangeStop(v2, a1, v5);
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 24) + 304LL) == v5 )
    {
      v6 = (void *)ReferenceDwmApiPort();
      DwmAsyncCancelRotationDelay(v6);
    }
    PostIAMShellHookMessage(0x26u, a1);
    if ( *(char *)(*(_QWORD *)(v5 + 40) + 25LL) < 0 )
    {
      TopLevelWindow = GetTopLevelWindow(v5);
      if ( TopLevelWindow )
      {
        if ( (*(_WORD *)(*(_QWORD *)(TopLevelWindow + 40) + 42LL) & 0x2FFF) != 0x29D )
          GreWindowLayoutComplete(*(HWND *)TopLevelWindow);
      }
    }
    v8 = PtiCurrent();
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v8, BugCheckParameter3);
    v4 = 1LL;
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
