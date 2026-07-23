/*
 * XREFs of RtlpHpVaMgrRangeCommit @ 0x140525A2C
 * Callers:
 *     RtlpHpVaMgrCtxCommit @ 0x1405259B0 (RtlpHpVaMgrCtxCommit.c)
 * Callees:
 *     RtlpHpVaMgrRangeCommitProcess @ 0x140352FF4 (RtlpHpVaMgrRangeCommitProcess.c)
 *     RtlpHpEnvAllocVA @ 0x140366310 (RtlpHpEnvAllocVA.c)
 */

__int64 __fastcall RtlpHpVaMgrRangeCommit(__int64 a1, _BYTE *a2, __m128i *a3, unsigned int a4)
{
  _BYTE *i; // rbx
  unsigned int v8; // ecx
  __int64 v9; // rdx
  unsigned __int64 v10; // xmm0_8
  __int64 v11; // r9
  __int64 result; // rax
  __int64 v13; // [rsp+28h] [rbp-50h]
  ULONG_PTR v14; // [rsp+38h] [rbp-40h]
  __m128i v15; // [rsp+50h] [rbp-28h] BYREF

  for ( i = a2; (*i & 2) != 0; i -= 32 )
    ;
  v8 = `RtlpHpMemoryTypePageSize'::`2'::PageSize[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7];
  if ( v8 <= 0x100000 )
  {
    v9 = a3->m128i_i64[0];
    v10 = _mm_srli_si128(*a3, 8).m128i_u64[0];
    if ( v8 < 0x10000 )
      v8 = 0x10000;
    v11 = v9 & -(__int64)v8;
    a3->m128i_i64[0] = v11;
    a3->m128i_i64[1] = (~(v8 - 1LL) & (v8 + v10 + v9 - 1)) - v11;
    if ( (*i & 4) != 0 || (v15 = *a3, (unsigned int)RtlpHpVaMgrRangeCommitProcess(a1, &v15, 0) == 1) )
    {
      result = RtlpHpEnvAllocVA(
                 (ULONG_PTR *)a3,
                 &a3->m128i_i64[1],
                 0LL,
                 `RtlpHpMemoryTypeAllocFlags'::`2'::AllocFlags[((unsigned __int64)*(unsigned __int8 *)(a1 + 46) >> 1) & 7] | 0x1000u,
                 a4,
                 v13,
                 (*(unsigned __int8 *)(a1 + 46) >> 1) & 7,
                 v14,
                 *(unsigned __int8 *)(a1 + 45));
      if ( (int)result < 0 )
        return result;
      if ( (*i & 4) == 0 )
      {
        v15 = *a3;
        RtlpHpVaMgrRangeCommitProcess(a1, &v15, 1);
      }
    }
  }
  return 0LL;
}
