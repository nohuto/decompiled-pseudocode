/*
 * XREFs of AslpPathWildcardFreeFindContext @ 0x140891020
 * Callers:
 *     AslPathWildcardFindClose @ 0x14077F4B0 (AslPathWildcardFindClose.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x140780CF0 (SdbpCheckMatchingWildcardFiles.c)
 *     AslPathWildcardFindFirst @ 0x14088FD1C (AslPathWildcardFindFirst.c)
 * Callees:
 *     ULongLongMult @ 0x140469310 (ULongLongMult.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1408910F8 (AslpPathWildcardFreeMatchNode.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall AslpPathWildcardFreeFindContext(__int64 *a1)
{
  __int64 v1; // rbx
  ULONGLONG v3; // rcx
  ULONGLONG i; // rsi
  ULONGLONG v5; // rax
  ULONGLONG v6; // rcx
  ULONGLONG v7; // rcx
  void *v8; // rcx
  __int64 v9; // rdx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *a1;
    if ( *a1 )
    {
      v3 = *(_QWORD *)(v1 + 32);
      for ( i = 0LL; i < v3; ++i )
      {
        v5 = 0LL;
        if ( i < v3 )
        {
          v6 = *(_QWORD *)(v1 + 24);
          pullResult = 0LL;
          if ( ULongLongMult(v6, i, &pullResult) < 0
            || (v7 = *(_QWORD *)(v1 + 56), v5 = v7 + pullResult, v7 + pullResult < v7) )
          {
            v5 = 0LL;
          }
        }
        AslpPathWildcardFreeMatchNode(v5);
        v3 = *(_QWORD *)(v1 + 32);
      }
      v8 = *(void **)(v1 + 56);
      if ( v8 )
        ExFreePoolWithTag(v8, 0x72615452u);
      *(_OWORD *)(v1 + 16) = 0LL;
      *(_OWORD *)(v1 + 32) = 0LL;
      *(_OWORD *)(v1 + 48) = 0LL;
      v9 = *(_QWORD *)(v1 + 8);
      if ( v9 )
      {
        AslFree(v8, v9);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
      AslFree(v8, v1);
      *a1 = 0LL;
    }
  }
}
