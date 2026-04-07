/*
 * XREFs of _CBitmapSource::CBitmapSource_::_1_::dtor$3 @ 0x1800E8C10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CBitmapSource::CBitmapSource_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)(*(_QWORD *)(a2 + 64) + 48LL));
}
