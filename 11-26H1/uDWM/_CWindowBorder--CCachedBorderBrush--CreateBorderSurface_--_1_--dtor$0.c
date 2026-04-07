/*
 * XREFs of _CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor$0 @ 0x1800E6F9A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowBorder::CCachedBorderBrush::CreateBorderSurface_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)(a2 + 112));
}
