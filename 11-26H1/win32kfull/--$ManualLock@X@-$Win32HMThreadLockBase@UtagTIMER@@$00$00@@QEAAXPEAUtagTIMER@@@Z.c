/*
 * XREFs of ??$ManualLock@X@?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z @ 0x1402A7E4C
 * Callers:
 *     xxxTimersProc @ 0x140098800 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 * Callees:
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032860 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagTIMER,1,1>::ManualLock<void>(__int64 *a1)
{
  struct tagTHREADINFO *v2; // rax

  v2 = PtiCurrent((__int64)a1);
  return Win32HM_LockIntoThread<1>((__int64)v2, 0LL, a1);
}
