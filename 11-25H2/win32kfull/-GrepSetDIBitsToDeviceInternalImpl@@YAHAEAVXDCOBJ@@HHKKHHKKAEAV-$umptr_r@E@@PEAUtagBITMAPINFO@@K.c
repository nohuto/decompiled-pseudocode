/*
 * XREFs of ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DE84
 * Callers:
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DD74 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x1401C44D8 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DLODCOBJ@@QEAA@XZ @ 0x140087BA4 (--0DLODCOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x14009F4AC (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14015073C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x140160B04 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x140161008 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1401DD684 (-vScale@ERECTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x14022FCCC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x140267AB0 (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x1403130F0 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall GrepSetDIBitsToDeviceInternalImpl(
        XDCOBJ *this,
        LONG a2,
        LONG a3,
        int a4,
        int a5,
        LONG a6,
        int a7,
        int a8,
        unsigned int a9,
        _QWORD *a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        int a14,
        void *a15)
{
  __int64 v15; // r11
  LONG v16; // r15d
  int v18; // r14d
  __int64 v19; // rax
  int v20; // ecx
  unsigned int v21; // r13d
  __int64 v22; // rsi
  int v23; // edx
  unsigned int v24; // ecx
  __int64 v25; // r9
  unsigned int v26; // eax
  unsigned int v27; // ecx
  unsigned int v28; // r12d
  unsigned __int64 v29; // rdx
  unsigned int v30; // r8d
  unsigned __int64 v31; // rdx
  ULONG v32; // ecx
  unsigned int v34; // r13d
  unsigned int v35; // ecx
  __int64 v36; // rsi
  unsigned int v37; // ebx
  __int64 v38; // r8
  int v39; // eax
  int v40; // edx
  int v41; // ecx
  LONG v42; // r10d
  LONG v43; // r9d
  LONG v44; // ecx
  LONG v45; // eax
  __int64 v46; // rdx
  __int64 v47; // r15
  void *v48; // rax
  _DWORD *v49; // rbx
  __int64 v50; // rdi
  int IsPalDefault; // eax
  _QWORD *v52; // r8
  int Palette; // eax
  __int64 v54; // r12
  _DWORD *XlateObject; // rax
  int v56; // r13d
  __int64 v57; // r9
  __int64 v58; // rax
  unsigned int v59; // eax
  unsigned __int64 v60; // rdx
  __int64 v61; // r11
  __int64 v62; // r10
  __int64 v63; // rsi
  __int64 v64; // rdi
  LONG left; // edx
  int right; // ecx
  int top; // r9d
  int bottom; // r8d
  LONG v69; // r13d
  LONG v70; // eax
  LONG v71; // r10d
  __int64 v72; // rdi
  LONG v73; // r11d
  LONG v74; // r12d
  int v75; // eax
  int v76; // r10d
  int v77; // r11d
  int v78; // esi
  int v79; // esi
  LONG v80; // ecx
  LONG v81; // edx
  struct REGION *v83; // rdx
  struct ECLIPOBJ *v84; // rdx
  XDCOBJ *v85; // r10
  LONG v86; // esi
  int v87; // r8d
  struct _RECTL v88; // xmm1
  int v89; // r11d
  LONG v90; // edx
  LONG v91; // r12d
  LONG v92; // r13d
  __int64 v93; // rax
  __int64 v94; // rax
  __int64 v95; // rax
  __int64 v96; // rax
  int v97; // ecx
  int v98; // ecx
  LONG v99; // r10d
  int v100; // eax
  int v101; // edx
  int v102; // esi
  __m128i v103; // xmm0
  bool v104; // cc
  __m128i v105; // xmm1
  LONG v106; // ecx
  int v107; // eax
  LONG v108; // r11d
  int v109; // eax
  LONG v110; // eax
  LONG v111; // edx
  LONG v112; // r8d
  signed int v113; // ecx
  struct _RECTL v114; // xmm3
  LONG v115; // eax
  LONG v116; // ecx
  struct _RECTL v117; // xmm0
  XDCOBJ *v118; // rsi
  __int64 v119; // rcx
  __int64 v120; // r9
  __int64 v121; // rax
  int v122; // ecx
  int v123; // ecx
  int v124; // eax
  __int64 v125; // rdx
  Gre::Base *v126; // rcx
  __int64 v127; // r8
  int v128; // eax
  unsigned int v129; // edx
  _BYTE *v130; // rcx
  char *v131; // rdx
  char v132; // al
  int v133; // eax
  __int64 v134; // rax
  XDCOBJ *v135; // r13
  struct REGION *v136; // rdx
  struct ECLIPOBJ *v137; // rdx
  __int64 v138; // rax
  __int16 v139; // r8
  __int64 v140; // r9
  __int64 v141; // r8
  int v142; // r10d
  int v143; // eax
  _DWORD *v144; // rax
  _QWORD *v145; // rax
  _DWORD *v146; // rax
  float v147; // xmm2_4
  struct _CLIPOBJ *v148; // [rsp+20h] [rbp-E0h]
  struct _RECTL *v149; // [rsp+30h] [rbp-D0h]
  __int64 v150; // [rsp+38h] [rbp-C8h]
  __int64 v151; // [rsp+40h] [rbp-C0h]
  unsigned int v152; // [rsp+60h] [rbp-A0h]
  unsigned int v153; // [rsp+64h] [rbp-9Ch]
  unsigned int v154; // [rsp+68h] [rbp-98h]
  int v156; // [rsp+70h] [rbp-90h]
  __int64 v157; // [rsp+78h] [rbp-88h]
  int v158; // [rsp+80h] [rbp-80h]
  unsigned int v159; // [rsp+84h] [rbp-7Ch]
  int v160; // [rsp+84h] [rbp-7Ch]
  LONG v161; // [rsp+84h] [rbp-7Ch]
  int v162; // [rsp+88h] [rbp-78h]
  LONG v163; // [rsp+88h] [rbp-78h]
  int v164; // [rsp+88h] [rbp-78h]
  int v165; // [rsp+8Ch] [rbp-74h]
  unsigned int v166; // [rsp+90h] [rbp-70h]
  signed int v167; // [rsp+90h] [rbp-70h]
  int v168; // [rsp+94h] [rbp-6Ch]
  unsigned int v169; // [rsp+98h] [rbp-68h]
  unsigned int v170; // [rsp+9Ch] [rbp-64h]
  unsigned int v171; // [rsp+A0h] [rbp-60h]
  void *v173; // [rsp+C8h] [rbp-38h] BYREF
  struct _RECTL v174; // [rsp+D0h] [rbp-30h] BYREF
  void *Src[2]; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v176; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v177; // [rsp+F8h] [rbp-8h]
  __int64 v178; // [rsp+100h] [rbp+0h]
  __int64 v179; // [rsp+108h] [rbp+8h]
  _QWORD *v180; // [rsp+110h] [rbp+10h] BYREF
  XDCOBJ *v181; // [rsp+118h] [rbp+18h]
  __int64 v182; // [rsp+120h] [rbp+20h] BYREF
  int v183; // [rsp+128h] [rbp+28h]
  __int64 v184; // [rsp+130h] [rbp+30h] BYREF
  char v185; // [rsp+138h] [rbp+38h]
  int v186; // [rsp+13Ch] [rbp+3Ch]
  _DWORD *v187; // [rsp+140h] [rbp+40h] BYREF
  _QWORD *v188; // [rsp+148h] [rbp+48h] BYREF
  unsigned __int64 v189; // [rsp+150h] [rbp+50h] BYREF
  int v190; // [rsp+158h] [rbp+58h]
  int v191; // [rsp+15Ch] [rbp+5Ch]
  struct _RECTL v192; // [rsp+160h] [rbp+60h] BYREF
  int v193; // [rsp+170h] [rbp+70h] BYREF
  int v194; // [rsp+174h] [rbp+74h]
  LONG v195; // [rsp+178h] [rbp+78h] BYREF
  LONG v196; // [rsp+17Ch] [rbp+7Ch]
  __int64 v197; // [rsp+180h] [rbp+80h] BYREF
  __int64 v198; // [rsp+188h] [rbp+88h]
  __int64 v199; // [rsp+190h] [rbp+90h] BYREF
  struct _RECTL v200; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v201; // [rsp+1B0h] [rbp+B0h] BYREF
  __int128 v202; // [rsp+1B8h] [rbp+B8h] BYREF
  __int128 v203; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v204; // [rsp+1E0h] [rbp+E0h]
  int v205; // [rsp+1E8h] [rbp+E8h]
  _QWORD v206[14]; // [rsp+1F0h] [rbp+F0h] BYREF
  struct _RECTL v207; // [rsp+260h] [rbp+160h] BYREF
  struct _RECTL v208; // [rsp+270h] [rbp+170h] BYREF
  _BYTE v209[4]; // [rsp+280h] [rbp+180h] BYREF
  __int128 v210; // [rsp+284h] [rbp+184h]
  _BYTE v211[4]; // [rsp+320h] [rbp+220h] BYREF
  struct _RECTL v212; // [rsp+324h] [rbp+224h] BYREF
  unsigned int v213; // [rsp+470h] [rbp+370h]

  v15 = *(_QWORD *)this;
  v16 = a2;
  v18 = 1;
  v173 = a15;
  v19 = *(_QWORD *)(v15 + 976);
  v181 = this;
  v20 = *(_DWORD *)(v19 + 108);
  v180 = a10;
  if ( (v20 & 1) != 0 )
    v16 = a4 + a2 - 1;
  v197 = 0LL;
  if ( !a11 )
    goto LABEL_190;
  if ( !*a10 )
    goto LABEL_190;
  if ( a12 > 2 )
    goto LABEL_190;
  v21 = a13;
  if ( a13 < 0x28 )
    goto LABEL_190;
  v22 = *a11;
  if ( (unsigned int)v22 < 0x28 )
    goto LABEL_190;
  v165 = a11[1];
  if ( v165 <= 0 )
    goto LABEL_190;
  v23 = a11[2];
  v168 = v23;
  if ( !v23 )
    goto LABEL_190;
  v24 = a11[4];
  v25 = *((unsigned __int16 *)a11 + 7);
  v159 = a11[8];
  Src[0] = (char *)a11 + v22;
  v176 = 0LL;
  v177 = 0LL;
  v179 = 0LL;
  v178 = 0LL;
  v166 = v24;
  if ( v23 < 0 )
  {
    LODWORD(v179) = 1;
    if ( v24 > 0xC )
      goto LABEL_190;
    v133 = 7225;
    if ( !_bittest(&v133, v24) )
      goto LABEL_190;
    v23 = -v23;
    v168 = v23;
  }
  v171 = 0;
  v170 = 0;
  v169 = 0;
  v162 = 0;
  v198 = 24LL;
  if ( v24 == 3 )
  {
    if ( a13 >= 0x34 )
    {
      v59 = 0;
      if ( a12 != 1 )
        v59 = a12;
      a12 = v59;
      if ( (_DWORD)v25 == 16 )
      {
        LODWORD(v176) = 4;
      }
      else
      {
        if ( (_DWORD)v25 != 32 )
          goto LABEL_190;
        LODWORD(v176) = 6;
      }
      v171 = a11[10];
      v170 = a11[11];
      v60 = v25 * (unsigned int)v165;
      v169 = a11[12];
      Src[0] = a11 + 10;
      v27 = 0;
      v154 = 0;
      v153 = 512;
      v28 = 2;
      if ( v60 <= 0xFFFFFFFF && (int)v60 + 31 >= (unsigned int)v60 )
      {
        v30 = a9;
        v152 = a9;
        v31 = a9 * (unsigned __int64)(((unsigned int)(v60 + 31) >> 3) & 0x1FFFFFFC);
        if ( v31 <= 0xFFFFFFFF )
        {
          v21 = a13;
          v158 = a8;
          goto LABEL_37;
        }
        HIDWORD(v177) = -1;
      }
LABEL_27:
      v32 = 534;
LABEL_28:
      EngSetLastError(v32);
      return 0LL;
    }
LABEL_190:
    v32 = 87;
    goto LABEL_28;
  }
  if ( v24 )
  {
    if ( v24 == 10 )
    {
      if ( !(unsigned int)DC::bIsCMYKColor((DC *)v15) )
        goto LABEL_190;
      if ( (_DWORD)v25 != 1 )
      {
        if ( (_DWORD)v25 != 4 )
        {
          if ( (_DWORD)v25 != 8 )
          {
            if ( (_DWORD)v25 != 32 )
              goto LABEL_190;
            LODWORD(v176) = 6;
            v27 = 0;
            v153 = 512;
            v28 = 16;
LABEL_187:
            v154 = v27;
            goto LABEL_22;
          }
          goto LABEL_218;
        }
        goto LABEL_217;
      }
LABEL_185:
      LODWORD(v176) = 1;
      v27 = 2;
LABEL_186:
      v28 = 1;
      v153 = 1024;
      goto LABEL_187;
    }
    if ( v24 != 2 )
    {
      if ( v24 != 12 )
      {
        if ( v24 != 1 )
        {
          if ( v24 != 11 )
          {
            if ( v24 == 4 )
            {
              LODWORD(v176) = 9;
            }
            else
            {
              if ( v24 != 5 )
                goto LABEL_190;
              LODWORD(v176) = 10;
            }
            v27 = 0;
            v153 = 512;
            v28 = 8;
            v30 = a9;
            v152 = a9;
LABEL_36:
            LODWORD(v31) = a11[5];
            v158 = 0;
            v154 = v27;
            goto LABEL_37;
          }
          if ( !(unsigned int)DC::bIsCMYKColor((DC *)v15) )
            goto LABEL_190;
          v23 = v168;
        }
        if ( (_DWORD)v25 != 8 )
          goto LABEL_190;
        LODWORD(v176) = 8;
        v27 = 256;
LABEL_35:
        v162 = 1;
        v30 = v23;
        v152 = v23;
        v28 = 1;
        v153 = 1024;
        goto LABEL_36;
      }
      if ( !v15 || !(unsigned int)DC::bIsCMYKColor((DC *)v15) )
        goto LABEL_190;
      v23 = v168;
    }
    if ( (_DWORD)v25 != 4 )
      goto LABEL_190;
    LODWORD(v176) = 7;
    v27 = 16;
    goto LABEL_35;
  }
  switch ( (_DWORD)v25 )
  {
    case 1:
      goto LABEL_185;
    case 4:
LABEL_217:
      LODWORD(v176) = 2;
      v27 = 16;
      goto LABEL_186;
    case 8:
LABEL_218:
      LODWORD(v176) = 3;
      v27 = 256;
      goto LABEL_186;
  }
  v26 = 0;
  v27 = 0;
  if ( a12 != 1 )
    v26 = a12;
  v154 = 0;
  a12 = v26;
  v153 = 512;
  if ( (_DWORD)v25 == 16 )
  {
    LODWORD(v176) = 4;
    v28 = 2;
    v171 = 31744;
    v170 = 992;
    v169 = 31;
    goto LABEL_203;
  }
  if ( (_DWORD)v25 == 24 )
  {
    LODWORD(v176) = 5;
    v28 = 8;
LABEL_203:
    a12 = v26;
    goto LABEL_22;
  }
  if ( (_DWORD)v25 != 32 )
    goto LABEL_190;
  LODWORD(v176) = 6;
  v28 = 8;
LABEL_22:
  v29 = v25 * (unsigned int)v165;
  if ( v29 > 0xFFFFFFFF || (int)v29 + 31 < (unsigned int)v29 )
    goto LABEL_27;
  v30 = a9;
  v152 = a9;
  v31 = a9 * (unsigned __int64)(((unsigned int)(v29 + 31) >> 3) & 0x1FFFFFFC);
  if ( v31 > 0xFFFFFFFF )
  {
    HIDWORD(v177) = -1;
    goto LABEL_27;
  }
  v158 = a8;
LABEL_37:
  v213 = v21 - v22;
  v34 = v27;
  HIDWORD(v177) = v31;
  if ( v159 && v159 <= v27 )
    v34 = v159;
  if ( v180[1] - v180[2] < (unsigned __int64)(unsigned int)v31 )
    goto LABEL_190;
  v35 = v168;
  HIDWORD(v176) = v165;
  *(_QWORD *)&v207.left = *((_QWORD *)this + 2);
  if ( v166 - 4 > 1 )
    v35 = v30;
  LODWORD(v177) = v35;
  if ( (*(_DWORD *)(v15 + 36) & 0x10000) != 0 )
    goto LABEL_190;
  v36 = *(_QWORD *)(v15 + 48);
  v196 = a3;
  v195 = v16;
  if ( v166 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage(this, v166) || v142 || v173) )
    v152 = 0;
  if ( a14 )
  {
    DC::QuickInitXform(v15, &v199, 516LL);
    v58 = v199;
    if ( (*(_BYTE *)(v199 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1(v199, &v195, 1LL, v57);
      v16 = v195;
      a3 = v196;
      v58 = v199;
    }
    if ( v152 && a11[4] - 4 <= 1 )
    {
      v37 = (*(_BYTE *)(v58 + 32) & 1) != 0 ? v152 : 0;
      v152 = v37;
    }
    else
    {
      v37 = v152;
    }
  }
  else
  {
    v37 = v152;
  }
  v38 = *(_QWORD *)this;
  v39 = a4;
  v40 = a5;
  v193 = a4;
  v41 = *(_DWORD *)(v38 + 520);
  v194 = a5;
  if ( (v41 & 1) != 0 && (v41 & 2) == 0 )
  {
    v201 = *(_QWORD *)(v38 + 524);
    EPOINTL::vScale((EPOINTL *)&v193, (const struct POINTFL *)&v201);
    v40 = v194;
    v39 = v193;
  }
  v42 = a3;
  v43 = v39 + v16;
  v208.left = v16;
  v44 = v43;
  v208.top = a3;
  v208.right = v39 + v16;
  v45 = v40 + a3;
  v208.bottom = v40 + a3;
  if ( v16 > v43 )
  {
    v44 = v16;
    v208.left = v43;
    v208.right = v16;
    v16 = v43;
  }
  if ( a3 > v40 + a3 )
  {
    v45 = a3;
    v208.top = v40 + a3;
    v208.bottom = a3;
    v42 = v40 + a3;
  }
  if ( v42 == v45 || v16 == v44 || !v37 )
    return v37;
  if ( (*(_DWORD *)(*(_QWORD *)this + 36LL) & 0xE0) != 0 )
    XDCOBJ::vAccumulate(this, (struct ERECTL *)&v208);
  DLODCOBJ::DLODCOBJ((DLODCOBJ *)v206);
  v204 = 0LL;
  v203 = 0LL;
  v205 = 0;
  v206[0] = 0LL;
  memset(&v206[10], 0, 24);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v203, this, 0) )
  {
    v46 = *(_QWORD *)this;
    v47 = *(_QWORD *)(*(_QWORD *)this + 496LL);
    *(_QWORD *)&v174.left = v47;
    if ( v47 )
    {
      v48 = v173;
      v49 = 0LL;
      if ( !v173 )
      {
        v48 = *(void **)(*(_QWORD *)(v46 + 976) + 248LL);
        v173 = v48;
      }
      v160 = *(_DWORD *)(v46 + 120);
      if ( (v160 & 0x10000000) != 0 && (!v48 || v166 - 10 > 2) )
        v160 = v160 & 0xFFFFFFF | 0x20000000;
      v50 = *(_QWORD *)(v47 + 128);
      v183 = 0;
      v182 = 0LL;
      v188 = *(_QWORD **)(v46 + 88);
      IsPalDefault = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v188);
      v52 = v188;
      if ( !IsPalDefault )
        *(_QWORD *)(v47 + 176) = *v188;
      v156 = 1;
      v157 = 0LL;
      v187 = 0LL;
      if ( a12 )
      {
        if ( a12 == 1 )
        {
          if ( v213 >= 2 * (unsigned __int64)v34 )
          {
            if ( !(unsigned int)EXLATEOBJ::bMakeXlate(&v187, Src[0], v52, v47, v34, v154) )
            {
              v54 = 0LL;
              v156 = 0;
              v49 = v187;
              goto LABEL_267;
            }
            v49 = v187;
            v157 = (__int64)v187;
            if ( *(_DWORD *)(*(_QWORD *)&v207.left + 3072LL) && (*(_DWORD *)(v36 + 40) & 1) != 0 )
            {
              if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v182, v28, v154, 0LL, v171, v170, v169, v153, 1) )
              {
                v141 = *(_QWORD *)(v47 + 128);
                if ( !v141 )
                  v141 = *(_QWORD *)(v36 + 1792);
                XEPALOBJ::vGetEntriesFrom(&v182, v188, v141, Src[0], v34);
                v56 = 1;
              }
              else
              {
                v56 = 0;
              }
            }
            else
            {
              v56 = 0;
            }
LABEL_89:
            v54 = (__int64)v49;
            goto LABEL_90;
          }
        }
        else
        {
          v143 = *(_DWORD *)(v47 + 96);
          if ( v143 == (_DWORD)v176 || v143 == 2 && (_DWORD)v176 == 7 || v143 == 3 && (_DWORD)v176 == 8 )
          {
            v56 = 0;
            v54 = *(_QWORD *)&v207.left + 4552LL;
            v157 = *(_QWORD *)&v207.left + 4552LL;
            goto LABEL_90;
          }
        }
      }
      else
      {
        Palette = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v182, v28, v154, 0LL, v171, v170, v169, v153, 1);
        v54 = 0LL;
        if ( !Palette )
        {
LABEL_88:
          v156 = 0;
          v56 = 0;
          goto LABEL_89;
        }
        if ( !v34 )
        {
LABEL_65:
          LODWORD(v151) = 0xFFFFFF;
          LODWORD(v150) = 0;
          LODWORD(v149) = 0;
          XlateObject = CreateXlateObject(v173, v160, v182, v50, v188, v188, v149, v150, v151, 0);
          v187 = XlateObject;
          v49 = XlateObject;
          if ( XlateObject )
          {
            v56 = 0;
            v54 = (__int64)XlateObject;
            v157 = (__int64)XlateObject;
LABEL_90:
            v184 = 0LL;
            v185 = 0;
            v186 = 0;
            SURFMEM::bCreateDIB(
              (SURFMEM *)&v184,
              (struct _DEVBITMAPINFO *)&v176,
              (void *)(v180[2] + *v180),
              0LL,
              0,
              0LL,
              0LL,
              0,
              1,
              0,
              0);
            if ( v156 && v184 )
            {
              *(_DWORD *)(v184 + 92) = 0;
              if ( (v205 & 1) == 0 )
                goto LABEL_167;
              v61 = *(_QWORD *)v181;
              v62 = *(_DWORD *)(*(_QWORD *)v181 + 40LL) & 1LL;
              v63 = *(int *)(*(_QWORD *)v181 + 8 * v62 + 1016);
              if ( (unsigned __int64)(v63 + v208.left + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_167;
              if ( (unsigned __int64)(v63 + v208.right + 0x80000000LL) > 0xFFFFFFFF )
                goto LABEL_167;
              v64 = *(int *)(v61 + 8 * v62 + 1020);
              if ( (unsigned __int64)(v64 + v208.top + 0x80000000LL) > 0xFFFFFFFF
                || (unsigned __int64)(v64 + v208.bottom + 0x80000000LL) > 0xFFFFFFFF )
              {
                goto LABEL_167;
              }
              left = v63 + v208.left;
              v208.left += v63;
              right = *(_DWORD *)(v61 + 8 * v62 + 1016) + v208.right;
              v208.right = right;
              top = *(_DWORD *)(v61 + 8 * v62 + 1020) + v208.top;
              v208.top = top;
              bottom = *(_DWORD *)(v61 + 8 * v62 + 1020) + v208.bottom;
              v208.bottom = bottom;
              if ( v56 )
              {
                v134 = v182;
                if ( v182 )
                {
                  INC_SHARE_REF_CNT(v182);
                  v134 = v182;
                }
                *(_QWORD *)(v184 + 128) = v134;
                bottom = v208.bottom;
                right = v208.right;
                top = v208.top;
                left = v208.left;
              }
              v69 = a6;
              v70 = v168 - a5 - a7;
              v71 = a6 + a4;
              v72 = *(_QWORD *)(v47 + 48);
              v73 = v168 - a7;
              v207.left = a6;
              v207.top = v70;
              v207.right = a6 + a4;
              v207.bottom = v168 - a7;
              if ( v162 )
              {
                v135 = v181;
                XDCOBJ::prgnEffRao((DC **)v181);
                XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v211);
                XCLIPOBJ::vSetup((XCLIPOBJ *)v211, v136, (const struct ERECTL *)&v208, 0);
                if ( !ERECTL::bEmpty((ERECTL *)&v212) )
                {
                  if ( (*(_DWORD *)(*(_QWORD *)v135 + 36LL) & 0xE0) != 0 )
                  {
                    v200 = v212;
                    XDCOBJ::vAccumulateTight(v135, v137, (struct ERECTL *)&v200);
                  }
                  v138 = v184;
                  ++*(_DWORD *)(v47 + 92);
                  if ( bClipSrcDstRectsAndValidate(
                         (struct _SURFOBJ *)(v47 + 24),
                         (struct _SURFOBJ *)((v138 + 24) & -(__int64)(v138 != 0)),
                         v135,
                         0LL,
                         v148,
                         &v208,
                         &v207) )
                  {
                    if ( (unsigned int)DC::bDpiScaleTransform(*(DC **)v135) )
                    {
                      if ( (v139 & 2) != 0 )
                        (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64, __int64, __int64, struct _RECTL *, struct _RECTL *, __int64, int))(v72 + 2840))(
                          v47 + 24,
                          (v184 + 24) & -(__int64)(v184 != 0),
                          0LL,
                          v211,
                          v54,
                          v140,
                          v140,
                          &v208,
                          &v207,
                          v140,
                          3);
                      else
                        ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, __int64, __int64, __int64, struct _RECTL *, struct _RECTL *, __int64, int))EngStretchBlt)(
                          v47 + 24,
                          (v184 + 24) & -(__int64)(v184 != 0),
                          0LL,
                          v211,
                          v54,
                          v140,
                          v140,
                          &v208,
                          &v207,
                          v140,
                          3);
                    }
                    else
                    {
                      v180 = *(_QWORD **)&v207.left;
                      if ( (v139 & 0x400) != 0 )
                        (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))(v72 + 2832))(
                          v47 + 24,
                          (v184 + 24) & -(__int64)(v184 != 0),
                          v211,
                          v54,
                          &v208,
                          &v180);
                      else
                        ((void (__fastcall *)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))EngCopyBits)(
                          v47 + 24,
                          (v184 + 24) & -(__int64)(v184 != 0),
                          v211,
                          v54,
                          &v208,
                          &v180);
                    }
                  }
                }
                goto LABEL_167;
              }
              v74 = v168 - v158 - v152;
              v192 = v207;
              if ( a6 < 0 )
                v69 = v197;
              v207.left = v69;
              if ( v74 > v70 )
                v70 = v168 - v158 - v152;
              v207.top = v70;
              if ( v165 < v71 )
                v71 = v165;
              v207.right = v71;
              if ( v168 - v158 < v73 )
                v73 = v168 - v158;
              v207.bottom = v73;
              if ( v71 < v69 )
              {
                v207.left = v71;
                goto LABEL_167;
              }
              if ( v73 < v70 )
                v70 = v73;
              v207.top = v70;
              if ( v70 == v73 || v69 == v71 )
                goto LABEL_167;
              v75 = v207.right - v192.right;
              v76 = v207.top - v192.top;
              v77 = v207.bottom - v192.bottom;
              LODWORD(Src[0]) = v69 - v192.left;
              LODWORD(Src[1]) = v207.right - v192.right;
              HIDWORD(Src[0]) = v207.top - v192.top;
              HIDWORD(Src[1]) = v207.bottom - v192.bottom;
              v78 = *(_DWORD *)(*(_QWORD *)v181 + 520LL);
              if ( (v78 & 1) == 0 || (v78 & 2) != 0 )
              {
                v79 = v69 - v192.left;
              }
              else
              {
                v197 = *(_QWORD *)(*(_QWORD *)v181 + 524LL);
                ERECTL::vScale((ERECTL *)Src, (const struct POINTFL *)&v197);
                bottom = v208.bottom;
                right = v208.right;
                top = v208.top;
                left = v208.left;
                v77 = HIDWORD(Src[1]);
                v75 = (int)Src[1];
                v76 = HIDWORD(Src[0]);
                v79 = (int)Src[0];
              }
              v80 = v75 + right;
              v81 = v79 + left;
              v208.left = v81;
              v208.right = v80;
              v208.top = v76 + top;
              v208.bottom = v77 + bottom;
              if ( v76 + top == v77 + bottom || v81 == v80 )
                goto LABEL_167;
              XDCOBJ::prgnEffRao((DC **)v181);
              XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v209);
              XCLIPOBJ::vSetup((XCLIPOBJ *)v209, v83, (const struct ERECTL *)&v208, 0);
              if ( (_DWORD)v210 == DWORD2(v210) || DWORD1(v210) == HIDWORD(v210) )
                goto LABEL_167;
              v85 = v181;
              if ( (*(_DWORD *)(*(_QWORD *)v181 + 36LL) & 0xE0) != 0 )
              {
                v202 = v210;
                XDCOBJ::vAccumulateTight(v181, v84, (struct ERECTL *)&v202);
                v85 = v181;
              }
              if ( v166 - 4 <= 1 )
              {
                v86 = v168 - v158 - v152;
                v207.bottom += v74 - v207.top;
                v207.top = v86;
              }
              else
              {
                v207.bottom -= v74;
                v86 = v207.top - v74;
                v207.top -= v74;
              }
              ++*(_DWORD *)(v47 + 92);
              v87 = 0;
              v88 = v208;
              v89 = 0;
              v90 = v207.left;
              v192 = v208;
              v163 = v207.left;
              v189 = 0LL;
              if ( *(int *)(v47 + 112) < 0 )
              {
                v144 = *(_DWORD **)(v47 + 48);
                if ( v144 )
                {
                  if ( (v144[10] & 0x20000) != 0 )
                  {
                    v87 = v144[644];
                    v89 = v144[645];
                    v189 = __PAIR64__(v89, v87);
                  }
                }
              }
              v91 = 0;
              v190 = v87 + *(_DWORD *)(v47 + 56);
              v92 = 0;
              v191 = v89 + *(_DWORD *)(v47 + 60);
              v93 = v184 + 112;
              if ( !v184 )
                v93 = 88LL;
              if ( *(int *)v93 < 0 )
              {
                v145 = (_QWORD *)(v184 + 48);
                if ( !v184 )
                  v145 = (_QWORD *)v198;
                v146 = (_DWORD *)*v145;
                if ( v146 && (v146[10] & 0x20000) != 0 )
                {
                  v91 = v146[644];
                  v92 = v146[645];
                }
              }
              v94 = v184 + 56;
              if ( !v184 )
                v94 = 32LL;
              v161 = v91 + *(_DWORD *)v94;
              v95 = v184 + 60;
              if ( !v184 )
                v95 = 36LL;
              v167 = v92 + *(_DWORD *)v95;
              v96 = *(_QWORD *)v85;
              v97 = *(_DWORD *)(*(_QWORD *)v85 + 520LL);
              if ( (v97 & 1) != 0 && (v97 & 2) == 0 )
              {
                v198 = *(_QWORD *)(v96 + 524);
                v147 = 1.0 / *(float *)(v96 + 528);
                *(float *)&v173 = 1.0 / *(float *)&v198;
                *((float *)&v173 + 1) = v147;
                ERECTL::vScale((ERECTL *)&v189, (const struct POINTFL *)&v173);
                ERECTL::vScale((ERECTL *)&v192, (const struct POINTFL *)&v173);
                v89 = HIDWORD(v189);
                v87 = v189;
                v88 = v192;
                v90 = v163;
              }
              v98 = _mm_cvtsi128_si32((__m128i)v88);
              v174 = v88;
              v99 = v88.top;
              v100 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v88, 4));
              v164 = v90 - v98;
              v101 = v98;
              v102 = v86 - v100;
              v103 = _mm_srli_si128((__m128i)v88, 8);
              v104 = v87 <= v98;
              v105 = _mm_srli_si128((__m128i)v88, 12);
              v106 = v174.bottom;
              if ( !v104 )
                v101 = v87;
              v104 = v89 <= v100;
              v107 = _mm_cvtsi128_si32(v103);
              if ( !v104 )
                v99 = v89;
              v108 = v174.right;
              v104 = v190 < v107;
              v109 = _mm_cvtsi128_si32(v105);
              if ( v104 )
                v108 = v190;
              if ( v191 < v109 )
                v106 = v191;
              if ( v108 < v101 )
              {
                v101 = v108;
              }
              else if ( v106 < v99 )
              {
                v99 = v106;
              }
              v110 = v99 + v102;
              v111 = v164 + v101;
              v112 = v164 + v108;
              v113 = v102 + v106;
              if ( v91 > v111 )
                v111 = v91;
              v174.left = v111;
              if ( v92 > v110 )
                v110 = v92;
              v174.top = v110;
              if ( v161 < v112 )
                v112 = v161;
              v174.right = v112;
              if ( v167 < v113 )
                v113 = v167;
              v174.bottom = v113;
              if ( v112 < v111 )
              {
                v111 = v112;
                v174.left = v112;
              }
              else
              {
                if ( v113 < v110 )
                  v110 = v113;
                v174.top = v110;
              }
              v114 = v174;
              v174.left = v111 - v164;
              v115 = v110 - v102;
              v174.right = v112 - v164;
              v116 = v113 - v102;
              v174.top = v115;
              v174.bottom = v116;
              v117 = v174;
              v192 = v174;
              v200 = v114;
              if ( v111 - v164 >= v112 - v164 || v115 >= v116 )
                goto LABEL_167;
              v118 = v181;
              if ( (unsigned int)DC::bDpiScaleTransform(*(DC **)v181) )
              {
                *(_QWORD *)&v174.left = *(_QWORD *)(v119 + 524);
                ERECTL::vScale((ERECTL *)&v192, (const struct POINTFL *)&v174);
                v120 = v184;
                v117 = v192;
              }
              v121 = *(_QWORD *)v118;
              v207 = v114;
              v208 = v117;
              v122 = *(_DWORD *)(v121 + 520);
              if ( (v122 & 1) == 0 || (v122 & 2) != 0 )
                v18 = 0;
              v123 = *(_DWORD *)(v47 + 112);
              if ( v18 )
              {
                v124 = (v123 & 2) != 0
                     ? (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))(v72 + 2840))(
                         v47 + 24,
                         (v120 + 24) & -(__int64)(v120 != 0),
                         0LL,
                         v209,
                         v157,
                         0LL,
                         0LL,
                         &v208,
                         &v207,
                         0LL,
                         3)
                     : ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, __int64, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))EngStretchBlt)(
                         v47 + 24,
                         (v120 + 24) & -(__int64)(v120 != 0),
                         0LL,
                         v209,
                         v157,
                         0LL,
                         0LL,
                         &v208,
                         &v207,
                         0LL,
                         3);
              }
              else
              {
                v180 = *(_QWORD **)&v200.left;
                v124 = (v123 & 0x400) != 0
                     ? (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))(v72 + 2832))(
                         v47 + 24,
                         (v120 + 24) & -(__int64)(v120 != 0),
                         v209,
                         v157,
                         &v208,
                         &v180)
                     : ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, _QWORD **))EngCopyBits)(
                         v47 + 24,
                         (v120 + 24) & -(__int64)(v120 != 0),
                         v209,
                         v157,
                         &v208,
                         &v180);
              }
              if ( v124 )
                goto LABEL_167;
            }
            v152 = 0;
LABEL_167:
            SURFMEM::~SURFMEM((SURFMEM *)&v184);
            if ( v49 )
            {
              v128 = v49[9];
              if ( v128 >= 0 )
              {
                _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v126) + 8 * v49[9] + 1072);
              }
              else if ( v128 == -1 )
              {
                FreeThreadBufferWithTag(v49, v125, v127);
              }
            }
            PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v182);
            v37 = v152;
            goto LABEL_172;
          }
          v156 = 0;
LABEL_267:
          v56 = 0;
          goto LABEL_90;
        }
        if ( v213 >= 4 * v34 )
        {
          if ( v166 - 10 <= 2 )
          {
            if ( v34 > *(_DWORD *)(v182 + 28) )
              v34 = *(_DWORD *)(v182 + 28);
            memmove(*(void **)(v182 + 112), Src[0], 4LL * v34);
          }
          else
          {
            v129 = *(_DWORD *)(v182 + 28);
            v130 = *(_BYTE **)(v182 + 112);
            if ( v34 <= v129 || (v34 = *(_DWORD *)(v182 + 28), v129) )
            {
              v131 = (char *)Src[0] + 1;
              do
              {
                v130[3] = 0;
                v130[2] = *(v131 - 1);
                *v130 = v131[1];
                v130 += 4;
                v132 = *v131;
                v131 += 4;
                *(v130 - 3) = v132;
                --v34;
              }
              while ( v34 );
              v47 = *(_QWORD *)&v174.left;
            }
          }
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v182);
          goto LABEL_65;
        }
      }
      EngSetLastError(0x57u);
      goto LABEL_88;
    }
  }
LABEL_172:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)&v203);
  return v37;
}
