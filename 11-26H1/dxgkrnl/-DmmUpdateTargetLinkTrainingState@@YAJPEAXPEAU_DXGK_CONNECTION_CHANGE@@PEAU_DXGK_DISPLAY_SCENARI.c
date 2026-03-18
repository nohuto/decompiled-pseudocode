/*
 * XREFs of ?DmmUpdateTargetLinkTrainingState@@YAJPEAXPEAU_DXGK_CONNECTION_CHANGE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025ED60
 * Callers:
 *     DxgkQueryConnectionChanges @ 0x140015450 (DxgkQueryConnectionChanges.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x14000CEB0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1400319C0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??0?$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1400381A8 (--0-$EXCLUSIVEACCESS@VVIDPN_MGR@@@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ?UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x14025F128 (-UpdateTargetLinkTrainingStatus@VIDPN_MGR@@QEAAJPEAU_DXGK_CONNECTION_CHANGE@@EPEAU_DXGK_DISPLAY_.c)
 */

__int64 __fastcall DmmUpdateTargetLinkTrainingState(
        PERESOURCE *a1,
        struct _DXGK_CONNECTION_CHANGE *a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        unsigned __int8 a4)
{
  VIDPN_MGR *Flink; // rbx
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(a1) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 4656;
  }
  Flink = (VIDPN_MGR *)a1[395][1].SystemResourcesList.Flink;
  EXCLUSIVEACCESS<VIDPN_MGR>::EXCLUSIVEACCESS<VIDPN_MGR>(&v10, (__int64)Flink);
  LODWORD(Flink) = VIDPN_MGR::UpdateTargetLinkTrainingStatus(Flink, a2, 1u, a3, a4);
  DXGFASTMUTEX::Release((struct _KTHREAD **)(v10 + 40));
  return (unsigned int)Flink;
}
