/*
 * XREFs of ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x1400790D0
 * Callers:
 *     ?GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x140078F30 (-GreSetDIBitsToDeviceInternalImpl@@YAHPEAUHDC__@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KIH.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x14007C6DC (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@Z @ 0x14016AE30 (-GrepSetDIBits@@YAHAEAVOPTAPIDCOBJ@@PEAUHBITMAP__@@IIAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@IIPEAX@.c)
 * Callees:
 *     ?bDpiScaleTransform@DC@@QEBAHXZ @ 0x140015840 (-bDpiScaleTransform@DC@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x14006DAC0 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x1400702E0 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     bCvtPts1 @ 0x14007822C (bCvtPts1.c)
 *     ?bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z @ 0x14007A584 (-bClipSrcDstRectsAndValidate@@YA_NPEAU_SURFOBJ@@0PEAVXDCOBJ@@1PEAU_CLIPOBJ@@PEAU_RECTL@@3@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x1401895FC (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1401D01A4 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x140223E70 (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z @ 0x14025AFFC (-bSupportsPassthroughImage@XDCOBJ@@QEAAHK@Z.c)
 *     ?vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z @ 0x140336C18 (-vScale@EPOINTL@@QEAAXAEBVPOINTFL@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 */

__int64 __fastcall GrepSetDIBitsToDeviceInternalImpl(
        struct XDCOBJ *a1,
        LONG a2,
        LONG top,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6,
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
  LONG left; // r10d
  int v16; // r14d
  __int64 v18; // r13
  __int64 v19; // rax
  unsigned int v20; // r11d
  ULONG v21; // ecx
  __int64 v23; // rdi
  int v24; // ecx
  unsigned int v25; // r8d
  __int64 v26; // r9
  unsigned int v27; // esi
  unsigned int v28; // eax
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  int v31; // r8d
  unsigned __int64 v32; // rdx
  unsigned int v34; // r12d
  unsigned int v35; // edi
  unsigned int v36; // r12d
  int v37; // ecx
  bool v38; // zf
  __int64 v39; // rsi
  __int64 v40; // rax
  unsigned int v41; // ecx
  struct XDCOBJ *v42; // rbx
  unsigned int v43; // eax
  unsigned int v44; // edx
  int v45; // ecx
  LONG v46; // ecx
  LONG v47; // eax
  _DWORD *v48; // rax
  int v49; // ecx
  _DWORD *v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // r13
  void *v53; // rax
  int v54; // r15d
  __int64 v55; // rdi
  int IsPalDefault; // eax
  _QWORD *v57; // r8
  __int64 v58; // rbx
  unsigned int v59; // edx
  _BYTE *v60; // rcx
  char *v61; // rdx
  char v62; // al
  _DWORD *XlateObject; // rax
  int v64; // edi
  unsigned int v65; // eax
  unsigned int v66; // ecx
  void *v67; // r8
  struct XDCOBJ *v68; // r10
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // r9
  struct Gre::Base::SESSION_GLOBALS *v72; // rax
  __int64 v73; // rax
  int bottom; // r15d
  int right; // r11d
  int v76; // r12d
  LONG v77; // esi
  LONG v78; // r9d
  LONG v79; // eax
  LONG v80; // edx
  __int64 v81; // rdi
  LONG v82; // ecx
  LONG v83; // r14d
  __int64 v84; // rdx
  __int64 v85; // r8
  __int64 v86; // rax
  __int64 v87; // rcx
  int v88; // r9d
  int v89; // ecx
  LONG v90; // esi
  LONG v91; // r11d
  XDCOBJ *v92; // r12
  struct REGION *v93; // rax
  int v94; // r15d
  struct ECLIPOBJ *v95; // rdx
  __int64 v96; // rax
  int v97; // ecx
  int v98; // ecx
  int v99; // eax
  __int64 v100; // rdx
  Gre::Base *v101; // rcx
  __int64 v102; // r8
  int v103; // eax
  __int64 v104; // r8
  int v105; // eax
  XDCOBJ *v106; // r15
  struct REGION *v107; // rax
  struct ECLIPOBJ *v108; // rdx
  __int64 v109; // rax
  __int16 v110; // r8
  __int64 v111; // r9
  int Xlate; // eax
  __int64 v113; // r8
  float v114; // xmm0_4
  float v115; // xmm1_4
  __m128i v116; // xmm2
  __m128i v117; // xmm4
  __m128i v118; // xmm0
  __m128i v119; // xmm3
  int v120; // r8d
  unsigned int v121; // edx
  __int64 v122; // rax
  __int64 v123; // rax
  __int64 v124; // rax
  int v125; // r10d
  unsigned int v126; // edx
  __int64 v127; // rax
  __int64 v128; // rax
  int v129; // r10d
  unsigned int v130; // edx
  __int64 v131; // rax
  __int64 v132; // rax
  int v133; // r10d
  unsigned int v134; // ecx
  __int64 v135; // rax
  __int64 v136; // rax
  int v137; // eax
  struct _CLIPOBJ *v138; // [rsp+20h] [rbp-E0h]
  struct _RECTL *v139; // [rsp+30h] [rbp-D0h]
  __int64 v140; // [rsp+38h] [rbp-C8h]
  __int64 v141; // [rsp+40h] [rbp-C0h]
  int v142; // [rsp+60h] [rbp-A0h]
  unsigned int v143; // [rsp+64h] [rbp-9Ch]
  unsigned int v144; // [rsp+68h] [rbp-98h]
  unsigned int v145; // [rsp+6Ch] [rbp-94h]
  int v146; // [rsp+74h] [rbp-8Ch]
  int v147; // [rsp+78h] [rbp-88h]
  int v148; // [rsp+7Ch] [rbp-84h]
  _QWORD *v149; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v150; // [rsp+88h] [rbp-78h]
  unsigned int v151; // [rsp+8Ch] [rbp-74h]
  unsigned int v152; // [rsp+90h] [rbp-70h]
  unsigned int v153; // [rsp+94h] [rbp-6Ch]
  __int64 v154; // [rsp+98h] [rbp-68h]
  __int64 v155; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v156; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v157; // [rsp+B0h] [rbp-50h]
  __int64 v158; // [rsp+B8h] [rbp-48h]
  __int64 v159; // [rsp+C0h] [rbp-40h]
  LONG v160; // [rsp+C8h] [rbp-38h] BYREF
  LONG v161; // [rsp+CCh] [rbp-34h]
  __int64 v162; // [rsp+D0h] [rbp-30h]
  int v163; // [rsp+D8h] [rbp-28h]
  __int64 v164; // [rsp+E0h] [rbp-20h] BYREF
  int v165; // [rsp+E8h] [rbp-18h]
  struct XDCOBJ *v166; // [rsp+F0h] [rbp-10h]
  __int64 v167; // [rsp+F8h] [rbp-8h] BYREF
  char v168; // [rsp+100h] [rbp+0h]
  int v169; // [rsp+104h] [rbp+4h]
  unsigned int v170; // [rsp+108h] [rbp+8h]
  void *v171; // [rsp+110h] [rbp+10h]
  struct _RECTL v172; // [rsp+120h] [rbp+20h] BYREF
  void *Src; // [rsp+130h] [rbp+30h]
  struct _RECTL v174; // [rsp+140h] [rbp+40h] BYREF
  int v175; // [rsp+150h] [rbp+50h]
  __int64 v176; // [rsp+158h] [rbp+58h]
  _BYTE v177[160]; // [rsp+160h] [rbp+60h] BYREF
  struct _RECTL v178; // [rsp+200h] [rbp+100h] BYREF
  struct _RECTL v179; // [rsp+210h] [rbp+110h] BYREF
  _BYTE v180[4]; // [rsp+220h] [rbp+120h] BYREF
  struct _RECTL v181; // [rsp+224h] [rbp+124h] BYREF
  __int64 v182; // [rsp+258h] [rbp+158h]
  __int64 v183; // [rsp+270h] [rbp+170h]
  int v184; // [rsp+278h] [rbp+178h]
  int v185; // [rsp+2A0h] [rbp+1A0h]
  __int64 v186; // [rsp+2B0h] [rbp+1B0h]
  unsigned int v187; // [rsp+370h] [rbp+270h]

  v166 = a1;
  left = a2;
  v16 = 1;
  v18 = *(_QWORD *)a1;
  v154 = a6;
  v171 = a15;
  v19 = *(_QWORD *)(v18 + 976);
  v170 = a4;
  *(_QWORD *)&v172.left = a10;
  if ( (*(_DWORD *)(v19 + 108) & 1) != 0 )
    left = a4 + a2 - 1;
  v20 = 0;
  *(_QWORD *)&v174.left = 0LL;
  if ( !a11 )
    goto LABEL_5;
  if ( !*a10 )
    goto LABEL_5;
  if ( a12 > 2 )
    goto LABEL_5;
  if ( a13 < 0x28 )
    goto LABEL_5;
  v23 = *a11;
  if ( (unsigned int)v23 < 0x28 )
    goto LABEL_5;
  v147 = a11[1];
  if ( v147 <= 0 )
    goto LABEL_5;
  v24 = a11[2];
  v148 = v24;
  if ( !v24 )
    goto LABEL_5;
  v25 = a11[4];
  v26 = *((unsigned __int16 *)a11 + 7);
  v27 = a11[8];
  Src = (char *)a11 + v23;
  v156 = 0LL;
  v157 = 0LL;
  v159 = 0LL;
  v158 = 0LL;
  v153 = v25;
  if ( v24 < 0 )
  {
    LODWORD(v159) = 1;
    if ( v25 > 0xC )
      goto LABEL_5;
    v105 = 7225;
    if ( !_bittest(&v105, v25) )
      goto LABEL_5;
    v24 = -v24;
    v148 = v24;
  }
  v152 = 0;
  v151 = 0;
  v150 = 0;
  v163 = 0;
  switch ( v25 )
  {
    case 3u:
      if ( a13 < 0x34 )
        goto LABEL_5;
      v65 = 0;
      if ( a12 != 1 )
        v65 = a12;
      a12 = v65;
      if ( (_WORD)v26 == 16 )
      {
        LODWORD(v156) = 4;
      }
      else
      {
        if ( (_DWORD)v26 != 32 )
          goto LABEL_5;
        LODWORD(v156) = 6;
      }
      v143 = 2;
      v152 = a11[10];
      v66 = a11[11];
      Src = a11 + 10;
      v150 = a11[12];
      v151 = v66;
      v144 = 512;
      goto LABEL_107;
    case 0u:
      if ( (_DWORD)v26 != 1 )
      {
        if ( (_DWORD)v26 != 4 )
        {
          if ( (_DWORD)v26 != 8 )
          {
            v145 = 0;
            v28 = 0;
            if ( a12 != 1 )
              v28 = a12;
            v144 = 512;
            a12 = v28;
            if ( (_WORD)v26 == 16 )
            {
              LODWORD(v156) = 4;
              v152 = 31744;
              v151 = 992;
              v150 = 31;
              v143 = 2;
            }
            else
            {
              if ( (_WORD)v26 != 24 )
              {
                if ( (_DWORD)v26 == 32 )
                {
                  LODWORD(v156) = 6;
                  v143 = 8;
LABEL_25:
                  v29 = v26 * (unsigned int)v147;
                  if ( v29 <= 0xFFFFFFFF )
                  {
                    v30 = (unsigned int)(v29 + 31);
                    if ( (unsigned int)v30 >= (unsigned int)v29 )
                    {
                      v31 = a9;
                      v142 = a9;
                      v32 = a9 * ((v30 >> 3) & 0x1FFFFFFC);
                      if ( v32 <= 0xFFFFFFFF )
                        goto LABEL_37;
                      HIDWORD(v157) = -1;
                    }
                  }
                  v21 = 534;
                  goto LABEL_7;
                }
LABEL_5:
                v21 = 87;
LABEL_7:
                EngSetLastError(v21);
                return 0LL;
              }
              LODWORD(v156) = 5;
              v143 = 8;
            }
            a12 = v28;
            goto LABEL_25;
          }
          goto LABEL_232;
        }
LABEL_233:
        LODWORD(v156) = 2;
        v20 = 16;
        goto LABEL_106;
      }
LABEL_105:
      LODWORD(v156) = 1;
      v20 = 2;
LABEL_106:
      v143 = 1;
      v144 = 1024;
      goto LABEL_107;
    case 0xAu:
      if ( !(unsigned int)DC::bIsCMYKColor((DC *)v18) )
        goto LABEL_5;
      switch ( (_DWORD)v26 )
      {
        case 1:
          goto LABEL_105;
        case 4:
          goto LABEL_233;
        case 8:
LABEL_232:
          LODWORD(v156) = 3;
          v20 = 256;
          goto LABEL_106;
      }
      if ( (_DWORD)v26 != 32 )
        goto LABEL_5;
      LODWORD(v156) = 6;
      v144 = 512;
      v143 = 16;
LABEL_107:
      v145 = v20;
      goto LABEL_25;
    case 2u:
LABEL_205:
      if ( (_WORD)v26 != 4 )
        goto LABEL_5;
      LODWORD(v156) = 7;
      v20 = 16;
      v145 = 16;
LABEL_35:
      v163 = 1;
      v31 = v24;
      v142 = v24;
      v144 = 1024;
      v143 = 1;
      goto LABEL_36;
    case 0xCu:
      if ( !v18 || !(unsigned int)DC::bIsCMYKColor((DC *)v18) )
        goto LABEL_5;
      v24 = v148;
      goto LABEL_205;
    case 1u:
LABEL_33:
      if ( (_WORD)v26 != 8 )
        goto LABEL_5;
      v20 = 256;
      LODWORD(v156) = 8;
      v145 = 256;
      goto LABEL_35;
    case 0xBu:
      if ( !(unsigned int)DC::bIsCMYKColor((DC *)v18) )
        goto LABEL_5;
      v24 = v148;
      goto LABEL_33;
    case 4u:
      LODWORD(v156) = 9;
      break;
    case 5u:
      LODWORD(v156) = 10;
      break;
    default:
      goto LABEL_5;
  }
  v145 = 0;
  v144 = 512;
  v31 = a9;
  v142 = a9;
  v143 = 8;
LABEL_36:
  LODWORD(v32) = a11[5];
  a8 = 0;
LABEL_37:
  v34 = a13 - v23;
  v146 = a8;
  v35 = 0;
  v187 = v34;
  HIDWORD(v157) = v32;
  v36 = v20;
  if ( v27 && v27 <= v20 )
    v36 = v27;
  if ( *(_QWORD *)(*(_QWORD *)&v172.left + 8LL) - *(_QWORD *)(*(_QWORD *)&v172.left + 16LL) < (unsigned __int64)(unsigned int)v32 )
    goto LABEL_5;
  v37 = v148;
  HIDWORD(v156) = v147;
  if ( v153 - 4 > 1 )
    v37 = v31;
  LODWORD(v157) = v37;
  v38 = (*(_DWORD *)(v18 + 36) & 0x10000) == 0;
  v176 = *((_QWORD *)v166 + 2);
  if ( !v38 )
    goto LABEL_5;
  v39 = *(_QWORD *)(v18 + 48);
  v160 = left;
  v161 = top;
  if ( v153 - 4 <= 1 && (!(unsigned int)XDCOBJ::bSupportsPassthroughImage(v166, v153) || a12 || v171) )
    v142 = 0;
  else
    v35 = v142;
  if ( a14 )
  {
    DC::QuickInitXform(v18, &v155, 516LL);
    v40 = v155;
    if ( (*(_BYTE *)(v155 + 32) & 0x43) != 0x43 )
    {
      bCvtPts1(v155, (__int64)&v160, 1LL);
      v40 = v155;
    }
    if ( v35 )
    {
      v41 = a11[4];
      if ( v41 == 4 || v41 == 5 )
      {
        v35 &= -((*(_BYTE *)(v40 + 32) & 1) != 0);
        v142 = v35;
      }
    }
    left = v160;
    top = v161;
  }
  v42 = v166;
  v43 = v170;
  v44 = a5;
  v149 = (_QWORD *)__PAIR64__(a5, v170);
  v45 = *(_DWORD *)(*(_QWORD *)v166 + 520LL);
  if ( (v45 & 1) != 0 && (v45 & 2) == 0 )
  {
    v155 = *(_QWORD *)(*(_QWORD *)v166 + 524LL);
    EPOINTL::vScale((EPOINTL *)&v149, (const struct POINTFL *)&v155);
    left = v160;
    v44 = HIDWORD(v149);
    v43 = (unsigned int)v149;
    top = v161;
  }
  v46 = v43 + left;
  v179.left = left;
  v179.top = top;
  v47 = v44 + top;
  v179.bottom = v44 + top;
  v179.right = v46;
  if ( left > v46 )
  {
    v179.right = left;
    left = v46;
    v179.left = v46;
  }
  if ( top > v47 )
  {
    v179.bottom = top;
    top += v44;
    v179.top = v47;
  }
  if ( top == v179.bottom || left == v179.right || !v35 )
    return v35;
  v48 = *(_DWORD **)v42;
  v49 = *(_DWORD *)(*(_QWORD *)v42 + 36LL);
  if ( (v49 & 0xE0) != 0 )
  {
    if ( (v49 & 0x20) != 0 )
    {
      if ( left < v48[266] )
      {
        v48[266] = left;
        top = v179.top;
        left = v179.left;
      }
      if ( top < v48[267] )
      {
        v48[267] = top;
        top = v179.top;
        left = v179.left;
      }
      if ( v179.right > v48[268] )
      {
        v48[268] = v179.right;
        top = v179.top;
        left = v179.left;
      }
      if ( v179.bottom > v48[269] )
      {
        v48[269] = v179.bottom;
        top = v179.top;
        left = v179.left;
      }
    }
    v50 = *(_DWORD **)v42;
    if ( (*(_DWORD *)(*(_QWORD *)v42 + 36LL) & 0x80u) != 0 )
    {
      if ( left < v50[274] )
      {
        v50[274] = left;
        top = v179.top;
      }
      if ( top < v50[275] )
        v50[275] = top;
      if ( v179.right > v50[276] )
        v50[276] = v179.right;
      if ( v179.bottom > v50[277] )
        v50[277] = v179.bottom;
    }
  }
  DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v177);
  if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v177, v42, 0) )
  {
    v51 = *(_QWORD *)v42;
    v52 = *(_QWORD *)(*(_QWORD *)v42 + 496LL);
    *(_QWORD *)&v178.left = v52;
    if ( v52 )
    {
      v53 = v171;
      if ( !v171 )
      {
        v53 = *(void **)(*(_QWORD *)(v51 + 976) + 248LL);
        v171 = v53;
      }
      v54 = *(_DWORD *)(v51 + 120);
      if ( (v54 & 0x10000000) != 0 && (!v53 || v153 - 10 > 2) )
        v54 = v54 & 0xFFFFFFF | 0x20000000;
      v55 = *(_QWORD *)(v52 + 128);
      v165 = 0;
      v164 = 0LL;
      v149 = *(_QWORD **)(v51 + 88);
      IsPalDefault = XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v149);
      v57 = v149;
      if ( !IsPalDefault )
        *(_QWORD *)(v52 + 176) = *v149;
      v58 = 0LL;
      v155 = 0LL;
      v175 = 1;
      v162 = 0LL;
      if ( a12 )
      {
        if ( a12 == 1 )
        {
          if ( v187 >= 2 * (unsigned __int64)v36 )
          {
            Xlate = EXLATEOBJ::bMakeXlate(&v155, Src, v57, v52, v36, v145);
            v58 = v155;
            if ( Xlate )
            {
              v162 = v155;
              if ( *(_DWORD *)(v176 + 3152) )
              {
                v64 = 1;
                if ( (*(_DWORD *)(v39 + 40) & 1) != 0 )
                {
                  if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v164, v143, v145, 0LL, v152, v151, v150, v144, 1) )
                  {
                    v113 = *(_QWORD *)(v52 + 128);
                    if ( !v113 )
                      v113 = *(_QWORD *)(v39 + 1792);
                    XEPALOBJ::vGetEntriesFrom(&v164, v149, v113, Src, v36);
LABEL_118:
                    v67 = (void *)(*(_QWORD *)(*(_QWORD *)&v172.left + 16LL) + **(_QWORD **)&v172.left);
                    v167 = 0LL;
                    v168 = 0;
                    v169 = 0;
                    SURFMEM::bCreateDIB(
                      (SURFMEM *)&v167,
                      (struct _DEVBITMAPINFO *)&v156,
                      v67,
                      0LL,
                      0,
                      0LL,
                      0LL,
                      0,
                      1,
                      0);
                    if ( v16 && v167 )
                    {
                      *(_DWORD *)(v167 + 92) = 0;
                      if ( (v177[24] & 1) != 0 )
                      {
                        v68 = v166;
                        v69 = *(_QWORD *)v166;
                        v70 = *(_DWORD *)(*(_QWORD *)v166 + 40LL) & 1LL;
                        v71 = *(int *)(*(_QWORD *)v166 + 8 * v70 + 1016);
                        if ( (unsigned __int64)(v71 + v179.left + 0x80000000LL) <= 0xFFFFFFFF
                          && (unsigned __int64)(v71 + v179.right + 0x80000000LL) <= 0xFFFFFFFF )
                        {
                          v104 = *(int *)(v69 + 8 * v70 + 1020);
                          if ( (unsigned __int64)(v104 + v179.top + 0x80000000LL) <= 0xFFFFFFFF
                            && (unsigned __int64)(v104 + v179.bottom + 0x80000000LL) <= 0xFFFFFFFF )
                          {
                            v77 = v71 + v179.left;
                            v179.left += v71;
                            right = *(_DWORD *)(v69 + 8 * v70 + 1016) + v179.right;
                            v179.right = right;
                            v76 = *(_DWORD *)(v69 + 8 * v70 + 1020) + v179.top;
                            v179.top = v76;
                            bottom = *(_DWORD *)(v69 + 8 * v70 + 1020) + v179.bottom;
                            v179.bottom = bottom;
                            if ( v64 )
                            {
                              v73 = v164;
                              if ( v164 )
                              {
                                v72 = Gre::Base::Globals((Gre::Base *)v70);
                                INC_SHARE_REF_CNT(v72, v164);
                                v73 = v164;
                                v68 = v166;
                              }
                              *(_QWORD *)(v167 + 128) = v73;
                              bottom = v179.bottom;
                              right = v179.right;
                              v76 = v179.top;
                              v77 = v179.left;
                            }
                            v78 = v154;
                            v79 = v148 - a5 - a7;
                            v80 = v154 + v170;
                            v81 = *(_QWORD *)(v52 + 48);
                            v82 = v148 - a7;
                            v178.left = v154;
                            v178.top = v79;
                            v178.right = v154 + v170;
                            v178.bottom = v148 - a7;
                            if ( v163 )
                            {
                              v106 = v166;
                              v107 = XDCOBJ::prgnEffRao((DC **)v166);
                              v185 = 1;
                              v182 = 0LL;
                              v183 = 0LL;
                              v184 = 0;
                              v186 = 0LL;
                              XCLIPOBJ::vSetup((XCLIPOBJ *)v180, v107, (const struct ERECTL *)&v179, 0);
                              if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)&v181) )
                              {
                                if ( (*(_DWORD *)(*(_QWORD *)v106 + 36LL) & 0xE0) != 0 )
                                {
                                  v174 = v181;
                                  XDCOBJ::vAccumulateTight(v106, v108, (struct ERECTL *)&v174);
                                }
                                v109 = v167;
                                ++*(_DWORD *)(v52 + 92);
                                if ( bClipSrcDstRectsAndValidate(
                                       (struct _SURFOBJ *)(v52 + 24),
                                       (struct _SURFOBJ *)((v109 + 24) & -(__int64)(v109 != 0)),
                                       v106,
                                       0LL,
                                       v138,
                                       &v179,
                                       &v178) )
                                {
                                  if ( (unsigned int)DC::bDpiScaleTransform(*(DC **)v106) )
                                  {
                                    if ( (v110 & 2) != 0 )
                                      (*(void (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64, __int64, __int64, struct _RECTL *, struct _RECTL *, __int64, int))(v81 + 2840))(
                                        v52 + 24,
                                        (v167 + 24) & -(__int64)(v167 != 0),
                                        0LL,
                                        v180,
                                        v162,
                                        v111,
                                        v111,
                                        &v179,
                                        &v178,
                                        v111,
                                        3);
                                    else
                                      ((void (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, __int64, __int64, __int64, struct _RECTL *, struct _RECTL *, __int64, int))EngStretchBlt)(
                                        v52 + 24,
                                        (v167 + 24) & -(__int64)(v167 != 0),
                                        0LL,
                                        v180,
                                        v162,
                                        v111,
                                        v111,
                                        &v179,
                                        &v178,
                                        v111,
                                        3);
                                  }
                                  else
                                  {
                                    *(_QWORD *)&v172.left = *(_QWORD *)&v178.left;
                                    if ( (v110 & 0x400) != 0 )
                                      (*(void (__fastcall **)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, struct _RECTL *))(v81 + 2832))(
                                        v52 + 24,
                                        (v167 + 24) & -(__int64)(v167 != 0),
                                        v180,
                                        v162,
                                        &v179,
                                        &v172);
                                    else
                                      ((void (__fastcall *)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, struct _RECTL *))EngCopyBits)(
                                        v52 + 24,
                                        (v167 + 24) & -(__int64)(v167 != 0),
                                        v180,
                                        v162,
                                        &v179,
                                        &v172);
                                  }
                                }
                              }
                            }
                            else
                            {
                              v83 = v148 - v146 - v142;
                              v172 = v178;
                              if ( (int)v154 < 0 )
                                v78 = v174.left;
                              v178.left = v78;
                              if ( v83 > v79 )
                                v79 = v148 - v146 - v142;
                              v178.top = v79;
                              if ( v147 < v80 )
                                v80 = v147;
                              v178.right = v80;
                              if ( v148 - v146 < v82 )
                                v82 = v148 - v146;
                              v178.bottom = v82;
                              if ( v80 >= v78 )
                              {
                                if ( v82 < v79 )
                                  v79 = v82;
                                v178.top = v79;
                                if ( v79 != v82 && v78 != v80 )
                                {
                                  v174 = v178;
                                  LODWORD(v84) = v178.right - v172.right;
                                  LODWORD(v85) = v178.top - v172.top;
                                  LODWORD(v86) = v178.bottom - v172.bottom;
                                  v154 = (unsigned int)(v78 - v172.left);
                                  v87 = *(_QWORD *)v68;
                                  v88 = *(_DWORD *)(*(_QWORD *)v68 + 520LL);
                                  if ( (v88 & 1) == 0 || (v88 & 2) != 0 )
                                  {
                                    v89 = v154;
                                  }
                                  else
                                  {
                                    v114 = *(float *)(v87 + 528);
                                    v115 = *(float *)(v87 + 524);
                                    v116 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v85);
                                    v117 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v86);
                                    *(float *)v116.m128i_i32 = *(float *)v116.m128i_i32 * v114;
                                    *(float *)v117.m128i_i32 = *(float *)v117.m128i_i32 * v114;
                                    v118 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v154);
                                    v119 = (__m128i)COERCE_UNSIGNED_INT((float)(int)v84);
                                    *(float *)v118.m128i_i32 = *(float *)v118.m128i_i32 * v115;
                                    *(float *)v119.m128i_i32 = *(float *)v119.m128i_i32 * v115;
                                    v120 = _mm_cvtsi128_si32(v118);
                                    v121 = (unsigned __int8)(v120 >> 23);
                                    if ( v121 > 0x9E )
                                      goto LABEL_231;
                                    v122 = v120 & 0x7FFFFF | 0x800000LL;
                                    if ( v121 < 0x76 )
                                      v123 = v122 >> (118 - (unsigned __int8)v121);
                                    else
                                      v123 = v122 << ((unsigned __int8)v121 - 118);
                                    v124 = (v123 + 0x80000000LL) >> 32;
                                    if ( v120 < 0 )
                                      v124 = (unsigned int)-(int)v124;
                                    v154 = v124;
                                    v125 = _mm_cvtsi128_si32(v116);
                                    v126 = (unsigned __int8)(v125 >> 23);
                                    if ( v126 > 0x9E )
                                      goto LABEL_231;
                                    v127 = v125 & 0x7FFFFF | 0x800000LL;
                                    if ( v126 < 0x76 )
                                      v128 = v127 >> (118 - (unsigned __int8)v126);
                                    else
                                      v128 = v127 << ((unsigned __int8)v126 - 118);
                                    v85 = (v128 + 0x80000000LL) >> 32;
                                    if ( v125 < 0 )
                                      LODWORD(v85) = -(int)v85;
                                    v129 = _mm_cvtsi128_si32(v119);
                                    v130 = (unsigned __int8)(v129 >> 23);
                                    if ( v130 > 0x9E )
                                      goto LABEL_231;
                                    v131 = v129 & 0x7FFFFF | 0x800000LL;
                                    if ( v130 < 0x76 )
                                      v132 = v131 >> (118 - (unsigned __int8)v130);
                                    else
                                      v132 = v131 << ((unsigned __int8)v130 - 118);
                                    v84 = (v132 + 0x80000000LL) >> 32;
                                    if ( v129 < 0 )
                                      LODWORD(v84) = -(int)v84;
                                    v133 = _mm_cvtsi128_si32(v117);
                                    v134 = (unsigned __int8)(v133 >> 23);
                                    if ( v134 > 0x9E )
                                    {
LABEL_231:
                                      LODWORD(v86) = 0;
                                      LODWORD(v84) = 0;
                                      LODWORD(v85) = 0;
                                      v89 = 0;
                                    }
                                    else
                                    {
                                      v135 = v133 & 0x7FFFFF | 0x800000LL;
                                      if ( v134 < 0x76 )
                                        v136 = v135 >> (118 - (unsigned __int8)v134);
                                      else
                                        v136 = v135 << ((unsigned __int8)v134 - 118);
                                      v89 = v154;
                                      v86 = (v136 + 0x80000000LL) >> 32;
                                      if ( v133 < 0 )
                                        LODWORD(v86) = -(int)v86;
                                    }
                                  }
                                  v90 = v89 + v77;
                                  v91 = v84 + right;
                                  v179.left = v90;
                                  v179.right = v91;
                                  v179.top = v85 + v76;
                                  v179.bottom = v86 + bottom;
                                  if ( (_DWORD)v85 + v76 != (_DWORD)v86 + bottom && v90 != v91 )
                                  {
                                    v92 = v166;
                                    v93 = XDCOBJ::prgnEffRao((DC **)v166);
                                    v182 = 0LL;
                                    v183 = 0LL;
                                    v184 = 0;
                                    v94 = 1;
                                    v186 = 0LL;
                                    v185 = 1;
                                    XCLIPOBJ::vSetup((XCLIPOBJ *)v180, v93, (const struct ERECTL *)&v179, 0);
                                    if ( v181.left != v181.right && v181.top != v181.bottom )
                                    {
                                      if ( (*(_DWORD *)(*(_QWORD *)v92 + 36LL) & 0xE0) != 0 )
                                      {
                                        v174 = v181;
                                        XDCOBJ::vAccumulateTight(v92, v95, (struct ERECTL *)&v174);
                                      }
                                      if ( v153 - 4 <= 1 )
                                      {
                                        v178.bottom += v83 - v178.top;
                                        v178.top = v148 - v146 - v142;
                                      }
                                      else
                                      {
                                        v178.bottom -= v83;
                                        v178.top -= v83;
                                      }
                                      v96 = v167;
                                      ++*(_DWORD *)(v52 + 92);
                                      if ( bClipSrcDstRectsAndValidate(
                                             (struct _SURFOBJ *)(v52 + 24),
                                             (struct _SURFOBJ *)((v96 + 24) & -(__int64)(v96 != 0)),
                                             v92,
                                             0LL,
                                             v138,
                                             &v179,
                                             &v178) )
                                      {
                                        v97 = *(_DWORD *)(*(_QWORD *)v92 + 520LL);
                                        if ( (v97 & 1) == 0 || (v97 & 2) != 0 )
                                          v94 = 0;
                                        v98 = *(_DWORD *)(v52 + 112);
                                        if ( v94 )
                                        {
                                          v99 = (v98 & 2) != 0
                                              ? (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *, __int64, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))(v81 + 2840))(
                                                  v52 + 24,
                                                  (v167 + 24) & -(__int64)(v167 != 0),
                                                  0LL,
                                                  v180,
                                                  v162,
                                                  0LL,
                                                  0LL,
                                                  &v179,
                                                  &v178,
                                                  0LL,
                                                  3)
                                              : ((__int64 (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, __int64, _QWORD, _QWORD, struct _RECTL *, struct _RECTL *, _QWORD, int))EngStretchBlt)(
                                                  v52 + 24,
                                                  (v167 + 24) & -(__int64)(v167 != 0),
                                                  0LL,
                                                  v180,
                                                  v162,
                                                  0LL,
                                                  0LL,
                                                  &v179,
                                                  &v178,
                                                  0LL,
                                                  3);
                                        }
                                        else
                                        {
                                          *(_QWORD *)&v172.left = *(_QWORD *)&v178.left;
                                          v99 = (v98 & 0x400) != 0
                                              ? (*(__int64 (__fastcall **)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, struct _RECTL *))(v81 + 2832))(
                                                  v52 + 24,
                                                  (v167 + 24) & -(__int64)(v167 != 0),
                                                  v180,
                                                  v162,
                                                  &v179,
                                                  &v172)
                                              : ((__int64 (__fastcall *)(__int64, __int64, _BYTE *, __int64, struct _RECTL *, struct _RECTL *))EngCopyBits)(
                                                  v52 + 24,
                                                  (v167 + 24) & -(__int64)(v167 != 0),
                                                  v180,
                                                  v162,
                                                  &v179,
                                                  &v172);
                                        }
                                        if ( !v99 )
                                          goto LABEL_156;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                      v35 = v142;
LABEL_157:
                      SURFMEM::~SURFMEM((SURFMEM *)&v167);
                      if ( v58 )
                      {
                        v103 = *(_DWORD *)(v58 + 36);
                        if ( v103 >= 0 )
                        {
                          _InterlockedDecrement((volatile signed __int32 *)Gre::Base::Globals(v101) + 8 * *(int *)(v58 + 36) + 1100);
                        }
                        else if ( v103 == -1 )
                        {
                          FreeThreadBufferWithTag(v58, v100, v102);
                        }
                      }
                      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v164);
                      goto LABEL_162;
                    }
LABEL_156:
                    v35 = 0;
                    goto LABEL_157;
                  }
                }
              }
            }
            else
            {
              v16 = 0;
            }
            v64 = 0;
            goto LABEL_118;
          }
        }
        else
        {
          v137 = *(_DWORD *)(v52 + 96);
          if ( v137 == (_DWORD)v156 || v137 == 2 && (_DWORD)v156 == 7 || v137 == 3 && (_DWORD)v156 == 8 )
          {
            v162 = v176 + 4664;
            goto LABEL_117;
          }
        }
      }
      else
      {
        if ( !PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v164, v143, v145, 0LL, v152, v151, v150, v144, 1) )
        {
LABEL_265:
          v16 = 0;
LABEL_117:
          v64 = 0;
          goto LABEL_118;
        }
        if ( !v36 )
        {
          LODWORD(v141) = 0xFFFFFF;
          LODWORD(v140) = 0;
          LODWORD(v139) = 0;
LABEL_98:
          XlateObject = CreateXlateObject(v171, v54, v164, v55, v149, v149, v139, v140, v141, 0);
          v58 = (__int64)XlateObject;
          v64 = 0;
          if ( XlateObject )
            v162 = (__int64)XlateObject;
          else
            v16 = 0;
          goto LABEL_118;
        }
        if ( v187 >= 4 * v36 )
        {
          if ( v153 - 10 <= 2 )
          {
            if ( v36 > *(_DWORD *)(v164 + 28) )
              v36 = *(_DWORD *)(v164 + 28);
            memmove(*(void **)(v164 + 112), Src, 4LL * v36);
          }
          else
          {
            v59 = *(_DWORD *)(v164 + 28);
            v60 = *(_BYTE **)(v164 + 112);
            if ( v36 <= v59 || (v36 = *(_DWORD *)(v164 + 28), v59) )
            {
              v61 = (char *)Src + 1;
              do
              {
                v60[3] = 0;
                v60[2] = *(v61 - 1);
                *v60 = v61[1];
                v62 = *v61;
                v61 += 4;
                v60[1] = v62;
                v60 += 4;
                --v36;
              }
              while ( v36 );
              v16 = v175;
              v52 = *(_QWORD *)&v178.left;
            }
          }
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v164);
          LODWORD(v141) = 0xFFFFFF;
          LODWORD(v140) = 0;
          LODWORD(v139) = 0;
          goto LABEL_98;
        }
      }
      EngSetLastError(0x57u);
      goto LABEL_265;
    }
  }
LABEL_162:
  DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v177);
  return v35;
}
