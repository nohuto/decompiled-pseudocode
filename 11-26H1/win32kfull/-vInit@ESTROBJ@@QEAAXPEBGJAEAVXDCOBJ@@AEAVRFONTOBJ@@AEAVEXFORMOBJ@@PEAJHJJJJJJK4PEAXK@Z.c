/*
 * XREFs of ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594
 * Callers:
 *     ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904 (-GrepExtTextOutWLocked@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@.c)
 *     ?GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z @ 0x1401A60AC (-GrepGetTextExtentExW@@YAHAEAVDCOBJ@@PEAGKKPEAK2PEAUtagSIZE@@K@Z.c)
 *     ?GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z @ 0x1401C4B10 (-GrepGetTextExtentW@@YAHAEAVDCOBJ@@PEAGHPEAUtagSIZE@@I@Z.c)
 * Callees:
 *     ?vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z @ 0x1400BF628 (-vCharPos_H3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJVEFLOAT@@PEBH@Z.c)
 *     ?vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z @ 0x1400BFBEC (-vCharPos_H1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJVEFLOAT@@@Z.c)
 *     ?vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z @ 0x14010C304 (-vCharPos_G2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEAJ@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x140114094 (-vOrder@ERECTL@@QEAAXXZ.c)
 *     ?vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z @ 0x1401DB290 (-vCharPos_G1@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEBJPEAJ@Z.c)
 *     ?vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z @ 0x140208540 (-vCharPos_H4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJVEFLOAT@@3@Z.c)
 *     ?vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z @ 0x140211FC4 (-vCharPos_H2@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJVEFLOAT@@@Z.c)
 *     ?vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z @ 0x14022788C (-vCharPos_G4@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAJ@Z.c)
 *     ?bCalcEscapement@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z @ 0x14024F678 (-bCalcEscapement@RFONTOBJ@@QEAAHAEAVEXFORMOBJ@@J@Z.c)
 *     ?vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z @ 0x140335178 (-vCharPos_G3@ESTROBJ@@QEAAXAEAVXDCOBJ@@AEAVRFONTOBJ@@JJJJJPEBJPEAJ@Z.c)
 */

void __fastcall ESTROBJ::vInit(
        ESTROBJ *this,
        const unsigned __int16 *a2,
        unsigned int a3,
        struct XDCOBJ *a4,
        struct RFONTOBJ *a5,
        float **a6,
        int *a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        unsigned int a13,
        int a14,
        char a15,
        int *a16,
        void *a17,
        unsigned int a18)
{
  struct RFONTOBJ *v18; // rsi
  __int64 v21; // r12
  struct XDCOBJ *v22; // r11
  float v23; // xmm6_4
  int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int16 v27; // dx
  const unsigned __int16 *v28; // rcx
  __int64 v29; // rbx
  __int64 v30; // rax
  _DWORD *v31; // rcx
  int v32; // edx
  int v33; // r9d
  unsigned int v34; // ebp
  int v35; // r15d
  int v36; // ebx
  struct EXFORMOBJ *v37; // r10
  int v38; // r10d
  int v39; // eax
  int v40; // r9d
  int *v41; // r8
  __int64 v42; // rcx
  int v43; // edx
  unsigned int v44; // edx
  int v45; // edx
  float v46; // xmm1_4
  __int64 v47; // r12
  _DWORD *v48; // rsi
  __int64 v49; // rcx
  __m128i v50; // xmm0
  int v51; // r10d
  unsigned int v52; // r9d
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rcx
  __m128i v56; // xmm0
  int v57; // r10d
  unsigned int v58; // r9d
  __int64 v59; // rax
  __int64 v60; // rax
  int v61; // r10d
  __int64 v62; // rcx
  int *v63; // rcx
  __int64 v64; // rdx
  int v65; // eax
  __int64 v66; // rcx
  __int64 v67; // rdx
  int v68; // r8d
  int v69; // r8d
  __int64 v70; // rcx
  __int64 v71; // rax
  int v72; // eax
  int *v73; // rdx
  int *v74; // rcx
  int v75; // r11d
  int v76; // edx
  int v77; // ecx
  int v78; // eax
  int v79; // r9d
  _DWORD *v80; // rax
  __int64 v81; // rcx
  int *v82; // rax
  __int64 v83; // rdx
  int v84; // ebp
  ERECTL *v85; // r8
  int v86; // r15d
  int v87; // r9d
  int v88; // ecx
  int v89; // edx
  __int64 v90; // r8
  __int64 v91; // rcx
  __m128i v92; // xmm0
  int v93; // r10d
  unsigned int v94; // r9d
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // eax
  __int64 v98; // rdx
  int v99; // ecx
  int v100; // edx
  __int64 v101; // r8
  int v102; // [rsp+B0h] [rbp+18h]

  v18 = a5;
  v21 = a3;
  v22 = a4;
  v23 = **a6;
  *(_DWORD *)this = a3;
  *((_QWORD *)this + 7) = a5;
  *((_DWORD *)this + 58) = 0;
  v24 = a8 != 0 ? 0x400 : 0;
  *((_DWORD *)this + 1) = v24;
  v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a5 + 120LL) + 16LL);
  if ( v25 )
  {
    if ( (*(_DWORD *)(v25 + 4) & 0x10) != 0 )
    {
      v24 |= 0x80u;
      *((_DWORD *)this + 1) = v24;
    }
    *((_DWORD *)this + 31) = a18;
    *((_DWORD *)this + 2) = 0;
    *((_QWORD *)this + 6) = 0LL;
    *((_DWORD *)this + 32) = 0;
    *((_QWORD *)this + 4) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 5) = a2;
    *(_QWORD *)((char *)this + 116) = 0LL;
    if ( (*(_DWORD *)(*(_QWORD *)a5 + 84LL) & 4) != 0 )
    {
      *((_DWORD *)this + 1) = v24 | 0x100;
      v26 = *(_QWORD *)(*(_QWORD *)a5 + 120LL);
      v27 = *(unsigned __int8 *)(*(_QWORD *)(v26 + 32) + 108LL);
      if ( (*(_DWORD *)(*(_QWORD *)(v26 + 16) + 4LL) & 2) != 0 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v26 + 32) + 108LL) )
        {
          v28 = &a2[a3];
          while ( a2 < v28 )
            *a2++ -= v27;
        }
      }
    }
    v29 = *(_QWORD *)(*(_QWORD *)a5 + 104LL);
    if ( (*(_DWORD *)(v29 + 1808) & 0x40000) != 0 )
      *((_DWORD *)this + 58) |= 0x100u;
    v30 = (__int64)a17;
    if ( !a17 )
    {
      v30 = AllocFreeTmpBuffer((30 * a3 + 7) & 0xFFFFFFF8);
      if ( !v30 )
        return;
      *((_DWORD *)this + 58) |= 1u;
      v22 = a4;
    }
    *((_QWORD *)this + 8) = v30;
    v31 = *(_DWORD **)a5;
    v32 = *(_DWORD *)(*(_QWORD *)a5 + 208LL);
    if ( v32 != 1 || (v31[181] & 4) != 0 )
      v33 = a9;
    else
      v33 = v31[97];
    v34 = a13;
    v35 = a14;
    v102 = v33;
    if ( (a15 & 0x18) != 0 )
    {
      if ( (a15 & 0x18) == 8 )
      {
        v34 = a13 - v31[82];
        v35 = a14 - v31[83];
      }
    }
    else
    {
      v34 = a13 - v31[80];
      v35 = a14 - v31[81];
    }
    if ( a10 && a7 && v32 == 1 && (v31[181] & 4) == 0 )
    {
      v72 = *(_DWORD *)(v29 + 40);
      v36 = a8;
      if ( (v72 & 1) != 0 )
      {
        v73 = a7;
        if ( a8 )
        {
          v82 = &a7[2 * (_DWORD)v21];
          if ( a7 < v82 )
          {
            do
            {
              *v73 += a10;
              v73 += 2;
            }
            while ( v73 < v82 );
          }
        }
        else
        {
          v74 = &a7[(int)v21];
          if ( a7 < v74 )
          {
            do
              *v73++ += a10;
            while ( v73 < v74 );
          }
        }
      }
    }
    else
    {
      v36 = a8;
    }
    v37 = (struct EXFORMOBJ *)a6;
    if ( v33 | *(_DWORD *)(*(_QWORD *)a5 + 388LL) || ((_BYTE)(*a6)[8] & 1) == 0 || (*a6)[3] < 0.0 || v23 < 0.0 )
    {
      if ( v36 )
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapement(a5, (struct EXFORMOBJ *)a6, v33) )
          return;
        *((_DWORD *)this + 58) |= 8u;
        ESTROBJ::vCharPos_G4(this, a4, a5, v34, v35, a7);
      }
      else if ( v33 == *(_DWORD *)(*(_QWORD *)a5 + 388LL) )
      {
        if ( a7 )
          ESTROBJ::vCharPos_G1(this, v22, a5, v34, v35, a7, a16);
        else
          ESTROBJ::vCharPos_G2(this, v22, a5, v34, v35, a10, a11, a12, a16);
      }
      else
      {
        if ( !(unsigned int)RFONTOBJ::bCalcEscapement(a5, (struct EXFORMOBJ *)a6, v33) )
          return;
        *((_DWORD *)this + 58) |= 8u;
        *((_DWORD *)this + 1) |= 0x200u;
        ESTROBJ::vCharPos_G3(this, a4, a5, v34, v35, a10, a11, a12, a7, a16);
      }
      *((_QWORD *)this + 11) = *((_QWORD *)this + 10);
      v61 = a15 & 6;
      if ( (a15 & 6) != 0 )
      {
        v75 = *((_DWORD *)this + 21) / 2;
        if ( v61 != 6 )
          v75 = *((_DWORD *)this + 21);
        v76 = *((_DWORD *)this + 20) / 2;
        if ( v61 != 6 )
          v76 = *((_DWORD *)this + 20);
        v77 = 0;
        if ( v61 != 6 )
          v77 = -*((_DWORD *)this + 21);
        v78 = 0;
        v79 = -*((_DWORD *)this + 20);
        *((_DWORD *)this + 21) = v77;
        if ( v61 != 6 )
          v78 = v79;
        *((_DWORD *)this + 20) = v78;
        if ( (_DWORD)v21 )
        {
          v80 = (_DWORD *)(*((_QWORD *)this + 8) + 20LL);
          v81 = v21;
          do
          {
            *(v80 - 1) -= v76;
            *v80 -= v75;
            v80 += 6;
            --v81;
          }
          while ( v81 );
        }
        v34 -= v76;
        v35 -= v75;
      }
      v62 = *((_QWORD *)this + 8);
      *((_DWORD *)this + 18) = v34;
      *((_DWORD *)this + 19) = v35;
      if ( (_DWORD)v21 )
      {
        v63 = (int *)(v62 + 20);
        v64 = v21;
        do
        {
          *(v63 - 1) = (*(v63 - 1) + 8) >> 4;
          *v63 = (*v63 + 8) >> 4;
          v63 += 6;
          --v64;
        }
        while ( v64 );
      }
    }
    else
    {
      if ( a7 )
      {
        if ( v36 )
        {
          if ( (a15 & 0xA0) != 0 )
          {
            if ( !(unsigned int)RFONTOBJ::bCalcEscapement(a5, (struct EXFORMOBJ *)a6, v33) )
              return;
            *((_DWORD *)this + 58) |= 8u;
            v37 = (struct EXFORMOBJ *)a6;
          }
          ESTROBJ::vCharPos_H4(this, a4, a5, v34, v35, a7, LODWORD(v23), *(_DWORD *)(*(_QWORD *)v37 + 12LL));
        }
        else
        {
          ESTROBJ::vCharPos_H1(this, v22, a5, v34, v35, a7, LODWORD(v23));
        }
      }
      else if ( !*(_DWORD *)(*(_QWORD *)a5 + 304LL) || a11 | a10 )
      {
        ESTROBJ::vCharPos_H3(this, v22, a5, v34, v35, a10, a11, a12, LODWORD(v23), 0LL);
      }
      else
      {
        ESTROBJ::vCharPos_H2(this, v22, a5, v34, v35, LODWORD(v23));
      }
      v38 = *((_DWORD *)this + 20);
      v39 = *((_DWORD *)this + 21);
      *((_DWORD *)this + 22) = v38;
      *((_DWORD *)this + 23) = v39;
      v40 = a15 & 6;
      if ( (a15 & 6) != 0 )
      {
        v65 = 0;
        if ( v40 != 6 )
          v65 = -v38;
        v66 = *((_QWORD *)this + 8);
        *((_DWORD *)this + 20) = v65;
        v67 = v66 + 24;
        v68 = v38 / 2;
        if ( v40 != 6 )
          v68 = v38;
        v69 = (v68 + 8) >> 4;
        *(_DWORD *)(v66 + 16) -= v69;
        v34 = 16 * *(_DWORD *)(v66 + 16);
        if ( !*((_DWORD *)this + 2) && (_DWORD)v21 != 1 )
        {
          v70 = (unsigned int)(v21 - 1);
          do
          {
            v71 = v67;
            v67 += 24LL;
            *(_DWORD *)(v71 + 16) -= v69;
            --v70;
          }
          while ( v70 );
        }
      }
      v41 = a16;
      if ( a16 )
      {
        v45 = *((_DWORD *)this + 2);
        v46 = *(float *)(*(_QWORD *)a5 + 404LL);
        if ( !v45 || (*((_DWORD *)this + 58) & 0x1400) != 0 )
        {
          v47 = (unsigned int)(v21 - 1);
          if ( (_DWORD)v47 )
          {
            v48 = (_DWORD *)(*((_QWORD *)this + 8) + 40LL);
            do
            {
              LODWORD(v49) = 0;
              v50 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(16 * *v48 - v34));
              *(float *)v50.m128i_i32 = *(float *)v50.m128i_i32 * v46;
              v51 = _mm_cvtsi128_si32(v50);
              v52 = (unsigned __int8)(v51 >> 23);
              if ( v52 <= 0x9E )
              {
                v53 = v51 & 0x7FFFFFLL | 0x800000;
                v54 = v52 < 0x76 ? v53 >> (118 - (unsigned __int8)v52) : v53 << ((unsigned __int8)v52 - 118);
                v49 = (v54 + 0x80000000LL) >> 32;
                if ( v51 < 0 )
                  LODWORD(v49) = -(int)v49;
              }
              *v41 = v49;
              v48 += 6;
              ++v41;
              --v47;
            }
            while ( v47 );
            v18 = a5;
          }
          LODWORD(v55) = 0;
          v56 = (__m128i)COERCE_UNSIGNED_INT((float)(int)(((v34 + *((_DWORD *)this + 20)) & 0xFFFFFFF0) - v34));
          *(float *)v56.m128i_i32 = *(float *)v56.m128i_i32 * v46;
          v57 = _mm_cvtsi128_si32(v56);
          v58 = (unsigned __int8)(v57 >> 23);
          if ( v58 <= 0x9E )
          {
            v59 = v57 & 0x7FFFFFLL | 0x800000;
            v60 = v58 < 0x76 ? v59 >> (118 - (unsigned __int8)v58) : v59 << ((unsigned __int8)v58 - 118);
            v55 = (v60 + 0x80000000LL) >> 32;
            if ( v57 < 0 )
              LODWORD(v55) = -(int)v55;
          }
          *v41 = v55;
        }
        else
        {
          LODWORD(v91) = 0;
          v92 = (__m128i)COERCE_UNSIGNED_INT((float)(16 * v45));
          *(float *)v92.m128i_i32 = *(float *)v92.m128i_i32 * v46;
          v93 = _mm_cvtsi128_si32(v92);
          v94 = (unsigned __int8)(v93 >> 23);
          if ( v94 <= 0x9E )
          {
            v95 = v93 & 0x7FFFFFLL | 0x800000;
            v96 = v94 < 0x76 ? v95 >> (118 - (unsigned __int8)v94) : v95 << ((unsigned __int8)v94 - 118);
            v91 = (v96 + 0x80000000LL) >> 32;
            if ( v93 < 0 )
              LODWORD(v91) = -(int)v91;
          }
          v97 = 0;
          if ( (_DWORD)v21 )
          {
            v98 = v21;
            do
            {
              v97 += v91;
              *v41++ = v97;
              --v98;
            }
            while ( v98 );
          }
        }
      }
      v42 = *((_QWORD *)this + 8);
      v36 = a8;
      *((_DWORD *)this + 18) = 16 * *(_DWORD *)(v42 + 16);
      *((_DWORD *)this + 19) = 16 * *(_DWORD *)(v42 + 20);
    }
    if ( (a15 & 0xA0) != 0 )
    {
      *((_DWORD *)this + 58) |= a15 & 0xA0;
      v83 = *(_QWORD *)v18;
      if ( !(v102 | *(_DWORD *)(*(_QWORD *)v18 + 388LL) | v36) && ((_BYTE)(*a6)[8] & 1) != 0 )
      {
        v84 = (int)(v34 + 8) >> 4;
        v85 = (ESTROBJ *)((char *)this + 16 * *((unsigned int *)this + 32) + 132);
        v86 = (v35 + 8) >> 4;
        v87 = (*((_DWORD *)this + 22) + 8) >> 4;
        if ( (a15 & 0x20) != 0 )
        {
          v88 = v84 + *(_DWORD *)(v83 + 272);
          *(_DWORD *)v85 = v88;
          *((_DWORD *)v85 + 2) = v88 + v87;
          v89 = v86 + *(_DWORD *)(*(_QWORD *)v18 + 276LL);
          *((_DWORD *)v85 + 1) = v89;
          *((_DWORD *)v85 + 3) = v89 + *(_DWORD *)(*(_QWORD *)v18 + 292LL);
          ERECTL::vOrder(v85);
          ++*((_DWORD *)this + 32);
          v83 = *(_QWORD *)v18;
          v85 = (ERECTL *)(v90 + 16);
        }
        if ( a15 < 0 )
        {
          v99 = v84 + *(_DWORD *)(v83 + 280);
          *(_DWORD *)v85 = v99;
          *((_DWORD *)v85 + 2) = v99 + v87;
          v100 = v86 + *(_DWORD *)(*(_QWORD *)v18 + 284LL);
          *((_DWORD *)v85 + 1) = v100;
          *((_DWORD *)v85 + 3) = v100 + *(_DWORD *)(*(_QWORD *)v18 + 300LL);
          ERECTL::vOrder(v85);
          ++*((_DWORD *)this + 32);
          v85 = (ERECTL *)(v101 + 16);
        }
        *(_QWORD *)v85 = 0LL;
        *((_QWORD *)v85 + 1) = 0LL;
      }
    }
    v43 = *((_DWORD *)this + 58);
    if ( (*(_DWORD *)(*(_QWORD *)v18 + 12LL) & 1) != 0 )
      v44 = v43 | 0x200;
    else
      v44 = v43 & 0xFFFFFDFF;
    *((_DWORD *)this + 58) = v44;
  }
}
