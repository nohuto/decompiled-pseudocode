/*
 * XREFs of bsearch @ 0x140538DA0
 * Callers:
 *     LdrpResSearchResourceMappedFile @ 0x1403DDCD8 (LdrpResSearchResourceMappedFile.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x1403DFDC0 (LdrLoadAlternateResourceModuleEx.c)
 *     MiPurgeSubsection @ 0x1404199B0 (MiPurgeSubsection.c)
 *     MiLookupFixupExtentByPte @ 0x1404C5484 (MiLookupFixupExtentByPte.c)
 *     DownLevelLangIDToLanguageName @ 0x1404E8A68 (DownLevelLangIDToLanguageName.c)
 *     LdrpGetParentLangId @ 0x1404ED6B0 (LdrpGetParentLangId.c)
 *     RtlCompareExchangePropertyStore @ 0x14061D420 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x14061D710 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x14061D890 (RtlRemovePropertyStore.c)
 *     DownLevelGetParentLanguageName @ 0x1406DCEE0 (DownLevelGetParentLanguageName.c)
 *     DownLevelLanguageNameToLangID @ 0x1406DCFA4 (DownLevelLanguageNameToLangID.c)
 *     sub_14083F418 @ 0x14083F418 (sub_14083F418.c)
 *     EtwpIsGuidAllowed @ 0x140916CEC (EtwpIsGuidAllowed.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall_no_overrides @ 0x140735D50 (_guard_check_icall_no_overrides.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        int (__cdecl *PtFuncCompare)(const void *, const void *))
{
  size_t v6; // rsi
  char *v7; // rdi
  char *v8; // rbx
  __int64 v10; // r13
  char *v11; // r15
  int v12; // eax
  char *v14; // [rsp+68h] [rbp+10h]

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    guard_check_icall_no_overrides(PtFuncCompare);
    while ( v8 <= v7 )
    {
      v14 = v7;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v8) )
          return 0LL;
        return v8;
      }
      v10 = (v6 >> 1) - 1;
      if ( (v6 & 1) != 0 )
        v10 = v6 >> 1;
      v11 = &v8[SizeOfElements * v10];
      v12 = ((__int64 (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v11);
      if ( !v12 )
        return &v8[SizeOfElements * v10];
      v6 >>= 1;
      if ( v12 < 0 )
        v6 = v10;
      v7 = &v11[-SizeOfElements];
      if ( v12 >= 0 )
      {
        v7 = v14;
        v8 = &v11[SizeOfElements];
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
  return 0LL;
}
