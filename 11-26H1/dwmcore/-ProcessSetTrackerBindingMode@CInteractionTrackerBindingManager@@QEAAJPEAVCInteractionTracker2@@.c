/*
 * XREFs of ?ProcessSetTrackerBindingMode@CInteractionTrackerBindingManager@@QEAAJPEAVCInteractionTracker2@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802787D8
 * Callers:
 *     ?UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ @ 0x1802792AC (-UpdateBindings@CInteractionTrackerBindingManager@@AEAAXXZ.c)
 * Callees:
 *     ?BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteractionTrackerBase@@PEAV2@W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137108 (-BringBoundTrackersPositionAndScaleInSync@CInteractionTrackerBindingManager@@QEAAXPEBVCInteracti.c)
 *     ?AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x180137394 (-AddOrUpdateTrackerBindings@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBase@@0W4InteractionTrackerBindingModeFlags@@@Z @ 0x1802155F4 (-BringBoundTrackersStateInSync@CInteractionTrackerBindingManager@@AEAAXPEAVCInteractionTrackerBa.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CInteractionTrackerBindingManager::ProcessSetTrackerBindingMode(
        CInteractionTrackerBindingManager *a1,
        struct CInteractionTrackerBase *a2,
        struct CInteractionTrackerBase *a3,
        int a4)
{
  int v9; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a2 || !a3 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      (void *)0x7F,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontrackerbindingmanager.cpp",
      (const char *)0x88980403LL,
      v9);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, CInteractionTrackerBindingManager *))(*(_QWORD *)a2 + 320LL))(
    a2,
    a1);
  (*(void (__fastcall **)(struct CInteractionTrackerBase *, CInteractionTrackerBindingManager *))(*(_QWORD *)a3 + 320LL))(
    a3,
    a1);
  CInteractionTrackerBindingManager::BringBoundTrackersStateInSync((__int64)a1, a2, (__int64)a3, a4);
  CInteractionTrackerBindingManager::BringBoundTrackersPositionAndScaleInSync((__int64)a1, (__int64)a2, (__int64)a3, a4);
  CInteractionTrackerBindingManager::AddOrUpdateTrackerBindings(a1, a2, a3, a4);
  return 0LL;
}
