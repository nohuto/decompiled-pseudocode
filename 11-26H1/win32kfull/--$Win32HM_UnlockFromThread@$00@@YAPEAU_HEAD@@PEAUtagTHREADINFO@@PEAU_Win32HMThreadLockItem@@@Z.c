/*
 * XREFs of ??$Win32HM_UnlockFromThread@$00@@YAPEAU_HEAD@@PEAUtagTHREADINFO@@PEAU_Win32HMThreadLockItem@@@Z @ 0x140032910
 * Callers:
 *     xxxInitSendValidateMinMaxInfoEx @ 0x14003144C (xxxInitSendValidateMinMaxInfoEx.c)
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     xxxTimersProc @ 0x140098800 (xxxTimersProc.c)
 *     xxxTimersProc_Old @ 0x14009A98C (xxxTimersProc_Old.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x14016294C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 *     ??1?$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ @ 0x14019CCC8 (--1-$Win32HMThreadLockBase@UtagKL@@$00$0A@@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ @ 0x1401BFDE8 (--1-$Win32HMThreadLockBase@UtagTIMER@@$00$00@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ @ 0x1401EE9DC (--1-$Win32HMThreadLockBase@UtagMONITOR@@$00$00@@QEAA@XZ.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Win32HM_UnlockFromThread<1>(ULONG_PTR BugCheckParameter2, _QWORD *BugCheckParameter3)
{
  _QWORD *v2; // r8
  __int64 result; // rax

  v2 = *(_QWORD **)(BugCheckParameter2 + 448);
  if ( v2 != BugCheckParameter3 )
    KeBugCheckEx(0x164u, 0x3BuLL, BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, 0LL);
  *(_QWORD *)(BugCheckParameter2 + 448) = *v2;
  result = v2[1];
  if ( result )
    return HMUnlockObject(v2[1]);
  return result;
}
