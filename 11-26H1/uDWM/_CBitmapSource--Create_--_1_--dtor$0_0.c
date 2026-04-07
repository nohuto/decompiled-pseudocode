/*
 * XREFs of _CBitmapSource::Create_::_1_::dtor$0_0 @ 0x1800E7FD1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapSource::Create_::_1_::dtor_0_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)(a2 + 88));
}
