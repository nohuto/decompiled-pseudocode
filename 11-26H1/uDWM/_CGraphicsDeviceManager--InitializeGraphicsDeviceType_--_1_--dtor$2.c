/*
 * XREFs of _CGraphicsDeviceManager::InitializeGraphicsDeviceType_::_1_::dtor$2 @ 0x1800E7BC2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CGraphicsDeviceManager::InitializeGraphicsDeviceType_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return wil::com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>::~com_ptr_t<ID3D10Multithread,wil::err_returncode_policy>((__int64 *)(a2 + 200));
}
