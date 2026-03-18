/*
 * XREFs of ?GrepGetCharWidthInfo@@YAHAEAVUDCOBJ@@PEAU_CHWIDTHINFO@@W4EntryPoint@RFONTOBJ@@@Z @ 0x1401DD840
 * Callers:
 *     NtGdiGetCharWidthInfo @ 0x1401DD760 (NtGdiGetCharWidthInfo.c)
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x140017F90 (-vInit@RFONTOBJ@@QEAAXAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 */

__int64 __fastcall GrepGetCharWidthInfo(struct UDCOBJ *a1, int *a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebx
  __int64 v6; // rdx
  int v7; // eax
  float v9; // xmm1_4
  int v10; // ecx
  __m128i v11; // xmm0
  int v12; // r10d
  unsigned int v13; // r9d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // ecx
  __m128i v18; // xmm0
  int v19; // r10d
  unsigned int v20; // r9d
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __m128i v24; // xmm0
  int v25; // edx
  unsigned int v26; // ecx
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // [rsp+50h] [rbp+8h] BYREF
  int v30; // [rsp+68h] [rbp+20h] BYREF
  int v31; // [rsp+6Ch] [rbp+24h]

  v2 = *(_QWORD *)a1;
  v3 = 0;
  v30 = 17;
  v31 = *(unsigned __int16 *)(v2 + 12);
  v29 = 0LL;
  RFONTOBJ::vInit((RFONTOBJ *)&v29, a1, 0, 2u, (const struct RFONTOBJ::Tag *)&v30);
  v6 = v29;
  if ( v29 && *(_QWORD *)(*(_QWORD *)(v29 + 96) + 3072LL) )
  {
    v7 = *(_DWORD *)(v29 + 704);
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 976LL) + 340LL) & 0x802) == 0x802 )
    {
      *a2 = v7;
      a2[1] = *(_DWORD *)(v6 + 708);
      v3 = *(_DWORD *)(v6 + 712);
    }
    else
    {
      v9 = *(float *)(v29 + 688);
      v10 = 0;
      v11 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * v7));
      *(float *)v11.m128i_i32 = *(float *)v11.m128i_i32 * v9;
      v12 = _mm_cvtsi128_si32(v11);
      v13 = (unsigned __int8)(v12 >> 23);
      if ( v13 <= 0x9E )
      {
        v14 = v12 & 0x7FFFFFLL | 0x800000;
        v15 = v13 < 0x76 ? v14 >> (118 - (unsigned __int8)v13) : v14 << ((unsigned __int8)v13 - 118);
        v16 = (v15 + 0x80000000LL) >> 32;
        v10 = -(int)v16;
        if ( v12 >= 0 )
          v10 = v16;
      }
      *a2 = v10;
      v17 = 0;
      v18 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * *(_DWORD *)(v6 + 708)));
      *(float *)v18.m128i_i32 = *(float *)v18.m128i_i32 * v9;
      v19 = _mm_cvtsi128_si32(v18);
      v20 = (unsigned __int8)(v19 >> 23);
      if ( v20 <= 0x9E )
      {
        v21 = v19 & 0x7FFFFFLL | 0x800000;
        v22 = v20 < 0x76 ? v21 >> (118 - (unsigned __int8)v20) : v21 << ((unsigned __int8)v20 - 118);
        v23 = (v22 + 0x80000000LL) >> 32;
        v17 = -(int)v23;
        if ( v19 >= 0 )
          v17 = v23;
      }
      a2[1] = v17;
      v24 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * *(_DWORD *)(v6 + 712)));
      *(float *)v24.m128i_i32 = *(float *)v24.m128i_i32 * v9;
      v25 = _mm_cvtsi128_si32(v24);
      v26 = (unsigned __int8)(v25 >> 23);
      if ( v26 <= 0x9E )
      {
        v27 = v25 & 0x7FFFFFLL | 0x800000;
        if ( v26 < 0x76 )
          v28 = v27 >> (118 - (unsigned __int8)v26);
        else
          v28 = v27 << ((unsigned __int8)v26 - 118);
        v3 = -((unsigned __int64)(v28 + 0x80000000LL) >> 32);
        if ( v25 >= 0 )
          v3 = (unsigned __int64)(v28 + 0x80000000LL) >> 32;
      }
    }
    a2[2] = v3;
    v3 = 1;
  }
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v29);
  return v3;
}
