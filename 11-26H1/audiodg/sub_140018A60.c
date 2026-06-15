/*
 * XREFs of sub_140018A60 @ 0x140018A60
 * Callers:
 *     sub_140018580 @ 0x140018580 (sub_140018580.c)
 *     sub_14002C870 @ 0x14002C870 (sub_14002C870.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 * Callees:
 *     memcmp @ 0x14004A694 (memcmp.c)
 */

__int64 __fastcall sub_140018A60(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __m128i v3; // xmm2
  __int64 v4; // xmm1_8
  int v5; // esi
  __int16 v6; // r13
  int v7; // r9d
  __m128i v8; // xmm2
  __int64 v9; // xmm1_8
  int v10; // r11d
  __int16 v11; // dx
  __int16 v12; // r9
  int v13; // r8d
  __int16 v14; // r10
  unsigned __int16 v16; // r9
  unsigned __int16 v17; // r8
  __int128 v18; // xmm0
  int v19; // eax
  unsigned __int16 v20; // cx
  unsigned __int16 v21; // r8
  __int128 v22; // xmm0
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  _BYTE v27[40]; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v28[40]; // [rsp+48h] [rbp-28h] BYREF

  v2 = 0;
  if ( !a1 )
    return a2 == 0LL;
  if ( a2 )
  {
    memset(v28, 0, sizeof(v28));
    memset(v27, 0, sizeof(v27));
    if ( *a1 == 0xFFFE )
    {
      if ( a1[8] != 22 )
      {
        v23 = *((_QWORD *)a1 + 3) - 0x10000000000003LL;
        if ( *((_QWORD *)a1 + 3) == 0x10000000000003LL )
          v23 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
        if ( v23 )
        {
          v24 = *((_QWORD *)a1 + 3) - 0x10000000000001LL;
          if ( *((_QWORD *)a1 + 3) == 0x10000000000001LL )
            v24 = *((_QWORD *)a1 + 4) - 0x719B3800AA000080LL;
          if ( v24 )
            return v2;
        }
      }
      v3 = *(__m128i *)a1;
      v4 = *((_QWORD *)a1 + 4);
      *(_OWORD *)&v28[16] = *((_OWORD *)a1 + 1);
      v5 = *(_DWORD *)&v28[20];
      *(__m128i *)v28 = v3;
      *(_QWORD *)&v28[32] = v4;
      v6 = _mm_cvtsi128_si32(v3);
    }
    else
    {
      if ( a1[8] && ((*a1 - 1) & 0xFFFD) != 0 )
        return v2;
      v16 = a1[1];
      if ( v16 != 2 && v16 != 1 )
        return v2;
      v17 = a1[7];
      if ( v17 != 8 && (((v17 - 16) & 0xFFE7) != 0 || v17 == 40) )
        return v2;
      v18 = *(_OWORD *)a1;
      v19 = *a1;
      *(_WORD *)&v28[18] = a1[7];
      *(_OWORD *)v28 = v18;
      *(_WORD *)v28 = -2;
      v6 = -2;
      v5 = 4 - (v16 != 1);
      *(_OWORD *)&v28[24] = xmmword_1400C57E0;
      *(_DWORD *)&v28[24] = v19;
    }
    *(_WORD *)&v28[16] = 22;
    v7 = *a2;
    if ( (_WORD)v7 != 0xFFFE )
    {
      if ( a2[8] && (((_WORD)v7 - 1) & 0xFFFD) != 0 )
        return v2;
      v20 = a2[1];
      if ( v20 != 2 && v20 != 1 )
        return v2;
      v21 = a2[7];
      if ( v21 != 8 && (((v21 - 16) & 0xFFE7) != 0 || v21 == 40) )
        return v2;
      v22 = *(_OWORD *)a2;
      *(_WORD *)&v27[18] = a2[7];
      *(_OWORD *)v27 = v22;
      *(_WORD *)v27 = -2;
      *(_OWORD *)&v27[24] = xmmword_1400C57E0;
      v10 = 4 - (v20 != 1);
      *(_DWORD *)&v27[24] = v7;
      v11 = -2;
      goto LABEL_9;
    }
    if ( a2[8] == 22 )
      goto LABEL_8;
    v25 = *((_QWORD *)a2 + 3) - 0x10000000000003LL;
    if ( *((_QWORD *)a2 + 3) == 0x10000000000003LL )
      v25 = *((_QWORD *)a2 + 4) - 0x719B3800AA000080LL;
    if ( !v25 )
      goto LABEL_8;
    v26 = *((_QWORD *)a2 + 3) - 0x10000000000001LL;
    if ( *((_QWORD *)a2 + 3) == 0x10000000000001LL )
      v26 = *((_QWORD *)a2 + 4) - 0x719B3800AA000080LL;
    if ( !v26 )
    {
LABEL_8:
      v8 = *(__m128i *)a2;
      v9 = *((_QWORD *)a2 + 4);
      *(_OWORD *)&v27[16] = *((_OWORD *)a2 + 1);
      v10 = *(_DWORD *)&v27[20];
      *(__m128i *)v27 = v8;
      *(_QWORD *)&v27[32] = v9;
      v11 = _mm_cvtsi128_si32(v8);
LABEL_9:
      *(_WORD *)&v27[16] = 22;
      if ( *(_WORD *)&v28[2] )
      {
        v12 = *(_WORD *)&v27[2];
      }
      else
      {
        v12 = 0;
        *(_WORD *)&v27[2] = 0;
        *(_DWORD *)&v27[8] = 0;
        *(_WORD *)&v27[12] = 0;
      }
      if ( *(_DWORD *)&v28[4] )
      {
        v13 = *(_DWORD *)&v27[4];
      }
      else
      {
        v13 = 0;
        *(_QWORD *)&v27[4] = 0LL;
      }
      if ( *(_WORD *)&v28[14] )
      {
        v14 = *(_WORD *)&v27[14];
      }
      else
      {
        v14 = 0;
        *(_DWORD *)&v27[12] = 0;
      }
      *(_DWORD *)&v27[20] = v5 != 0 ? v10 : 0;
      if ( !v6 )
      {
        v11 = 0;
        *(_WORD *)v27 = 0;
      }
      if ( !v12 )
      {
        *(_WORD *)&v28[2] = 0;
        *(_DWORD *)&v28[8] = 0;
        *(_WORD *)&v28[12] = 0;
      }
      if ( !v13 )
        *(_QWORD *)&v28[4] = 0LL;
      if ( !v14 )
        *(_DWORD *)&v28[12] = 0;
      *(_DWORD *)&v28[20] = (v5 != 0 ? v10 : 0) != 0 ? v5 : 0;
      if ( !v11 )
        *(_WORD *)v28 = 0;
      if ( !memcmp(&v28[24], &v27[24], 0x10uLL) && !memcmp(v28, v27, 0x28uLL) )
        return 1;
    }
  }
  return v2;
}
