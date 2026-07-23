/*
 * XREFs of bsearch @ 0x180129D50
 * Callers:
 *     RtlpLocateActivationContextSection @ 0x18002B600 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x18002C6C0 (RtlpFindUnicodeStringInSection.c)
 *     RtlUnwindEx @ 0x180033EB0 (RtlUnwindEx.c)
 *     RtlpAddVectoredHandler @ 0x180077074 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180077EF0 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1800781F0 (RtlGuardCheckLongJumpTarget.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800BE160 (RtlFindActivationContextSectionGuid.c)
 *     RtlQueryProtectedPolicy @ 0x1800E6750 (RtlQueryProtectedPolicy.c)
 *     RtlSetProtectedPolicy @ 0x1800F8890 (RtlSetProtectedPolicy.c)
 *     RtlCompareExchangePropertyStore @ 0x180145910 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x180145C00 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180145D70 (RtlRemovePropertyStore.c)
 * Callees:
 *     _invalid_parameter @ 0x180126608 (_invalid_parameter.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x18016F010 (_guard_check_icall$thunk$15021643654165956172.c)
 */

void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
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
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v8 <= v7 )
    {
      v14 = v7;
      if ( !(v6 >> 1) )
      {
        if ( !v6 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(const void *, char *))CompareFunction)(Key, v8) )
          return 0LL;
        return v8;
      }
      v10 = (v6 >> 1) - 1;
      if ( (v6 & 1) != 0 )
        v10 = v6 >> 1;
      v11 = &v8[SizeOfElements * v10];
      v12 = ((__int64 (__fastcall *)(const void *, char *))CompareFunction)(Key, v11);
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
    invalid_parameter();
  }
  return 0LL;
}
