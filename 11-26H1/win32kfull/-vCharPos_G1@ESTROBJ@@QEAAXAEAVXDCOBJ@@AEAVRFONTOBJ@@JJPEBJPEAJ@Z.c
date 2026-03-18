/*
 * XREFs of ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1401DB290
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G1(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        const int *a6,
        int *a7)
{
  int v7; // ebx
  __int64 v10; // rax
  struct _GLYPHPOS *v12; // rbp
  int v13; // r12d
  float v14; // xmm8_4
  __m128i v15; // xmm6
  int v16; // r15d
  __m128i v17; // xmm7
  __int64 v18; // rsi
  unsigned __int16 *v19; // r9
  struct RFONTOBJ *v20; // rdx
  int v21; // edx
  __int64 v22; // rax
  char v23; // r11
  int v24; // edi
  GLYPHDEF **p_pgdf; // rbp
  int v28; // r14d
  GLYPHDEF *v29; // r8
  int v30; // ecx
  int v31; // ecx
  int v32; // eax
  __m128i v33; // xmm0
  int v34; // r9d
  unsigned int v35; // r8d
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  float v39; // xmm1_4
  __m128i v40; // xmm0
  int v41; // r9d
  unsigned int v42; // r8d
  __int64 v43; // rax
  __int64 v44; // rax
  __m128i v45; // xmm0
  int v46; // r9d
  unsigned int v47; // r8d
  __int64 v48; // rax
  __int64 v49; // rax
  int v50; // r9d
  unsigned int v51; // r8d
  __int64 v52; // rax
  __int64 v53; // rax
  int v54; // r8d
  unsigned int v55; // ecx
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rcx
  int v59; // ecx
  int v61[8]; // [rsp+40h] [rbp-78h] BYREF

  v7 = 0;
  v10 = *(_QWORD *)a3;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 648LL) )
  {
    v12 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v13 = 0;
    v14 = *(float *)(v10 + 400);
    v15 = (__m128i)*(unsigned int *)(v10 + 392);
    v16 = 0;
    v17 = (__m128i)*(unsigned int *)(v10 + 396);
    LODWORD(v18) = 0;
    v19 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v12->ptl.y = a5;
    v12->ptl.x = a4;
    v20 = (struct RFONTOBJ *)*(unsigned int *)this;
    v61[0] = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v20, v12, v19, v61, a2, this) )
    {
      v21 = *((_DWORD *)this + 58);
      if ( v61[0] )
      {
        v22 = *((_QWORD *)this + 8);
        v21 |= 2u;
        *((_DWORD *)this + 58) = v21;
        *((_QWORD *)this + 4) = v22;
      }
      if ( (*(_DWORD *)(*(_QWORD *)a3 + 268LL) & 0x10) == 0 || (v23 = 1, (v21 & 0x1400) != 0) )
        v23 = 0;
      v24 = *(_DWORD *)this;
      p_pgdf = &v12->pgdf;
      v28 = 0;
      while ( 1 )
      {
        v29 = *p_pgdf;
        v30 = v16;
        if ( v23 )
        {
          v16 = v18 + HIDWORD(v29[1].ppo);
          if ( (int)v18 >= v13 )
            LODWORD(v18) = v13;
          v13 = v18;
          if ( v16 <= v30 )
            v16 = v30;
        }
        else
        {
          v31 = v18 + LODWORD(v29[2].pgb);
          if ( v31 >= v13 )
            v31 = v13;
          v13 = v31;
          if ( (int)v18 + HIDWORD(v29[2].ppo) > v16 )
            v16 = v18 + HIDWORD(v29[2].ppo);
        }
        v32 = *a6++;
        v28 += v32;
        if ( a7 )
          *a7++ = v28;
        LODWORD(v18) = 0;
        v33 = (__m128i)COERCE_UNSIGNED_INT((float)v28);
        *(float *)v33.m128i_i32 = *(float *)v33.m128i_i32 * v14;
        v34 = _mm_cvtsi128_si32(v33);
        v35 = (unsigned __int8)(v34 >> 23);
        if ( v35 <= 0x9E )
        {
          v36 = v34 & 0x7FFFFF | 0x800000LL;
          v37 = v35 < 0x76 ? v36 >> (118 - (unsigned __int8)v35) : v36 << ((unsigned __int8)v35 - 118);
          v18 = (v37 + 0x80000000LL) >> 32;
          if ( v34 < 0 )
            LODWORD(v18) = -(int)v18;
        }
        LODWORD(v38) = 0;
        v39 = (float)(int)v18;
        if ( !--v24 )
          break;
        v40 = v15;
        p_pgdf += 3;
        *(float *)v40.m128i_i32 = *(float *)v15.m128i_i32 * v39;
        v41 = _mm_cvtsi128_si32(v40);
        v42 = (unsigned __int8)(v41 >> 23);
        if ( v42 <= 0x9E )
        {
          v43 = v41 & 0x7FFFFF | 0x800000LL;
          v44 = v42 < 0x76 ? v43 >> (118 - (unsigned __int8)v42) : v43 << ((unsigned __int8)v42 - 118);
          v38 = (v44 + 0x80000000LL) >> 32;
          if ( v41 < 0 )
            LODWORD(v38) = -(int)v38;
        }
        v45 = v17;
        *(float *)v45.m128i_i32 = *(float *)v17.m128i_i32 * v39;
        *((_DWORD *)p_pgdf + 2) = v38 + a4;
        LODWORD(v38) = 0;
        v46 = _mm_cvtsi128_si32(v45);
        v47 = (unsigned __int8)(v46 >> 23);
        if ( v47 <= 0x9E )
        {
          v48 = v46 & 0x7FFFFF | 0x800000LL;
          if ( v47 < 0x76 )
            v49 = v48 >> (118 - (unsigned __int8)v47);
          else
            v49 = v48 << ((unsigned __int8)v47 - 118);
          v38 = (v49 + 0x80000000LL) >> 32;
          if ( v46 < 0 )
            LODWORD(v38) = -(int)v38;
        }
        *((_DWORD *)p_pgdf + 3) = v38 + a5;
      }
      if ( (int)v18 <= v16 )
        LODWORD(v18) = v16;
      *(float *)v15.m128i_i32 = *(float *)v15.m128i_i32 * v39;
      v50 = _mm_cvtsi128_si32(v15);
      v51 = (unsigned __int8)(v50 >> 23);
      if ( v51 <= 0x9E )
      {
        v52 = v50 & 0x7FFFFF | 0x800000LL;
        v53 = v51 < 0x76 ? v52 >> (118 - (unsigned __int8)v51) : v52 << ((unsigned __int8)v51 - 118);
        v38 = (v53 + 0x80000000LL) >> 32;
        if ( v50 < 0 )
          LODWORD(v38) = -(int)v38;
      }
      *(float *)v17.m128i_i32 = *(float *)v17.m128i_i32 * v39;
      *((_DWORD *)this + 20) = v38;
      v54 = _mm_cvtsi128_si32(v17);
      v55 = (unsigned __int8)(v54 >> 23);
      if ( v55 <= 0x9E )
      {
        v56 = v54 & 0x7FFFFF | 0x800000LL;
        if ( v55 < 0x76 )
          v57 = v56 >> (118 - (unsigned __int8)v55);
        else
          v57 = v56 << ((unsigned __int8)v55 - 118);
        v58 = (v57 + 0x80000000LL) >> 32;
        if ( v54 < 0 )
          LODWORD(v58) = -(int)v58;
        v7 = v58;
      }
      *((_DWORD *)this + 21) = v7;
      *((_DWORD *)this + 24) = v13;
      *((_DWORD *)this + 26) = v18;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v59 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v59;
    }
  }
}
