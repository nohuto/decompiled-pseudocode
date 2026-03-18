/*
 * XREFs of ?GetStateString@AdvancedWindowPos@@YAPEBDW4State@1@@Z @ 0x14015DA0C
 * Callers:
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x14005C548 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z @ 0x14005EF30 (-xxxInitializeMoveSizeData@@YAXPEAUtagWND@@PEAUMOVESIZEDATA@@IK@Z.c)
 *     ?ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z @ 0x14011D0A0 (-ShouldRestoreWindowToState@CRecalcState@@QEBA_NPEBUtagWND@@@Z.c)
 *     ??0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z @ 0x14015E4E4 (--0CRecalcState@@AEAA@PEBUtagWND@@PEAVCMonitorTopology@@W4StartRecalcReason@@@Z.c)
 *     _anonymous_namespace_::xxxMigrateWindowPosition @ 0x14016348C (_anonymous_namespace_--xxxMigrateWindowPosition.c)
 *     ?xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4State@1@UtagRECT@@3W4ApplyOption@1@PEAK@Z @ 0x140229DF0 (-xxxRestoreToPosAndState@AdvancedWindowPos@@YA_NPEAUtagWND@@AEBUMonitorData@CMonitorTopology@@W4.c)
 *     ?xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z @ 0x14022A8E4 (-xxxApplyWindowPos@AdvancedWindowPos@@YAXPEAUtagWND@@AEBUWINDOWPOSANDSTATE@1@@Z.c)
 *     ?xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z @ 0x1402E0514 (-xxxRestore@CRecalcState@@QEAAXPEAUtagWND@@PEAVCRecalcContext@@@Z.c)
 *     ?LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z @ 0x1402E7BA0 (-LogApplyWindowActionEnd@AdvancedWindowPos@@YAXPEAUtagWND@@W4ApplyWindowActionResult@1@@Z.c)
 *     ?LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402E7E40 (-LogApplyWindowActionStart@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@.c)
 *     ?UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402E96C8 (-UpdateActionForFullScreenWindow@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 *     ?xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z @ 0x1402EAA34 (-xxxApplyWindowAction@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@W4ApplyReason@1@@Z.c)
 *     ?xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z @ 0x1402EBB1C (-xxxModifyActionForArrangement@AdvancedWindowPos@@YAXPEAUtagWND@@PEAUWindowAction@1@@Z.c)
 * Callees:
 *     <none>
 */

const char *__fastcall AdvancedWindowPos::GetStateString(int a1)
{
  int v1; // ecx
  int v2; // ecx

  v1 = a1 - 1;
  if ( !v1 )
    return "Maximized";
  v2 = v1 - 1;
  if ( !v2 )
    return "Minimized";
  if ( v2 == 1 )
    return "Arranged";
  return "Restored";
}
