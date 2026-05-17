/*
 * XREFs of RtlCompareUnicodeStrings @ 0x180083D00
 * Callers:
 *     RtlpMatchUserLanguage @ 0x18000113C (RtlpMatchUserLanguage.c)
 *     RtlpCapabilityCheckSystemCapability @ 0x18000D958 (RtlpCapabilityCheckSystemCapability.c)
 *     LdrpQuerySxSMUIFile @ 0x180032478 (LdrpQuerySxSMUIFile.c)
 *     RtlpFindUnicodeStringInSection @ 0x180042150 (RtlpFindUnicodeStringInSection.c)
 *     LdrpSnapKernelBaseExtensions @ 0x180082DF0 (LdrpSnapKernelBaseExtensions.c)
 *     LdrpCheckRedirection @ 0x1800838D8 (LdrpCheckRedirection.c)
 *     LdrpCheckForRetryLoading @ 0x180083B00 (LdrpCheckForRetryLoading.c)
 *     LdrpCompareModuleName @ 0x180083E5C (LdrpCompareModuleName.c)
 *     LdrpCompareRedirectedFunction @ 0x180084A0C (LdrpCompareRedirectedFunction.c)
 *     LdrpSearchPath @ 0x180098BBC (LdrpSearchPath.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1800D3784 (RtlpProcessIFEOKeyFilter.c)
 *     ApiSetpSearchForHostOverrideIndex_V7 @ 0x1801054A4 (ApiSetpSearchForHostOverrideIndex_V7.c)
 *     LdrpInitializeApplicationVerifierPackage @ 0x180112290 (LdrpInitializeApplicationVerifierPackage.c)
 *     RtlpMatchUILanguage @ 0x180112DD4 (RtlpMatchUILanguage.c)
 *     ApiSetQuerySchemaInfo_V7 @ 0x180117718 (ApiSetQuerySchemaInfo_V7.c)
 *     LdrpCfgProcessLoadConfig @ 0x180119A40 (LdrpCfgProcessLoadConfig.c)
 *     ApiSetQuerySchemaInfo @ 0x18011F6DC (ApiSetQuerySchemaInfo.c)
 *     RtlpIsEmptyImageFileOptionsKey @ 0x180125AF4 (RtlpIsEmptyImageFileOptionsKey.c)
 *     ApiSetpGetExtensionNameKeyInfo @ 0x18013B808 (ApiSetpGetExtensionNameKeyInfo.c)
 *     _RtlpMuiRegInitLIPLanguage @ 0x18014E0C8 (_RtlpMuiRegInitLIPLanguage.c)
 *     _RtlpMuiRegPopulateBaseLanguages @ 0x18014E314 (_RtlpMuiRegPopulateBaseLanguages.c)
 *     LdrpIsSubstringFound @ 0x18015C118 (LdrpIsSubstringFound.c)
 * Callees:
 *     RtlCompareMemory @ 0x1801631E0 (RtlCompareMemory.c)
 */

__int64 __fastcall RtlCompareUnicodeStrings(unsigned __int16 *a1, SIZE_T a2, _BYTE *a3, SIZE_T a4, char a5)
{
  SIZE_T v5; // rsi
  int v7; // r14d
  int v8; // ebp
  unsigned __int16 *v9; // rbx
  SIZE_T v10; // rcx
  signed __int64 v12; // rdi
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // r9

  v5 = a2;
  if ( a2 > a4 )
    v5 = a4;
  v7 = a4;
  v8 = a2;
  v9 = a1;
  if ( a5 )
  {
    v12 = a3 - (_BYTE *)a1;
    while ( v9 < &a1[v5] )
    {
      v13 = *v9;
      v14 = *(unsigned __int16 *)((char *)v9 + v12);
      if ( (_WORD)v13 != (_WORD)v14 )
      {
        if ( (unsigned int)v13 >= 0x61 )
        {
          if ( (unsigned int)v13 > 0x7A )
          {
            if ( qword_1801C6038 && (unsigned __int16)v13 >= 0xC0u )
              LOWORD(v13) = *(_WORD *)(qword_1801C6038
                                     + 2
                                     * ((v13 & 0xF)
                                      + *(unsigned __int16 *)(qword_1801C6038
                                                            + 2LL
                                                            * (((unsigned __int8)v13 >> 4)
                                                             + (unsigned int)*(unsigned __int16 *)(qword_1801C6038
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
            if ( qword_1801C6038 )
            {
              if ( (unsigned __int16)v14 >= 0xC0u )
                LOWORD(v14) = *(_WORD *)(qword_1801C6038
                                       + 2
                                       * ((v14 & 0xF)
                                        + *(unsigned __int16 *)(qword_1801C6038
                                                              + 2LL
                                                              * (((unsigned __int8)v14 >> 4)
                                                               + (unsigned int)*(unsigned __int16 *)(qword_1801C6038 + 2 * (v14 >> 8))))))
                            + v14;
            }
          }
          else
          {
            LOWORD(v14) = v14 - 32;
          }
        }
        if ( (_WORD)v13 != (_WORD)v14 )
          return (unsigned __int16)v13 - (unsigned int)(unsigned __int16)v14;
      }
      ++v9;
    }
    return (unsigned int)(v8 - v7);
  }
  v10 = RtlCompareMemory(a1, a3, 2 * v5) >> 1;
  if ( v10 >= v5 )
    return (unsigned int)(v8 - v7);
  return v9[v10] - (unsigned int)*(unsigned __int16 *)&a3[2 * v10];
}
