/*
 * XREFs of RtlCompareUnicodeStrings @ 0x18007B0A0
 * Callers:
 *     LdrpQuerySxSMUIFile @ 0x18001D5D8 (LdrpQuerySxSMUIFile.c)
 *     RtlpFindUnicodeStringInSection @ 0x18002C6C0 (RtlpFindUnicodeStringInSection.c)
 *     RtlpMatchUserLanguage @ 0x18004C874 (RtlpMatchUserLanguage.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x180059088 (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpSnapKernelBaseExtensions @ 0x18007A190 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpCheckRedirection @ 0x18007AC78 (LdrpCheckRedirection.c)
 *     LdrpCheckForRetryLoading @ 0x18007AEA0 (LdrpCheckForRetryLoading.c)
 *     LdrpCompareModuleName @ 0x18007B1FC (LdrpCompareModuleName.c)
 *     LdrpCompareRedirectedFunction @ 0x18007BDAC (LdrpCompareRedirectedFunction.c)
 *     LdrpSearchPath @ 0x180097CEC (LdrpSearchPath.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D1B94 (RtlpProcessIFEOKeyFilter.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x180104824 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180111D40 (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpMatchUILanguage @ 0x180112884 (RtlpMatchUILanguage.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180116F14 (ApiSetQuerySchemaInfo_V7.c)
 *     LdrpCfgProcessLoadConfig @ 0x1801197F0 (LdrpCfgProcessLoadConfig.c)
 *     ApiSetQuerySchemaInfo @ 0x18011F48C (ApiSetQuerySchemaInfo.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125864 (RtlpIsEmptyImageFileOptionsKey.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x18013B578 (ApiSetpGetExtensionNameKeyInfo.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014DF78 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E1C4 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     LdrpIsSubstringFound @ 0x18015BFD8 (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlCompareMemory @ 0x1801630E0 (RtlCompareMemory.c)
 */

LONG __cdecl RtlCompareUnicodeStrings(
        PCWCH String1,
        SIZE_T String1Length,
        PCWCH String2,
        SIZE_T String2Length,
        BOOLEAN CaseInSensitive)
{
  SIZE_T v5; // rsi
  int v7; // r14d
  int v8; // ebp
  PCWCH v9; // rbx
  SIZE_T v10; // rcx
  signed __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9

  v5 = String1Length;
  if ( String1Length > String2Length )
    v5 = String2Length;
  v7 = String2Length;
  v8 = String1Length;
  v9 = String1;
  if ( CaseInSensitive )
  {
    v12 = (char *)String2 - (char *)String1;
    while ( v9 < &String1[v5] )
    {
      v13 = *v9;
      v14 = *(PCWCH)((char *)v9 + v12);
      if ( (_WORD)v13 != (_WORD)v14 )
      {
        if ( (unsigned int)v13 >= 0x61 )
        {
          if ( (unsigned int)v13 > 0x7A )
          {
            if ( qword_1801C5038 && (unsigned __int16)v13 >= 0xC0u )
              LOWORD(v13) = *(_WORD *)(qword_1801C5038
                                     + 2
                                     * ((v13 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C5038
                                                            + 2LL
                                                            * (((unsigned __int8)v13 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C5038
                                                                                                 + 2 * (v13 >> 8))))))
                          + v13;
          }
          else
          {
            LOWORD(v13) = v13 - 32;
          }
        }
        if ( (unsigned int)v14 >= 0x61 )
        {
          if ( (unsigned int)v14 > 0x7A )
          {
            if ( qword_1801C5038 )
            {
              if ( (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *(_WORD *)(qword_1801C5038
                                       + 2
                                       * ((v14 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801C5038
                                                              + 2LL
                                                              * (((unsigned __int8)v14 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801C5038 + 2 * (v14 >> 8))))))
                            + v14;
            }
          }
          else
          {
            LOWORD(v14) = v14 - 32;
          }
        }
        if ( (_WORD)v13 != (_WORD)v14 )
          return (unsigned __int16)v13 - (unsigned __int16)v14;
      }
      ++v9;
    }
    return v8 - v7;
  }
  v10 = RtlCompareMemory(String1, String2, 2 * v5) >> 1;
  if ( v10 >= v5 )
    return v8 - v7;
  return v9[v10] - String2[v10];
}
