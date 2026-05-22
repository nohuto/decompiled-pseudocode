/*
 * XREFs of ??$_Uninitialized_move@PEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@0PEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18007DFDC
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x1801618A8 (--$_Emplace_reallocate@AEBV-$ComPtr@VBamoInputAttemptedDeliveryClientProxy@@@WRL@Microsoft@@@-$v.c)
 *     ??$_Emplace_reallocate@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV234@$$QEAV234@@Z @ 0x180178A9C (--$_Emplace_reallocate@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@-$vect.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@@@0@@Z @ 0x18009991C (--$_Destroy_range@V-$allocator@V-$ComPtr@VBamoControllerNavigationOverrideProxy@@@WRL@Microsoft@.c)
 */

_QWORD *__fastcall std::_Uninitialized_move<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy> *,std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(
        _QWORD *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *i; // rax

  for ( i = a1; i != a2; ++i )
  {
    *a3 = 0LL;
    if ( a3 != i )
    {
      *a3 = *i;
      *i = 0LL;
    }
    ++a3;
  }
  std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<BamoControllerNavigationOverrideProxy>>>(a3, a3);
  return a3;
}
