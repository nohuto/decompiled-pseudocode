/*
 * XREFs of _CSurfaceBrush::GetRealizationSize_::_1_::dtor$2 @ 0x1800E7D23
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CSurfaceBrush::GetRealizationSize_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)(a2 + 80));
}
