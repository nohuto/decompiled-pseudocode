/*
 * XREFs of RtlpHpVaMgrRangeCommit @ 0x18011D5DC
 * Callers:
 *     RtlpHpVaMgrCtxCommit @ 0x18011D560 (RtlpHpVaMgrCtxCommit.c)
 * Callees:
 *     RtlpHpEnvAllocVA @ 0x18008BE90 (RtlpHpEnvAllocVA.c)
 *     RtlpHpVaMgrRangeCommitProcess @ 0x18008D0C0 (RtlpHpVaMgrRangeCommitProcess.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCommit(__int64 a1, _BYTE *a2, __int64 a3, int a4)
{
  _BYTE *i; // rbx
  unsigned int v8; // ecx
  __m128i v9; // xmm0
  __int64 v10; // rdx
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+28h] [rbp-50h]
  __m128i v14; // [rsp+50h] [rbp-28h] BYREF

  for ( i = a2; (*i & 2) != 0; i -= 32 )
    ;
  v8 = `RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7];
  if ( v8 <= 0x100000 )
  {
    v9 = *(__m128i *)a3;
    v10 = *(_QWORD *)a3;
    if ( v8 < 0x10000 )
      v8 = 0x10000;
    v11 = v9.m128i_i64[0] & -(__int64)v8;
    *(_QWORD *)a3 = v11;
    *(_QWORD *)(a3 + 8) = (~(v8 - 1LL) & (v8 + _mm_srli_si128(v9, 8).m128i_u64[0] + v10 - 1)) - v11;
    if ( (*i & 4) != 0 || (v14 = *(__m128i *)a3, (unsigned int)RtlpHpVaMgrRangeCommitProcess(a1, &v14, 0) == 1) )
    {
      result = RtlpHpEnvAllocVA(
                 a3,
                 a3 + 8,
                 0LL,
                 `RtlpHpMemoryTypeAllocFlags'::`2'::AllocFlags[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7] | 0x1000u,
                 a4,
                 v13,
                 (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
                 *(_QWORD *)(a1 + 32));
      if ( (int)result < 0 )
        return result;
      if ( (*i & 4) == 0 )
      {
        v14 = *(__m128i *)a3;
        RtlpHpVaMgrRangeCommitProcess(a1, &v14, 1);
      }
    }
  }
  return 0LL;
}
