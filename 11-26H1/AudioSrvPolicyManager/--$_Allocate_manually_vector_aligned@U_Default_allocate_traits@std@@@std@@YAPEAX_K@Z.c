/*
 * XREFs of ??$_Allocate_manually_vector_aligned@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E70C
 * Callers:
 *     ?GetApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@PEAPEAUIApplicationSpecificEndpointInfo@@@Z @ 0x18000D790 (-GetApplicationSpecificEndpointInfo@CApplication@@QEAAJPEAVCProcess@@PEAPEAUIApplicationSpecific.c)
 *     ?GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamClassPolicyGains@@@Z @ 0x18000DE30 (-GetStreamClassPolicyGainsForEndpoint@CStreamClassPolicyGainsWrapper@@AEAAXPEBGPEAPEAVCStreamCla.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000E540 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x18000E6B0 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 *     ?GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z @ 0x18000E770 (-GetEndpointVolumeOverridePolicyVolume@CEndpointVolumeStateManager@@UEAAMPEBG@Z.c)
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180014080 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180015160 (--2@YAPEAX_K@Z.c)
 *     ?_Throw_bad_array_new_length@std@@YAXXZ @ 0x18002EC28 (-_Throw_bad_array_new_length@std@@YAXXZ.c)
 */

unsigned __int64 __fastcall std::_Allocate_manually_vector_aligned<std::_Default_allocate_traits>(unsigned __int64 a1)
{
  void *v1; // rax
  void *v2; // rcx
  unsigned __int64 result; // rax

  if ( a1 + 39 < a1 )
    std::_Throw_bad_array_new_length();
  v1 = operator new(a1 + 39);
  v2 = v1;
  if ( !v1 )
    _invoke_watson(0LL, 0LL, 0LL, 0, 0LL);
  result = ((unsigned __int64)v1 + 39) & 0xFFFFFFFFFFFFFFE0uLL;
  *(_QWORD *)(result - 8) = v2;
  return result;
}
