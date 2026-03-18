/*
 * XREFs of ?GetIfValid@CHECKPOINT@@SAPEAU1@PEAUtagWND@@@Z @ 0x1402EF3D0
 * Callers:
 *     ?xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z @ 0x1402DFB54 (-xxxProcessPendingRecalcState@CRecalcProp@@AEAAXPEAVCRecalcState@@_NPEAVCRecalcContext@@@Z.c)
 *     ?ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z @ 0x1402E8B54 (-ShouldCallShellForAction@AdvancedWindowPos@@YA_NPEAUtagWND@@PEBUWindowAction@1@@Z.c)
 *     ?TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E9174 (-TransformWindowActionToPhysical@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E96C8 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxTransformRectToMonitor@AdvancedWindowPos@@YA?AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CMonitorTopology@@2_N@Z @ 0x1402EC9BC (-xxxTransformRectToMonitor@AdvancedWindowPos@@YA-AUtagRECT@@PEAUtagWND@@AEBU2@PEBUMonitorData@CM.c)
 * Callees:
 *     ?Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z @ 0x14003139C (-Get@CHECKPOINT@@SAPEAU1@PEBUtagWND@@@Z.c)
 *     ?HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z @ 0x1401631E0 (-HasValidCheckpointPosition@@YA_NPEAUtagWND@@@Z.c)
 */

struct CHECKPOINT *__fastcall CHECKPOINT::GetIfValid(struct tagWND *a1)
{
  char valid; // al
  __int64 v3; // rdx

  valid = HasValidCheckpointPosition(a1);
  v3 = 0LL;
  if ( valid )
    return CHECKPOINT::Get(a1, 0LL);
  return (struct CHECKPOINT *)v3;
}
