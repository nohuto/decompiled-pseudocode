/*
 * XREFs of ?GetResizeDCompositionSynchronizationObject@@YAHPEAUHWND__@@PEAPEAUCompositionObject@@@Z @ 0x1401C7FCC
 * Callers:
 *     NtUserGetResizeDCompositionSynchronizationObject @ 0x1401C7EB0 (NtUserGetResizeDCompositionSynchronizationObject.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14001BB04 (--$Win32HM_UnlockFromThread@$0A@@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     _GetTopLevelWindow @ 0x140038170 (_GetTopLevelWindow.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004CAC0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     GreGetWindowResizeDCompositionSynchronizationObject @ 0x1401C80D0 (GreGetWindowResizeDCompositionSynchronizationObject.c)
 */

__int64 __fastcall GetResizeDCompositionSynchronizationObject(HWND a1, struct CompositionObject **a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int WindowResizeDCompositionSynchronizationObject; // ebx
  __int64 TopLevelWindow; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  struct tagTHREADINFO *v12; // rax
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = v5;
  if ( v5 && (v6 = *(_QWORD *)(v5 + 40), (((*(_WORD *)(v6 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    WindowResizeDCompositionSynchronizationObject = 1;
    TopLevelWindow = GetTopLevelWindow(v7);
    if ( !TopLevelWindow
      || (v11 = *(_QWORD *)(TopLevelWindow + 40), v10 = *(_WORD *)(v11 + 42) & 0x2FFF, (_DWORD)v10 == 669)
      || (WindowResizeDCompositionSynchronizationObject = GreGetWindowResizeDCompositionSynchronizationObject(*(HWND *)TopLevelWindow)) != 0 )
    {
      *a2 = 0LL;
    }
    v12 = PtiCurrent(v11, v10);
    Win32HM_UnlockFromThread<0>((ULONG_PTR)v12, BugCheckParameter3);
  }
  else
  {
    WindowResizeDCompositionSynchronizationObject = 0;
  }
  UserSessionSwitchLeaveCrit(v6);
  return WindowResizeDCompositionSynchronizationObject;
}
