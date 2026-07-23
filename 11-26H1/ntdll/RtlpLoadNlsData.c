/*
 * XREFs of RtlpLoadNlsData @ 0x180050148
 * Callers:
 *     RtlpConsoleFallbackNameFromLocaleName @ 0x18004CECC (RtlpConsoleFallbackNameFromLocaleName.c)
 *     RtlIsValidLocaleName @ 0x18004D470 (RtlIsValidLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18004EDD0 (RtlGetParentLocaleName.c)
 *     RtlGetNeutralFallback @ 0x18004F8A0 (RtlGetNeutralFallback.c)
 *     RtlLocaleNameToLcid @ 0x18004FCE0 (RtlLocaleNameToLcid.c)
 *     RtlCultureNameToLCID @ 0x18004FE40 (RtlCultureNameToLCID.c)
 *     LdrpLangFallbackListAppendNode @ 0x1800505C0 (LdrpLangFallbackListAppendNode.c)
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180050A20 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlLCIDToCultureName @ 0x1800512D0 (RtlLCIDToCultureName.c)
 *     RtlLcidToLocaleName @ 0x1800515E0 (RtlLcidToLocaleName.c)
 *     RtlpGetProcessCodepagesForLocale @ 0x1801214A4 (RtlpGetProcessCodepagesForLocale.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x18015F380 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x180160F30 (NtInitializeNlsFiles.c)
 */

char __fastcall RtlpLoadNlsData(__int64 a1, __int64 a2, __int64 a3, ULONG *a4)
{
  unsigned int *v4; // rcx
  unsigned int *v5; // rdx
  __int64 v6; // rcx
  PVOID BaseAddress; // [rsp+30h] [rbp+8h] BYREF

  BaseAddress = 0LL;
  if ( pTblPtrs )
    return 1;
  v4 = (unsigned int *)gBaseAddress;
  if ( gBaseAddress )
    goto LABEL_6;
  if ( NtInitializeNlsFiles(&BaseAddress, &gSystemLocale, 0LL, a4) >= 0 )
  {
    if ( !_InterlockedCompareExchange64(&gBaseAddress, (signed __int64)BaseAddress, 0LL) )
    {
      v4 = (unsigned int *)BaseAddress;
      goto LABEL_7;
    }
    NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
    v4 = (unsigned int *)gBaseAddress;
LABEL_6:
    BaseAddress = v4;
LABEL_7:
    v5 = (unsigned int *)((char *)v4 + v4[4]);
    v6 = *v5;
    gLocaleTables = *(_WORD *)((char *)v5 + v6 + 24);
    word_1801C6774 = *(_WORD *)((char *)v5 + v6 + 22);
    word_1801C6772 = *(_WORD *)((char *)v5 + v6 + 32);
    word_1801C67A0 = *(_WORD *)((char *)v5 + v6 + 26);
    qword_1801C6778 = (__int64)v5 + *(unsigned int *)((char *)v5 + v6 + 28);
    qword_1801C6780 = (__int64)v5 + *(unsigned int *)((char *)v5 + v6 + 36);
    qword_1801C6788 = (__int64)v5 + *(unsigned int *)((char *)v5 + v6 + 40);
    qword_1801C6790 = (__int64)v5 + *(unsigned int *)((char *)v5 + v6 + 56);
    pTblPtrs = (__int64)&gLocaleTables;
    return 1;
  }
  return 0;
}
