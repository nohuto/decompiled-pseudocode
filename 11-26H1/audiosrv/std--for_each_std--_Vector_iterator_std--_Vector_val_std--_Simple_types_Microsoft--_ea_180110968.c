/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_cfabe4c61bc15f8a85c19fe8f19b6830___ @ 0x180110968
 * Callers:
 *     ?UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@HAEA_N@Z @ 0x18007BF48 (-UseSupportedConnectorMode@@YAJPEAUEndpointCharacteristicsDescriptor@@KW4__MIDL___MIDL_itf_audio.c)
 * Callees:
 *     _lambda_cfabe4c61bc15f8a85c19fe8f19b6830_::operator() @ 0x1801111E8 (_lambda_cfabe4c61bc15f8a85c19fe8f19b6830_--operator().c)
 */

__int64 __fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_ISaDeviceProxy_________lambda_cfabe4c61bc15f8a85c19fe8f19b6830___(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 i; // rdi
  __int64 result; // rax
  __int64 v9; // xmm1_8

  for ( i = a2; i != a3; i += 8LL )
    lambda_cfabe4c61bc15f8a85c19fe8f19b6830_::operator()(a4, i);
  result = a1;
  v9 = *(_QWORD *)(a4 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v9;
  return result;
}
