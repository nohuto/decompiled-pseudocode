/*
 * XREFs of ?RemoveResourceNotifier@?$CDeviceResourceT@V?$CMILCOMBaseT@VISwapChainRealization@@VIDeviceResource@@VCMilObjectDeleter@@@@@@UEAAXPEBVIDeviceResourceNotify@@@Z @ 0x1802AE2D0
 * Callers:
 *     <none>
 * Callees:
 *     ?erase@?$vector@PEAVCLight@@V?$allocator@PEAVCLight@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@PEAVCLight@@@std@@@std@@@2@@Z @ 0x1800FC340 (-erase@-$vector@PEAVCLight@@V-$allocator@PEAVCLight@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_V.c)
 *     ??$find@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@std@@@std@@PEBVIDeviceResourceNotify@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@std@@@0@V10@V10@AEBQEBVIDeviceResourceNotify@@@Z @ 0x1801B16A0 (--$find@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@PEAVIDeviceResourceNotify@@@std@@@st.c)
 */

_QWORD *__fastcall CDeviceResourceT<CMILCOMBaseT<ISwapChainRealization,IDeviceResource,CMilObjectDeleter>>::RemoveResourceNotifier(
        __int64 a1,
        __int64 a2)
{
  _QWORD *result; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  __int64 v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = a2;
  result = std::find<std::_Vector_iterator<std::_Vector_val<std::_Simple_types<IDeviceResourceNotify *>>>,IDeviceResourceNotify const *>(
             &v4,
             *(_QWORD *)(a1 + 32),
             *(_QWORD *)(a1 + 40),
             &v5);
  if ( v4 != *(_QWORD *)(a1 + 40) )
    return std::vector<CLight *>::erase(a1 + 32, &v4, v4);
  return result;
}
