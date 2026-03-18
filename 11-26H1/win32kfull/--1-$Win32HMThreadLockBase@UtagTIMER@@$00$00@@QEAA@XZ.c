/*
 * XREFs of ??1?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ @ 0x1401BFDE8
 * Callers:
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 * Callees:
 *     ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910 (--$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

void __fastcall Win32HMThreadLockBase<tagTIMER,1,1>::~Win32HMThreadLockBase<tagTIMER,1,1>(_QWORD *BugCheckParameter3)
{
  struct tagTHREADINFO *v2; // rax

  if ( *BugCheckParameter3 != -1LL )
  {
    v2 = PtiCurrent((__int64)BugCheckParameter3);
    Win32HM_UnlockFromThread<1>((ULONG_PTR)v2, BugCheckParameter3);
  }
}
