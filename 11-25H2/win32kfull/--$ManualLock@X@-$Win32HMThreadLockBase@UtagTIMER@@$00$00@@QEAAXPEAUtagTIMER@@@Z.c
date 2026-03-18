/*
 * XREFs of ??$ManualLock@X@?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAAXPEAUtagTIMER@@@Z @ 0x14028BB34
 * Callers:
 *     xxxTimersProc_Old @ 0x14028C0D0 (xxxTimersProc_Old.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z @ 0x14004B060 (--$Win32HM_LockIntoThread@$00@@YAXPEAUtagTHREADINFO@@PEAU_HEAD@@PEAU_Win32HMThreadLockItem@@@Z.c)
 */

__int64 __fastcall Win32HMThreadLockBase<tagTIMER,1,1>::ManualLock<void>(__int64 *a1, __int64 a2)
{
  struct tagTHREADINFO *v3; // rax

  v3 = PtiCurrent((__int64)a1, a2);
  return Win32HM_LockIntoThread<1>((__int64)v3, 0LL, a1);
}
