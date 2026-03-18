/*
 * XREFs of ?SetBindingManager@CInteractionTracker@@EEAAXPEAVCInteractionTrackerBindingManager@@@Z @ 0x18021FFE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionTracker::SetBindingManager(
        CInteractionTracker *this,
        struct CInteractionTrackerBindingManager *a2)
{
  Microsoft::WRL::ComPtr<CInteractionTrackerBindingManager>::operator=((__int64 *)this + 75, (__int64)a2);
}
