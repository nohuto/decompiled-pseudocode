/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@K@Z @ 0x1401D206C
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1401D2000 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z @ 0x1401D215C (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@K@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, unsigned int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rcx
  PETHREAD **v7; // rdi
  unsigned int v8; // ebx
  int v10; // r8d
  __int64 v11; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v4 = EnterCrit(0LL, 0LL);
  v5 = ValidateHwnd(a1);
  v7 = (PETHREAD **)v5;
  if ( !v5 || (v6 = *(_QWORD *)(v5 + 40), v10 = *(_WORD *)(v6 + 42) & 0x2FFF, v10 == 669) || v10 == 671 )
  {
    v8 = -1073741823;
  }
  else
  {
    Win32HM_LockIntoThread<0>(v4, v5, BugCheckParameter3);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v11);
    if ( CurrentProcess == PsGetThreadProcess(*v7[2]) )
      v8 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v7, a2) == 0 ? 0xC0000225 : 0;
    else
      v8 = -1073741790;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v6);
  return v8;
}
