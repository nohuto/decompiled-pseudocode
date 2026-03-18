/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1401F5B28
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1402B4750 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401F5C28 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  int v8; // edx
  unsigned int WindowResizeDCompositionSynchronizationObject; // ebx
  __int64 TopLevelWindow; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 40), v8 = *(_WORD *)(v6 + 42) & 0x2FFF, v8 == 669) || v8 == 671 )
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  else
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    WindowResizeDCompositionSynchronizationObject = 1;
    TopLevelWindow = GetTopLevelWindow(v7);
    if ( !TopLevelWindow
      || (*(_WORD *)(*(_QWORD *)(TopLevelWindow + 40) + 42LL) & 0x2FFF) == 0x29D
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v6);
  return WindowResizeDCompositionSynchronizationObject;
}
