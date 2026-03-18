/*
 * XREFs of ?SetBindingManager@CInteractionTracker2@@EEAAXPEAVCInteractionTrackerBindingManager@@@Z @ 0x180276210
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker2::SetBindingManager(
        CInteractionTracker2 *this,
        struct CInteractionTrackerBindingManager *a2)
{
  Microsoft::WRL::ComPtr<CInteractionTrackerBindingManager>::operator=((__int64 *)this + 131, (__int64)a2);
}
