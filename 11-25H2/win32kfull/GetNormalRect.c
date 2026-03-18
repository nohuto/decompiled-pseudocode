/*
 * XREFs of GetNormalRect @ 0x1401A86B0
 * Callers:
 *     ?GetRestoreRect@CRecalcState@@SA?AUtagRECT@@PEBUtagWND@@@Z @ 0x140025FCC (-GetRestoreRect@CRecalcState@@SA-AUtagRECT@@PEBUtagWND@@@Z.c)
 *     CitGetWindowInfo @ 0x1401DEF10 (CitGetWindowInfo.c)
 *     ?xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOptions@1@K@Z @ 0x1402AB3F4 (-xxxSetSnapArrangementPos@WindowArrangement@@YA_NPEAUtagWND@@PEAUtagRECT@@W4ArrangementPosOption.c)
 *     ?xxxMigrateWindow@AdvancedWindowPos@@YA?AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBVCMonitorTopology@@PEBUtagRECT@@PEBV5@W4MigrateWindowOptions@@PEAKPEAU6@@Z @ 0x1402D884C (-xxxMigrateWindow@AdvancedWindowPos@@YA-AW4MigrateWindowResult@@PEAUtagWND@@PEAUtagMONITOR@@AEBV.c)
 * Callees:
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x1401A86E0 (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 */

__int64 __fastcall GetNormalRect(const struct tagWND *a1, _OWORD *a2)
{
  __int64 result; // rax
  __int128 v4; // xmm0

  result = (__int64)CHECKPOINT::Get(a1);
  if ( result )
  {
    v4 = *(_OWORD *)(result + 20);
    result = 1LL;
    *a2 = v4;
  }
  return result;
}
