/*
 * XREFs of PfpUpdateRepurposedByPrefetch @ 0x140A59E4C
 * Callers:
 *     PfpVolumePrefetchMetadata @ 0x14097F124 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14097F5AC (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x140A57EF4 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFilesTrickle @ 0x140A59AEC (PfpPrefetchFilesTrickle.c)
 * Callees:
 *     MmQueryMemoryListInformation @ 0x14034A628 (MmQueryMemoryListInformation.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_OWORD *__fastcall PfpUpdateRepurposedByPrefetch(_OWORD *a1, unsigned __int64 a2)
{
  __m128i v4; // xmm1
  const __m128i *v5; // rax
  __int64 v6; // rcx
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __int64 v9; // rdx
  unsigned __int64 v10; // xmm1_8
  _QWORD *v11; // rcx
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  _OWORD *result; // rax
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  _OWORD *v22; // rbx
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // [rsp+30h] [rbp-D8h] BYREF
  _OWORD v26[6]; // [rsp+40h] [rbp-C8h] BYREF
  _OWORD v27[5]; // [rsp+A0h] [rbp-68h] BYREF

  memset_0(v26, 0, 0xB0uLL);
  LODWORD(v25) = 0;
  MmQueryMemoryListInformation(0xFFFFFFFFFFFFFFFFuLL, v26, 0xB0u, 0, &v25);
  v4 = 0LL;
  v5 = (const __m128i *)((char *)v27 + 8);
  v6 = 4LL;
  do
  {
    v7 = _mm_loadu_si128(v5++);
    v8 = _mm_add_epi64(v7, v4);
    v4 = v8;
    --v6;
  }
  while ( v6 );
  v9 = 0LL;
  v10 = _mm_add_epi64(v8, _mm_srli_si128(v8, 8)).m128i_u64[0];
  v11 = (_QWORD *)a1 + 13;
  v12 = 8LL;
  do
  {
    v9 += *v11++;
    --v12;
  }
  while ( v12 );
  v13 = v10 - v9;
  if ( v10 - v9 > a2 )
    v13 = a2;
  if ( v13 )
    _InterlockedAdd64((volatile signed __int64 *)&stru_140E67200.QuantumTarget, v13);
  result = v26;
  v15 = v26[1];
  *a1 = v26[0];
  v16 = v26[2];
  a1[1] = v15;
  v17 = v26[3];
  a1[2] = v16;
  v18 = v26[4];
  a1[3] = v17;
  v19 = v26[5];
  a1[4] = v18;
  v20 = v27[0];
  a1[5] = v19;
  v21 = v27[2];
  a1[6] = v20;
  v22 = a1 + 8;
  *(v22 - 1) = v27[1];
  v23 = v27[3];
  *v22 = v21;
  v24 = v27[4];
  v22[1] = v23;
  v22[2] = v24;
  return result;
}
