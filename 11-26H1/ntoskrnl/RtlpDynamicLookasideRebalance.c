/*
 * XREFs of RtlpDynamicLookasideRebalance @ 0x140428B9C
 * Callers:
 *     ExHeapLookasideRebalance @ 0x140428AE0 (ExHeapLookasideRebalance.c)
 *     ExpPoolLookasideRebalance @ 0x140428B54 (ExpPoolLookasideRebalance.c)
 * Callees:
 *     RtlpLookasideAdjustDepth @ 0x140428CC8 (RtlpLookasideAdjustDepth.c)
 *     qsort @ 0x140539380 (qsort.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

void __fastcall RtlpDynamicLookasideRebalance(__int64 *a1)
{
  __int64 v1; // rsi
  unsigned int v2; // edi
  size_t v3; // r10
  __int64 v5; // rbp
  int *v6; // r14
  _DWORD *v7; // r11
  unsigned __int8 v8; // cf
  int v9; // eax
  unsigned int v10; // r9d
  unsigned int v11; // edx
  unsigned int v12; // eax
  int v13; // ecx
  __int64 v14; // rdi
  _DWORD *v15; // rcx
  __int64 v16; // rdx
  unsigned int v17; // esi
  _BYTE Base[4]; // [rsp+20h] [rbp-228h] BYREF
  char v19; // [rsp+24h] [rbp-224h] BYREF

  v1 = *((unsigned int *)a1 + 3);
  v2 = 0;
  v3 = *((unsigned int *)a1 + 2);
  if ( (_DWORD)v3 )
  {
    v5 = *a1;
    v6 = (int *)&v19;
    v7 = (_DWORD *)a1 + 21;
    do
    {
      v8 = _bittest64(&v5, v2);
      *(v6 - 1) = v2;
      v9 = v7[2];
      v10 = -1;
      v11 = *v7 + v8 - v7[4];
      v7 += 16;
      if ( v11 >= v8 )
        v10 = v11;
      v12 = v10 + v9 - *(v7 - 10);
      v13 = -1;
      if ( v12 >= v10 )
        v13 = v12;
      ++v2;
      *v6 = v13;
      v6 += 2;
    }
    while ( v2 < (unsigned int)v3 );
  }
  qsort(Base, v3, 8uLL, RtlpDynamicLookasideBucketCompare);
  v14 = 0LL;
  if ( (_DWORD)v1 )
  {
    v15 = Base;
    v16 = v1;
    do
    {
      if ( v15[1] >= 0x19u )
        v14 |= 1LL << *v15;
      v15 += 2;
      --v16;
    }
    while ( v16 );
  }
  v17 = 0;
  for ( *a1 = v14; v17 < *((_DWORD *)a1 + 2); ++v17 )
    RtlpLookasideAdjustDepth(&a1[8 * v17 + 8], !_bittest64(&v14, v17));
}
