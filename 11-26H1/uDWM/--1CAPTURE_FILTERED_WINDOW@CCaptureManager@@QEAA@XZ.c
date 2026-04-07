/*
 * XREFs of ??1CAPTURE_FILTERED_WINDOW@CCaptureManager@@QEAA@XZ @ 0x18009E424
 * Callers:
 *     _CCaptureManager::_AddRemoveWindowToFilteredDisplayCapture_::_1_::dtor$1 @ 0x1800E7E39 (_CCaptureManager--_AddRemoveWindowToFilteredDisplayCapture_--_1_--dtor$1.c)
 *     _CCaptureManager::AddRemoveWindowToFilteredDisplayCapture_::_1_::dtor$2 @ 0x1800E8D9C (_CCaptureManager--AddRemoveWindowToFilteredDisplayCapture_--_1_--dtor$2.c)
 * Callees:
 *     <none>
 */

void __fastcall CCaptureManager::CAPTURE_FILTERED_WINDOW::~CAPTURE_FILTERED_WINDOW(CBaseObject **this)
{
  Microsoft::WRL::ComPtr<CSpriteVisual>::InternalRelease(this + 1);
}
