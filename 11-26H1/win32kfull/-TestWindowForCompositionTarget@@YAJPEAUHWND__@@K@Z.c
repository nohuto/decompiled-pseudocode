/*
 * XREFs of ?TestWindowForCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1402065E0
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1401F6750 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1402066D0 (-WindowHasCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall TestWindowForCompositionTarget(HWND a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  PETHREAD **v6; // rdi
  unsigned int v7; // ebx
  int v9; // r8d
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  EnterSharedCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = (PETHREAD **)v4;
  if ( !v4 || (v5 = *(_QWORD *)(v4 + 40), v9 = *(_WORD *)(v5 + 42) & 0x2FFF, v9 == 669) || v9 == 671 )
  {
    v7 = -1073741811;
  }
  else
  {
    v10 = PtiCurrent(v5);
    Win32HM_LockIntoThread<0>((__int64)v10, (__int64)v6, BugCheckParameter3);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v11);
    if ( CurrentProcess == PsGetThreadProcess(*v6[2]) )
      v7 = (unsigned int)WindowHasCompositionTarget((struct tagWND *)v6, a2) != 0 ? 0x803E0006 : 0;
    else
      v7 = -1073741790;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
