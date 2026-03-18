/*
 * XREFs of ??1?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@QEAA@XZ @ 0x180138728
 * Callers:
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_N@Z @ 0x1801364DC (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_.c)
 *     ?GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$unordered_map@PEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@U?$hash@PEAVCInteractionTrackerBase@@@std@@U?$equal_to@PEAVCInteractionTrackerBase@@@4@V?$allocator@U?$pair@QEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@@std@@@4@@std@@@Z @ 0x180136A28 (-GetConnectedTrackersAndUpdatedAxes@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrac.c)
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ?UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollState@@@Z @ 0x180137A00 (-UpdateBoundTrackerState@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4.c)
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@_N@Z @ 0x180137C78 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@.c)
 *     ?GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@W4InteractionTrackerBindingModeFlags@@PEAV?$set@PEAVCInteractionTrackerBase@@U?$less@PEAVCInteractionTrackerBase@@@std@@V?$allocator@PEAVCInteractionTrackerBase@@@3@@std@@PEAPEAV2@@Z @ 0x180138160 (-GetConnectedTrackersForAxis@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase.c)
 *     ?RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@PEAVCBaseExpression@@@Z @ 0x1801D99BC (-RegisterIndirectTargetsForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractio.c)
 *     ?AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@W4ScrollAxis@@@Z @ 0x1801D9BC0 (-AddOrUpdatePendingInertiaStateChangeForBoundTrackers@CInteractionTrackerBindingManager@@QEAAXPE.c)
 * Callees:
 *     ?_Reset_map@?$deque@PEAVCInteractionTrackerBase@@V?$allocator@PEAVCInteractionTrackerBase@@@std@@@std@@AEAAXXZ @ 0x180138CF8 (-_Reset_map@-$deque@PEAVCInteractionTrackerBase@@V-$allocator@PEAVCInteractionTrackerBase@@@std@.c)
 */

void __fastcall std::deque<CInteractionTrackerBase *>::~deque<CInteractionTrackerBase *>(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  __int64 v4; // rax

  while ( 1 )
  {
    v2 = *(_QWORD *)(a1 + 32);
    if ( !v2 )
      break;
    v4 = v2 - 1;
    *(_QWORD *)(a1 + 32) = v4;
    if ( !v4 )
      *(_QWORD *)(a1 + 24) = 0LL;
  }
  if ( *(_QWORD *)(a1 + 8) )
    std::deque<CInteractionTrackerBase *>::_Reset_map();
  v3 = *(void **)a1;
  *(_QWORD *)a1 = 0LL;
  std::_Deallocate<16>(v3, 0x10uLL);
}
