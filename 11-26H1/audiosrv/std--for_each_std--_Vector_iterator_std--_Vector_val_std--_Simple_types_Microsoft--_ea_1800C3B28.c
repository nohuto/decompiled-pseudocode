/*
 * XREFs of std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd9216ae8b29ebed6b86303d8e91f75e___ @ 0x1800C3B28
 * Callers:
 *     ?SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescriptor@@PEAUIDeviceGraphObjectsStore@@PEAUtWAVEFORMATEX@@2_JAEAV?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@@Z @ 0x1800CB974 (-SwitchStreamGroupsToNewSaDevice@CAudioResourceManager@@IEAAJPEAUEndpointCharacteristicsDescript.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ @ 0x1800397BC (-InternalRelease@-$ComPtr@UISpatialAudioPositionCalc@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800AB290 (--0-$ComPtr@UISaDeviceProxy@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 *     _lambda_cd9216ae8b29ebed6b86303d8e91f75e_::operator() @ 0x1800C518C (_lambda_cd9216ae8b29ebed6b86303d8e91f75e_--operator().c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_cd9216ae8b29ebed6b86303d8e91f75e___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 i; // rdi

  for ( i = a2; i != a3; i += 8LL )
    lambda_cd9216ae8b29ebed6b86303d8e91f75e_::operator()(a4, i);
  Microsoft::WRL::ComPtr<ISaDeviceProxy>::ComPtr<ISaDeviceProxy>(a1, a4);
  Microsoft::WRL::ComPtr<ISpatialAudioPositionCalc>::InternalRelease(a4);
  return a1;
}
