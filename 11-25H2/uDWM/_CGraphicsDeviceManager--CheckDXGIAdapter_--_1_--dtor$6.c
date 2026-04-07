/*
 * XREFs of _CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor$6 @ 0x1800EBD80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphicsDeviceManager::CheckDXGIAdapter_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)(a2 + 56));
}
