/*
 * XREFs of IvtGetPageFault @ 0x1405A9000
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IvtGetPageFault(_QWORD *a1, int *a2, _QWORD *a3, _WORD *a4, unsigned __int64 *a5, __int64 *a6)
{
  __int64 v7; // rsi
  __int64 v9; // r10
  __int64 v10; // r11
  __int64 v11; // r9
  __int64 v12; // r8
  __m128i v13; // xmm1
  unsigned __int64 v14; // xmm1_8
  __int64 v15; // r9
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rdx
  __m128i v22; // [rsp+0h] [rbp-28h] BYREF

  v7 = a1[18];
  v9 = a1[1];
  v10 = a1[20] >> 5;
  while ( 1 )
  {
    v11 = (*(_QWORD *)(v9 + 192) >> 5) & 0x3FFFLL;
    if ( v11 == ((*(_QWORD *)(v9 + 200) >> 5) & 0x3FFFLL) )
      break;
    v12 = 0LL;
    if ( ((*(_QWORD *)(v9 + 192) >> 5) & 0x3FFF) + 1 != (_DWORD)v10 )
      v12 = (*(_QWORD *)(v9 + 192) >> 5) + 1LL;
    v13 = *(__m128i *)(32 * v11 + v7);
    *(_QWORD *)(v9 + 192) = (32 * v12) ^ (*(_QWORD *)(v9 + 192) ^ (32 * v12)) & 0xFFFFFFFFFFF8001FuLL;
    v22 = v13;
    _InterlockedOr(v22.m128i_i32, 0);
    v14 = _mm_srli_si128(v13, 8).m128i_u64[0];
    if ( (v14 & 1) != 0 || (v14 & 2) != 0 )
    {
      v15 = v22.m128i_i64[0];
      if ( (v22.m128i_i16[0] & 0x100) != 0 )
        v16 = v22.m128i_i32[1] & 0xFFFFF;
      else
        v16 = -1;
      *a2 = v16;
      *a4 = (v14 >> 3) & 0x1FF;
      *a5 = v14 & 0xFFFFFFFFFFFFF000uLL;
      *a3 = WORD1(v15);
      v17 = (16 * ((v14 >> 2) & 1)) | 2;
      if ( (v14 & 2) == 0 )
        v17 = 16 * ((v14 >> 2) & 1);
      v18 = v17 | 1;
      if ( (v14 & 1) == 0 )
        v18 = v17;
      v19 = v18 | 8;
      if ( (v15 & 0x20000000000000LL) == 0 )
        v19 = v18;
      v20 = v19 | 4;
      if ( (v15 & 0x10000000000000LL) == 0 )
        v20 = v19;
      *a6 = v20;
      return 1LL;
    }
  }
  if ( (*(_DWORD *)(v9 + 220) & 2) == 0 )
    return 0LL;
  *(_DWORD *)(v9 + 220) = 2;
  _InterlockedOr(v22.m128i_i32, 0);
  *a2 = -1;
  *a4 = -1;
  *a5 = 0LL;
  *a6 = 32LL;
  return 1LL;
}
