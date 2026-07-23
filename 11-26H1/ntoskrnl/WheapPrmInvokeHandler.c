/*
 * XREFs of WheapPrmInvokeHandler @ 0x1406DB750
 * Callers:
 *     WheaPrmTranslateNormalizedAddressToPhysicalAddressAmd @ 0x1406DB680 (WheaPrmTranslateNormalizedAddressToPhysicalAddressAmd.c)
 *     WheapPrmTranslateDimmAddressAmd @ 0x1406DB824 (WheapPrmTranslateDimmAddressAmd.c)
 *     WheapPrmTranslateDimmAddressIntel @ 0x1406DB8D0 (WheapPrmTranslateDimmAddressIntel.c)
 *     WheapPrmTranslatePhysicalAddressAmd @ 0x1406DBB28 (WheapPrmTranslatePhysicalAddressAmd.c)
 *     WheapPrmTranslatePhysicalAddressIntel @ 0x1406DBBC8 (WheapPrmTranslatePhysicalAddressIntel.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall WheapPrmInvokeHandler(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // edx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax

  if ( WheapPrmInitialized )
  {
    v4 = -1073741811;
    v5 = *a1 - INTEL_ADDRESS_TRANSLATION_PRM_HANDLER_GUID;
    if ( *a1 == INTEL_ADDRESS_TRANSLATION_PRM_HANDLER_GUID )
      v5 = a1[1] + 0x11C0E8E693822649LL;
    if ( !v5 && a3 == 308 )
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
    v6 = *a1 - AMD_SPA_TO_DRAM_PRM_HANDLER_GUID;
    if ( *a1 == AMD_SPA_TO_DRAM_PRM_HANDLER_GUID )
      v6 = a1[1] - 0x204BCE82D5DB5E85LL;
    if ( !v6 && a3 == 16 )
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
    v7 = *a1 - AMD_DRAM_TO_SPA_PRM_HANDLER_GUID;
    if ( *a1 == AMD_DRAM_TO_SPA_PRM_HANDLER_GUID )
      v7 = a1[1] + 0x6465A221E455616ELL;
    if ( !v7 && a3 == 28 )
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
    v8 = *a1 - AMD_NORMALIZED_TO_SPA_PRM_HANDLER_GUID;
    if ( *a1 == AMD_NORMALIZED_TO_SPA_PRM_HANDLER_GUID )
      v8 = a1[1] + 0x5914D40EA9D4326ELL;
    if ( !v8 && a3 == 25 )
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a2);
  }
  else
  {
    return (unsigned int)-1073741637;
  }
  return v4;
}
