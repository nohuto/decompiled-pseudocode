/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x140157848
 * Callers:
 *     ??1?$Win32HMThreadLock@UtagKL@@@@QEAA@XZ @ 0x140157830 (--1-$Win32HMThreadLock@UtagKL@@@@QEAA@XZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x1400A2310 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140157870 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(ULONG_PTR BugCheckParameter3)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrent();
  return Win32HM_UnlockFromThread<1>((ULONG_PTR)v2, BugCheckParameter3);
}
