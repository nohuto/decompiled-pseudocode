/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x1401904BC
 * Callers:
 *     ??1?$Win32HMThreadLock@UtagKL@@@@QEAA@XZ @ 0x1401904A4 (--1-$Win32HMThreadLock@UtagKL@@@@QEAA@XZ.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140048E80 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x1401BF728 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagKL,1,0>::~Win32HMThreadLockBase<tagKL,1,0>(
        ULONG_PTR BugCheckParameter3,
        __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  v3 = PtiCurrent(BugCheckParameter3, a2);
  return Win32HM_UnlockFromThread<1>((ULONG_PTR)v3, BugCheckParameter3);
}
