/*
 * XREFs of _lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_ @ 0x1800C4208
 * Callers:
 *     ?QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z @ 0x180156D60 (-QueueCompleteInitialization@AtmosCheck@@AEAAJW4AtmosRegistration@@@Z.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_9e2ce3052ce45d0e74912c1d92e98248____::_1_::dtor$0 @ 0x180167AC5 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_180167AC5.c)
 *     _std::for_each_std::_Vector_iterator_std::_Vector_val_std::_Simple_types_Microsoft::WRL::ComPtr_IStreamGroupProxy_________lambda_d278b6c584f564709031339ffbc379ca____::_1_::dtor$0 @ 0x180167AD7 (_std--for_each_std--_Vector_iterator_std--_Vector_val_std--_Simple_types_Microsoft-_ea_180167AD7.c)
 *     _EffectPackConfigurationManager::ScanForInstalledEffectPacks_::_1_::dtor$3 @ 0x18016A40B (_EffectPackConfigurationManager--ScanForInstalledEffectPacks_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall lambda_f5f4f75dc837a2f22584ae1b4b94d09e_::__lambda_f5f4f75dc837a2f22584ae1b4b94d09e_(__int64 *a1)
{
  return wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(a1);
}
