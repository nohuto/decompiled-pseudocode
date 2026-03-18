/*
 * XREFs of ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXKAEBUTag@RFONTOBJ@@@Z @ 0x140014230
 * Callers:
 *     GreExtTextOutW @ 0x140057230 (GreExtTextOutW.c)
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z @ 0x14007629C (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@AEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryPoint@RFONTOBJ@@@Z @ 0x14015EAE4 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXKW4EntryP.c)
 *     ?GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z @ 0x1401658D0 (-GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@KAEBUTag@RFONTOBJ@@@Z.c)
 *     ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z @ 0x140231A74 (-GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IKW4EntryPoint@RFONTOBJ@@@Z.c)
 * Callees:
 *     ??0XCLIPOBJ@@QEAA@XZ @ 0x140013B48 (--0XCLIPOBJ@@QEAA@XZ.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x140013B74 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x140016F64 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z @ 0x1400180D0 (-bInit@RFONTOBJ@@QEAAHAEAVUDCOBJ@@HKAEBUTag@1@@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140079978 (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14007FBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ??0CFixPred@Prediction@@QEAA@XZ @ 0x14009AD34 (--0CFixPred@Prediction@@QEAA@XZ.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400A92BC (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400A94AC (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400A94F8 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400AB7C0 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVUDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D9BD0 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D9D50 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1400DA6C0 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ??0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z @ 0x1400E58DC (--0XEPATHOBJ@@QEAA@PEAUHPATH__@@@Z.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1400E6A38 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?fxFastY@EXFORMOBJ@@QEBAJJ@Z @ 0x1400E8138 (-fxFastY@EXFORMOBJ@@QEBAJJ@Z.c)
 *     ?fxFastX@EXFORMOBJ@@QEBAJJ@Z @ 0x1400E81AC (-fxFastX@EXFORMOBJ@@QEBAJJ@Z.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x140144388 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x14014AFD0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1401943E4 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x1402162C8 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x140216338 (-bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     W32GetCurrentThreadNonPaged @ 0x140270D34 (W32GetCurrentThreadNonPaged.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140301534 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1403016B8 (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x140311DC4 (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14031283C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepExtTextOutWLocked(
        __int64 a1,
        DC **a2,
        unsigned int a3,
        unsigned int a4,
        int a5,
        unsigned int *a6,
        unsigned __int16 *a7,
        int a8,
        ULONG *a9,
        int a10,
        void *a11,
        unsigned int a12,
        struct RFONTOBJ::Tag *a13)
{
  unsigned int v13; // r15d
  DC **v14; // rdi
  int v16; // r12d
  int v17; // eax
  DC *v18; // rcx
  unsigned int *v19; // rdx
  int v20; // eax
  unsigned int v21; // esi
  DC *v22; // r9
  int v23; // edx
  ERECTL *v24; // r13
  unsigned __int64 v25; // rbx
  ERECTL *v26; // rbx
  int v27; // r13d
  LONG *v28; // r11
  DC **v29; // r14
  __int64 v30; // r9
  __int64 v31; // r8
  int v32; // r10d
  __int64 v33; // rdx
  int v34; // ebx
  unsigned __int16 *v35; // r11
  struct _RECTL *v36; // r13
  ERECTL *v37; // rcx
  __int64 v38; // rcx
  __int64 v40; // rcx
  unsigned int v41; // ebx
  int v42; // ecx
  int v43; // r8d
  int v44; // edx
  int v45; // eax
  DC *v46; // rdx
  DC *v47; // r8
  int v48; // edx
  int v49; // eax
  int v50; // r11d
  int v51; // ecx
  BOOL v52; // eax
  bool v53; // zf
  DC *v54; // rax
  DC *v55; // r11
  int v56; // ecx
  DC *v58; // rdx
  __int64 v59; // r10
  struct REGION *v60; // r10
  __m128i rclBounds; // xmm2
  int v62; // edx
  struct _RECTL *v63; // r10
  DC *v64; // rcx
  struct _SURFOBJ *v65; // r9
  LONG v66; // ebx
  int v67; // r8d
  __int64 v68; // r13
  int v69; // eax
  int v70; // eax
  DC *v71; // rax
  int v72; // r9d
  HDEV pulXlate; // rsi
  __int64 v74; // rbx
  unsigned int v75; // r11d
  __int64 v76; // rdi
  __int64 v77; // rcx
  struct _POINTL **v78; // rdx
  __int64 v79; // r10
  __int64 v80; // rax
  int v81; // r8d
  struct _POINTL *v82; // rbx
  LONG v83; // edi
  struct _SURFOBJ *v84; // r8
  ERECTL *v85; // r9
  LONG v86; // r11d
  LONG v87; // r10d
  struct XDCOBJ *v88; // rbx
  __int64 v89; // rdx
  struct _POINTL *v90; // rdi
  __int64 *CurrentThreadNonPaged; // rax
  __int64 v92; // rcx
  __int64 v93; // rax
  BOOL (__stdcall *v94)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX); // rdi
  int v95; // edx
  int v96; // eax
  __int64 v97; // rdx
  __int64 v98; // rcx
  struct _POINTL *v99; // rdi
  __int64 v100; // rax
  int v101; // ebx
  int v102; // eax
  struct _RECTL *v103; // rsi
  __int64 v104; // rax
  const struct EXFORMOBJR *v105; // rdx
  unsigned int v106; // r9d
  int v107; // eax
  int v108; // eax
  bool v109; // cc
  __int64 v110; // rax
  int v111; // edx
  LONG v112; // eax
  int v113; // r8d
  int v114; // eax
  int v115; // edx
  DC *v116; // rax
  struct _SURFOBJ *v117; // r13
  unsigned __int16 *v118; // rax
  DC *v119; // rdx
  char *v120; // rcx
  int v121; // eax
  int v122; // r8d
  int v123; // r10d
  int v124; // eax
  int v125; // r11d
  int v126; // r9d
  DC *v127; // rcx
  int v128; // eax
  int v129; // ecx
  __int32 v130; // ebx
  LONG right; // r8d
  int top; // r9d
  int v133; // edx
  int bottom; // edx
  __int32 v135; // ecx
  __int32 v136; // eax
  __int32 v137; // r11d
  __int64 v138; // rax
  int v139; // ecx
  const struct _POINTL *v140; // rdx
  int v141; // ecx
  int v142; // eax
  __int64 v143; // r11
  int v144; // edx
  int v145; // eax
  __int64 v146; // r11
  int v147; // edx
  int v148; // eax
  __int64 v149; // r11
  int v150; // edx
  int v151; // eax
  LONG v152; // eax
  LONG v153; // eax
  LONG v154; // r10d
  LONG v155; // r11d
  struct _BRUSHOBJ *v156; // rax
  int v157; // edi
  unsigned __int64 v158; // r9
  int v159; // edx
  unsigned __int64 v160; // r8
  LONG v161; // eax
  struct _BRUSHOBJ *v162; // rax
  const struct EXFORMOBJR *v163; // rdx
  unsigned int v164; // r9d
  _BYTE *v165; // rdx
  __int64 v166; // rdx
  __m128i v167; // xmm6
  __int64 v168; // rcx
  struct _BRUSHOBJ *v169; // rsi
  LONG *v170; // rdx
  struct _SURFOBJ *v171; // r8
  int v172; // r10d
  struct _SURFOBJ *v173; // r9
  int v174; // ebx
  LONG v175; // ecx
  LONG v176; // eax
  LONG v177; // ecx
  LONG v178; // eax
  ULONG v179; // ecx
  LONG v180; // eax
  unsigned __int64 v181; // rcx
  int v182; // eax
  int v183; // r8d
  unsigned __int64 v184; // rcx
  int v185; // r9d
  int v186; // edx
  const struct EXFORMOBJR *v187; // rdx
  unsigned int v188; // r9d
  DC *v189; // rcx
  DC *v190; // rax
  char v191; // di
  int v192; // esi
  int v193; // ebx
  int v194; // eax
  struct HPATH__ *v195; // rdx
  _DWORD *v196; // rax
  int v197; // eax
  _DWORD *v198; // rax
  int v199; // eax
  int v200; // eax
  struct _XLATEOBJ *v201; // [rsp+28h] [rbp-E8h]
  struct _POINTL *v202; // [rsp+38h] [rbp-D8h]
  struct _POINTL *v203; // [rsp+40h] [rbp-D0h]
  unsigned int v204; // [rsp+58h] [rbp-B8h]
  unsigned int v205; // [rsp+90h] [rbp-80h]
  int v206; // [rsp+90h] [rbp-80h]
  LONG v207; // [rsp+90h] [rbp-80h]
  struct _BRUSHOBJ *v208; // [rsp+98h] [rbp-78h] BYREF
  LONG v209; // [rsp+A0h] [rbp-70h]
  int v210[3]; // [rsp+A4h] [rbp-6Ch] BYREF
  struct _POINTL *v211; // [rsp+B0h] [rbp-60h]
  struct _SURFOBJ *v212; // [rsp+B8h] [rbp-58h]
  _DWORD *v213; // [rsp+C0h] [rbp-50h] BYREF
  unsigned __int64 v214; // [rsp+C8h] [rbp-48h]
  struct _BRUSHOBJ *v215; // [rsp+D0h] [rbp-40h] BYREF
  ERECTL *v216; // [rsp+D8h] [rbp-38h] BYREF
  LONG left; // [rsp+E0h] [rbp-30h]
  ERECTL *v218; // [rsp+F0h] [rbp-20h]
  int v219; // [rsp+F8h] [rbp-18h]
  struct _XLATEOBJ v220; // [rsp+100h] [rbp-10h] BYREF
  struct _SURFOBJ *v221; // [rsp+118h] [rbp+8h]
  int v222; // [rsp+120h] [rbp+10h]
  unsigned __int16 *v223[2]; // [rsp+130h] [rbp+20h]
  DC **v224; // [rsp+140h] [rbp+30h] BYREF
  int v225; // [rsp+150h] [rbp+40h] BYREF
  unsigned int v226; // [rsp+154h] [rbp+44h]
  __int64 v227; // [rsp+158h] [rbp+48h]
  __int128 v228; // [rsp+160h] [rbp+50h]
  __int128 v229; // [rsp+170h] [rbp+60h]
  __int64 v230; // [rsp+180h] [rbp+70h]
  __int64 v231; // [rsp+188h] [rbp+78h]
  __int64 v232; // [rsp+190h] [rbp+80h]
  __int64 v233; // [rsp+198h] [rbp+88h]
  _BYTE v234[32]; // [rsp+1A0h] [rbp+90h] BYREF
  int v235; // [rsp+1C0h] [rbp+B0h]
  struct RFONTOBJ::Tag *v236; // [rsp+1D0h] [rbp+C0h]
  __int64 v237; // [rsp+1D8h] [rbp+C8h]
  char v238[8]; // [rsp+1E0h] [rbp+D0h] BYREF
  __int64 v239; // [rsp+1E8h] [rbp+D8h]
  char v240[80]; // [rsp+230h] [rbp+120h] BYREF
  __m128i rclBkGround; // [rsp+280h] [rbp+170h] BYREF
  struct _RECTL v242; // [rsp+290h] [rbp+180h] BYREF
  struct _RECTL v243; // [rsp+2A0h] [rbp+190h] BYREF
  void *v244[2]; // [rsp+2B0h] [rbp+1A0h] BYREF
  struct _CLIPOBJ v245; // [rsp+2C0h] [rbp+1B0h] BYREF
  STROBJ pstro; // [rsp+360h] [rbp+250h] BYREF
  __int64 v247; // [rsp+3A0h] [rbp+290h]
  int v248; // [rsp+3B0h] [rbp+2A0h]
  int v249; // [rsp+3B4h] [rbp+2A4h]
  int v250; // [rsp+3E0h] [rbp+2D0h]
  _BYTE v251[100]; // [rsp+3E4h] [rbp+2D4h] BYREF
  int v252; // [rsp+448h] [rbp+338h]
  void *v253; // [rsp+468h] [rbp+358h]
  struct _POINTL v254; // [rsp+4A0h] [rbp+390h] BYREF
  LONG v255; // [rsp+4A8h] [rbp+398h]
  LONG v256; // [rsp+4ACh] [rbp+39Ch]
  LONG v257; // [rsp+4B0h] [rbp+3A0h]
  LONG v258; // [rsp+4B4h] [rbp+3A4h]
  LONG v259; // [rsp+4B8h] [rbp+3A8h]
  int v260; // [rsp+4BCh] [rbp+3ACh]
  struct _POINTL v261; // [rsp+4C0h] [rbp+3B0h] BYREF

  v13 = 0;
  v14 = a2;
  LODWORD(v212) = a8;
  v16 = 128;
  v223[0] = a7;
  v244[0] = a11;
  v236 = a13;
  v17 = 4;
  v237 = a1;
  if ( (a5 & 0x10) == 0 )
    v17 = 2;
  *(_QWORD *)&v220.iSrcType = a2;
  v18 = *a2;
  v19 = a6;
  LODWORD(v208) = v17;
  v20 = *((_DWORD *)v18 + 62);
  v214 = __PAIR64__(a4, a3);
  *(_QWORD *)&v210[1] = a6;
  v220.pulXlate = a9;
  v219 = 0;
  if ( (v20 & 1) == 0 || (a5 & 4) == 0 )
  {
    if ( (*((_DWORD *)v18 + 9) & 0x10000) != 0 )
    {
      v179 = 6;
      goto LABEL_336;
    }
    v210[0] = a5 & 0x2000;
    if ( (a5 & 0x2000) == 0 || a9 )
    {
      v21 = a5 & 0xFFFFC36F;
      if ( a6 )
      {
        if ( *a6 == a6[2] || a6[1] == a6[3] )
        {
          a6[2] = a3;
          *a6 = a3;
          a6[3] = a4;
          a6[1] = a4;
          if ( (a5 & 6) == 2 )
          {
            v19 = 0LL;
            v21 = a5 & 0xFFFFC36D;
            *(_QWORD *)&v210[1] = 0LL;
          }
        }
      }
      else
      {
        v21 = a5 & 0xFFFFC369;
      }
      v22 = *v14;
      if ( !*v14
        || v21 && (!v19 || (v21 & 0xFFFFFFF9) != 0)
        || (v23 = *((_DWORD *)v22 + 62), (v23 & 1) != 0 && (v21 & 4) != 0) )
      {
        v16 = 0;
LABEL_32:
        LOBYTE(v13) = v16 != 0;
        ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v237, v13);
        return v38;
      }
      rclBkGround = 0LL;
      if ( (v23 & 1) != 0 )
      {
        v218 = 0LL;
        LODWORD(v24) = 0;
        LODWORD(v25) = 0;
        left = 0;
        v205 = 0;
        v209 = 0;
        v222 = 0;
        LODWORD(v221) = 0;
        LODWORD(v215) = 0;
        LODWORD(v211) = 0;
        v243.left = 0;
      }
      else
      {
        v24 = (ERECTL *)*((_QWORD *)v22 + (*((_DWORD *)v22 + 10) & 1) + 127);
        v216 = v24;
        v25 = (unsigned __int64)v24 >> 32;
        v218 = v24;
        v209 = HIDWORD(v24);
        v222 = HIDWORD(v24);
        left = (unsigned int)v24;
        LODWORD(v211) = HIDWORD(v24);
        v205 = (unsigned int)v24;
        v243.left = HIDWORD(v24);
        LODWORD(v221) = (unsigned int)v24;
        LODWORD(v215) = (_DWORD)v24;
      }
      v26 = (ERECTL *)(unsigned int)(16 * v25);
      v216 = v26;
      v27 = 16 * (_DWORD)v24;
      DC::QuickInitXform(v22, &v220, 516LL);
      v28 = *(LONG **)&v210[1];
      v29 = 0LL;
      v224 = 0LL;
      if ( !*(_QWORD *)&v210[1] )
        goto LABEL_14;
      v210[1] = v21 & 2;
      v128 = 136;
      if ( (v21 & 2) == 0 )
        v128 = 128;
      v16 = v128;
      v129 = *(_DWORD *)(*(_QWORD *)&v220.iUniq + 32LL);
      if ( (v129 & 2) != 0 )
      {
        v130 = left + *v28 + ((*(_DWORD *)(*(_QWORD *)&v220.iUniq + 24LL) + 8) >> 4);
        v242.left = v130;
        right = v205 + v28[2] + ((*(_DWORD *)(*(_QWORD *)&v220.iUniq + 24LL) + 8) >> 4);
        v242.right = right;
        v207 = right;
        top = v209 + v28[1] + ((*(_DWORD *)(*(_QWORD *)&v220.iUniq + 28LL) + 8) >> 4);
        v242.top = top;
        v133 = *(_DWORD *)(*(_QWORD *)&v220.iUniq + 28LL) + 8;
        LODWORD(v218) = top;
        bottom = v222 + v28[3] + (v133 >> 4);
        v209 = bottom;
        v242.bottom = bottom;
      }
      else
      {
        v53 = (v129 & 1) == 0;
        v141 = *v28;
        if ( v53 )
        {
          v180 = v28[3];
          v254.x = *v28;
          v255 = v141;
          v256 = v28[1];
          v258 = v256;
          v254.y = v180;
          v257 = v28[2];
          EXFORMOBJ::bXform((EXFORMOBJ *)&v220, &v254, (struct _POINTFIX *)&v254, 3uLL);
          v259 = v254.x + v257 - v255;
          v243.left = v259;
          v260 = v254.y + v258 - v256;
          LODWORD(v211) = v260;
          v181 = (v255 > v254.x) ^ (unsigned __int64)(v255 <= v257);
          v182 = *(&v254.x + 2 * v181);
          v183 = *(&v257 + 2 * v181);
          if ( v182 > v183 )
            v182 += 15;
          else
            v183 += 15;
          right = (_DWORD)v218 + (v183 >> 4);
          v242.left = (_DWORD)v218 + (v182 >> 4);
          left = v242.left;
          v242.right = right;
          v207 = right;
          v184 = (v256 > v254.y) ^ (unsigned __int64)(v256 <= v258);
          v185 = *(&v254.y + 2 * v184);
          v186 = *(&v258 + 2 * v184);
          if ( v185 > v186 )
            v185 += 15;
          else
            v186 += 15;
          top = HIDWORD(v218) + (v185 >> 4);
          bottom = HIDWORD(v218) + (v186 >> 4);
          v242.bottom = bottom;
          v209 = bottom;
          v242.top = top;
          LODWORD(v218) = top;
          if ( (v21 & 4) != 0 )
          {
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v225);
            if ( v227 )
            {
              if ( EPATHOBJ::bAddPolygon((EPATHOBJ *)&v225, v187, &v254, v188) )
              {
                v189 = *v14;
                v243 = 0LL;
                v243.top = 16 * (*((_DWORD *)v189 + 251) - HIDWORD(v218));
                v243.bottom = 16 * (*((_DWORD *)v189 + 253) - HIDWORD(v218));
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v210[1], (struct EPATHOBJ *)&v225, 1u, &v243);
                if ( *(_QWORD *)&v210[1] )
                {
                  v190 = *v14;
                  v29 = v14;
                  v224 = v14;
                  *((_QWORD *)v190 + 141) = *(_QWORD *)&v210[1];
                  if ( (unsigned int)DC::bTightenRao(*v14) )
                    LOBYTE(v21) = v21 & 0xFB;
                }
              }
            }
            v191 = v21;
            v192 = v21 & 4;
            v193 = v192;
            if ( v192 )
              v16 = 0;
            PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v225);
            bottom = v242.bottom;
            right = v242.right;
            v194 = 0;
            if ( !v192 )
              v194 = (int)v212;
            LOBYTE(v21) = 0;
            top = v242.top;
            v53 = v193 == 0;
            v130 = v242.left;
            if ( v53 )
              LOBYTE(v21) = v191;
            a8 = v194;
            v14 = *(DC ***)&v220.iSrcType;
            v209 = v242.bottom;
            v207 = v242.right;
            LODWORD(v218) = v242.top;
          }
          else
          {
            if ( v210[1] )
            {
              v254.x += v27;
              v254.y += (int)v26;
              v255 += v27;
              v16 = 130;
              v257 += v27;
              v259 = v27 + v243.left;
              v256 += (int)v26;
              v260 = (_DWORD)v26 + (_DWORD)v211;
              v258 += (int)v26;
            }
            v130 = left;
          }
        }
        else
        {
          v142 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v220, v141);
          v144 = *(_DWORD *)(v143 + 8);
          v242.left = (_DWORD)v221 + ((v142 + 8) >> 4);
          v145 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v220, v144);
          v147 = *(_DWORD *)(v146 + 4);
          v242.right = (_DWORD)v215 + ((v145 + 8) >> 4);
          v148 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v220, v147);
          v150 = *(_DWORD *)(v149 + 12);
          v242.top = (_DWORD)v211 + ((v148 + 8) >> 4);
          v151 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v220, v150);
          right = v242.right;
          top = v242.top;
          v130 = v242.left;
          v207 = v242.right;
          bottom = v243.left + ((v151 + 8) >> 4);
          v209 = bottom;
          v242.bottom = bottom;
          LODWORD(v218) = v242.top;
        }
      }
      if ( (*(_DWORD *)(*((_QWORD *)*v14 + 122) + 108LL) & 1) != 0 )
      {
        ++v130;
        ++right;
        v242.left = v130;
        v207 = right;
        v242.right = right;
      }
      if ( v130 > right )
      {
        v152 = v130;
        v130 = right;
        v242.left = right;
        v135 = v152;
        v242.right = v152;
      }
      else
      {
        v135 = v207;
      }
      if ( top > bottom )
      {
        v136 = top;
        v242.top = bottom;
        v242.bottom = top;
        v137 = bottom;
      }
      else
      {
        v136 = v209;
        v137 = (int)v218;
      }
      if ( (v16 & 0xA) != 0 )
      {
        v33 = rclBkGround.m128i_u32[0];
        v31 = rclBkGround.m128i_u32[2];
        if ( rclBkGround.m128i_i32[0] == rclBkGround.m128i_i32[2]
          || (v32 = rclBkGround.m128i_i32[1],
              v30 = rclBkGround.m128i_u32[3],
              rclBkGround.m128i_i32[1] == rclBkGround.m128i_i32[3]) )
        {
          rclBkGround = (__m128i)v242;
          v30 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v242, 12));
          v32 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v242, 4));
          v31 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v242, 8));
          v33 = (unsigned int)_mm_cvtsi128_si32((__m128i)v242);
        }
        else
        {
          if ( v130 < rclBkGround.m128i_i32[0] )
            v33 = (unsigned int)v130;
          rclBkGround.m128i_i32[0] = v33;
          if ( v137 < rclBkGround.m128i_i32[1] )
          {
            v32 = v137;
            rclBkGround.m128i_i32[1] = v137;
          }
          if ( v135 > rclBkGround.m128i_i32[2] )
          {
            v31 = (unsigned int)v135;
            rclBkGround.m128i_i32[2] = v135;
          }
          if ( v136 > rclBkGround.m128i_i32[3] )
          {
            v30 = (unsigned int)v136;
            rclBkGround.m128i_i32[3] = v136;
          }
        }
      }
      else
      {
LABEL_14:
        v30 = rclBkGround.m128i_u32[3];
        v31 = rclBkGround.m128i_u32[2];
        v32 = rclBkGround.m128i_i32[1];
        v33 = rclBkGround.m128i_u32[0];
      }
      v34 = 1;
      *(_QWORD *)&v210[1] = 0LL;
      v35 = 0LL;
      v206 = 1;
      *(_QWORD *)&v243.left = 0LL;
      v213 = 0LL;
      v252 = 0;
      if ( !a8 )
        goto LABEL_20;
      if ( (unsigned int)RFONTOBJ::bInit(
                           (RFONTOBJ *)&v213,
                           (struct UDCOBJ *)v14,
                           *((_DWORD *)*v14 + 62) & 1,
                           (unsigned int)v208,
                           v236) )
        GreAcquireSemaphore<5,RFONT *>(v213);
      if ( !v213 )
      {
        v30 = rclBkGround.m128i_u32[3];
        v16 = 0;
        v31 = rclBkGround.m128i_u32[2];
        v35 = 0LL;
        v32 = rclBkGround.m128i_i32[1];
        v33 = rclBkGround.m128i_u32[0];
        v206 = 1;
LABEL_20:
        v36 = 0LL;
        goto LABEL_73;
      }
      v219 = v213[22] & 2;
      if ( !v219 || (v206 = 0, (v213[181] & 0x8000) != 0) )
        v206 = 1;
      v40 = *((_QWORD *)*v14 + 122);
      v41 = *((_DWORD *)*v14 + 438) | *(_DWORD *)(v40 + 272) & 0x11F;
      if ( *((_BYTE *)*v14 + 1752) & 1 | *(_BYTE *)(v40 + 272) & 1 )
      {
        v45 = *(_DWORD *)(v40 + 152);
        if ( (v45 & 0x200) == 0 )
        {
          *(_DWORD *)(v40 + 152) = v45 | 0x100;
          v46 = *v14;
          v43 = v27 + *(_DWORD *)(*((_QWORD *)*v14 + 122) + 8LL);
          LODWORD(v208) = v43;
          v44 = *(_DWORD *)(*((_QWORD *)v46 + 122) + 12LL) + (_DWORD)v216;
LABEL_44:
          HIDWORD(v208) = v44;
LABEL_45:
          ESTROBJ::vInit(
            (ESTROBJ *)&pstro,
            v223[0],
            a8,
            (struct UDCOBJ *)v14,
            (struct RFONTOBJ *)&v213,
            (struct EXFORMOBJ *)&v220,
            (int *)v220.pulXlate,
            v210[0],
            *((_DWORD *)*v14 + 439),
            *(_DWORD *)(*((_QWORD *)*v14 + 122) + 280LL),
            *(_DWORD *)(*((_QWORD *)*v14 + 122) + 284LL),
            *(_DWORD *)(*((_QWORD *)*v14 + 122) + 288LL),
            v43,
            v44,
            v41,
            0LL,
            v244[0],
            a12);
          if ( (v252 & 4) == 0 )
          {
            v30 = rclBkGround.m128i_u32[3];
            v16 = 0;
            v31 = rclBkGround.m128i_u32[2];
            v36 = 0LL;
            v32 = rclBkGround.m128i_i32[1];
            v35 = 0LL;
            v33 = rclBkGround.m128i_u32[0];
LABEL_71:
            v53 = (v41 & 1) == 0;
            *(_QWORD *)&v243.left = v35;
            v34 = 1;
            if ( !v53 )
            {
              v54 = *v14;
              *(_QWORD *)&v243.left = v35;
              *(_DWORD *)(*((_QWORD *)v54 + 122) + 8LL) += v248;
              *(_DWORD *)(*((_QWORD *)*v14 + 122) + 12LL) += v249;
              v30 = rclBkGround.m128i_u32[3];
              v31 = rclBkGround.m128i_u32[2];
              v32 = rclBkGround.m128i_i32[1];
              v33 = rclBkGround.m128i_u32[0];
            }
LABEL_73:
            v223[0] = v35;
            v55 = *v14;
            v56 = *((_DWORD *)*v14 + 62);
            if ( (v56 & 1) == 0 )
            {
              if ( v32 == (_DWORD)v30 || (_DWORD)v33 == (_DWORD)v31 )
                goto LABEL_25;
              if ( (*((_DWORD *)v55 + 9) & 0xE0) != 0 )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v238);
                v119 = *v14;
                *(__m128i *)v223 = _mm_load_si128(&rclBkGround);
                v120 = (char *)v119 + 8 * (*((_DWORD *)v119 + 10) & 1);
                v121 = *((_DWORD *)v120 + 254);
                v122 = _mm_cvtsi128_si32(*(__m128i *)v223) - v121;
                v123 = LODWORD(v223[1]) - v121;
                v124 = *((_DWORD *)v120 + 255);
                v125 = HIDWORD(v223[0]) - v124;
                v126 = HIDWORD(v223[1]) - v124;
                if ( (*((_DWORD *)v119 + 9) & 0x20) != 0 )
                {
                  if ( v122 < *((_DWORD *)v119 + 266) )
                    *((_DWORD *)v119 + 266) = v122;
                  if ( v125 < *((_DWORD *)v119 + 267) )
                    *((_DWORD *)v119 + 267) = v125;
                  if ( v123 > *((_DWORD *)v119 + 268) )
                    *((_DWORD *)v119 + 268) = v123;
                  if ( v126 > *((_DWORD *)v119 + 269) )
                    *((_DWORD *)v119 + 269) = v126;
                }
                v127 = *v14;
                if ( (*((_DWORD *)*v14 + 9) & 0x80u) != 0 )
                {
                  if ( v122 < *((_DWORD *)v127 + 274) )
                    *((_DWORD *)v127 + 274) = v122;
                  if ( v125 < *((_DWORD *)v127 + 275) )
                    *((_DWORD *)v127 + 275) = v125;
                  if ( v123 > *((_DWORD *)v127 + 276) )
                    *((_DWORD *)v127 + 276) = v123;
                  if ( v126 > *((_DWORD *)v127 + 277) )
                    *((_DWORD *)v127 + 277) = v126;
                }
              }
              if ( !v219 && (v21 & 4) == 0 )
                v34 = 0;
              v58 = *v14;
              v59 = *((_QWORD *)*v14 + 146);
              if ( !v59 || (*((_DWORD *)v58 + 10) & 2) == 0 || !(unsigned int)DC::bDpiScaledSurface(*v14) )
              {
                if ( !*((_QWORD *)v58 + 144) )
                {
                  if ( !*((_QWORD *)v58 + 145) || (*((_DWORD *)v58 + 10) & 2) == 0 )
                  {
LABEL_85:
                    XCLIPOBJ::XCLIPOBJ((XCLIPOBJ *)&v245);
                    XCLIPOBJ::vSetup((XCLIPOBJ *)&v245, v60, (const struct ERECTL *)&rclBkGround, v34);
                    rclBounds = (__m128i)v245.rclBounds;
                    v62 = _mm_cvtsi128_si32((__m128i)v245.rclBounds);
                    rclBkGround = (__m128i)v245.rclBounds;
                    if ( v62 == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v245.rclBounds, 8))
                      || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v245.rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                            _mm_srli_si128(
                                                                                              (__m128i)v245.rclBounds,
                                                                                              12)) )
                    {
                      goto LABEL_25;
                    }
                    v63 = v36;
                    v64 = *v14;
                    v65 = *(struct _SURFOBJ **)&v243.left;
                    v66 = v219;
                    v209 = v219;
                    v67 = *((_DWORD *)v64 + 9);
                    *(_QWORD *)&v210[1] = v36;
                    v212 = *(struct _SURFOBJ **)&v243.left;
                    if ( (v67 & 0xE0) == 0 )
                      goto LABEL_88;
                    *(RECTL *)v244 = v245.rclBounds;
                    v110 = *((_DWORD *)v64 + 10) & 1;
                    v209 = v219;
                    *(_QWORD *)&v210[1] = v36;
                    v111 = v62 - *((_DWORD *)v64 + 2 * v110 + 254);
                    LODWORD(v244[0]) = v111;
                    LODWORD(v244[1]) = v245.rclBounds.right - *((_DWORD *)v64 + 2 * v110 + 254);
                    v210[0] = (int)v244[1];
                    HIDWORD(v244[0]) = v245.rclBounds.top - *((_DWORD *)v64 + 2 * v110 + 255);
                    HIDWORD(v244[1]) = v245.rclBounds.bottom - *((_DWORD *)v64 + 2 * v110 + 255);
                    v112 = v219;
                    LODWORD(v208) = HIDWORD(v244[0]);
                    v65 = *(struct _SURFOBJ **)&v243.left;
                    v212 = *(struct _SURFOBJ **)&v243.left;
                    if ( (v67 & 0x40) == 0 )
                      goto LABEL_88;
                    v113 = *((_DWORD *)v64 + 270);
                    if ( v113 != *((_DWORD *)v64 + 272) )
                    {
                      if ( *((_DWORD *)v64 + 271) != *((_DWORD *)v64 + 273) )
                      {
                        if ( v111 >= v113 )
                        {
                          v114 = v210[0];
                          v115 = (int)v208;
                        }
                        else
                        {
                          *((_DWORD *)v64 + 270) = v111;
                          rclBounds = _mm_load_si128(&rclBkGround);
                          v114 = (int)v244[1];
                          v115 = HIDWORD(v244[0]);
                        }
                        if ( v115 < *((_DWORD *)v64 + 271) )
                        {
                          *((_DWORD *)v64 + 271) = v115;
                          rclBounds = _mm_load_si128(&rclBkGround);
                          v114 = (int)v244[1];
                        }
                        if ( v114 > *((_DWORD *)v64 + 272) )
                        {
                          *((_DWORD *)v64 + 272) = v114;
                          rclBounds = _mm_load_si128(&rclBkGround);
                        }
                        v109 = SHIDWORD(v244[1]) <= *((_DWORD *)v64 + 273);
                        v210[0] = HIDWORD(v244[1]);
                        v14 = *(DC ***)&v220.iSrcType;
                        v209 = v66;
                        *(_QWORD *)&v210[1] = v36;
                        v212 = v65;
                        if ( v109 )
                        {
LABEL_189:
                          v116 = *v14;
                          v223[0] = (unsigned __int16 *)v36;
                          v216 = (ERECTL *)*((_QWORD *)v116 + 148);
                          if ( !v216 )
                            goto LABEL_88;
                          v117 = v65;
                          v212 = v65;
                          *(_QWORD *)&v210[1] = v63;
                          v209 = v66;
                          Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v215);
                          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v215, 0x70u);
                          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v215);
                          Prediction::CFixPred::CFixPred((Prediction::CFixPred *)&v208);
                          RGNMEMOBJ::vInitialize((RGNMEMOBJ *)&v208, 0x70u);
                          RGNMEMOBJ::vPushThreadGuardedObject((RGNMEMOBJ *)&v208);
                          if ( v215 )
                          {
                            if ( v208 )
                            {
                              RGNOBJ::vSet((RGNOBJ *)&v208, (const struct _RECTL *const)v244);
                              if ( !RGNOBJ::bMerge(
                                      (RGNOBJ *)&v215,
                                      (struct RGNOBJ *)&v216,
                                      (struct RGNOBJ *)&v208,
                                      0xEu) )
                              {
LABEL_314:
                                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v208);
                                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v208);
                                RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v215);
                                RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v215);
                                rclBounds = _mm_load_si128(&rclBkGround);
                                v65 = v212;
                                v63 = *(struct _RECTL **)&v210[1];
LABEL_88:
                                v68 = *((_QWORD *)*v14 + 62);
                                if ( !v68
                                  || ((*(_DWORD *)(v68 + 116) & 8) != 0 || *(_QWORD *)(v68 + 224))
                                  && _bittest16((const signed __int16 *)(v68 + 102), 9u) )
                                {
                                  goto LABEL_25;
                                }
                                v69 = *(_DWORD *)(v68 + 112);
                                if ( (v69 & 0x800) != 0 )
                                {
                                  v70 = UserSurfaceAccessCheck(*(_QWORD *)(v68 + 648));
                                }
                                else
                                {
                                  if ( (v69 & 0x10000000) == 0 )
                                  {
                                    v209 = v66;
                                    *(_QWORD *)&v210[1] = v63;
                                    v212 = v65;
LABEL_96:
                                    v71 = *v14;
                                    v72 = 0;
                                    pulXlate = *(HDEV *)(v68 + 48);
                                    v74 = *(_QWORD *)(v68 + 128);
                                    v220.pulXlate = (ULONG *)pulXlate;
                                    v75 = *((_DWORD *)v71 + 18);
                                    v76 = *((_QWORD *)v71 + 11);
                                    v77 = (__int64)v71 + 1608;
                                    v215 = (struct _BRUSHOBJ *)((char *)v71 + 1472);
                                    v208 = (struct _BRUSHOBJ *)((char *)v71 + 1608);
                                    v243.left = v75;
                                    if ( (v75 & 0x10000000) != 0 )
                                    {
                                      v72 = v206;
                                      *(_DWORD *)(*((_QWORD *)v71 + 122) + 152LL) |= 4u;
                                      --*((_DWORD *)v71 + 399);
                                      rclBounds = _mm_load_si128(&rclBkGround);
                                    }
                                    v78 = *(struct _POINTL ***)&v220.iSrcType;
                                    v79 = **(_QWORD **)&v220.iSrcType;
                                    v80 = *(_QWORD *)(**(_QWORD **)&v220.iSrcType + 976LL);
                                    v81 = *(_DWORD *)(**(_QWORD **)&v220.iSrcType + 316LL) | *(_DWORD *)(v80 + 152);
                                    if ( ((*(_BYTE *)(**(_QWORD **)&v220.iSrcType + 316LL) | *(_BYTE *)(v80 + 152)) & 0xC) != 0 )
                                    {
                                      v138 = *(_QWORD *)(*(_QWORD *)&v220.iSrcType + 16LL);
                                      v223[0] = (unsigned __int16 *)v138;
                                      if ( (v81 & 4) != 0 )
                                      {
                                        EBRUSHOBJ::vInitBrush(v215, v79, *(_QWORD *)(v138 + 64), v76, v74, v68, v72);
                                        v78 = *(struct _POINTL ***)&v220.iSrcType;
                                        v75 = v243.left;
                                      }
                                      if ( ((LOBYTE((*v78)[39].y) | *(_BYTE *)(*(_QWORD *)&(*v78)[122] + 152LL)) & 8) != 0 )
                                      {
                                        EBRUSHOBJ::vInitBrush(
                                          v208,
                                          *v78,
                                          *((_QWORD *)v223[0] + 10),
                                          v76,
                                          v74,
                                          v68,
                                          (v75 >> 15) & 1);
                                        v78 = *(struct _POINTL ***)&v220.iSrcType;
                                      }
                                      v77 = (__int64)(*v78)[122];
                                      *(_DWORD *)(v77 + 152) &= 0xFFFFFFF3;
                                      (*v78)[39].y &= 0xFFFFFFF3;
                                      rclBounds = _mm_load_si128(&rclBkGround);
                                    }
                                    v82 = *v78 + 149;
                                    v211 = v82;
                                    if ( (v16 & 0x1A) == 0 )
                                    {
                                      v83 = v209;
                                      v84 = v212;
                                      v85 = *(ERECTL **)&v210[1];
                                      v214 = __PAIR64__(
                                               _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 4)),
                                               _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 12)));
                                      v86 = _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 8));
                                      v87 = _mm_cvtsi128_si32(rclBounds);
LABEL_101:
                                      v88 = *(struct XDCOBJ **)&v220.iSrcType;
                                      goto LABEL_102;
                                    }
                                    if ( (v16 & 8) == 0
                                      || (v157 = v242.left, v158 = (unsigned int)v242.right, v242.left == v242.right)
                                      || (v159 = v242.top, v160 = (unsigned int)v242.bottom, v242.top == v242.bottom) )
                                    {
                                      v84 = v212;
                                      v85 = *(ERECTL **)&v210[1];
                                      v214 = __PAIR64__(
                                               _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 4)),
                                               _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 12)));
                                      v86 = _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 8));
                                      v87 = _mm_cvtsi128_si32(rclBounds);
                                    }
                                    else
                                    {
                                      v87 = _mm_cvtsi128_si32(rclBounds);
                                      v86 = _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 8));
                                      v161 = _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 4));
                                      if ( v87 > v242.left )
                                        v157 = v87;
                                      v77 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 12));
                                      v245.rclBounds.left = v157;
                                      if ( v86 < v242.right )
                                        v158 = (unsigned int)v86;
                                      v245.rclBounds.right = v158;
                                      v214 = __PAIR64__(v161, v77);
                                      if ( v161 > v242.top )
                                        v159 = v161;
                                      v245.rclBounds.top = v159;
                                      if ( (int)v77 < v242.bottom )
                                        v160 = (unsigned int)v77;
                                      v245.rclBounds.bottom = v160;
                                      if ( v157 < (int)v158 && v159 < (int)v160 )
                                      {
                                        v162 = v208;
                                        ++*(_DWORD *)(v68 + 92);
                                        TextOutBitBlt(
                                          (struct SURFACE *)v68,
                                          (struct RFONTOBJ *)&v213,
                                          (struct _SURFOBJ *)v160,
                                          (struct _SURFOBJ *)v158,
                                          &v245,
                                          v201,
                                          &v245.rclBounds,
                                          v202,
                                          v203,
                                          v162,
                                          v82,
                                          v204);
                                        v77 = rclBkGround.m128i_u32[3];
                                        v86 = rclBkGround.m128i_i32[2];
                                        v87 = rclBkGround.m128i_i32[0];
                                        rclBounds = _mm_load_si128(&rclBkGround);
                                        v214 = __PAIR64__(rclBkGround.m128i_u32[1], rclBkGround.m128i_u32[3]);
                                      }
                                      v85 = *(ERECTL **)&v210[1];
                                      v84 = v212;
                                      v245.rclBounds = (RECTL)rclBounds;
                                    }
                                    v83 = v209;
                                    v221 = v84;
                                    v216 = v85;
                                    v210[0] = v16;
                                    if ( (v16 & 0x12) == 0 )
                                      goto LABEL_101;
                                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v225);
                                    if ( v227 )
                                    {
                                      v16 = v210[0];
                                      if ( ((v210[0] & 2) == 0
                                         || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v225, v163, &v254, v164))
                                        && ((v16 & 0x10) == 0
                                         || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v225, v163, &v261, v164)) )
                                      {
                                        v203 = v82;
                                        v88 = *(struct XDCOBJ **)&v220.iSrcType;
                                        v202 = (struct _POINTL *)v208;
                                        v201 = (struct _XLATEOBJ *)v68;
                                        v196 = (_DWORD *)EPATHOBJ_bTextOutSimpleFill(
                                                           v210,
                                                           &v225,
                                                           *(_QWORD *)&v220.iSrcType,
                                                           &v213,
                                                           pulXlate);
                                        *(_QWORD *)&v210[1] = v216;
                                        v212 = v221;
                                        if ( !*v196 )
                                        {
                                          v16 = 0;
                                          *(_QWORD *)&v210[1] = v216;
                                          v212 = v221;
                                        }
                                        goto LABEL_298;
                                      }
                                      v16 = 0;
                                      *(_QWORD *)&v210[1] = v216;
                                      v212 = v221;
                                    }
                                    v88 = *(struct XDCOBJ **)&v220.iSrcType;
LABEL_298:
                                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v225);
                                    v86 = rclBkGround.m128i_i32[2];
                                    v87 = rclBkGround.m128i_i32[0];
                                    rclBounds = _mm_load_si128(&rclBkGround);
                                    v84 = v212;
                                    v85 = *(ERECTL **)&v210[1];
                                    v214 = __PAIR64__(rclBkGround.m128i_u32[1], rclBkGround.m128i_u32[3]);
LABEL_102:
                                    if ( (v16 & 1) == 0 )
                                    {
LABEL_24:
                                      if ( (v16 & 4) != 0 )
                                      {
                                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v238);
                                        if ( !v239
                                          || !(unsigned int)ESTROBJ::bExtraRectsToPath(
                                                              (ESTROBJ *)&pstro,
                                                              (struct EPATHOBJ *)v238)
                                          || !*(_DWORD *)EPATHOBJ_bTextOutSimpleFill(v210, v238, v88, &v213, pulXlate) )
                                        {
                                          v16 = 0;
                                        }
                                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v238);
                                      }
                                      goto LABEL_25;
                                    }
                                    v216 = 0LL;
                                    if ( v83 )
                                    {
                                      v77 = 32LL;
                                      v89 = 4294967039LL;
                                      v197 = 64;
                                      if ( (v213[181] & 0x8000) == 0 )
                                        v197 = 32;
                                      v16 |= v197;
                                    }
                                    else
                                    {
                                      v89 = (unsigned int)v243.left;
                                    }
                                    if ( !v85 || (v89 & 0x100) != 0 )
                                    {
                                      v90 = v211;
                                    }
                                    else
                                    {
                                      v77 = *(unsigned int *)v85;
                                      v153 = *((_DWORD *)v85 + 2);
                                      v90 = v211;
                                      if ( v87 > (int)v77 )
                                        v77 = (unsigned int)v87;
                                      v154 = *((_DWORD *)v85 + 1);
                                      v245.rclBounds.left = v77;
                                      if ( v86 < v153 )
                                        v153 = v86;
                                      v155 = *((_DWORD *)v85 + 3);
                                      if ( SHIDWORD(v214) > v154 )
                                        v154 = HIDWORD(v214);
                                      v245.rclBounds.right = v153;
                                      if ( (int)v214 < v155 )
                                        v155 = v214;
                                      v245.rclBounds.bottom = v155;
                                      v245.rclBounds.top = v154;
                                      if ( (int)v77 < v153 && v154 < v155 )
                                      {
                                        v156 = v208;
                                        ++*(_DWORD *)(v68 + 92);
                                        TextOutBitBlt(
                                          (struct SURFACE *)v68,
                                          (struct RFONTOBJ *)&v213,
                                          v84,
                                          (struct _SURFOBJ *)v85,
                                          &v245,
                                          v201,
                                          &v245.rclBounds,
                                          v202,
                                          v203,
                                          v156,
                                          v90,
                                          v204);
                                        rclBounds = _mm_load_si128(&rclBkGround);
                                        v84 = v212;
                                      }
                                      v245.rclBounds = (RECTL)rclBounds;
                                      *(_QWORD *)&v210[1] = 0LL;
                                    }
                                    if ( v84 && *((_DWORD *)pulXlate + 531) != 4 )
                                    {
                                      v216 = (ERECTL *)v84;
                                      v212 = 0LL;
                                    }
                                    if ( (v16 & 0x20) != 0 )
                                    {
                                      if ( (v252 & 0x1400) != 0 )
                                      {
                                        v204 = (unsigned int)pulXlate;
                                        v203 = (struct _POINTL *)v208;
                                        v202 = (struct _POINTL *)v215;
                                        v201 = 0LL;
                                        v198 = (_DWORD *)bProxyDrvTextOut(v210, v88, v68, &pstro, &v245);
                                        v99 = v211;
                                        if ( !*v198 )
                                          v16 = 0;
                                      }
                                      else
                                      {
                                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v238);
                                        if ( !v239
                                          || !(unsigned int)ESTROBJ::bTextToPath(
                                                              (ESTROBJ *)&pstro,
                                                              (struct EPATHOBJ *)v238)
                                          || !(unsigned int)EPATHOBJ_bTextOutSimpleStroke1(
                                                              (struct EPATHOBJ *)v238,
                                                              v88,
                                                              (struct RFONTOBJ *)&v213,
                                                              pulXlate,
                                                              (struct SURFACE *)v68,
                                                              &v245,
                                                              v215,
                                                              v90,
                                                              (unsigned int)v203) )
                                        {
                                          v16 = 0;
                                        }
                                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v238);
                                        v99 = v211;
                                      }
                                      goto LABEL_23;
                                    }
                                    CurrentThreadNonPaged = (__int64 *)W32GetCurrentThreadNonPaged(v77, v89);
                                    if ( CurrentThreadNonPaged && (v92 = *CurrentThreadNonPaged) != 0 && v92 != -8 )
                                      v93 = *(_QWORD *)(v92 + 296);
                                    else
                                      v93 = *(_QWORD *)(v68 + 104);
                                    if ( v93 )
                                      SURFACE::pdcoAA((SURFACE *)v68, 0LL);
                                    if ( (*(_DWORD *)(v68 + 112) & 8) != 0 )
                                      v94 = *(BOOL (__stdcall **)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))(*(_QWORD *)(v68 + 48) + 2864LL);
                                    else
                                      v94 = EngTextOut;
                                    if ( (char *)v94 == (char *)SpTextOut
                                      || (char *)v94 == (char *)MulTextOut
                                      || (char *)v94 == (char *)BmpDevTextOut )
                                    {
                                      if ( (v213[3] & 0x10010000) != 0 )
                                        SURFACE::pdcoAA((SURFACE *)v68, v88);
                                    }
                                    else
                                    {
                                      v95 = v213[3];
                                      if ( (v95 & 0x10000) != 0
                                        && ((*(_DWORD *)(*(_QWORD *)v88 + 72LL) & 0x1000000) == 0
                                         || (v95 & 0x10000000) != 0) )
                                      {
                                        if ( v94 != EngTextOut )
                                          SURFACE::pdcoAA((SURFACE *)v68, v88);
                                        v94 = (BOOL (__stdcall *)(SURFOBJ *, STROBJ *, FONTOBJ *, CLIPOBJ *, RECTL *, RECTL *, BRUSHOBJ *, BRUSHOBJ *, POINTL *, MIX))SpTextOut;
                                      }
                                    }
                                    if ( (v16 & 0x40) == 0 )
                                    {
                                      ++*(_DWORD *)(v68 + 92);
                                      if ( (v16 & 4) == 0 )
                                      {
                                        if ( (v252 & 0x1400) == 0 )
                                        {
                                          v203 = v211;
                                          v202 = (struct _POINTL *)v208;
                                          v201 = *(struct _XLATEOBJ **)&v210[1];
                                          v96 = ((__int64 (__fastcall *)(__int64, STROBJ *, _DWORD *, struct _CLIPOBJ *, struct _SURFOBJ *))v94)(
                                                  v68 + 24,
                                                  &pstro,
                                                  v213,
                                                  &v245,
                                                  v212);
                                          v99 = v211;
                                          if ( !v96 )
                                            v16 = 0;
                                          goto LABEL_131;
                                        }
                                        v99 = v211;
                                        v204 = (unsigned int)pulXlate;
                                        v203 = (struct _POINTL *)v208;
                                        v202 = (struct _POINTL *)v215;
                                        v201 = (struct _XLATEOBJ *)v212;
LABEL_150:
                                        if ( !*(_DWORD *)bProxyDrvTextOut(v210, v88, v68, &pstro, &v245) )
                                          v16 = 0;
                                        goto LABEL_131;
                                      }
                                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v238);
                                      if ( v239
                                        && (unsigned int)ESTROBJ::bExtraRectsToPath(
                                                           (ESTROBJ *)&pstro,
                                                           (struct EPATHOBJ *)v238) )
                                      {
                                        if ( (v252 & 0x1400) != 0 )
                                        {
                                          v99 = v211;
                                          v204 = 0;
                                          v203 = (struct _POINTL *)v208;
                                          v202 = (struct _POINTL *)v215;
                                          v201 = (struct _XLATEOBJ *)v212;
                                          if ( !*(_DWORD *)bProxyDrvTextOut(v210, v88, v68, &pstro, &v245) )
                                            goto LABEL_442;
LABEL_439:
                                          v203 = v99;
                                          v202 = (struct _POINTL *)v215;
                                          v201 = (struct _XLATEOBJ *)v68;
                                          if ( *(_DWORD *)EPATHOBJ_bTextOutSimpleFill(v210, v238, v88, &v213, pulXlate) )
                                            goto LABEL_443;
                                          goto LABEL_442;
                                        }
                                        v203 = v211;
                                        v202 = (struct _POINTL *)v208;
                                        v201 = *(struct _XLATEOBJ **)&v210[1];
                                        v200 = ((__int64 (__fastcall *)(__int64, STROBJ *, _DWORD *, struct _CLIPOBJ *, struct _SURFOBJ *))v94)(
                                                 v68 + 24,
                                                 &pstro,
                                                 v213,
                                                 &v245,
                                                 v212);
                                        v99 = v211;
                                        if ( v200 )
                                          goto LABEL_439;
                                      }
                                      else
                                      {
                                        v99 = v211;
                                      }
LABEL_442:
                                      v16 = 0;
LABEL_443:
                                      v16 &= ~4u;
                                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v238);
                                      goto LABEL_131;
                                    }
                                    if ( (v252 & 0x1400) != 0 )
                                    {
                                      v99 = v211;
                                      v204 = (unsigned int)pulXlate;
                                      v203 = (struct _POINTL *)v208;
                                      v202 = (struct _POINTL *)v215;
                                      v201 = 0LL;
                                      goto LABEL_150;
                                    }
                                    PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v225);
                                    if ( v227 )
                                    {
                                      v199 = ESTROBJ::bTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v225);
                                      v99 = v211;
                                      if ( v199 )
                                      {
                                        if ( v226 <= 1 )
                                          goto LABEL_432;
                                        v203 = v211;
                                        v202 = (struct _POINTL *)v215;
                                        v201 = (struct _XLATEOBJ *)v68;
                                        if ( *(_DWORD *)EPATHOBJ_bTextOutSimpleFill(v210, &v225, v88, &v213, pulXlate) )
                                          goto LABEL_432;
                                      }
                                    }
                                    else
                                    {
                                      v99 = v211;
                                    }
                                    v16 = 0;
LABEL_432:
                                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v225);
LABEL_131:
                                    *(_QWORD *)(v68 + 104) = 0LL;
                                    v100 = W32GetCurrentThreadNonPaged(v98, v97);
                                    if ( v100 && *(_QWORD *)v100 && *(_QWORD *)v100 != -8LL )
                                      *(_QWORD *)(*(_QWORD *)v100 + 296LL) = 0LL;
LABEL_23:
                                    v37 = v216;
                                    if ( v216 )
                                    {
                                      v167 = (__m128i)v245.rclBounds;
                                      ++*(_DWORD *)(v68 + 92);
                                      if ( !(unsigned int)ERECTL::bEmpty(v37) )
                                      {
                                        v169 = v215;
                                        v170 = (LONG *)(v168 + 4);
                                        v216 = (ERECTL *)(v168 + 4);
                                        v171 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v167, 12));
                                        v172 = _mm_cvtsi128_si32(_mm_srli_si128(v167, 4));
                                        v173 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(v167, 8));
                                        v210[0] = (int)v171;
                                        v210[1] = v172;
                                        LODWORD(v208) = (_DWORD)v173;
                                        v174 = _mm_cvtsi128_si32(v167);
                                        do
                                        {
                                          v175 = *(v170 - 1);
                                          v176 = v170[1];
                                          if ( v174 > v175 )
                                            v175 = v174;
                                          v245.rclBounds.left = v175;
                                          if ( (int)v173 < v176 )
                                            v176 = (int)v173;
                                          v245.rclBounds.right = v176;
                                          if ( v175 < v176 )
                                          {
                                            v177 = *v170;
                                            v178 = v170[2];
                                            if ( v172 > *v170 )
                                              v177 = v172;
                                            v245.rclBounds.top = v177;
                                            if ( (int)v171 < v178 )
                                              v178 = (int)v171;
                                            v245.rclBounds.bottom = v178;
                                            if ( v177 < v178 )
                                            {
                                              TextOutBitBlt(
                                                (struct SURFACE *)v68,
                                                (struct RFONTOBJ *)&v213,
                                                v171,
                                                v173,
                                                &v245,
                                                v201,
                                                &v245.rclBounds,
                                                v202,
                                                v203,
                                                v169,
                                                v99,
                                                v204);
                                              v170 = (LONG *)v216;
                                            }
                                          }
                                          v216 = (ERECTL *)(v170 + 4);
                                        }
                                        while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v170 + 3)) );
                                        pulXlate = (HDEV)v220.pulXlate;
                                        v88 = *(struct XDCOBJ **)&v220.iSrcType;
                                      }
                                      v245.rclBounds = (RECTL)v167;
                                    }
                                    goto LABEL_24;
                                  }
                                  v70 = UserScreenAccessCheck();
                                  v209 = v66;
                                }
                                if ( v70 )
                                {
                                  rclBounds = _mm_load_si128(&rclBkGround);
                                  goto LABEL_96;
                                }
LABEL_25:
                                if ( (v252 & 0x801) != 0 )
                                {
                                  if ( (v252 & 1) != 0 )
                                    FreeTmpBuffer(v247);
                                  if ( (v252 & 0x800) != 0 )
                                    Win32FreePool(v253);
                                }
                                RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v213);
                                if ( v29 )
                                  TXTCLEANUP::vMopUp((TXTCLEANUP *)&v224);
                                goto LABEL_32;
                              }
                              RGNOBJ::vSwap((RGNOBJ *)&v216, (struct RGNOBJ *)&v215);
                              *((_QWORD *)*v14 + 148) = v216;
                            }
                            v118 = *(unsigned __int16 **)&v210[1];
                          }
                          else
                          {
                            v118 = v223[0];
                          }
                          v209 = v66;
                          *(_QWORD *)&v210[1] = v118;
                          v212 = v117;
                          goto LABEL_314;
                        }
                        *((_DWORD *)v64 + 273) = v210[0];
                        v209 = v66;
LABEL_188:
                        rclBounds = _mm_load_si128(&rclBkGround);
                        v212 = v65;
                        *(_QWORD *)&v210[1] = v36;
                        goto LABEL_189;
                      }
                      v112 = v219;
                    }
                    v66 = v112;
                    v209 = v112;
                    *(_OWORD *)((char *)v64 + 1080) = *(_OWORD *)v244;
                    goto LABEL_188;
                  }
LABEL_341:
                  DC::bDpiScaledSurface(v58);
                  goto LABEL_85;
                }
                if ( !v59 )
                  goto LABEL_85;
              }
              if ( (*((_DWORD *)v58 + 10) & 2) == 0 )
                goto LABEL_85;
              goto LABEL_341;
            }
            v233 = 0LL;
            v101 = 0;
            v231 = 0LL;
            if ( (v21 & 4) == 0 )
              v101 = v16;
            v232 = 0LL;
            v230 = 0LL;
            v228 = 0LL;
            v229 = 0LL;
            v102 = 0;
            v235 = 0;
            if ( (v56 & 2) == 0 )
            {
              v103 = *(struct _RECTL **)&v243.left;
              goto LABEL_138;
            }
            *((_DWORD *)v55 + 62) = v56 & 0xFFFFFFFD;
            XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)v238, *((struct HPATH__ **)*v14 + 25));
            PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v245);
            if ( *(_QWORD *)&v245.rclBounds.top )
            {
              v103 = (struct _RECTL *)v223[0];
              if ( v239 && EPATHOBJ::bClone((EPATHOBJ *)&v245, (const struct EPATHOBJ *)v238) )
              {
                v195 = **(struct HPATH__ ***)&v245.rclBounds.top;
LABEL_387:
                DC::hpath(*v14, v195);
                PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v245);
                EPATHOBJ::vUnlock((EPATHOBJ *)v238);
                CAutoTGO::vUnguard((CAutoTGO *)v240);
                v102 = v235;
LABEL_138:
                v227 = 0LL;
                if ( !v102 )
                {
                  PushThreadGuardedObject(v234, &v225, XEPATHOBJ_vDestructWrap, v30);
                  v235 = 1;
                }
                LOBYTE(v33) = 7;
                v104 = HmgShareLock(*((_QWORD *)*v14 + 25), v33, v31, v30);
                v227 = v104;
                v16 = v101;
                if ( !v104 )
                  goto LABEL_349;
                v226 = *(_DWORD *)(v104 + 96);
                v225 = *(_DWORD *)(v104 + 92);
                if ( (v101 & 8) == 0 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)&v225, &v242) )
                {
                  if ( (v101 & 2) == 0 || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v225, v105, &v254, v106) )
                  {
                    if ( (v101 & 0x10) == 0 || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v225, v105, &v261, v106) )
                    {
                      if ( (v101 & 1) != 0 && (!v36 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)&v225, v36)) )
                      {
                        if ( (v252 & 0x1400) != 0 )
                          v107 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v225);
                        else
                          v107 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v225);
                        if ( !v107 )
                        {
LABEL_396:
                          v16 = 0;
                          goto LABEL_349;
                        }
                        if ( v103 )
                        {
                          while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v103) )
                          {
                            if ( !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&v225, v103) )
                              goto LABEL_396;
                            ++v103;
                          }
                        }
                      }
                      if ( (v101 & 4) != 0
                        && !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v225) )
                      {
                        v16 = 0;
                      }
                      goto LABEL_349;
                    }
                    v16 = 0;
                  }
                  else
                  {
                    v16 = 0;
                  }
                }
                else
                {
                  v16 = 0;
                }
LABEL_349:
                EPATHOBJ::vUnlock((EPATHOBJ *)&v225);
                CAutoTGO::vUnguard((CAutoTGO *)v234);
                goto LABEL_25;
              }
            }
            else
            {
              v103 = *(struct _RECTL **)&v243.left;
            }
            v195 = 0LL;
            goto LABEL_387;
          }
          v49 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v261, &pstro.rclBkGround);
          v50 = pstro.rclBkGround.right;
          v210[0] = v49;
          v51 = pstro.rclBkGround.left;
          if ( (v213[3] & 0x10000000) != 0 )
          {
            v51 = pstro.rclBkGround.left - 1;
            v50 = pstro.rclBkGround.right + 1;
            --pstro.rclBkGround.left;
            ++pstro.rclBkGround.right;
          }
          if ( (v252 & 0x1400) != 0 )
          {
            ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, (struct _POINTFIX *)&v261, v49);
            v50 = pstro.rclBkGround.right;
            v51 = pstro.rclBkGround.left;
          }
          v33 = rclBkGround.m128i_u32[0];
          v31 = rclBkGround.m128i_u32[2];
          if ( rclBkGround.m128i_i32[0] == rclBkGround.m128i_i32[2]
            || (v32 = rclBkGround.m128i_i32[1],
                v30 = rclBkGround.m128i_u32[3],
                rclBkGround.m128i_i32[1] == rclBkGround.m128i_i32[3]) )
          {
            rclBkGround = (__m128i)pstro.rclBkGround;
            v30 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)pstro.rclBkGround, 12));
            v32 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)pstro.rclBkGround, 4));
            v31 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)pstro.rclBkGround, 8));
            v33 = (unsigned int)_mm_cvtsi128_si32((__m128i)pstro.rclBkGround);
          }
          else
          {
            if ( v51 < rclBkGround.m128i_i32[0] )
              v33 = (unsigned int)v51;
            rclBkGround.m128i_i32[0] = v33;
            if ( pstro.rclBkGround.top < rclBkGround.m128i_i32[1] )
            {
              v32 = pstro.rclBkGround.top;
              rclBkGround.m128i_i32[1] = pstro.rclBkGround.top;
            }
            if ( v50 > rclBkGround.m128i_i32[2] )
            {
              v31 = (unsigned int)v50;
              rclBkGround.m128i_i32[2] = v50;
            }
            if ( pstro.rclBkGround.bottom > rclBkGround.m128i_i32[3] )
            {
              v30 = (unsigned int)pstro.rclBkGround.bottom;
              rclBkGround.m128i_i32[3] = pstro.rclBkGround.bottom;
            }
          }
          if ( a10 == 2 )
          {
            if ( v210[0] )
            {
              v16 |= 0x10u;
            }
            else
            {
              *(_QWORD *)&v210[1] = &pstro.rclBkGround;
              v14 = *(DC ***)&v220.iSrcType;
            }
          }
          v52 = v51 >= v50 || pstro.rclBkGround.top >= pstro.rclBkGround.bottom;
          if ( (v16 & 8) == 0
            || v242.left > v51
            || v242.right < v50
            || v242.bottom < pstro.rclBkGround.bottom
            || v242.top > pstro.rclBkGround.top
            || v52 )
          {
            v36 = *(struct _RECTL **)&v210[1];
            if ( !*(_QWORD *)&v210[1] )
            {
              if ( v52 )
                goto LABEL_68;
              goto LABEL_67;
            }
          }
          else
          {
            v36 = &v242;
            v16 &= ~8u;
          }
          if ( v36->left >= v36->right || v36->top >= v36->bottom )
          {
LABEL_68:
            if ( (v41 & 0xA0) != 0 )
            {
              if ( v250 )
              {
                *(_QWORD *)&v243.left = v251;
                if ( !(unsigned int)ERECTL::bEmpty((ERECTL *)v251) )
                {
                  v165 = v251;
                  do
                    ERECTL::operator+=(&rclBkGround, v165);
                  while ( !(unsigned int)ERECTL::bEmpty((ERECTL *)(v166 + 16)) );
                  v30 = rclBkGround.m128i_u32[3];
                  v31 = rclBkGround.m128i_u32[2];
                  v32 = rclBkGround.m128i_i32[1];
                  v33 = rclBkGround.m128i_u32[0];
                  v35 = *(unsigned __int16 **)&v243.left;
                }
LABEL_70:
                if ( (v21 & 4) == 0 )
                  goto LABEL_71;
                v109 = v242.left <= (int)v33;
                if ( v242.left <= (int)v33 )
                {
                  if ( v242.bottom >= (int)v30 && v242.right >= (int)v31 && v242.top <= v32 )
                  {
                    LOBYTE(v21) = -5;
                    goto LABEL_71;
                  }
                  v109 = v242.left <= (int)v33;
                }
                if ( !v109 )
                  v33 = (unsigned int)v242.left;
                rclBkGround.m128i_i32[0] = v33;
                if ( v242.top > v32 )
                  v32 = v242.top;
                rclBkGround.m128i_i32[1] = v32;
                if ( v242.right < (int)v31 )
                  v31 = (unsigned int)v242.right;
                rclBkGround.m128i_i32[2] = v31;
                if ( v242.bottom < (int)v30 )
                  v30 = (unsigned int)v242.bottom;
                rclBkGround.m128i_i32[3] = v30;
                if ( (int)v31 < (int)v33 )
                {
                  v33 = (unsigned int)v31;
                  rclBkGround.m128i_i32[0] = v31;
                }
                else if ( (int)v30 < v32 )
                {
                  v32 = v30;
                  rclBkGround.m128i_i32[1] = v30;
                }
                goto LABEL_71;
              }
              v16 |= 4u;
            }
            v35 = 0LL;
            goto LABEL_70;
          }
LABEL_67:
          v16 |= 1u;
          goto LABEL_68;
        }
        *(_DWORD *)(v40 + 152) = v45 & 0xFFFFFDFF;
        *(_DWORD *)(*((_QWORD *)*v14 + 122) + 152LL) |= 0x100u;
        v139 = *(_DWORD *)(*(_QWORD *)&v220.iUniq + 32LL);
        if ( (v139 & 2) != 0 )
        {
          v47 = *v14;
          LODWORD(v208) = *(_DWORD *)(*(_QWORD *)&v220.iUniq + 24LL) + 16 * *(_DWORD *)(*((_QWORD *)*v14 + 122) + 216LL);
          HIDWORD(v208) = *(_DWORD *)(*(_QWORD *)&v220.iUniq + 28LL) + 16 * *(_DWORD *)(*((_QWORD *)v47 + 122) + 220LL);
        }
        else
        {
          v140 = (const struct _POINTL *)(*((_QWORD *)*v14 + 122) + 216LL);
          if ( (v139 & 1) != 0 )
          {
            LODWORD(v208) = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v220, v140->x);
            HIDWORD(v208) = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v220, *(_DWORD *)(*((_QWORD *)*v14 + 122) + 220LL));
          }
          else
          {
            EXFORMOBJ::bXform((EXFORMOBJ *)&v220, v140, (struct _POINTFIX *)&v208, 1uLL);
          }
        }
        *(_QWORD *)(*((_QWORD *)*v14 + 122) + 8LL) = v208;
      }
      else
      {
        v42 = *(_DWORD *)(*(_QWORD *)&v220.iUniq + 32LL);
        if ( (v42 & 2) != 0 )
        {
          LODWORD(v214) = v27 + *(_DWORD *)(*(_QWORD *)&v220.iUniq + 24LL) + 16 * v214;
          v43 = v214;
          LODWORD(v208) = v214;
          HIDWORD(v214) = (_DWORD)v216 + *(_DWORD *)(*(_QWORD *)&v220.iUniq + 28LL) + 16 * HIDWORD(v214);
          v44 = HIDWORD(v214);
          HIDWORD(v208) = HIDWORD(v214);
          goto LABEL_45;
        }
        if ( (v42 & 1) != 0 )
        {
          LODWORD(v208) = v27 + EXFORMOBJ::fxFastX((EXFORMOBJ *)&v220, v214);
          v108 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v220, SHIDWORD(v214));
          v43 = (int)v208;
          v48 = v108;
          goto LABEL_43;
        }
        v208 = (struct _BRUSHOBJ *)v214;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v220, (const struct _POINTL *)&v208, (struct _POINTFIX *)&v208, 1uLL);
      }
      v48 = HIDWORD(v208);
      v43 = v27 + (_DWORD)v208;
      LODWORD(v208) = v27 + (_DWORD)v208;
LABEL_43:
      v44 = (_DWORD)v216 + v48;
      goto LABEL_44;
    }
  }
  v179 = 87;
LABEL_336:
  EngSetLastError(v179);
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, 0LL);
  return a1;
}
