/*
 * XREFs of ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x14010C304
 * Callers:
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 * Callees:
 *     ?bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z @ 0x1400C034C (-bGetGlyphMetricsPlus@RFONTOBJ@@QEAAHKPEAU_GLYPHPOS@@PEAGPEAHAEAVXDCOBJ@@PEAVESTROBJ@@@Z.c)
 *     ?vSqrt@EFLOAT@@QEAAXXZ @ 0x14010C0C0 (-vSqrt@EFLOAT@@QEAAXXZ.c)
 *     ?bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z @ 0x14010C710 (-bCalcBreakExtra@@YAEVEFLOAT@@JJPEAJ@Z.c)
 *     bFToL @ 0x140111E60 (bFToL.c)
 *     ??4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z @ 0x14033500C (--4EPOINTQF@@QEAAXAEAVEPOINTFL@@@Z.c)
 */

void __fastcall ESTROBJ::vCharPos_G2(
        ESTROBJ *this,
        struct XDCOBJ *a2,
        struct RFONTOBJ *a3,
        LONG a4,
        LONG a5,
        int a6,
        unsigned int a7,
        unsigned int a8,
        int *a9)
{
  __int64 v10; // rcx
  __int64 v11; // rdi
  int *v14; // r14
  int *v15; // r15
  struct _GLYPHPOS *v16; // r8
  unsigned __int16 *v17; // r9
  float v18; // xmm6_4
  POINTL *p_ptl; // r13
  int v20; // r12d
  struct RFONTOBJ *v21; // rdx
  __int64 v22; // rax
  int v23; // eax
  int v24; // esi
  __int64 v25; // r9
  __int64 v26; // r10
  __int64 v27; // rbx
  __int64 v28; // r11
  POINTL v29; // r8
  int v30; // edx
  int v31; // ecx
  int v32; // ecx
  int v33; // edx
  __int64 v34; // rcx
  __m128i v35; // xmm0
  int v36; // r8d
  unsigned int v37; // edx
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // r14d
  int v41; // ecx
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  int v45; // ecx
  __int64 v46; // r11
  int v47; // edx
  int v48; // ecx
  __int64 v49; // r11
  int v50; // [rsp+48h] [rbp-61h] BYREF
  int v51; // [rsp+4Ch] [rbp-5Dh] BYREF
  float v52; // [rsp+50h] [rbp-59h] BYREF
  __int64 v53; // [rsp+58h] [rbp-51h] BYREF
  __int64 v54; // [rsp+60h] [rbp-49h]
  __int64 v55; // [rsp+68h] [rbp-41h]
  __int64 v56; // [rsp+70h] [rbp-39h]
  __int64 v57; // [rsp+78h] [rbp-31h]
  __int64 v58; // [rsp+80h] [rbp-29h]
  __int64 v59; // [rsp+88h] [rbp-21h]

  v10 = *(_QWORD *)a3;
  LODWORD(v11) = 0;
  if ( !*(_DWORD *)(*(_QWORD *)a3 + 648LL) )
  {
    v14 = (int *)((char *)this + 116);
    v52 = 0.0;
    if ( a6 )
    {
      v50 = 0;
      bFToL(v10, &v50, 0LL);
      *v14 = v50;
      EPOINTQF::operator=(&v53, *(_QWORD *)a3 + 392LL);
      v46 = *v14;
      v57 = v46 * v53;
      v58 = v46 * v54;
      LODWORD(v11) = 0;
    }
    else
    {
      v58 = v54;
      v57 = v53;
    }
    v15 = (int *)((char *)this + 120);
    if ( (unsigned __int8)bCalcBreakExtra(*(unsigned int *)(*(_QWORD *)a3 + 400LL), a7, a8, (char *)this + 120) )
    {
      v11 = (__int64)this + 120;
      v47 = *v14;
      v48 = *(_DWORD *)(*(_QWORD *)a3 + 464LL);
      if ( *v15 + v48 + *v14 < 0 )
      {
        v14 = (int *)((char *)this + 116);
        *v15 = -(v48 + v47);
        v11 = (__int64)this + 120;
      }
      EPOINTQF::operator=(&v53, *(_QWORD *)a3 + 392LL);
      v49 = *v15;
      v15 = (int *)v11;
      v55 = v49 * v53;
      LODWORD(v11) = 0;
      v56 = v49 * v54;
      v52 = *(float *)(*(_QWORD *)a3 + 460LL);
    }
    else
    {
      v56 = v54;
      v55 = v53;
    }
    v16 = (struct _GLYPHPOS *)*((_QWORD *)this + 8);
    v17 = (unsigned __int16 *)*((_QWORD *)this + 5);
    v18 = *(float *)(*(_QWORD *)a3 + 404LL);
    p_ptl = &v16->ptl;
    v16->ptl.y = a5;
    v59 = 0x80000000LL;
    v16->ptl.x = a4;
    v20 = 0;
    v21 = (struct RFONTOBJ *)*(unsigned int *)this;
    v51 = 0;
    if ( (unsigned int)RFONTOBJ::bGetGlyphMetricsPlus(a3, v21, v16, v17, &v51, a2, this) )
    {
      if ( v51 )
      {
        v22 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 58) |= 2u;
        *((_QWORD *)this + 4) = v22;
      }
      v23 = *(_DWORD *)this;
      v24 = 0;
      v25 = v59;
      v26 = v55;
      v27 = v59;
      v28 = v56;
      v51 = v23;
      while ( 1 )
      {
        v29 = p_ptl[-1];
        v30 = v11;
        v31 = v20 + *(_DWORD *)(*(_QWORD *)&v29 + 16LL);
        if ( v24 < v31 )
          v31 = v24;
        LODWORD(v11) = v20 + *(_DWORD *)(*(_QWORD *)&v29 + 20LL);
        v24 = v31;
        v32 = *v14;
        if ( v30 > (int)v11 )
          LODWORD(v11) = v30;
        v33 = *(_DWORD *)(*(_QWORD *)&v29 + 12LL);
        v25 += *(_QWORD *)(*(_QWORD *)&v29 + 48LL);
        v20 += v33;
        v27 += *(_QWORD *)(*(_QWORD *)&v29 + 56LL);
        if ( v32 && v33 + v32 > 0 )
        {
          v25 += v57;
          v20 += v32;
          v27 += v58;
        }
        if ( *v15 && p_ptl[-2].x == LODWORD(v52) )
        {
          v20 += *v15;
          v25 += v26;
          v27 += v28;
        }
        if ( a9 )
        {
          LODWORD(v34) = 0;
          v35 = (__m128i)COERCE_UNSIGNED_INT((float)v20);
          *(float *)v35.m128i_i32 = *(float *)v35.m128i_i32 * v18;
          v36 = _mm_cvtsi128_si32(v35);
          v37 = (unsigned __int8)(v36 >> 23);
          if ( v37 <= 0x9E )
          {
            v38 = v36 & 0x7FFFFF | 0x800000LL;
            v39 = v37 < 0x76 ? v38 >> (118 - (unsigned __int8)v37) : v38 << ((unsigned __int8)v37 - 118);
            v34 = (v39 + 0x80000000LL) >> 32;
            if ( v36 < 0 )
              LODWORD(v34) = -(int)v34;
          }
          *a9++ = v34;
        }
        if ( !--v51 )
          break;
        p_ptl += 3;
        p_ptl->x = a4 + HIDWORD(v25);
        p_ptl->y = HIDWORD(v27) + a5;
      }
      v40 = v11 - v20;
      *((_DWORD *)this + 21) = HIDWORD(v27);
      if ( (int)v11 - v20 <= 0 )
        v40 = 0;
      *((_DWORD *)this + 20) = HIDWORD(v25);
      v52 = (float)((float)((float)SHIDWORD(v27) * 0.0625) * (float)((float)SHIDWORD(v27) * 0.0625))
          + (float)((float)((float)SHIDWORD(v25) * 0.0625) * (float)((float)SHIDWORD(v25) * 0.0625));
      EFLOAT::vSqrt((EFLOAT *)&v52);
      v41 = (unsigned __int8)(SLODWORD(v52) >> 23) - 114;
      if ( v41 <= 40 )
      {
        v42 = LODWORD(v52) & 0x7FFFFF | 0x800000LL;
        v43 = v41 < 0 ? v42 >> (114 - (unsigned __int8)(SLODWORD(v52) >> 23)) : v42 << v41;
        v11 = (v43 + 0x80000000LL) >> 32;
        if ( v52 < 0.0 )
          LODWORD(v11) = -(int)v11;
      }
      *((_DWORD *)this + 28) = v11;
      v44 = v24;
      *((_DWORD *)this + 26) = v40 + v11;
      if ( v20 < v24 )
        v44 = v20;
      *((_DWORD *)this + 24) = v44;
      *((_DWORD *)this + 25) = *(_DWORD *)(*(_QWORD *)a3 + 308LL);
      v45 = *(_DWORD *)(*(_QWORD *)a3 + 312LL);
      *((_DWORD *)this + 58) |= 4u;
      *((_DWORD *)this + 27) = v45;
    }
  }
}
