/*
 * XREFs of _CreateFormatConverterToPBGRA_::_1_::dtor$0 @ 0x1800E8C68
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CreateFormatConverterToPBGRA_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>::~com_ptr_t<Windows::UI::Composition::ICompositionVisualSurface,wil::err_returncode_policy>((__int64 *)(a2 + 96));
}
