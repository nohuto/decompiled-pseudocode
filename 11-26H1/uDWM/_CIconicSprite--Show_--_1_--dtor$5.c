/*
 * XREFs of _CIconicSprite::Show_::_1_::dtor$5 @ 0x1800E6DA2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CIconicSprite::Show_::_1_::dtor_5(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)(a2 + 64));
}
