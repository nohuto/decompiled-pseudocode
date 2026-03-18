/*
 * XREFs of ?SetRequestedBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M@Z @ 0x180135518
 * Callers:
 *     ?SetRequestedScale@CInteractionTracker@@AEAA_NM@Z @ 0x180135480 (-SetRequestedScale@CInteractionTracker@@AEAA_NM@Z.c)
 *     ?SetRequestedScaleInternal@CInteractionTracker2@@AEAA_NM@Z @ 0x180276D98 (-SetRequestedScaleInternal@CInteractionTracker2@@AEAA_NM@Z.c)
 * Callees:
 *     ?UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_N@Z @ 0x1801364DC (-UpdateBoundTrackerScale@CInteractionTrackerBindingManager@@QEAAXPEAVCInteractionTrackerBase@@M_.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CInteractionTrackerBindingManager::SetRequestedBoundTrackerScale(
        CInteractionTrackerBindingManager *this,
        struct CInteractionTrackerBase *a2,
        float a3)
{
  (*(void (__fastcall **)(struct CInteractionTrackerBase *))(*(_QWORD *)a2 + 416LL))(a2);
  CInteractionTrackerBindingManager::UpdateBoundTrackerScale(this, a2, a3, 1);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, _QWORD))(*(_QWORD *)a2 + 424LL))(a2, 0LL);
}
