/*
 * XREFs of pDCIAdjClr @ 0x14013DCBC
 * Callers:
 *     HT_CreateStandardMonoPattern @ 0x140100614 (HT_CreateStandardMonoPattern.c)
 *     HT_HalftoneBitmap @ 0x14013D908 (HT_HalftoneBitmap.c)
 *     HT_CreateHalftoneBrush @ 0x1402F44F8 (HT_CreateHalftoneBrush.c)
 * Callees:
 *     AdjustSrcDevGamma @ 0x14013ECA0 (AdjustSrcDevGamma.c)
 *     RaisePower @ 0x14013FBB0 (RaisePower.c)
 *     DivFD6 @ 0x14013FFE8 (DivFD6.c)
 *     Log @ 0x14014030C (Log.c)
 *     ComputeColorSpaceXForm @ 0x14014076C (ComputeColorSpaceXForm.c)
 *     CompareMemory @ 0x1401A9B48 (CompareMemory.c)
 *     GenCMYMaskXlate @ 0x1402F57F0 (GenCMYMaskXlate.c)
 *     TintAngle @ 0x1402F5A24 (TintAngle.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall pDCIAdjClr(
        __int64 a1,
        __m128i *a2,
        _QWORD *a3,
        unsigned int a4,
        __int16 a5,
        unsigned int a6,
        _DWORD *a7)
{
  __int64 result; // rax
  __int64 v12; // rdi
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  int v17; // r12d
  __int16 v18; // dx
  __int16 v19; // si
  _DWORD *v20; // rax
  int v21; // ebx
  __int64 v22; // xmm0_8
  __int16 v23; // ax
  __int8 v24; // edx^2
  __int64 v25; // xmm1_8
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm0
  __int128 v33; // xmm1
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  int v40; // eax
  __int16 v41; // ax
  char v42; // r14
  int v43; // eax
  __int64 v44; // rdx
  __m128i v45; // xmm2
  __int8 v47; // cl
  char v48; // al
  int v49; // ebx
  char v50; // r15
  __int64 v51; // r15
  unsigned __int16 epi16; // ax
  unsigned int v53; // ebx
  int v54; // r12d
  int v55; // r15d
  __int64 v56; // rdx
  unsigned int v57; // ebx
  __int64 v58; // xmm0_8
  __int128 v59; // xmm1
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm0
  __int128 v65; // xmm1
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm0
  __int128 v69; // xmm1
  __int128 v70; // xmm0
  __int128 v71; // xmm1
  int v72; // eax
  int v73; // ebx
  int v74; // eax
  int v75; // eax
  int v76; // ecx
  __int64 v77; // r8
  int v78; // eax
  __int64 v79; // xmm0_8
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int128 v82; // xmm1
  __int128 v83; // xmm0
  __int128 v84; // xmm1
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  __int128 v87; // xmm0
  __int128 v88; // xmm1
  __int128 v89; // xmm1
  __int128 v90; // xmm0
  __int128 v91; // xmm1
  __int128 v92; // xmm0
  __int128 v93; // xmm1
  int v94; // eax
  unsigned int *v95; // r8
  unsigned int i; // ecx
  unsigned int v97; // eax
  int v98; // ecx
  unsigned int v99; // ecx
  int v100; // ebx
  char v101; // r8
  unsigned __int8 v102; // r9
  char v103; // dl
  int v104; // ecx
  char v105; // al
  char *v106; // rcx
  __int64 v107; // rax
  int v108; // ecx
  int v109; // ecx
  char v110; // al
  __int16 v111; // [rsp+30h] [rbp-D0h]
  int v112; // [rsp+30h] [rbp-D0h]
  __int128 v113; // [rsp+38h] [rbp-C8h]
  __int128 v114; // [rsp+48h] [rbp-B8h]
  _DWORD *v115; // [rsp+58h] [rbp-A8h]
  _DWORD *v116; // [rsp+60h] [rbp-A0h]
  _DWORD *v117; // [rsp+68h] [rbp-98h]
  _DWORD *v118; // [rsp+70h] [rbp-90h]
  _DWORD *v119; // [rsp+78h] [rbp-88h]
  _DWORD *v120; // [rsp+80h] [rbp-80h]
  __int64 v121; // [rsp+88h] [rbp-78h]
  char *v122; // [rsp+90h] [rbp-70h]
  __int128 v123; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v124; // [rsp+B0h] [rbp-50h]
  __int128 v125; // [rsp+C0h] [rbp-40h] BYREF
  __m256i v126; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v127; // [rsp+F0h] [rbp-10h]
  __int128 v128; // [rsp+100h] [rbp+0h]
  __int128 v129; // [rsp+110h] [rbp+10h]
  __int128 v130; // [rsp+120h] [rbp+20h]
  __int128 v131; // [rsp+130h] [rbp+30h] BYREF
  __int128 v132; // [rsp+140h] [rbp+40h]
  __int128 v133; // [rsp+150h] [rbp+50h]
  __int128 v134; // [rsp+160h] [rbp+60h]
  __int128 v135; // [rsp+170h] [rbp+70h]
  int v136; // [rsp+180h] [rbp+80h]
  __int128 v137; // [rsp+190h] [rbp+90h] BYREF
  __int64 v138; // [rsp+1A0h] [rbp+A0h]
  __int128 v139; // [rsp+1A8h] [rbp+A8h]
  __int64 v140; // [rsp+1B8h] [rbp+B8h]
  __int128 v141; // [rsp+1C0h] [rbp+C0h]
  __int64 v142; // [rsp+1D0h] [rbp+D0h]

  result = 0LL;
  if ( a1 && (v12 = a1 + 40, *(_DWORD *)(a1 + 40) == 1414021956) )
  {
    EngAcquireSemaphore(*(HSEMAPHORE *)(a1 + 48));
    if ( !a3 )
      return v12;
    v16 = *(_QWORD *)(W32GetSessionState(v14, v13, v15) + 112);
    v121 = v16;
    if ( (a5 & 0x200) != 0 && *(_DWORD *)(v16 + 80) )
    {
      *(_DWORD *)(v16 + 80) = 0;
      v95 = (unsigned int *)(v16 + 84);
      for ( i = 1; i < 0x100; ++i )
      {
        v97 = (i - 16777217) / i;
        *v95++ = v97;
      }
    }
    if ( a4 + 312 >= a4 )
    {
      v122 = (char *)EngAllocMem(1u, a4 + 312, 0x30355448u);
      *a3 = v122;
      if ( v122 )
      {
        v17 = *(_DWORD *)(v12 + 184);
        DWORD1(v113) = a6;
        v111 = v17;
        v18 = a5 | 8;
        if ( (v17 & 0x80u) == 0 )
          v18 = a5;
        if ( HIBYTE(a6) == 1 || (v19 = v18, HIBYTE(a6) == 0xFE) && (*(_DWORD *)(v12 + 184) & 0x300) == 0x300 )
          v19 = v18 | 0x41;
        if ( (v19 & 0x10) != 0 )
        {
          v115 = (_DWORD *)(v12 + 3968);
          v116 = (_DWORD *)(v12 + 3964);
          v117 = (_DWORD *)(v12 + 3960);
          v118 = (_DWORD *)(v12 + 3980);
          v119 = (_DWORD *)(v12 + 3976);
          v20 = (_DWORD *)(v12 + 3972);
        }
        else
        {
          v115 = (_DWORD *)(v12 + 868);
          v116 = (_DWORD *)(v12 + 864);
          v117 = (_DWORD *)(v12 + 860);
          v118 = (_DWORD *)(v12 + 880);
          v119 = (_DWORD *)(v12 + 876);
          v20 = (_DWORD *)(v12 + 872);
        }
        v120 = v20;
        if ( (v19 & 8) != 0 )
          v19 &= ~0x10u;
        if ( !a2 )
          a2 = (__m128i *)(a1 + 12);
        v21 = 24;
        v22 = a2[1].m128i_i64[0];
        v23 = _mm_cvtsi128_si32(*a2);
        v137 = (__int128)*a2;
        v138 = v22;
        if ( v23 != 24 || (v24 = BYTE2(v137), (WORD1(v137) & 0xFFFC) != 0) )
        {
          v137 = DefaultCA;
          v24 = BYTE2(DefaultCA);
          v138 = 0LL;
        }
        v25 = *(_QWORD *)(v12 + 212);
        v139 = *(_OWORD *)(v12 + 196);
        v26 = *(_OWORD *)(v12 + 220);
        WORD1(v137) = v24 & 3;
        v140 = v25;
        v27 = *(_OWORD *)(v12 + 236);
        v123 = v26;
        v28 = *(_OWORD *)(v12 + 252);
        v124 = v27;
        v29 = *(_OWORD *)(v12 + 268);
        v125 = v28;
        v30 = *(_OWORD *)(v12 + 284);
        *(_OWORD *)v126.m256i_i8 = v29;
        v31 = *(_OWORD *)(v12 + 300);
        *(_OWORD *)&v126.m256i_u64[2] = v30;
        v32 = *(_OWORD *)(v12 + 316);
        v127 = v31;
        v33 = *(_OWORD *)(v12 + 332);
        v128 = v32;
        v34 = *(_OWORD *)(v12 + 348);
        v129 = v33;
        v35 = *(_OWORD *)(v12 + 364);
        v130 = v34;
        v36 = *(_OWORD *)(v12 + 380);
        v131 = v35;
        v37 = *(_OWORD *)(v12 + 396);
        v132 = v36;
        v38 = *(_OWORD *)(v12 + 412);
        v133 = v37;
        v39 = *(_OWORD *)(v12 + 428);
        v40 = *(_DWORD *)(v12 + 444);
        v134 = v38;
        v135 = v39;
        v136 = v40;
        if ( WORD2(v137) > 8u )
          WORD2(v137) = 0;
        if ( WORD3(v137) >= 0x540u )
        {
          if ( WORD3(v137) > 0xFDE8u )
            WORD3(v137) = -536;
        }
        else
        {
          WORD3(v137) = 1344;
        }
        if ( WORD4(v137) >= 0x540u )
        {
          if ( WORD4(v137) > 0xFDE8u )
            WORD4(v137) = -536;
        }
        else
        {
          WORD4(v137) = 1344;
        }
        if ( WORD5(v137) < 0x540u )
        {
          WORD5(v137) = 1344;
        }
        else if ( WORD5(v137) > 0xFDE8u )
        {
          WORD5(v137) = -536;
        }
        if ( WORD6(v137) > 0xFA0u )
          WORD6(v137) = 4000;
        if ( HIWORD(v137) >= 0x1770u )
        {
          if ( HIWORD(v137) > 0x2710u )
            HIWORD(v137) = 10000;
        }
        else
        {
          HIWORD(v137) = 6000;
        }
        if ( (__int16)v138 >= -100 )
        {
          if ( (__int16)v138 > 100 )
            LOWORD(v138) = 100;
        }
        else
        {
          LOWORD(v138) = -100;
        }
        if ( SWORD1(v138) < -100 )
        {
          WORD1(v138) = -100;
        }
        else if ( SWORD1(v138) > 100 )
        {
          WORD1(v138) = 100;
        }
        v41 = WORD2(v138);
        if ( SWORD2(v138) >= -100 )
        {
          if ( SWORD2(v138) > 100 )
          {
            v41 = 100;
            WORD2(v138) = 100;
          }
        }
        else
        {
          v41 = -100;
          WORD2(v138) = -100;
        }
        if ( SHIWORD(v138) < -100 )
        {
          HIWORD(v138) = -100;
        }
        else if ( SHIWORD(v138) > 100 )
        {
          HIWORD(v138) = 100;
        }
        if ( (v19 & 1) != 0 || v41 == -100 )
          HIDWORD(v138) = 65436;
        v42 = 2;
        if ( (v19 & 2) != 0 )
          WORD1(v137) = v24 & 2 | 1;
        LOWORD(v137) = v19 & 0x8059;
        v43 = AdjustSrcDevGamma(v12, (unsigned int)&v123, (unsigned int)&v137, HIBYTE(a6), v19);
        v45 = (__m128i)v137;
        if ( v43 )
        {
LABEL_50:
          v49 = v123 & 0x1007;
          LODWORD(v123) = v49;
          if ( (v19 & 0x40) != 0 )
          {
            v49 |= 0x2000u;
            LODWORD(v123) = v49;
          }
          v50 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v137, 2));
          if ( (v50 & 2) != 0 )
          {
            if ( !*(_DWORD *)(v121 + 1104) )
              *(_DWORD *)(v121 + 1104) = Log(8000000LL, v44, 1024LL);
            v49 |= 0x100u;
            LODWORD(v123) = v49;
          }
          if ( (v50 & 1) != 0 )
          {
            v49 |= 0x200u;
            LODWORD(v123) = v49;
          }
          v51 = v12 + 36;
          if ( (v49 & 1) == 0 )
            v51 = v12 + 72;
          if ( (((unsigned __int16)_mm_cvtsi128_si32(v45) ^ (unsigned __int16)v139) & 0x8008) != 0 )
          {
            ComputeColorSpaceXForm(v12, v51, (char *)&v131 + 4, 0xFFFFFFFFLL);
            v49 = v123;
          }
          epi16 = _mm_extract_epi16(v45, 2);
          if ( epi16 != WORD2(v139) )
          {
            ComputeColorSpaceXForm(v12, v12 + 36, (char *)&v126.m256i_u64[2] + 4, epi16);
            v49 = v123;
          }
          if ( (v49 & 0x2000) != 0 || (unsigned int)CompareMemory(v51, v12 + 36, 36LL) )
            v53 = v49 & 0xFFFF7FFF;
          else
            v53 = v49 | 0x8000;
          v54 = _mm_extract_epi16(v45, 6);
          v55 = _mm_extract_epi16(v45, 7);
          v56 = (unsigned int)(100 * v54);
          v126.m256i_i32[0] = 100 * v54;
          v126.m256i_i32[1] = 100 * v55;
          if ( v54 || 100 * v55 != 1000000 )
          {
            v57 = v53 | 8;
            LODWORD(v123) = v57;
            v126.m256i_i32[2] = DivFD6(0LL, v56);
            v126.m256i_i32[3] = DivFD6(0LL, (unsigned int)(100 * (10000 - v55)));
            v126.m256i_i32[4] = DivFD6(1000000LL, (unsigned int)(100 * (v55 - v54)));
          }
          else
          {
            v57 = v53 & 0xFFFFFFF7;
            *(__int64 *)((char *)v126.m256i_i64 + 4) = 1000000LL;
            LODWORD(v123) = v57;
            v126.m256i_i32[0] = 0;
            *(__int64 *)((char *)&v126.m256i_i64[1] + 4) = 0LL;
          }
          if ( (_WORD)v138 )
          {
            v57 |= 0x10u;
            HIDWORD(v124) = RaisePower(1015000LL, (unsigned int)(__int16)v138, 2LL);
            LODWORD(v123) = v57;
          }
          if ( WORD1(v138) )
          {
            v57 |= 0x20u;
            LODWORD(v123) = v57;
            LODWORD(v125) = 3750 * SWORD1(v138);
          }
          if ( (v57 & 0x2000) != 0 )
          {
            LOWORD(v17) = v111;
          }
          else
          {
            v98 = 10000 * SWORD2(v138);
            DWORD1(v125) = v98 + 1000000;
            if ( v98 )
            {
              v57 |= 0x40u;
              LODWORD(v123) = v57;
            }
            if ( HIWORD(v138) )
            {
              TintAngle((unsigned int)SHIWORD(v138), v56, (char *)&v125 + 8, (char *)&v125 + 12);
              v57 = v123 | 0x80;
              LODWORD(v123) = v123 | 0x80;
            }
            LOWORD(v17) = v111;
            v99 = v57;
            if ( (v111 & 4) != 0 && (v57 & 0x1001) == 0x1000 )
            {
              v57 |= 0x400u;
              LODWORD(v123) = v57;
              if ( (v111 & 1) != 0 )
              {
                v57 = v99 | 0xC00;
                LODWORD(v123) = v99 | 0xC00;
              }
            }
          }
          v58 = v138;
          v59 = v124;
          *(__m128i *)(v12 + 196) = v45;
          *(_QWORD *)(v12 + 212) = v58;
          *(_OWORD *)(v12 + 220) = v123;
          v60 = v125;
          *(_OWORD *)(v12 + 236) = v59;
          v61 = *(_OWORD *)v126.m256i_i8;
          *(_OWORD *)(v12 + 252) = v60;
          v62 = *(_OWORD *)&v126.m256i_u64[2];
          *(_OWORD *)(v12 + 268) = v61;
          v63 = v127;
          *(_OWORD *)(v12 + 284) = v62;
          v64 = v128;
          *(_OWORD *)(v12 + 300) = v63;
          v65 = v129;
          *(_OWORD *)(v12 + 316) = v64;
          v66 = v130;
          *(_OWORD *)(v12 + 332) = v65;
          v67 = v131;
          *(_OWORD *)(v12 + 348) = v66;
          v68 = v132;
          *(_OWORD *)(v12 + 364) = v67;
          v69 = v133;
          *(_OWORD *)(v12 + 380) = v68;
          v70 = v134;
          *(_OWORD *)(v12 + 396) = v69;
          v71 = v135;
          v72 = v136;
          *(_OWORD *)(v12 + 412) = v70;
          *(_OWORD *)(v12 + 428) = v71;
          *(_DWORD *)(v12 + 444) = v72;
        }
        else
        {
          v44 = 0LL;
          while ( v21-- )
          {
            v47 = *((_BYTE *)&v137 + v44);
            v48 = *((_BYTE *)&v139 + v44++);
            if ( v47 != v48 )
              goto LABEL_50;
          }
          v57 = v123;
        }
        v73 = v57 & 0x3DB4BFFF;
        LODWORD(v123) = v73;
        if ( (v73 & 0x97FE) == 0 )
        {
          v73 |= 0x80000000;
          LODWORD(v123) = v73;
        }
        if ( (v73 & 0x84C0) == 0 || (v73 & 0x2000) != 0 )
        {
          v73 |= 0x40000000u;
          LODWORD(v123) = v73;
        }
        if ( (v17 & 0x1000) != 0 || (v19 & 0x20) != 0 )
        {
          v73 |= 0x80000u;
          LODWORD(v123) = v73;
        }
        v74 = v73;
        if ( (v19 & 0x80u) == 0 )
        {
LABEL_80:
          if ( (v19 & 4) != 0 )
          {
            v73 |= 0x4000u;
            LODWORD(v123) = v73;
          }
          HIDWORD(v114) = 1000000;
          v142 = 0LL;
          LODWORD(v113) = 67372032;
          BYTE4(v113) = 3;
          v141 = 0LL;
          if ( (v73 & 0x2000) != 0 )
          {
            v73 |= 0x40000u;
            LOBYTE(v113) = 1;
            LODWORD(v123) = v73;
            v75 = 0xFFFF;
            DWORD1(v114) = 0;
          }
          else
          {
            DWORD1(v114) = 4096;
            v75 = 4095;
          }
          DWORD2(v113) = v75;
          HIDWORD(v113) = v75;
          LODWORD(v114) = v75;
          switch ( HIBYTE(a6) )
          {
            case 1u:
              BYTE6(v113) = 0;
              goto LABEL_92;
            case 2u:
LABEL_144:
              LODWORD(v141) = 0x100000;
              *(_QWORD *)((char *)&v141 + 4) = 0x40000000200000LL;
              HIDWORD(v141) = 0x10000;
              v142 = 0x4000000020000LL;
              WORD1(v113) = 1541;
              DWORD1(v114) = 0;
              goto LABEL_92;
            case 5u:
            case 6u:
              WORD1(v113) = 0;
              *(_QWORD *)&v114 = 255LL;
              BYTE1(v113) = 0;
              *((_QWORD *)&v113 + 1) = 0xFF000000FFLL;
              *(_QWORD *)((char *)&v141 + 4) = 0x200000001LL;
              goto LABEL_92;
            case 0xFCu:
              if ( BYTE2(a6) )
              {
                v110 = BYTE2(a6);
                if ( BYTE2(a6) != 4 )
                  v110 = 0;
                BYTE6(v113) = v110;
              }
              LODWORD(v114) = 126975;
              *((_QWORD *)&v113 + 1) = 0x3EFFF0001EFFFLL;
              v142 = -1LL;
              *(_QWORD *)&v141 = 0x7E00000001F0000LL;
              *((_QWORD *)&v141 + 1) = -134217728LL;
              WORD1(v113) = 3849;
              goto LABEL_92;
            case 0xFDu:
              *(_QWORD *)&v141 = 0x3E00000001F0000LL;
              LODWORD(v114) = 126975;
              *((_QWORD *)&v113 + 1) = 0x1EFFF0001EFFFLL;
              v142 = 0x7FFF7FFF7FFF7FFFLL;
              *((_QWORD *)&v141 + 1) = 0x7FFF7FFF7C000000LL;
              WORD1(v113) = 3593;
              goto LABEL_92;
          }
          if ( HIBYTE(a6) != 254 )
          {
            if ( HIBYTE(a6) != 255 )
            {
LABEL_92:
              v76 = DstOrderTable[BYTE6(v113)];
              v77 = BYTE1(v76);
              *(_OWORD *)(v122 + 24) = v113;
              DWORD2(v114) = v76;
              v78 = *((_DWORD *)&v141 + BYTE1(v76));
              v79 = v138;
              *(_OWORD *)(v122 + 40) = v114;
              *(__m128i *)v122 = v45;
              *((_QWORD *)v122 + 2) = v79;
              *v115 = v78;
              v80 = BYTE2(v76);
              v81 = HIBYTE(v76);
              *v116 = *((_DWORD *)&v141 + v80);
              *v117 = *((_DWORD *)&v141 + v81);
              *v118 = *((_DWORD *)&v141 + v77 + 3);
              *v119 = *((_DWORD *)&v141 + v80 + 3);
              *v120 = *((_DWORD *)&v141 + v81 + 3);
              v82 = v124;
              *(_OWORD *)(v122 + 56) = v123;
              v83 = v125;
              *(_OWORD *)(v122 + 72) = v82;
              v84 = *(_OWORD *)v126.m256i_i8;
              *(_OWORD *)(v122 + 88) = v83;
              v85 = *(_OWORD *)&v126.m256i_u64[2];
              *(_OWORD *)(v122 + 104) = v84;
              v86 = v127;
              *(_OWORD *)(v122 + 120) = v85;
              v87 = v128;
              *(_OWORD *)(v122 + 136) = v86;
              v88 = v129;
              *(_OWORD *)(v122 + 152) = v87;
              *(_OWORD *)(v122 + 168) = v88;
              v89 = v131;
              *(_OWORD *)(v122 + 184) = v130;
              v90 = v132;
              *(_OWORD *)(v122 + 200) = v89;
              v91 = v133;
              *(_OWORD *)(v122 + 216) = v90;
              v92 = v134;
              *(_OWORD *)(v122 + 232) = v91;
              v93 = v135;
              v94 = v136;
              *(_OWORD *)(v122 + 248) = v92;
              *(_OWORD *)(v122 + 264) = v93;
              *((_DWORD *)v122 + 70) = v94;
              *((_QWORD *)v122 + 36) = v12 + 32;
              *((_QWORD *)v122 + 37) = v12 + 808;
              *((_QWORD *)v122 + 38) = v12 + 832;
              return v12;
            }
            BYTE6(v113) = 4;
            LODWORD(v123) = v73 | 0x4000;
            goto LABEL_144;
          }
          if ( (v17 & 0x100) == 0 )
          {
            *(_QWORD *)&v141 = 0x38000000070000LL;
            LODWORD(v114) = 20479;
            *((_QWORD *)&v113 + 1) = 0x4FFF00004FFFLL;
            LODWORD(v123) = v73 & 0xFFFEFFFF;
            DWORD2(v141) = 29360128;
            WORD1(v113) = 2567;
            BYTE6(v113) = 4;
            goto LABEL_92;
          }
          v100 = v73 | 0x10000;
          LOBYTE(v112) = 0;
          LODWORD(v123) = v100;
          if ( *(_BYTE *)(v12 + 804) )
          {
            GenCMYMaskXlate(
              v12 + 548,
              v17 & 0x2000,
              *(unsigned __int8 *)(v12 + 448),
              *(unsigned __int8 *)(v12 + 449),
              *(unsigned __int8 *)(v12 + 450));
            *(_BYTE *)(v12 + 804) = 0;
          }
          if ( (v17 & 0x2000) != 0 )
          {
            LOWORD(v112) = -254;
          }
          else
          {
            v42 = 0;
            BYTE1(v112) = 0;
          }
          HIBYTE(v112) = -((v17 & 0x2000) != 0);
          BYTE2(v112) = *(_BYTE *)(v12 + 452) ^ HIBYTE(v112);
          if ( (v17 & 0x200) != 0 )
          {
            WORD3(v113) = -1280;
            *(_QWORD *)((char *)&v141 + 4) = 0xFF000000FF0000LL;
            LODWORD(v141) = 16711680;
LABEL_171:
            HIDWORD(v142) = v112;
            LODWORD(v142) = v112;
            HIDWORD(v141) = v112;
            goto LABEL_92;
          }
          v101 = 7;
          v102 = *(_BYTE *)(v12 + 453);
          v103 = 10;
          WORD1(v113) = 2567;
          DWORD2(v113) = (*(unsigned __int8 *)(v12 + 450) << 12) - 1;
          HIDWORD(v113) = (*(unsigned __int8 *)(v12 + 449) << 12) - 1;
          LODWORD(v114) = (*(unsigned __int8 *)(v12 + 448) << 12) - 1;
          LODWORD(v141) = *(unsigned __int16 *)(v12 + 458);
          DWORD1(v141) = *(unsigned __int16 *)(v12 + 456);
          DWORD2(v141) = *(unsigned __int16 *)(v12 + 454);
          if ( (unsigned int)v102 - 4 < 2 )
          {
            if ( v102 == 4 )
            {
              BYTE7(v113) = -7;
            }
            else
            {
              BYTE7(v113) = -8;
              v42 |= 1u;
            }
            v100 |= 0x400000u;
            LOBYTE(v112) = v42 & 3;
            v106 = (char *)*(&p8BPPXlate + (v42 & 3));
            v107 = 292LL;
            if ( v102 != 4 )
              v107 = 365LL;
            BYTE2(v112) = v106[v107];
            v105 = *v106;
            v104 = 249 - (v102 != 4);
          }
          else
          {
            WORD1(v113) = 2310;
            v104 = 250;
            BYTE7(v113) = -6;
            v101 = 6;
            v103 = 9;
            if ( (v17 & 0x2000) == 0 )
            {
LABEL_163:
              if ( *(_DWORD *)(v12 + 472) )
              {
                HIDWORD(v114) = *(_DWORD *)(v12 + 472);
                LODWORD(v123) = v100 | 0x20000;
                BYTE1(v113) = 0;
                BYTE2(v113) = v101 - 4;
                BYTE3(v113) = v103 - 4;
                v108 = v104 - 248;
                if ( v108 )
                {
                  v109 = v108 - 1;
                  if ( v109 )
                  {
                    if ( v109 == 1 )
                      BYTE7(v113) = -9;
                  }
                  else
                  {
                    BYTE7(v113) = -10;
                  }
                }
                else
                {
                  BYTE7(v113) = -11;
                }
              }
              BYTE6(v113) = 0;
              goto LABEL_171;
            }
            v100 |= 0x2000000u;
            BYTE2(v112) = *(_BYTE *)(v12 + 803);
            v105 = *(_BYTE *)(v12 + 548);
          }
          HIBYTE(v112) = v105;
          LODWORD(v123) = v100;
          goto LABEL_163;
        }
        v73 |= 0x100000u;
        LODWORD(v123) = v73;
        if ( (v19 & 0x100) != 0 )
        {
          v73 = v74 | 0x300000;
        }
        else
        {
          if ( (v19 & 0x200) != 0 )
          {
            v73 = v74 | 0x900000;
            LODWORD(v123) = v74 | 0x900000;
          }
          if ( (v19 & 0x400) == 0 )
            goto LABEL_80;
          v73 |= 0x1000000u;
        }
        LODWORD(v123) = v73;
        goto LABEL_80;
      }
    }
    *a7 = -2;
    EngReleaseSemaphore(*(HSEMAPHORE *)(v12 + 8));
    return 0LL;
  }
  else
  {
    *a7 = -12;
  }
  return result;
}
