/*
 * XREFs of _CLivePreview::_FadeOutToGlass_::_1_::dtor$1 @ 0x1800EBC11
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CLivePreview::_FadeOutToGlass_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return wil::details::out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>::~out_param_t<Microsoft::WRL::ComPtr<CTopLevelWindow>>(a2 + 48);
}
