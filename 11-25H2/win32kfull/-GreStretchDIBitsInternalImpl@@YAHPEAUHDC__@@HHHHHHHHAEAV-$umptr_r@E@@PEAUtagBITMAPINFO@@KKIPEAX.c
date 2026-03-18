/*
 * XREFs of ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4
 * Callers:
 *     NtGdiStretchDIBitsInternal @ 0x14018B1C0 (NtGdiStretchDIBitsInternal.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z @ 0x140073040 (-CreateXlateObject@@YAPEAVXLATE@@PEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ?GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z @ 0x14007695C (-GrepStretchBlt@@YAHAEAVXDCOBJ@@HHHHAEAVOPTAPIDCOBJ@@HHHHKKK@Z.c)
 *     ?bInFullScreen@DC@@QEBAHXZ @ 0x140078724 (-bInFullScreen@DC@@QEBAHXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ??0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x14007A2CC (--0APIDCOBJ@@QEAA@PEAUHDC__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x14007C824 (--0OPTAPIDCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAXK3K_KPEAPEAX@Z @ 0x14007C874 (-GrepCreateDIBitmapReal@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@KAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14008026C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1APIDCOBJ@@QEAA@XZ @ 0x140084B40 (--1APIDCOBJ@@QEAA@XZ.c)
 *     ??1OPTAPIDCOBJ@@QEAA@XZ @ 0x140084EC8 (--1OPTAPIDCOBJ@@QEAA@XZ.c)
 *     ??0DEVLOCKOBJ@@QEAA@XZ @ 0x140087B54 (--0DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z @ 0x14009D14C (-vAccumulate@XDCOBJ@@QEAAXAEAVERECTL@@@Z.c)
 *     ?GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIHPEAX@Z @ 0x14009DE84 (-GrepSetDIBitsToDeviceInternalImpl@@YAHAEAVXDCOBJ@@HHKKHHKKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@K.c)
 *     ?GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z @ 0x14009F970 (-GrepPatBlt@@YAHAEAVXDCOBJ@@HHHHK@Z.c)
 *     bCvtPts1 @ 0x1400A0334 (bCvtPts1.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1400A1960 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ??0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x1400DEF38 (--0OPTAPIDCOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z @ 0x14015073C (-bMakeXlate@EXLATEOBJ@@QEAAHPEBGVXEPALOBJ@@PEAVSURFACE@@KK@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x140160B04 (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     ?vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z @ 0x1401765D8 (-vCopy_rgbquad@XEPALOBJ@@QEAAXPEAUtagRGBQUAD@@KK@Z.c)
 *     ?GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KIPEAX@Z @ 0x1401C4344 (-GrepCreateDIBitmapComp@@YAPEAUHBITMAP__@@AEAVOPTAPIDCOBJ@@HHKAEAV-$umptr_r@E@@PEAUtagBITMAPINFO.c)
 *     ?vRefPalette@XEPALOBJ@@QEAAXXZ @ 0x1401E3544 (-vRefPalette@XEPALOBJ@@QEAAXXZ.c)
 *     ?vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z @ 0x14022FCCC (-vGetEntriesFrom@XEPALOBJ@@QEAAXV1@0PEAGK@Z.c)
 *     ?bSupportsPNG@XDCOBJ@@QEAAHXZ @ 0x1403130D0 (-bSupportsPNG@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memmove @ 0x140342600 (memmove.c)
 */

__int64 __fastcall GreStretchDIBitsInternalImpl(
        Gre::Base *a1,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        __int64 a10,
        unsigned int *a11,
        unsigned int a12,
        unsigned int a13,
        unsigned int a14,
        __int64 a15)
{
  unsigned int v16; // esi
  unsigned int v17; // r13d
  unsigned __int8 v18; // r14
  __int64 v19; // r14
  unsigned int v20; // ecx
  DC *v21; // r9
  __int64 v22; // r8
  int v23; // r15d
  BOOL v24; // ebx
  int v25; // ecx
  unsigned int v26; // r8d
  __int64 v27; // r10
  unsigned int v28; // r11d
  int v29; // ebx
  __int64 v30; // r15
  int v31; // r12d
  unsigned int v32; // r14d
  int v33; // eax
  int v34; // eax
  unsigned int v35; // eax
  unsigned int v36; // edx
  int v37; // edi
  unsigned __int64 v38; // rdx
  unsigned int v39; // ebx
  unsigned int v40; // r15d
  __int64 v41; // rax
  __int64 v42; // rdi
  __int64 v43; // r9
  DC *v44; // r11
  int v45; // r8d
  int v46; // edx
  int v47; // r9d
  char v48; // cl
  Gre::Base *v49; // rcx
  int v50; // eax
  void *v51; // r8
  bool v52; // zf
  Gre::Base *v53; // rcx
  __int64 v55; // rcx
  int v56; // r8d
  unsigned int v57; // edi
  int v58; // eax
  int v59; // r9d
  int v60; // ecx
  char v61; // bl
  int v62; // edx
  struct REGION *v63; // rdx
  struct ECLIPOBJ *v64; // rdx
  _DWORD *v65; // r8
  __int64 v66; // rax
  int v67; // r14d
  BOOL (__stdcall *v68)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r11
  char *v69; // r9
  int v70; // edx
  int v71; // ecx
  unsigned int v72; // eax
  ULONG v73; // ecx
  struct Gre::Base::SESSION_GLOBALS *v74; // r13
  __int64 v75; // r13
  __int64 v76; // rbx
  _DWORD *XlateObject; // r15
  unsigned int v78; // edx
  unsigned int v79; // edi
  DC *v80; // rdx
  __int64 v81; // rdx
  int v82; // ecx
  unsigned int v83; // eax
  unsigned int v84; // r8d
  int v85; // r12d
  int v86; // r14d
  HDC CompatibleDC; // rax
  unsigned int v88; // ebx
  HDC v89; // r15
  __int64 DIBitmapReal; // rax
  __int64 v91; // rdi
  int v92; // eax
  int v93; // ecx
  int v94; // ebx
  __int64 v95; // rcx
  unsigned __int64 v96; // rdx
  unsigned int v97; // r8d
  __int64 v98; // r8
  __int64 v99; // [rsp+30h] [rbp-D0h]
  int v100[2]; // [rsp+38h] [rbp-C8h]
  __int64 v101; // [rsp+40h] [rbp-C0h]
  __int64 v102; // [rsp+48h] [rbp-B8h]
  unsigned int v103; // [rsp+80h] [rbp-80h]
  unsigned int v104; // [rsp+84h] [rbp-7Ch]
  unsigned int v105; // [rsp+88h] [rbp-78h]
  unsigned int v106; // [rsp+8Ch] [rbp-74h]
  char v107; // [rsp+90h] [rbp-70h]
  unsigned int v108; // [rsp+94h] [rbp-6Ch]
  POINTL pptlSrc; // [rsp+A0h] [rbp-60h] BYREF
  int v110; // [rsp+A8h] [rbp-58h]
  unsigned int v111; // [rsp+ACh] [rbp-54h]
  int v112; // [rsp+B0h] [rbp-50h]
  unsigned int v113; // [rsp+B4h] [rbp-4Ch]
  __int128 v114; // [rsp+B8h] [rbp-48h] BYREF
  __int128 v115; // [rsp+C8h] [rbp-38h]
  unsigned int v116; // [rsp+D8h] [rbp-28h]
  unsigned int v117; // [rsp+DCh] [rbp-24h]
  unsigned int v118; // [rsp+E0h] [rbp-20h]
  int v119; // [rsp+E4h] [rbp-1Ch]
  int v120; // [rsp+E8h] [rbp-18h]
  int v121; // [rsp+ECh] [rbp-14h]
  DC *v122; // [rsp+F0h] [rbp-10h] BYREF
  char v123; // [rsp+F8h] [rbp-8h]
  int v124; // [rsp+FCh] [rbp-4h]
  __int64 v125; // [rsp+100h] [rbp+0h]
  int v126[2]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v127; // [rsp+110h] [rbp+10h] BYREF
  int v128; // [rsp+118h] [rbp+18h]
  void *Src; // [rsp+120h] [rbp+20h]
  __int64 v130; // [rsp+128h] [rbp+28h] BYREF
  char v131; // [rsp+130h] [rbp+30h]
  int v132; // [rsp+134h] [rbp+34h]
  __int64 v133; // [rsp+138h] [rbp+38h] BYREF
  DC *v134[3]; // [rsp+140h] [rbp+40h] BYREF
  __int64 v135; // [rsp+158h] [rbp+58h]
  _OWORD v136[2]; // [rsp+1B0h] [rbp+B0h] BYREF
  _BYTE v137[144]; // [rsp+1D0h] [rbp+D0h] BYREF
  int v138; // [rsp+260h] [rbp+160h] BYREF
  int v139; // [rsp+264h] [rbp+164h]
  int v140; // [rsp+268h] [rbp+168h]
  int v141; // [rsp+26Ch] [rbp+16Ch]
  struct Gre::Base::SESSION_GLOBALS *v142; // [rsp+270h] [rbp+170h] BYREF
  int v143; // [rsp+278h] [rbp+178h]
  int v144; // [rsp+27Ch] [rbp+17Ch]
  RECTL prclDest; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v146[4]; // [rsp+290h] [rbp+190h] BYREF
  RECTL v147; // [rsp+294h] [rbp+194h] BYREF
  _BYTE v148[96]; // [rsp+330h] [rbp+230h] BYREF

  v16 = 0;
  v17 = a12;
  pptlSrc = (POINTL)a10;
  v125 = a15;
  v121 = a3;
  v120 = a4;
  v18 = gajRop3[BYTE2(a13)];
  v126[0] = a2;
  v113 = a12;
  v142 = Gre::Base::Globals(a1);
  APIDCOBJ::APIDCOBJ((APIDCOBJ *)v134, (HDC)a1, v142);
  if ( !v134[0] )
  {
    APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v134);
    return 0LL;
  }
  if ( (v18 & 0xD4) == 0 )
  {
    v72 = GrepPatBlt((struct XDCOBJ *)v134, v126[0], v121, v120, a5, a13);
LABEL_108:
    v16 = v72;
    goto LABEL_95;
  }
  if ( !a11 )
    goto LABEL_95;
  if ( !**(_QWORD **)&pptlSrc )
    goto LABEL_95;
  if ( a12 > 2 )
    goto LABEL_95;
  if ( a14 < 0xC )
    goto LABEL_95;
  v19 = *a11;
  LODWORD(v122) = v19;
  if ( a14 < (unsigned int)v19 || (unsigned int)v19 < 0x28 || (int)a11[1] <= 0 || !a11[2] )
    goto LABEL_95;
  v119 = *(unsigned __int8 *)(*((_QWORD *)v134[0] + 122) + 215LL);
  DC::QuickInitXform(v134[0], &v133, 516LL);
  v20 = a11[4];
  v21 = v134[0];
  v22 = v133;
  if ( v20 - 4 <= 1 )
  {
    if ( v20 == 4 )
    {
      if ( (*((_DWORD *)v134[0] + 19) & 1) == 0 || *((_DWORD *)v134[0] + 8) == 1 )
        goto LABEL_95;
    }
    else if ( v20 != 5 || !(unsigned int)XDCOBJ::bSupportsPNG((XDCOBJ *)v134) )
    {
      goto LABEL_95;
    }
    if ( BYTE2(a13) != 204 || (*(_BYTE *)(v22 + 32) & 1) == 0 || a12 || v125 )
      goto LABEL_95;
  }
  if ( v120 != a8 )
  {
    v23 = a7;
    goto LABEL_14;
  }
  v70 = a9;
  if ( a5 == a9 && a9 > 0 )
  {
    v23 = a7;
    if ( a8 > 0 && !(a7 | a6) && BYTE2(a13) == 204 && v119 != 4 && (*(_DWORD *)(v22 + 32) & 2) != 0 )
    {
      v71 = -a11[2];
      if ( (int)a11[2] > 0 )
        v71 = a11[2];
      if ( a9 >= v71 )
        v70 = v71;
      v72 = GrepSetDIBitsToDeviceInternalImpl(
              (XDCOBJ *)v134,
              a5,
              a6,
              a7,
              a7,
              v70,
              *(_QWORD *)&pptlSrc,
              (__int64)a11,
              a12,
              a14,
              1,
              v125);
      goto LABEL_108;
    }
  }
  else
  {
    v23 = a7;
  }
LABEL_14:
  v24 = 0;
  if ( a12 == 1 )
  {
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v137);
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v137, (struct XDCOBJ *)v134, 0) )
    {
      v95 = *((_QWORD *)v134[0] + 62);
      if ( v95 )
        v24 = *(_DWORD *)(v95 + 96) == 1;
    }
    DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v137);
    v21 = v134[0];
    v22 = v133;
  }
  if ( BYTE2(a13) != 204 || (*(_BYTE *)(v22 + 32) & 1) == 0 || v24 )
  {
    v85 = a11[2];
    if ( v85 <= 0 )
      v86 = v23;
    else
      v86 = v85 - v23 - a9;
    OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v146, (struct XDCOBJ *)v134);
    CompatibleDC = GrepCreateCompatibleDC((struct OPTAPIDCOBJ *)v146);
    v88 = a11[4];
    v89 = CompatibleDC;
    ThreadRestrictNewHandlesRegion::ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v148);
    if ( v88 - 1 > 1 )
      DIBitmapReal = GrepCreateDIBitmapReal(
                       (struct OPTAPIDCOBJ *)v146,
                       4,
                       *(__int64 **)&pptlSrc,
                       a11,
                       a12,
                       a14,
                       0LL,
                       0,
                       0LL,
                       0,
                       0LL,
                       0LL);
    else
      DIBitmapReal = GrepCreateDIBitmapComp(
                       (struct OPTAPIDCOBJ *)v146,
                       a11[1],
                       a11[2],
                       *(_QWORD *)&pptlSrc,
                       (__int64)a11,
                       a12,
                       a14,
                       v125);
    v91 = DIBitmapReal;
    if ( v89 && DIBitmapReal )
    {
      GreSelectBitmap(v89, DIBitmapReal);
      OPTAPIDCOBJ::OPTAPIDCOBJ((OPTAPIDCOBJ *)v137, v89);
      v94 = GrepStretchBlt(
              (struct XDCOBJ *)v134,
              v126[0],
              v121,
              v120,
              a5,
              (struct OPTAPIDCOBJ *)v137,
              a6,
              v86,
              a8,
              a9,
              a13,
              0xFFFFFFu,
              1);
      OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v137);
      GrepDeleteDC(v89, 0x400000LL);
      GreDeleteObject(v91);
      if ( v94 )
        v16 = v85;
    }
    else
    {
      GrepDeleteDC(v89, 0x400000LL);
      GreDeleteObject(v91);
    }
    ThreadRestrictNewHandlesRegion::~ThreadRestrictNewHandlesRegion((ThreadRestrictNewHandlesRegion *)v148);
    OPTAPIDCOBJ::~OPTAPIDCOBJ((OPTAPIDCOBJ *)v146);
    goto LABEL_95;
  }
  v25 = a11[2];
  v26 = a11[4];
  v27 = a11[1];
  v28 = a11[8];
  v29 = 0;
  v30 = *((unsigned __int16 *)a11 + 7);
  v31 = 1;
  Src = (char *)a11 + v19;
  v32 = 0;
  v115 = 0LL;
  v105 = v26;
  v114 = 0LL;
  v112 = v27;
  v33 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 8));
  v111 = v28;
  v103 = 0;
  if ( v25 < 0 )
    v33 = 1;
  v104 = 0;
  DWORD2(v115) = v33;
  v34 = -v25;
  v118 = 0;
  v117 = 0;
  v116 = 0;
  if ( v25 >= 0 )
    v34 = v25;
  v110 = 0;
  v106 = v34;
  if ( v26 == 3 )
  {
    if ( a14 >= 0x34 )
    {
      v83 = 0;
      if ( a12 != 1 )
        v83 = a12;
      v113 = v83;
      v17 = v83;
      if ( (_DWORD)v30 == 16 )
      {
        LODWORD(v114) = 4;
      }
      else if ( (_DWORD)v30 == 32 )
      {
        LODWORD(v114) = 6;
      }
      else
      {
        EngSetLastError(0x57u);
        v21 = v134[0];
        v31 = 0;
        LODWORD(v27) = v112;
      }
      v118 = a11[10];
      v32 = 512;
      v96 = v30 * (unsigned int)v27;
      v117 = a11[11];
      v97 = a11[12];
      Src = a11 + 10;
      v116 = v97;
      v103 = 0;
      v104 = 2;
      if ( v96 > 0xFFFFFFFF || (int)v96 + 31 < (unsigned int)v96 )
        goto LABEL_115;
      v37 = v106;
      v38 = v106 * (unsigned __int64)(((unsigned int)(v96 + 31) >> 3) & 0x1FFFFFFC);
      if ( v38 <= 0xFFFFFFFF )
      {
        v39 = 2;
        v40 = 0;
        goto LABEL_38;
      }
      goto LABEL_114;
    }
    goto LABEL_192;
  }
  if ( v26 )
  {
    if ( v26 != 10 )
    {
      if ( v26 != 2 )
      {
        if ( v26 != 12 )
        {
          if ( v26 == 1 )
            goto LABEL_236;
          if ( v26 != 11 )
          {
            if ( v26 == 4 )
            {
              LODWORD(v114) = 9;
            }
            else
            {
              if ( v26 != 5 )
                goto LABEL_192;
              LODWORD(v114) = 10;
            }
            LODWORD(v38) = a11[5];
            v39 = 8;
            v104 = 8;
            v40 = 0;
            v103 = 0;
            v32 = 512;
            HIDWORD(v114) = v38;
            v37 = v34;
            goto LABEL_41;
          }
          if ( v21 && (unsigned int)DC::bIsCMYKColor(v21) )
          {
LABEL_236:
            if ( (_DWORD)v30 != 8 )
            {
              EngSetLastError(0x57u);
              v21 = v134[0];
              v31 = 0;
            }
            LODWORD(v38) = a11[5];
            LODWORD(v114) = 8;
            v32 = 1024;
            v29 = 1;
            v103 = 256;
            v104 = 1;
            HIDWORD(v114) = v38;
          }
          else
          {
            EngSetLastError(0x57u);
            v21 = v134[0];
            v31 = 0;
            LODWORD(v38) = HIDWORD(v114);
          }
          v40 = v103;
          v37 = v106;
          v110 = v29;
          v39 = v104;
          goto LABEL_39;
        }
        if ( !v21 || !(unsigned int)DC::bIsCMYKColor(v21) )
          goto LABEL_192;
      }
      if ( (_DWORD)v30 != 4 )
      {
        EngSetLastError(0x57u);
        v21 = v134[0];
        v31 = 0;
      }
      LODWORD(v38) = a11[5];
      v40 = 16;
      v37 = v106;
      v32 = 1024;
      LODWORD(v114) = 7;
      v103 = 16;
      v39 = 1;
      v104 = 1;
      v110 = 1;
      goto LABEL_38;
    }
    if ( !v21 || !(unsigned int)DC::bIsCMYKColor(v21) )
      goto LABEL_192;
    switch ( (_DWORD)v30 )
    {
      case 1:
        v103 = 2;
        LODWORD(v114) = 1;
        v104 = 1;
        goto LABEL_111;
      case 4:
        LODWORD(v114) = 2;
        v103 = 16;
        break;
      case 8:
        LODWORD(v114) = 3;
        v103 = 256;
        break;
      case 0x20:
        v104 = 16;
        goto LABEL_33;
      default:
LABEL_192:
        v73 = 87;
        goto LABEL_116;
    }
    v104 = 1;
    goto LABEL_111;
  }
  switch ( (_DWORD)v30 )
  {
    case 1:
      LODWORD(v114) = 1;
      v103 = 2;
LABEL_110:
      v104 = 1;
LABEL_111:
      v32 = 1024;
      goto LABEL_34;
    case 4:
      LODWORD(v114) = 2;
      v103 = 16;
      goto LABEL_110;
    case 8:
      LODWORD(v114) = 3;
      v103 = 256;
      goto LABEL_110;
  }
  v35 = 0;
  if ( a12 != 1 )
    v35 = a12;
  v113 = v35;
  v17 = v35;
  if ( (_DWORD)v30 == 24 )
  {
    LODWORD(v114) = 5;
    v104 = 8;
LABEL_176:
    v103 = 0;
    v32 = 512;
    v113 = v35;
    goto LABEL_34;
  }
  if ( (_DWORD)v30 == 16 )
  {
    LODWORD(v114) = 4;
    v118 = 31744;
    v117 = 992;
    v116 = 31;
    v104 = 2;
    goto LABEL_176;
  }
  if ( (_DWORD)v30 != 32 )
    goto LABEL_192;
  v104 = 8;
LABEL_33:
  v103 = 0;
  v32 = 512;
  LODWORD(v114) = 6;
LABEL_34:
  v36 = v30 * v27;
  if ( (unsigned __int64)(v30 * v27) > 0xFFFFFFFF || v36 + 31 < v36 )
    goto LABEL_115;
  v37 = v106;
  v38 = v106 * (unsigned __int64)(((v36 + 31) >> 3) & 0x1FFFFFFC);
  if ( v38 > 0xFFFFFFFF )
  {
LABEL_114:
    HIDWORD(v114) = -1;
LABEL_115:
    v73 = 534;
LABEL_116:
    EngSetLastError(v73);
    goto LABEL_95;
  }
  v39 = v104;
  v40 = v103;
LABEL_38:
  HIDWORD(v114) = v38;
LABEL_39:
  if ( !v31 )
    goto LABEL_95;
  LODWORD(v27) = v112;
  v26 = v105;
  v28 = v111;
LABEL_41:
  v108 = a14 - (_DWORD)v122;
  v41 = v125;
  if ( !v125 )
  {
    v41 = *(_QWORD *)(*((_QWORD *)v21 + 122) + 248LL);
    v125 = v41;
  }
  v112 = *((_DWORD *)v21 + 30);
  if ( (v112 & 0x10000000) != 0 && (!v41 || v26 - 10 > 2) )
    v112 = v112 & 0xFFFFFFF | 0x20000000;
  *(_QWORD *)((char *)&v114 + 4) = __PAIR64__(v37, v27);
  if ( v28 )
  {
    v84 = v40;
    if ( v28 <= v40 )
      v84 = v28;
    v111 = v84;
  }
  else
  {
    v111 = v40;
  }
  if ( *(_QWORD *)(*(_QWORD *)&pptlSrc + 8LL) - *(_QWORD *)(*(_QWORD *)&pptlSrc + 16LL) < (unsigned __int64)(unsigned int)v38 )
    goto LABEL_192;
  v42 = *((_QWORD *)v21 + 6);
  v138 = v126[0];
  v140 = v126[0] + v120;
  v139 = v121;
  v141 = v121 + a5;
  DC::QuickInitXform(v21, v126, 516LL);
  v44 = v134[0];
  v122 = v134[0];
  if ( (*(_BYTE *)(*(_QWORD *)v126 + 32LL) & 0x43) == 0x43 )
    goto LABEL_50;
  if ( (unsigned int)bCvtPts1(*(_QWORD *)v126, &v138, 2LL, v43) )
  {
    v44 = v134[0];
LABEL_50:
    v45 = v138;
    v46 = v140;
    if ( (*(_BYTE *)(*((_QWORD *)v122 + 122) + 108LL) & 1) != 0 )
    {
      v45 = v138 + 1;
      v46 = v140 + 1;
      ++v138;
      ++v140;
    }
    if ( v45 == v46 || (v47 = v139, v139 == v141) )
    {
      v16 = a9;
      goto LABEL_95;
    }
    v48 = 0;
    v107 = 0;
    if ( v45 > v46 )
    {
      v138 = v46;
      v140 = v45;
      if ( (*(_BYTE *)(*((_QWORD *)v44 + 122) + 108LL) & 1) == 0 )
      {
        v138 = v46 + 1;
        v140 = v45 + 1;
      }
      v48 = 1;
      v107 = 1;
    }
    if ( v139 > v141 )
    {
      v139 = v141 + 1;
      v141 = v47 + 1;
      v107 = v48 ^ 2;
    }
    v128 = 0;
    v127 = 0LL;
    if ( !v17 )
      v31 = PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v127, v39, v40, 0LL, v118, v117, v116, v32, 1) != 0 ? v31 : 0;
    DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v137);
    if ( !v31 || !DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v137, (struct XDCOBJ *)v134, 0) )
      goto LABEL_94;
    Gre::Base::Globals(v49);
    v50 = *(_DWORD *)(*((_QWORD *)v134[0] + 6) + 40LL) & 0x8000;
    *(_QWORD *)&v115 = 0LL;
    DWORD2(v115) |= 8 * v50;
    v130 = 0LL;
    v131 = 0;
    v132 = 0;
    v51 = (void *)(**(_QWORD **)&pptlSrc + *(_QWORD *)(*(_QWORD *)&pptlSrc + 16LL));
    if ( v110 )
    {
      v122 = 0LL;
      v123 = 0;
      v136[0] = v114;
      v124 = 0;
      v136[1] = v115;
      if ( SURFMEM::bCreateDIB((SURFMEM *)&v122, (struct _DEVBITMAPINFO *)v136, v51, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
        && (LODWORD(v114) = ((_DWORD)v114 != 7) + 2,
            SURFMEM::bCreateDIB((SURFMEM *)&v130, (struct _DEVBITMAPINFO *)&v114, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)) )
      {
        *(_QWORD *)&prclDest.right = *(_QWORD *)((char *)&v114 + 4);
        *(_QWORD *)&prclDest.left = 0LL;
        pptlSrc = 0LL;
        EngCopyBits(
          (SURFOBJ *)((v130 + 24) & -(__int64)(v130 != 0)),
          (SURFOBJ *)(((unsigned __int64)v122 + 24) & -(__int64)(v122 != 0LL)),
          0LL,
          0LL,
          &prclDest,
          &pptlSrc);
      }
      else
      {
        v31 = 0;
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v122);
      v52 = v31 == 0;
    }
    else
    {
      v52 = SURFMEM::bCreateDIB((SURFMEM *)&v130, (struct _DEVBITMAPINFO *)&v114, v51, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) == 0;
    }
    if ( v52 )
    {
LABEL_93:
      SURFMEM::~SURFMEM((SURFMEM *)&v130);
LABEL_94:
      DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v137);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v127);
      goto LABEL_95;
    }
    v74 = Gre::Base::Globals(v53);
    if ( *((_QWORD *)v134[0] + 62) )
    {
      v75 = v135;
      if ( !v135 )
        v75 = *((_QWORD *)v134[0] + 62);
    }
    else
    {
      v75 = *((_QWORD *)v74 + 533);
    }
    v76 = *(_QWORD *)(v75 + 128);
    XlateObject = 0LL;
    v122 = (DC *)*((_QWORD *)v134[0] + 11);
    pptlSrc = 0LL;
    v110 = 0;
    if ( !XEPALOBJ::bIsPalDefault((XEPALOBJ *)&v122) )
      *(_QWORD *)(v75 + 176) = *(_QWORD *)v122;
    if ( v113 )
    {
      if ( v113 == 1 )
      {
        if ( v108 < 2 * (unsigned __int64)v111
          || !(unsigned int)EXLATEOBJ::bMakeXlate(&pptlSrc, Src, v122, v75, v111, v103) )
        {
          goto LABEL_92;
        }
        XlateObject = (_DWORD *)pptlSrc;
        if ( *((_DWORD *)v142 + 768) && (*(_DWORD *)(v42 + 40) & 1) != 0 )
        {
          if ( PALMEMOBJ::bCreatePalette((PALMEMOBJ *)&v127, v104, v103, 0LL, v118, v117, v116, v32, 1) )
          {
            v98 = *(_QWORD *)(v75 + 128);
            if ( !v98 )
              v98 = *(_QWORD *)(v42 + 1792);
            XEPALOBJ::vGetEntriesFrom(&v127, v122, v98, Src, v111);
            v110 = 1;
          }
          else
          {
            v31 = 0;
          }
        }
        v79 = v105;
      }
      else
      {
        v79 = v105;
        if ( v113 != 2 )
          goto LABEL_130;
        if ( *(_DWORD *)(v75 + 96) != (_DWORD)v114 )
          v31 = 0;
        XlateObject = (_DWORD *)((char *)v142 + 4552);
      }
    }
    else
    {
      v78 = v111;
      if ( v111 )
      {
        if ( v108 < 4 * v111 )
          goto LABEL_92;
        v79 = v105;
        if ( v105 - 10 > 2 )
        {
          XEPALOBJ::vCopy_rgbquad((XEPALOBJ *)&v127, (struct tagRGBQUAD *)Src, 0, v111);
        }
        else
        {
          if ( v111 > *(_DWORD *)(v127 + 28) )
            v78 = *(_DWORD *)(v127 + 28);
          memmove(*(void **)(v127 + 112), Src, 4LL * v78);
          XEPALOBJ::vUpdateTime((XEPALOBJ *)&v127);
        }
        LODWORD(v102) = 0;
        LODWORD(v101) = 0xFFFFFF;
        v100[0] = 0;
        LODWORD(v99) = 0;
        pptlSrc = (POINTL)CreateXlateObject((void *)v125, v112, v127, v76, v122, v122, v99, *(_QWORD *)v100, v101, v102);
        XlateObject = (_DWORD *)pptlSrc;
        if ( !*(_QWORD *)&pptlSrc )
          v31 = 0;
      }
      else
      {
        LODWORD(v102) = 0;
        LODWORD(v101) = 0xFFFFFF;
        v100[0] = 0;
        LODWORD(v99) = 0;
        v79 = v105;
        XlateObject = CreateXlateObject((void *)v125, v112, v127, v76, v122, v122, v99, *(_QWORD *)v100, v101, v102);
        pptlSrc = (POINTL)XlateObject;
        if ( !XlateObject )
          v31 = 0;
      }
    }
    if ( v31 )
    {
LABEL_130:
      v80 = v134[0];
      if ( (*((_DWORD *)v134[0] + 9) & 0xE0) != 0 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v134, (struct ERECTL *)&v138);
        v80 = v134[0];
      }
      if ( *((_QWORD *)v80 + 62) && !DC::bInFullScreen(v80) )
      {
        if ( (v137[24] & 1) != 0 )
        {
          v55 = *(_DWORD *)(v81 + 40) & 1LL;
          v56 = a6;
          v138 += *(_DWORD *)(v81 + 8 * v55 + 1016);
          v140 += *(_DWORD *)(v81 + 8 * v55 + 1016);
          v139 += *(_DWORD *)(v81 + 8 * v55 + 1020);
          v141 += *(_DWORD *)(v81 + 8 * v55 + 1020);
          LODWORD(v142) = a6;
          if ( v79 == 4 && (BYTE8(v115) & 1) != 0 )
          {
            v59 = a7;
            v58 = a9;
            v57 = v106;
          }
          else
          {
            v57 = v106;
            v58 = a9;
            v59 = v106 - a7 - a9;
          }
          v60 = v59 + v58;
          v61 = v107;
          v62 = a6 + a8;
          HIDWORD(v142) = v59;
          v144 = v59 + v58;
          v143 = a6 + a8;
          if ( a6 > a6 + a8 )
          {
            v56 = v62 + 1;
            v61 = v107 ^ 1;
            v62 = a6 + 1;
            LODWORD(v142) = v56;
            v143 = a6 + 1;
          }
          if ( v59 > v60 )
          {
            v92 = v59;
            v61 ^= 2u;
            v59 = v60 + 1;
            HIDWORD(v142) = v60 + 1;
            v60 = v92 + 1;
            v144 = v92 + 1;
          }
          if ( v62 > 0
            && v60 > 0
            && v59 != v60
            && v56 < *(_DWORD *)(v130 + 56)
            && v59 < *(_DWORD *)(v130 + 60)
            && v56 != v62 )
          {
            XDCOBJ::prgnEffRao(v134);
            XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)v146);
            XCLIPOBJ::vSetup((XCLIPOBJ *)v146, v63, (const struct ERECTL *)&v138, 0);
            if ( ERECTL::bEmpty((ERECTL *)&v147) )
            {
              v16 = v57;
            }
            else
            {
              if ( (*((_DWORD *)v134[0] + 9) & 0xE0) != 0 )
              {
                prclDest = v147;
                XDCOBJ::vAccumulateTight((XDCOBJ *)v134, v64, (struct ERECTL *)&prclDest);
              }
              if ( v110 )
              {
                XEPALOBJ::vRefPalette((XEPALOBJ *)&v127);
                *(_QWORD *)(v130 + 128) = v127;
              }
              v65 = XlateObject;
              v66 = *(_QWORD *)(v75 + 48);
              v67 = v119;
              if ( (*(_DWORD *)(v75 + 112) & 2) != 0 )
              {
                v68 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v66 + 2840);
                if ( (*(_DWORD *)(v66 + 40) & 0x20000) == 0 )
                {
                  if ( v119 == 4 && (*((_BYTE *)v134[0] + 72) & 0x10) == 0 )
                    v68 = EngStretchBlt;
                  if ( (int)v142 < 0
                    || SHIDWORD(v142) < 0
                    || v143 > *(_DWORD *)(v130 + 56)
                    || v144 > *(_DWORD *)(v130 + 60) )
                  {
                    v68 = EngStretchBlt;
                    v65 = XlateObject;
                  }
                }
              }
              else
              {
                v68 = EngStretchBlt;
              }
              if ( (v61 & 1) != 0 )
              {
                v82 = v138;
                v138 = v140;
                v140 = v82;
              }
              if ( (v61 & 2) != 0 )
              {
                v93 = v139;
                v139 = v141;
                v141 = v93;
              }
              ++*(_DWORD *)(v75 + 92);
              v69 = 0LL;
              if ( *((__int16 *)v134[0] + 89) >= 0 )
                v69 = (char *)v134[0] + 176;
              if ( ((unsigned int (__fastcall *)(__int64, __int64, _QWORD, _BYTE *, _DWORD *, char *, char *, int *, struct Gre::Base::SESSION_GLOBALS **, _QWORD, int))v68)(
                     v75 + 24,
                     (v130 + 24) & -(__int64)(v130 != 0),
                     0LL,
                     v146,
                     v65,
                     v69,
                     (char *)v134[0] + 1192,
                     &v138,
                     &v142,
                     0LL,
                     v67) )
              {
                v16 = v57;
              }
            }
          }
        }
      }
      else
      {
        v16 = v106;
      }
    }
LABEL_92:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&pptlSrc);
    goto LABEL_93;
  }
LABEL_95:
  APIDCOBJ::~APIDCOBJ((APIDCOBJ *)v134);
  return v16;
}
