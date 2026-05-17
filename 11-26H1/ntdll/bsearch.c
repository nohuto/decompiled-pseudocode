/*
 * XREFs of bsearch @ 0x180129FE0
 * Callers:
 *     RtlpLocateActivationContextSection @ 0x180041090 (RtlpLocateActivationContextSection.c)
 *     RtlpFindUnicodeStringInSection @ 0x180042150 (RtlpFindUnicodeStringInSection.c)
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlpAddVectoredHandler @ 0x18007FCD4 (RtlpAddVectoredHandler.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180080E50 (RtlGuardCheckLongJumpTarget.c)
 *     RtlFindActivationContextSectionGuid @ 0x1800C09D0 (RtlFindActivationContextSectionGuid.c)
 *     RtlQueryProtectedPolicy @ 0x1800E7CF0 (RtlQueryProtectedPolicy.c)
 *     RtlSetProtectedPolicy @ 0x1800F9120 (RtlSetProtectedPolicy.c)
 *     RtlCompareExchangePropertyStore @ 0x180145A60 (RtlCompareExchangePropertyStore.c)
 *     RtlQueryPropertyStore @ 0x180145D50 (RtlQueryPropertyStore.c)
 *     RtlRemovePropertyStore @ 0x180145EC0 (RtlRemovePropertyStore.c)
 * Callees:
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x180170010 (_guard_check_icall$thunk$15021643654165956172.c)
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
