/*
 * XREFs of _CVisualBrush::Reset_::_1_::dtor$2 @ 0x1800E8CD6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CVisualBrush::Reset_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
