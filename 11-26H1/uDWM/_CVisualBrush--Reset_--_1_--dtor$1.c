/*
 * XREFs of _CVisualBrush::Reset_::_1_::dtor$1 @ 0x1800E8CC4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualBrush::Reset_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)(a2 + 32));
}
