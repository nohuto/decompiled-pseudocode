/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@KPEAUCompositionObject@@@Z @ 0x1401F68DC
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1401F6750 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     ??$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14002AEA0 (--$Win32HM_LockIntoThread@$0A@@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z @ 0x1401F69D0 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@KPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, unsigned int a2, struct CompositionObject *a3)
{
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rcx
  PETHREAD **v9; // rdi
  int v10; // r8d
  __int64 v11; // rcx
  struct _KPROCESS *CurrentProcess; // rbx
  unsigned int v13; // ebx
  ULONG_PTR BugCheckParameter3[3]; // [rsp+20h] [rbp-18h] BYREF

  v6 = EnterCrit(0LL, 0LL);
  v7 = ValidateHwnd(a1);
  v9 = (PETHREAD **)v7;
  if ( !v7 || (v8 = *(_QWORD *)(v7 + 40), v10 = *(_WORD *)(v8 + 42) & 0x2FFF, v10 == 669) || v10 == 671 )
  {
    v13 = -1073741811;
  }
  else
  {
    Win32HM_LockIntoThread<0>(v6, v7, BugCheckParameter3);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v11);
    if ( CurrentProcess == PsGetThreadProcess(*v9[2]) )
      v13 = _AttachWindowCompositionTarget((struct tagWND *)v9, a2, a3);
    else
      v13 = -1073741790;
    Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v13;
}
