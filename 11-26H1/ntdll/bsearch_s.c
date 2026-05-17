/*
 * XREFs of bsearch_s @ 0x18012A100
 * Callers:
 *     RtlUnwindEx @ 0x180049930 (RtlUnwindEx.c)
 *     RtlGuardRestoreContext @ 0x180080B50 (RtlGuardRestoreContext.c)
 *     RtlGuardCheckLongJumpTarget @ 0x180080E50 (RtlGuardCheckLongJumpTarget.c)
 *     RtlGuardCheckExceptionHandler @ 0x180081080 (RtlGuardCheckExceptionHandler.c)
 *     LdrpUnsuppressAddressTakenIat @ 0x1800C6960 (LdrpUnsuppressAddressTakenIat.c)
 *     RtlpGetTargetRvaFlag @ 0x1800C71F4 (RtlpGetTargetRvaFlag.c)
 * Callees:
 *     _invalid_parameter @ 0x180126898 (_invalid_parameter.c)
 *     _guard_check_icall$thunk$15021643654165956172 @ 0x180170010 (_guard_check_icall$thunk$15021643654165956172.c)
 */

void *__cdecl bsearch_s(
        const void *Key,
        const void *Base,
        rsize_t NumOfElements,
        rsize_t SizeOfElements,
        _CoreCrtSecureSearchSortCompareFunction CompareFunction,
        void *Context)
{
  rsize_t v7; // rsi
  char *v8; // rdi
  char *v9; // rbx
  __int64 v11; // r13
  char *v12; // r15
  int v13; // eax
  char *v15; // [rsp+68h] [rbp+10h]

  v7 = NumOfElements;
  v8 = (char *)Base + SizeOfElements * (NumOfElements - 1);
  v9 = (char *)Base;
  if ( (Base || !NumOfElements) && SizeOfElements && CompareFunction )
  {
    while ( v9 <= v8 )
    {
      v15 = v8;
      if ( !(v7 >> 1) )
      {
        if ( !v7 )
          return 0LL;
        if ( ((unsigned int (__fastcall *)(void *, const void *, char *))CompareFunction)(Context, Key, v9) )
          return 0LL;
        return v9;
      }
      v11 = (v7 >> 1) - 1;
      if ( (v7 & 1) != 0 )
        v11 = v7 >> 1;
      v12 = &v9[SizeOfElements * v11];
      v13 = ((__int64 (__fastcall *)(void *, const void *, char *))CompareFunction)(Context, Key, v12);
      if ( !v13 )
        return &v9[SizeOfElements * v11];
      v7 >>= 1;
      if ( v13 < 0 )
        v7 = v11;
      v8 = &v12[-SizeOfElements];
      if ( v13 >= 0 )
      {
        v8 = v15;
        v9 = &v12[SizeOfElements];
      }
    }
  }
  else
  {
    invalid_parameter();
  }
  return 0LL;
}
