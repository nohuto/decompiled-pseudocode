/*
 * XREFs of ??0?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@AEBV01@@Z @ 0x18005A368
 * Callers:
 *     ??1CPowerReference@@QEAA@XZ @ 0x180011640 (--1CPowerReference@@QEAA@XZ.c)
 *     ?AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA?AV?$shared_ptr@VCPowerReference@@@std@@PEAVCVADServer@@@Z @ 0x180011774 (-AcquirePowerReferenceForStream@CPowerReferenceManager@@QEAA-AV-$shared_ptr@VCPowerReference@@@s.c)
 *     ??0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@Z @ 0x180058540 (--0EffectPack@@QEAA@PEBU_tlgProvider_t@@PEAVCEndpointCharacteristics@@AEAV-$shared_ptr@$$CBUEffe.c)
 *     ??1CSaDeviceProxy@@MEAA@XZ @ 0x1800628AC (--1CSaDeviceProxy@@MEAA@XZ.c)
 *     ?GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z @ 0x18006EBFC (-GetCurrentEffectPackDescriptorForEndpoint@CPolicyConfig@@QEAAJPEBGPEAUEffectPackDescriptor@@@Z.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800873F4 (-OnStreamStateChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothContr.c)
 *     ?OnStreamStateChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAX_N@Z @ 0x1800874A4 (-OnStreamStateChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VEffectPack@@@1@QEAV21@AEBV21@@Z @ 0x18008FF88 (--$_Emplace_reallocate@AEBV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@.c)
 *     _lambda_4f80d4139340e453ac453678c26755ce_::_lambda_4f80d4139340e453ac453678c26755ce_ @ 0x1800C3E54 (_lambda_4f80d4139340e453ac453678c26755ce_--_lambda_4f80d4139340e453ac453678c26755ce_.c)
 *     std::_Func_impl_no_alloc__lambda_4f80d4139340e453ac453678c26755ce__void_::_Copy @ 0x1800CC170 (std--_Func_impl_no_alloc__lambda_4f80d4139340e453ac453678c26755ce__void_--_Copy.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800DD3B8 (-OnBidirectionalModeChanged@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothCon.c)
 *     ?OnBidirectionalModeChanged@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@AEAAXXZ @ 0x1800DD45C (-OnBidirectionalModeChanged@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@Bluetoot.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDA0C (-RuntimeClassInitialize@-$BluetoothControl@VIMuteControlHandler@@VBluetoothMute@BluetoothControl.c)
 *     ?RuntimeClassInitialize@?$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothControls@@@BluetoothControls@@QEAAJPEAUIMMDevice@@PEAUIControlChangeNotify@@@Z @ 0x1800DDE30 (-RuntimeClassInitialize@-$BluetoothControl@VIVolumeControlHandler@@VBluetoothVolume@BluetoothCon.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_0e0ad7cefe12d27d8cbf1129b6f60fff_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DE910 (-_Copy@-$_Func_impl_no_alloc@V_lambda_0e0ad7cefe12d27d8cbf1129b6f60fff_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_1719b5b32f4d1ceaf884a29376dba650_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DE950 (-_Copy@-$_Func_impl_no_alloc@V_lambda_1719b5b32f4d1ceaf884a29376dba650_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_200caaf72e590f0a6902e90b77a591f6_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DE990 (-_Copy@-$_Func_impl_no_alloc@V_lambda_200caaf72e590f0a6902e90b77a591f6_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_69d42108dd5c64e5ae696b969e6cde78_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DE9D0 (-_Copy@-$_Func_impl_no_alloc@V_lambda_69d42108dd5c64e5ae696b969e6cde78_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_a5707e8136b0bf7dfeec04d35a40fcb5_@@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800DEA10 (-_Copy@-$_Func_impl_no_alloc@V_lambda_a5707e8136b0bf7dfeec04d35a40fcb5_@@X_N@std@@EEBAPEAV-$_Fun.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DEA50 (-_Copy@-$_Func_impl_no_alloc@V_lambda_aa1b3fa86fd9c3b2e39deb1768528b72_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_b461a9ffe5f5cec38e175d7dd8469474_@@X$$V@std@@EEBAPEAV?$_Func_base@X$$V@2@PEAX@Z @ 0x1800DEA90 (-_Copy@-$_Func_impl_no_alloc@V_lambda_b461a9ffe5f5cec38e175d7dd8469474_@@X$$V@std@@EEBAPEAV-$_Fu.c)
 *     ?_Copy@?$_Func_impl_no_alloc@V_lambda_c14496d348cd0a3ba83c159c343acbdd_@@X_N@std@@EEBAPEAV?$_Func_base@X_N@2@PEAX@Z @ 0x1800DEAD0 (-_Copy@-$_Func_impl_no_alloc@V_lambda_c14496d348cd0a3ba83c159c343acbdd_@@X_N@std@@EEBAPEAV-$_Fun.c)
 *     ?OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z @ 0x1800EC560 (-OnEndpointPropertyChanged@BluetoothBroadcastProvider@@UEAAXPEBGAEBU_tagpropertykey@@@Z.c)
 *     ?OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z @ 0x1800EC690 (-OnEndpointStateChanged@BluetoothBroadcastProvider@@UEAAXPEBG_N@Z.c)
 *     std::_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_::_Copy @ 0x1800ED950 (std--_Func_impl_no_alloc__lambda_2123d8e56b275a4b963be45688bccc2c__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_::_Copy @ 0x1800ED9C0 (std--_Func_impl_no_alloc__lambda_891b0775d4eadc0ca5c992c8f07cc507__void_--_Copy.c)
 *     ?DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z @ 0x1800FCA94 (-DeleteAuxiliaryInputForStreamGroupInternal@CSharedStreamGroupProxy@@IEAAXPEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_::_Copy @ 0x1801004B0 (std--_Func_impl_no_alloc__lambda_0a934de8e0ca018258fd518f6b914e8b__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_::_Copy @ 0x180100570 (std--_Func_impl_no_alloc__lambda_cbfc2ac73cdc91d5edb18bccca546a72__void_--_Copy.c)
 *     ??$_Emplace_reallocate@AEBV?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@?$vector@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@V?$allocator@V?$shared_ptr@VCXvmPowerReferenceManager@@@std@@@2@@std@@AEAAPEAV?$shared_ptr@VCXvmPowerReferenceManager@@@1@QEAV21@AEBV21@@Z @ 0x180103018 (--$_Emplace_reallocate@AEBV-$shared_ptr@VCXvmPowerReferenceManager@@@std@@@-$vector@V-$shared_pt.c)
 *     ??$emplace_back@AEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@?$vector@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@V?$allocator@V?$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@$$CBUEffectPackConfiguration@@@1@AEAV21@@Z @ 0x180103148 (--$emplace_back@AEAV-$shared_ptr@$$CBUEffectPackConfiguration@@@std@@@-$vector@V-$shared_ptr@$$C.c)
 *     ?AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z @ 0x1801032FC (-AddEffectPackConfigurationToEndpoints@EffectPackConfigurationManager@@AEAAJU_GUID@@@Z.c)
 *     _lambda_c90e8a76b02d1fc01a85dd002f968322_::_lambda_c90e8a76b02d1fc01a85dd002f968322_ @ 0x18010EBD8 (_lambda_c90e8a76b02d1fc01a85dd002f968322_--_lambda_c90e8a76b02d1fc01a85dd002f968322_.c)
 *     std::_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_::_Copy @ 0x18010F740 (std--_Func_impl_no_alloc__lambda_a94dfcfc08a8b17bb98eae0a275e2f1b__void_--_Copy.c)
 *     std::_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_::_Copy @ 0x18010F770 (std--_Func_impl_no_alloc__lambda_c90e8a76b02d1fc01a85dd002f968322__void_--_Copy.c)
 *     ??$copy@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@std@@V?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@2@@std@@YA?AV?$back_insert_iterator@V?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@@0@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@V?$shared_ptr@VEffectPack@@@std@@@std@@@std@@@0@0V10@@Z @ 0x180134468 (--$copy@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@V-$shared_ptr@VEffectPack@@@std@@@st.c)
 *     ??$emplace_back@AEAV?$shared_ptr@VEffectPack@@@std@@@?$vector@V?$shared_ptr@VEffectPack@@@std@@V?$allocator@V?$shared_ptr@VEffectPack@@@std@@@2@@std@@QEAAAEAV?$shared_ptr@VEffectPack@@@1@AEAV21@@Z @ 0x1801346F8 (--$emplace_back@AEAV-$shared_ptr@VEffectPack@@@std@@@-$vector@V-$shared_ptr@VEffectPack@@@std@@V.c)
 *     ?RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013BAF0 (-RemoveEffectPack@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 *     ?SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z @ 0x18013CD84 (-SetCurrentEffectPackInternal@CEndpointCharacteristics@@QEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::shared_ptr<std::wstring>::shared_ptr<std::wstring>(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rax

  *a1 = 0LL;
  a1[1] = 0LL;
  v2 = a2[1];
  if ( v2 )
    _InterlockedIncrement((volatile signed __int32 *)(v2 + 8));
  *a1 = *a2;
  a1[1] = a2[1];
  return a1;
}
