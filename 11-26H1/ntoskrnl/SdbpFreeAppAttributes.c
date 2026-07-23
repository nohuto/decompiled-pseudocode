/*
 * XREFs of SdbpFreeAppAttributes @ 0x14088A594
 * Callers:
 *     SdbpReleaseSearchDBContext @ 0x140B406B0 (SdbpReleaseSearchDBContext.c)
 * Callees:
 *     ULongLongMult @ 0x140469310 (ULongLongMult.c)
 *     AslFree @ 0x1409D6144 (AslFree.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall SdbpFreeAppAttributes(__int64 a1)
{
  ULONGLONG v1; // rax
  ULONGLONG i; // rdi
  unsigned __int16 *v4; // rdx
  ULONGLONG v5; // rcx
  ULONGLONG v6; // rcx
  unsigned __int64 v7; // rax
  __int64 v8; // rcx
  void *v9; // rcx
  ULONGLONG pullResult; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v1 = *(_QWORD *)(a1 + 16);
    for ( i = 0LL; i < v1; ++i )
    {
      v4 = 0LL;
      if ( i < v1 )
      {
        v5 = *(_QWORD *)(a1 + 8);
        pullResult = 0LL;
        if ( ULongLongMult(v5, i, &pullResult) < 0
          || (v6 = *(_QWORD *)(a1 + 40), v4 = (unsigned __int16 *)(v6 + pullResult), v6 + pullResult < v6) )
        {
          v4 = 0LL;
        }
      }
      v7 = *v4;
      v8 = 24617LL;
      if ( (_WORD)v7 == 24617
        || (v8 = 24577LL, (_WORD)v7 == 24577)
        || (LOWORD(v7) = v7 - 24593, (unsigned __int16)v7 <= 0x37u) && (v8 = 0x82000006000001LL, _bittest64(&v8, v7)) )
      {
        AslFree(v8, *((_QWORD *)v4 + 1));
      }
      v1 = *(_QWORD *)(a1 + 16);
    }
    v9 = *(void **)(a1 + 40);
    if ( v9 )
      ExFreePoolWithTag(v9, 0x72615452u);
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_OWORD *)(a1 + 32) = 0LL;
  }
}
