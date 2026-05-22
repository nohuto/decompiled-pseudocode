/*
 * XREFs of ?_Destroy@?$_Ref_count_obj2@VEdgeGestureMetrics@@@std@@EEAAXXZ @ 0x180099AC0
 * Callers:
 *     _InputProviderManager::InitializeHelper_::_1_::dtor$1 @ 0x1801D52BF (_InputProviderManager--InitializeHelper_--_1_--dtor$1.c)
 *     _MPCConstantManagerClient::CreatePVPrincipal_::_1_::dtor$4 @ 0x1801DBEFD (_MPCConstantManagerClient--CreatePVPrincipal_--_1_--dtor$4.c)
 *     _MPCConstantManagerClient::CreateStringVectorPrincipal_::_1_::dtor$4 @ 0x1801DBF63 (_MPCConstantManagerClient--CreateStringVectorPrincipal_--_1_--dtor$4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj2<EdgeGestureMetrics>::_Destroy(__int64 a1)
{
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)(a1 + 16));
}
