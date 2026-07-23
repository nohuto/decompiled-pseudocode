/*
 * XREFs of Xp10CompressBuffer @ 0x1801519AC
 * Callers:
 *     RtlCompressBufferXp10 @ 0x1801514B0 (RtlCompressBufferXp10.c)
 * Callees:
 *     Xp10ExecuteLz77PassMinMatchLen3 @ 0x18010E964 (Xp10ExecuteLz77PassMinMatchLen3.c)
 *     Xp10ComputeAndWriteCrc @ 0x180125778 (Xp10ComputeAndWriteCrc.c)
 *     Xp10ExecuteHuffmanEncode @ 0x180151FCC (Xp10ExecuteHuffmanEncode.c)
 *     Xp10ExecuteLz77PassMinMatchLen4 @ 0x1801524A0 (Xp10ExecuteLz77PassMinMatchLen4.c)
 *     Xp10ValidateParametersAndFillFrameHeader @ 0x180152C20 (Xp10ValidateParametersAndFillFrameHeader.c)
 *     memset$thunk$772440563353939046 @ 0x18016F030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall Xp10CompressBuffer(
        unsigned __int16 *a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int Size,
        unsigned __int32 *a6,
        __int64 a7)
{
  __int64 v7; // rsi
  __int64 v11; // r12
  __int64 result; // rax
  int v13; // ebx
  int v14; // edi
  unsigned int v15; // edi
  unsigned int v16; // r10d
  unsigned int v17; // r14d
  __int64 v18; // r15
  __int64 v19; // rax
  int v20; // r10d
  unsigned __int64 v21; // r8
  int matched; // eax
  __m128i v23; // xmm6
  unsigned int v24; // r11d
  unsigned int v25; // r9d
  int v26; // ecx
  _BYTE *v27; // r8
  unsigned int v28; // edi
  __int64 v29; // rdx
  __int64 v30; // rax
  unsigned int v31; // r9d
  _BYTE *v32; // r8
  unsigned __int64 v33; // rcx
  unsigned int v34; // ecx
  unsigned int v35; // eax
  _BYTE *v36; // r9
  int v37; // r11d
  unsigned int v38; // r8d
  unsigned int v39; // r10d
  __int64 v40; // rax
  __int64 v41; // r8
  _BYTE *v42; // r9
  unsigned int v43; // edx
  unsigned __int64 v44; // rax
  unsigned int v45; // [rsp+48h] [rbp-41h]
  int v46; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v47; // [rsp+50h] [rbp-39h]
  __int64 v48; // [rsp+58h] [rbp-31h] BYREF
  __m128i v49; // [rsp+68h] [rbp-21h] BYREF
  __int128 v50; // [rsp+78h] [rbp-11h] BYREF

  v7 = a7;
  v46 = 0;
  LODWORD(v48) = 0;
  WORD2(v48) = 0;
  v50 = 0LL;
  memset_thunk_772440563353939046((void *)(a7 + 24), 0, 0x12508uLL);
  v11 = v7 + 75040;
  *(_QWORD *)v7 = a1;
  *(_OWORD *)(v7 + 8) = 0LL;
  v47 = 1 << *a1;
  LODWORD(a7) = 0;
  v45 = 2 * v47;
  memset_thunk_772440563353939046(a4, 0, Size);
  result = Xp10ValidateParametersAndFillFrameHeader(a1, &v48);
  v13 = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)a4 = v48;
  a4[2] = WORD2(v48);
  v49.m128i_i64[0] = (__int64)a4;
  v14 = 0x1FFFFFFF;
  v49.m128i_i32[2] = 48;
  if ( Size <= 0x1FFFFFFF )
    v14 = Size;
  v15 = 8 * v14;
  v16 = 0;
  v17 = 0;
  v49.m128i_i32[3] = v15;
  v18 = 0LL;
  v48 = 0LL;
  while ( (unsigned int)v18 < a3 )
  {
    memset_thunk_772440563353939046((void *)(v7 + 28), 0, 0xB00uLL);
    memset_thunk_772440563353939046((void *)(v7 + 2844), 0, 0x400uLL);
    v19 = a3 - (unsigned int)v18;
    if ( (unsigned int)v19 >= v47 )
      v19 = v47;
    v20 = v19;
    v48 = (unsigned int)v19;
    v21 = a2 + v18 + v19;
    if ( ((*a1 >> 5) & 7) == 3 )
    {
      matched = Xp10ExecuteLz77PassMinMatchLen3(
                  v7,
                  (unsigned __int8 *)(v18 + a2),
                  v21,
                  (_WORD *)(v7 + 75040),
                  v11 + v45,
                  &a7);
    }
    else
    {
      if ( ((*a1 >> 5) & 7) != 4 )
        goto LABEL_13;
      matched = Xp10ExecuteLz77PassMinMatchLen4(v7, (int)v18 + (int)a2, v21, (int)v7 + 75040, v11 + v45, (__int64)&a7);
    }
    v20 = v48;
    v13 = matched;
LABEL_13:
    if ( v13 < 0 )
      return (unsigned int)v13;
    v23 = v49;
    if ( v49.m128i_i32[2] + 32 > v15 )
      return 3221225507LL;
    v49.m128i_i32[2] += 32;
    result = Xp10ExecuteHuffmanEncode(v7, (int)v18 + (int)a2, v20, (int)v7 + 75040, a7, (__int64)&v49, (__int64)&v46);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v16 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 8));
    v24 = 32;
    v25 = ((v46 & 1) << 29) | (v49.m128i_i32[2] - v16) & 0xFFFFFFF;
    v17 = _mm_cvtsi128_si32(_mm_srli_si128(v23, 12));
    v48 = v23.m128i_i64[0];
    v26 = v16 & 7;
    v27 = (_BYTE *)(v23.m128i_i64[0] + ((unsigned __int64)v16 >> 3));
    v28 = 8 - v26;
    if ( v16 + 32 <= v17 || (v24 = v17 - v16, v17 != v16) )
    {
      v29 = v28;
      if ( v28 >= v24 )
        v29 = v24;
      *v27 |= ((unsigned __int8)(v49.m128i_i8[8] - v16) & (unsigned __int8)byte_180181FE0[4 * v29]) << v26;
      v30 = v24 - (unsigned int)v29;
      v31 = v25 >> v28;
      v32 = v27 + 1;
      if ( (unsigned int)v30 >= 8 )
      {
        v33 = (unsigned __int64)(unsigned int)v30 >> 3;
        do
        {
          *v32 = v31;
          v30 = (unsigned int)(v30 - 8);
          v31 >>= 8;
          ++v32;
          --v33;
        }
        while ( v33 );
      }
      if ( (_DWORD)v30 )
        *v32 |= (unsigned __int8)v31 & byte_180181FE0[4 * v30];
      v16 += v24;
    }
    v18 = v47 + (unsigned int)v18;
    v15 = v49.m128i_u32[3];
  }
  v34 = v16 - 1;
  v35 = v16;
  v36 = (_BYTE *)(v48 + ((unsigned __int64)(v16 - 1) >> 3));
  v37 = ((_BYTE)v16 - 1) & 7;
  v38 = 1;
  v39 = 8 - v37;
  if ( v35 <= v17 || (v38 = v17 - v34, v17 != v34) )
  {
    v40 = v39;
    if ( v39 >= v38 )
      v40 = v38;
    v41 = v38 - (unsigned int)v40;
    *v36 |= (byte_180181FE0[4 * v40] & 1) << v37;
    v42 = v36 + 1;
    v43 = 1u >> v39;
    if ( (unsigned int)v41 >= 8 )
    {
      v44 = (unsigned __int64)(unsigned int)v41 >> 3;
      do
      {
        *v42 = v43;
        v41 = (unsigned int)(v41 - 8);
        v43 >>= 8;
        ++v42;
        --v44;
      }
      while ( v44 );
    }
    if ( (_DWORD)v41 )
      *v42 |= (unsigned __int8)v43 & byte_180181FE0[4 * v41];
  }
  HIDWORD(v50) = a3;
  *(_QWORD *)&v50 = a2;
  DWORD2(v50) = 0;
  result = Xp10ComputeAndWriteCrc(a1, (unsigned __int8 **)&v50, (__int64)&v49);
  if ( (int)result >= 0 )
  {
    *a6 = (unsigned __int32)v49.m128i_i32[2] >> 3;
    return (unsigned int)result;
  }
  return result;
}
