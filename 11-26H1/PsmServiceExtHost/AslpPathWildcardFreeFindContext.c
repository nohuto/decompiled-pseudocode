/*
 * XREFs of AslpPathWildcardFreeFindContext @ 0x1800A09FC
 * Callers:
 *     AslPathWildcardFindClose @ 0x18009F310 (AslPathWildcardFindClose.c)
 *     AslPathWildcardFindFirst @ 0x18009F358 (AslPathWildcardFindFirst.c)
 * Callees:
 *     ULongLongMult @ 0x18008D23C (ULongLongMult.c)
 *     AslFree @ 0x180098D34 (AslFree.c)
 *     AslpPathWildcardFreeMatchNode @ 0x1800A0AF4 (AslpPathWildcardFreeMatchNode.c)
 */

void __fastcall AslpPathWildcardFreeFindContext(__int64 *a1)
{
  __int64 v1; // rbx
  ULONGLONG v3; // rcx
  ULONGLONG i; // rdi
  ULONGLONG v5; // rax
  ULONGLONG v6; // rcx
  void *v7; // r8
  void *v8; // rdx
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
            || (v5 = *(_QWORD *)(v1 + 56) + pullResult, v5 < *(_QWORD *)(v1 + 56)) )
          {
            v5 = 0LL;
          }
        }
        AslpPathWildcardFreeMatchNode(v5);
        v3 = *(_QWORD *)(v1 + 32);
      }
      v7 = *(void **)(v1 + 56);
      if ( v7 )
        RtlFreeHeap(*(HANDLE *)(v1 + 16), 0, v7);
      *(_OWORD *)(v1 + 16) = 0LL;
      *(_OWORD *)(v1 + 32) = 0LL;
      *(_OWORD *)(v1 + 48) = 0LL;
      v8 = *(void **)(v1 + 8);
      if ( v8 )
      {
        AslFree(NtCurrentPeb()->ProcessHeap, v8);
        *(_QWORD *)(v1 + 8) = 0LL;
      }
      AslFree(NtCurrentPeb()->ProcessHeap, (void *)v1);
      *a1 = 0LL;
    }
  }
}
