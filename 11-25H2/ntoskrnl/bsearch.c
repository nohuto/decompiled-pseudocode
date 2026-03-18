/*
 * XREFs of bsearch @ 0x1404FBFE0
 * Callers:
 *     DownLevelLangIDToLanguageName @ 0x1404B067C (DownLevelLangIDToLanguageName.c)
 *     LdrpGetParentLangId @ 0x1404B40F0 (LdrpGetParentLangId.c)
 *     DownLevelLanguageNameToLangID @ 0x1404B9498 (DownLevelLanguageNameToLangID.c)
 *     RtlCompareExchangePropertyStore @ 0x1405DDB80 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x1405DDE70 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x1405DDFF0 (RtlRemovePropertyStore.c)
 *     DownLevelGetParentLanguageName @ 0x1406539C4 (DownLevelGetParentLanguageName.c)
 *     sub_1407A9FD8 @ 0x1407A9FD8 (sub_1407A9FD8.c)
 *     EtwpAddRegEntryToGroup @ 0x140899D60 (EtwpAddRegEntryToGroup.c)
 *     EtwpIsGuidAllowed @ 0x14089AB9C (EtwpIsGuidAllowed.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     _guard_check_icall_no_overrides @ 0x1406A8AD0 (_guard_check_icall_no_overrides.c)
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
  size_t v10; // rbp
  bool v11; // zf
  char *v12; // r14
  int v13; // eax

  v6 = NumOfElements;
  v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v8 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && PtFuncCompare )
  {
    guard_check_icall_no_overrides(PtFuncCompare);
    while ( v8 <= v7 )
    {
      v10 = v6 >> 1;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v8) )
          return 0LL;
        return v8;
      }
      v11 = (v6 & 1) == 0;
      v6 = v10 - 1;
      if ( !v11 )
        v6 = v10;
      v12 = &v8[SizeOfElements * v6];
      v13 = ((__int64 (__fastcall *)(const void *, char *))PtFuncCompare)(Key, v12);
      if ( !v13 )
        return &v8[SizeOfElements * v6];
      if ( v13 >= 0 )
      {
        v8 = &v12[SizeOfElements];
        v6 = v10;
      }
      else
      {
        v7 = &v12[-SizeOfElements];
      }
    }
  }
  else
  {
    xHalTimerWatchdogStop();
  }
  return 0LL;
}
