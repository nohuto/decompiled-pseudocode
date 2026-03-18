/*
 * XREFs of ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x140208540
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

__int64 __fastcall ESTROBJ::vCharPos_H4(
        unsigned int *a1,
        struct XDCOBJ *a2,
        RFONTOBJ *a3,
        int a4,
        int a5,
        _DWORD *a6,
        int a7,
        float a8)
{
  struct _GLYPHPOS *v9; // rsi
  unsigned __int16 *v11; // r9
  int v14; // xmm7_4
  float v15; // xmm6_4
  struct RFONTOBJ *v16; // rdx
  __int64 result; // rax
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // r14d
  int v22; // r15d
  int v23; // r13d
  POINTL *p_ptl; // rbp
  int v25; // edi
  int v26; // r11d
  int v27; // r10d
  __int64 v28; // r8
  signed int v29; // esi
  int v30; // ebx
  POINTL v31; // rdx
  int v32; // eax
  signed int v33; // ecx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  __m128i v37; // xmm0
  int v38; // edi
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rax
  int v42; // r9d
  int v43; // r10d
  __m128i v44; // xmm0
  int v45; // r9d
  unsigned int v46; // edx
  __int64 v47; // rax
  __int64 v48; // rax
  BOOL v49; // r12d
  BOOL v50; // [rsp+40h] [rbp-68h]

  v9 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8);
  v11 = (unsigned __int16 *)*((_QWORD *)a1 + 5);
  v14 = a7;
  v50 = *(float *)&a7 == 16.0;
  v15 = a8;
  v49 = a8 == 16.0;
  v16 = (struct RFONTOBJ *)*a1;
  *(float *)&a7 = 0.0;
  result = RFONTOBJ::bGetGlyphMetricsPlus(a3, v16, v9, v11, &a7, a2, (struct ESTROBJ *)a1);
  LODWORD(v18) = 0;
  if ( (_DWORD)result )
  {
    if ( *(float *)&a7 != 0.0 )
    {
      v19 = *((_QWORD *)a1 + 8);
      a1[58] |= 2u;
      *((_QWORD *)a1 + 4) = v19;
    }
    v20 = *(_QWORD *)a3;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
    {
      v21 = -*(_DWORD *)(v20 + 312);
      v22 = -*(_DWORD *)(v20 + 308);
    }
    else
    {
      v21 = *(_DWORD *)(v20 + 308);
      v22 = *(_DWORD *)(v20 + 312);
    }
    v23 = a4 + 8;
    p_ptl = &v9->ptl;
    *(float *)&a7 = 0.0;
    v25 = 0;
    v9->ptl.x = v23 >> 4;
    v26 = 0;
    v27 = 0;
    v9->ptl.y = (a5 + 8) >> 4;
    LODWORD(v28) = 0;
    v29 = 0;
    a8 = *(float *)a1;
    v30 = 0;
    while ( 1 )
    {
      v31 = p_ptl[-1];
      v32 = v21 + v18;
      v33 = v28 + *(_DWORD *)(*(_QWORD *)&v31 + 16LL);
      if ( v33 >= v29 )
        v33 = v29;
      v29 = v33;
      v34 = v28 + *(_DWORD *)(*(_QWORD *)&v31 + 20LL);
      if ( v34 <= v25 )
        v34 = v25;
      v25 = v34;
      if ( v32 <= v26 )
        v32 = v26;
      v26 = v32;
      v35 = v22 + v18;
      if ( v22 + (int)v18 >= v27 )
        v35 = v27;
      v30 += *a6;
      v27 = v35;
      v36 = a6[1] + a7;
      a7 = v36;
      a6 += 2;
      if ( v50 )
      {
        LODWORD(v28) = 16 * v30;
      }
      else
      {
        LODWORD(v28) = 0;
        v44 = (__m128i)COERCE_UNSIGNED_INT((float)v30);
        *(float *)v44.m128i_i32 = *(float *)v44.m128i_i32 * *(float *)&v14;
        v45 = _mm_cvtsi128_si32(v44);
        v46 = (unsigned __int8)(v45 >> 23);
        if ( v46 <= 0x9E )
        {
          v47 = v45 & 0x7FFFFF | 0x800000LL;
          v48 = v46 < 0x76 ? v47 >> (118 - (unsigned __int8)v46) : v47 << ((unsigned __int8)v46 - 118);
          v28 = (v48 + 0x80000000LL) >> 32;
          if ( v45 < 0 )
            LODWORD(v28) = -(int)v28;
        }
        v36 = a7;
      }
      if ( v49 )
      {
        LODWORD(v18) = 16 * v36;
      }
      else
      {
        LODWORD(v18) = 0;
        v37 = (__m128i)COERCE_UNSIGNED_INT((float)v36);
        *(float *)v37.m128i_i32 = *(float *)v37.m128i_i32 * v15;
        v38 = _mm_cvtsi128_si32(v37);
        v39 = (unsigned __int8)(v38 >> 23);
        if ( v39 <= 0x9E )
        {
          v40 = v38 & 0x7FFFFF | 0x800000LL;
          v41 = v39 < 0x76 ? v40 >> (118 - (unsigned __int8)v39) : v40 << ((unsigned __int8)v39 - 118);
          v18 = (v41 + 0x80000000LL) >> 32;
          if ( v38 < 0 )
            LODWORD(v18) = -(int)v18;
        }
        v25 = v34;
      }
      --LODWORD(a8);
      if ( a8 == 0.0 )
        break;
      p_ptl += 3;
      p_ptl->x = ((int)v28 + v23) >> 4;
      p_ptl->y = (a5 + 8 - (int)v18) >> 4;
    }
    v42 = -(int)v18;
    a1[20] = v28;
    if ( (int)v28 <= v25 )
      LODWORD(v28) = v25;
    a1[26] = v28;
    a1[21] = v42;
    a1[24] = v29;
    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 340LL) & 0x40) != 0 )
    {
      result = (unsigned int)-v26;
      v43 = -v27;
    }
    else
    {
      result = (unsigned int)v27;
      v43 = v26;
    }
    a1[25] = v43;
    a1[27] = result;
    a1[58] |= 4u;
  }
  return result;
}
