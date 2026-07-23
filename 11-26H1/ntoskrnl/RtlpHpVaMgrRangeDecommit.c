/*
 * XREFs of RtlpHpVaMgrRangeDecommit @ 0x14063BF90
 * Callers:
 *     RtlpHpVaMgrCtxDecommit @ 0x14063BE54 (RtlpHpVaMgrCtxDecommit.c)
 * Callees:
 *     MmFreePoolMemory @ 0x14035231C (MmFreePoolMemory.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x140352FF4 (RtlpHpVaMgrRangeCommitProcess.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeDecommit(__int64 a1, _BYTE *a2, __m128i *a3)
{
  _BYTE *i; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // r8
  __m128i v14; // [rsp+20h] [rbp-18h] BYREF

  for ( i = a2; (*i & 2) != 0; i -= 32 )
    ;
  result = ((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7;
  v7 = (unsigned int)`RtlpHpMemoryTypePageSize'::`2'::PageSize[result];
  if ( (unsigned int)v7 <= 0x100000 )
  {
    if ( (unsigned int)v7 < 0x10000 )
      v7 = 0x10000LL;
    result = (unsigned int)v7;
    v8 = v7 - 1;
    v9 = a3->m128i_i64[0];
    v10 = ~v8;
    v11 = v10 & (a3->m128i_i64[0] + _mm_srli_si128(*a3, 8).m128i_u64[0]);
    v12 = v10 & (result + v9 - 1);
    if ( v11 <= v12 )
      v13 = 0LL;
    else
      v13 = v11 - v12;
    a3->m128i_i64[0] = v12;
    a3->m128i_i64[1] = v13;
    if ( v13 )
    {
      if ( (*i & 4) != 0 )
        return MmFreePoolMemory((ULONG_PTR *)a3, &a3->m128i_u64[1], 0x4000u);
      v14 = *a3;
      result = RtlpHpVaMgrRangeCommitProcess(a1, &v14, 2);
      if ( (_DWORD)result == 2 )
        return MmFreePoolMemory((ULONG_PTR *)a3, &a3->m128i_u64[1], 0x4000u);
    }
  }
  return result;
}
