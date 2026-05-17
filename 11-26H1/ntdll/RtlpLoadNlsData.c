/*
 * XREFs of RtlpLoadNlsData @ 0x180004A18
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x180001794 (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x180001D40 (RtlIsValidLocaleName.c)
 *     RtlGetParentLocaleName @ 0x1800036A0 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x180004170 (RtlGetNeutralFallback.c)
 *     RtlLocaleNameToLcid @ 0x1800045B0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x180004710 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x180004E90 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x1800052F0 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLCIDToCultureName @ 0x180005BA0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x180005EB0 (RtlLcidToLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x180121708 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x18015F480 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x180161030 (NtInitializeNlsFiles.c)
 */

char RtlpLoadNlsData()
{
  __int64 v0; // rcx
  unsigned int *v1; // rdx
  __int64 v2; // rcx
  signed __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = 0LL;
  if ( pTblPtrs )
    return 1;
  v0 = gBaseAddress;
  if ( gBaseAddress )
    goto LABEL_6;
  if ( (int)NtInitializeNlsFiles(&v4, &gSystemLocale, 0LL) >= 0 )
  {
    if ( !_InterlockedCompareExchange64(&gBaseAddress, v4, 0LL) )
    {
      v0 = v4;
      goto LABEL_7;
    }
    NtUnmapViewOfSection(-1LL, v4);
    v0 = gBaseAddress;
LABEL_6:
    v4 = v0;
LABEL_7:
    v1 = (unsigned int *)(v0 + *(unsigned int *)(v0 + 16));
    v2 = *v1;
    gLocaleTables = *(_WORD *)((char *)v1 + v2 + 24);
    word_1801C772C = *(_WORD *)((char *)v1 + v2 + 22);
    word_1801C772A = *(_WORD *)((char *)v1 + v2 + 32);
    word_1801C7758 = *(_WORD *)((char *)v1 + v2 + 26);
    qword_1801C7730 = (__int64)v1 + *(unsigned int *)((char *)v1 + v2 + 28);
    qword_1801C7738 = (__int64)v1 + *(unsigned int *)((char *)v1 + v2 + 36);
    qword_1801C7740 = (__int64)v1 + *(unsigned int *)((char *)v1 + v2 + 40);
    qword_1801C7748 = (__int64)v1 + *(unsigned int *)((char *)v1 + v2 + 56);
    pTblPtrs = (__int64)&gLocaleTables;
    return 1;
  }
  return 0;
}
