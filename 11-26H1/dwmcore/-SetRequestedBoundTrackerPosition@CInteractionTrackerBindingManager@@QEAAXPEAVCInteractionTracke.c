/*
 * XREFs of ?SetRequestedBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@@Z @ 0x180136094
 * Callers:
 *     ?SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180139380 (-SetRequestedPosition@CInteractionTracker@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampi.c)
 *     ?SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrackerClampingOption@@W43InteractionTrackerPositionUpdateOption@@@Z @ 0x180276C14 (-SetRequestedPositionInternal@CInteractionTracker2@@AEAA_NAEBUD2DVector3@@W4Enum@InteractionTrac.c)
 * Callees:
 *     ?UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@AEBUD2DVector3@@_N@Z @ 0x180137C78 (-UpdateBoundTrackerPosition@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::SetRequestedBoundTrackerPosition(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTrackerBase *a2,
        const struct D2DVector3 *a3)
{
  (*(void (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)a2 + 416LL))(a2);
  CInteractionTrackerBindingManager::UpdateBoundTrackerPosition(this, a2, a3, 1);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)a2 + 424LL))(a2, 0LL);
}
