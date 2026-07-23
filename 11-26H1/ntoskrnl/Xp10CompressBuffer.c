/*
 * XREFs of Xp10CompressBuffer @ 0x140811918
 * Callers:
 *     RtlCompressBufferXp10 @ 0x14080FF20 (RtlCompressBufferXp10.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     Xp10ComputeAndWriteCrc @ 0x140811ED8 (Xp10ComputeAndWriteCrc.c)
 *     Xp10ExecuteHuffmanEncode @ 0x14081277C (Xp10ExecuteHuffmanEncode.c)
 *     Xp10ExecuteLz77PassMinMatchLen3 @ 0x140812C50 (Xp10ExecuteLz77PassMinMatchLen3.c)
 *     Xp10ExecuteLz77PassMinMatchLen4 @ 0x140813398 (Xp10ExecuteLz77PassMinMatchLen4.c)
 *     Xp10ValidateParametersAndFillFrameHeader @ 0x140814B34 (Xp10ValidateParametersAndFillFrameHeader.c)
 */

__int64 __fastcall Xp10CompressBuffer(
        _WORD *a1,
        __int64 a2,
        unsigned int a3,
        _WORD *a4,
        unsigned int Size,
        _DWORD *a6,
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
  unsigned int v18; // r15d
  unsigned int v19; // eax
  unsigned int v20; // r10d
  int v21; // r8d
  int matched; // eax
  unsigned int v23; // r11d
  int v24; // ecx
  unsigned int v25; // r9d
  unsigned int v26; // edi
  _BYTE *v27; // r8
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // r9d
  _BYTE *v31; // r8
  unsigned __int64 v32; // rcx
  unsigned int v33; // ecx
  unsigned int v34; // eax
  _BYTE *v35; // r9
  int v36; // r11d
  unsigned int v37; // r8d
  unsigned int v38; // r10d
  __int64 v39; // rax
  __int64 v40; // r8
  unsigned int v41; // edx
  unsigned __int64 v42; // rax
  unsigned int v43; // [rsp+48h] [rbp-41h]
  int v44; // [rsp+4Ch] [rbp-3Dh] BYREF
  unsigned int v45; // [rsp+50h] [rbp-39h]
  __int64 v46; // [rsp+58h] [rbp-31h] BYREF
  __int128 v47; // [rsp+68h] [rbp-21h] BYREF
  __int128 v48; // [rsp+78h] [rbp-11h] BYREF
  __int128 v49; // [rsp+88h] [rbp-1h]

  v7 = a7;
  v44 = 0;
  LODWORD(v46) = 0;
  WORD2(v46) = 0;
  v48 = 0LL;
  memset_0((void *)(a7 + 24), 0, 0x12508uLL);
  v11 = v7 + 75040;
  *(_QWORD *)v7 = a1;
  *(_OWORD *)(v7 + 8) = 0LL;
  v45 = 1 << *a1;
  LODWORD(a7) = 0;
  v43 = 2 * v45;
  memset_0(a4, 0, Size);
  result = Xp10ValidateParametersAndFillFrameHeader(a1, &v46);
  v13 = result;
  if ( (int)result < 0 )
    return result;
  *(_DWORD *)a4 = v46;
  a4[2] = WORD2(v46);
  *(_QWORD *)&v47 = a4;
  v14 = 0x1FFFFFFF;
  DWORD2(v47) = 48;
  if ( Size <= 0x1FFFFFFF )
    v14 = Size;
  v15 = 8 * v14;
  v16 = 0;
  v17 = 0;
  HIDWORD(v47) = v15;
  v18 = 0;
  v46 = 0LL;
  while ( v18 < a3 )
  {
    memset_0((void *)(v7 + 28), 0, 0xB00uLL);
    memset_0((void *)(v7 + 2844), 0, 0x400uLL);
    v19 = a3 - v18;
    if ( a3 - v18 >= v45 )
      v19 = v45;
    v20 = v19;
    v46 = v19;
    v21 = a2 + v18 + v19;
    if ( (((unsigned __int16)*a1 >> 5) & 7) == 3 )
    {
      matched = Xp10ExecuteLz77PassMinMatchLen3(
                  v7,
                  v18 + (unsigned int)a2,
                  v21,
                  (int)v7 + 75040,
                  v11 + v43,
                  (__int64)&a7);
    }
    else
    {
      if ( (((unsigned __int16)*a1 >> 5) & 7) != 4 )
        goto LABEL_13;
      matched = Xp10ExecuteLz77PassMinMatchLen4(
                  v7,
                  v18 + (unsigned int)a2,
                  v21,
                  (int)v7 + 75040,
                  v11 + v43,
                  (__int64)&a7);
    }
    v20 = v46;
    v13 = matched;
LABEL_13:
    if ( v13 < 0 )
      return (unsigned int)v13;
    v49 = v47;
    if ( DWORD2(v47) + 32 > v15 )
      return 3221225507LL;
    DWORD2(v47) += 32;
    result = Xp10ExecuteHuffmanEncode(
               v7,
               v18 + (unsigned int)a2,
               v20,
               (int)v7 + 75040,
               a7,
               (__int64)&v47,
               (__int64)&v44);
    v13 = result;
    if ( (int)result < 0 )
      return result;
    v16 = DWORD2(v49);
    v23 = 32;
    v17 = HIDWORD(v49);
    v24 = BYTE8(v49) & 7;
    v46 = v49;
    v25 = ((v44 & 1) << 29) | (DWORD2(v47) - DWORD2(v49)) & 0xFFFFFFF;
    v26 = 8 - v24;
    v27 = (_BYTE *)(v49 + ((unsigned __int64)DWORD2(v49) >> 3));
    if ( (unsigned int)(DWORD2(v49) + 32) <= HIDWORD(v49)
      || (v23 = HIDWORD(v49) - DWORD2(v49), HIDWORD(v49) != DWORD2(v49)) )
    {
      v28 = v26;
      if ( v26 >= v23 )
        v28 = v23;
      *v27 |= ((unsigned __int8)(BYTE8(v47) - BYTE8(v49)) & (unsigned __int8)byte_140035FA0[4 * v28]) << v24;
      v29 = v23 - (unsigned int)v28;
      v30 = v25 >> v26;
      v31 = v27 + 1;
      if ( (unsigned int)v29 >= 8 )
      {
        v32 = (unsigned __int64)(unsigned int)v29 >> 3;
        do
        {
          *v31 = v30;
          v29 = (unsigned int)(v29 - 8);
          v30 >>= 8;
          ++v31;
          --v32;
        }
        while ( v32 );
      }
      if ( (_DWORD)v29 )
        *v31 |= (unsigned __int8)v30 & byte_140035FA0[4 * v29];
      v16 += v23;
    }
    v18 += v45;
    v15 = HIDWORD(v47);
  }
  v33 = v16 - 1;
  v34 = v16;
  v35 = (_BYTE *)(v46 + ((unsigned __int64)(v16 - 1) >> 3));
  v36 = ((_BYTE)v16 - 1) & 7;
  v37 = 1;
  v38 = 8 - v36;
  if ( v34 <= v17 || (v37 = v17 - v33, v17 != v33) )
  {
    v39 = v38;
    if ( v38 >= v37 )
      v39 = v37;
    v40 = v37 - (unsigned int)v39;
    *v35++ |= (byte_140035FA0[4 * v39] & 1) << v36;
    v41 = 1u >> v38;
    if ( (unsigned int)v40 >= 8 )
    {
      v42 = (unsigned __int64)(unsigned int)v40 >> 3;
      do
      {
        *v35 = v41;
        v40 = (unsigned int)(v40 - 8);
        v41 >>= 8;
        ++v35;
        --v42;
      }
      while ( v42 );
    }
    if ( (_DWORD)v40 )
      *v35 |= (unsigned __int8)v41 & byte_140035FA0[4 * v40];
  }
  HIDWORD(v48) = a3;
  *(_QWORD *)&v48 = a2;
  DWORD2(v48) = 0;
  result = Xp10ComputeAndWriteCrc(a1, &v48, &v47, v35);
  if ( (int)result >= 0 )
  {
    *a6 = DWORD2(v47) >> 3;
    return (unsigned int)result;
  }
  return result;
}
