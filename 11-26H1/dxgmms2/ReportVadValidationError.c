/*
 * XREFs of ReportVadValidationError @ 0x1400AAEE0
 * Callers:
 *     ?InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x1400C94C0 (-InsertVadToFreeList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ValidateVadInFreeTree @ 0x1400C9968 (ValidateVadInFreeTree.c)
 *     ValidateVadAddressRange @ 0x1400CBD40 (ValidateVadAddressRange.c)
 *     ?InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUVIRTUALADDRESS_PROTECTION_TYPE@@@Z @ 0x1400CD1F4 (-InsertVadToReservedListForNewVaRange@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@U_D3DDDIGPUV.c)
 *     ValidateVadInReservedTree @ 0x1400CD3D8 (ValidateVadInReservedTree.c)
 *     ?ValidateVadInTheOrderedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z @ 0x14011056C (-ValidateVadInTheOrderedList@CVirtualAddressAllocator@@IEAAXPEAUVIDMM_VAD@@@Z.c)
 *     ?ValidateVadInTheOrderedListByLink@CVirtualAddressAllocator@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140112E68 (-ValidateVadInTheOrderedListByLink@CVirtualAddressAllocator@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002EEAC (DxgkLogInternalTriageEvent.c)
 *     Feature_VadAddressValidation__private_IsEnabledDeviceUsageNoInline @ 0x14004F2BC (Feature_VadAddressValidation__private_IsEnabledDeviceUsageNoInline.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall ReportVadValidationError(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rcx

  if ( (unsigned int)Feature_VadAddressValidation__private_IsEnabledDeviceUsageNoInline() )
  {
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 270LL, 87LL, a1, a2, a3);
    WdLogGlobalForLineNumber = 213;
  }
  WdLogSingleEntry3(1LL, a1, a2, a3);
  WdLogGlobalForLineNumber = 116;
  return DxgkLogInternalTriageEvent(v6, 0x40000LL);
}
