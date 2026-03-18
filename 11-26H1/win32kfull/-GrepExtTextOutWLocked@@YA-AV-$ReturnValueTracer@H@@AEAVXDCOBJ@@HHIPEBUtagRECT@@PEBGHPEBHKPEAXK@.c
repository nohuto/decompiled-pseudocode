/*
 * XREFs of ?GrepExtTextOutWLocked@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHKPEAXK@Z @ 0x1400BC904
 * Callers:
 *     ?ExtTextOutRect@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z @ 0x14007B620 (-ExtTextOutRect@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAUtagRECT@@@Z.c)
 *     ?GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z @ 0x1401C1E98 (-GrepBatchTextOut@@YAHAEAVXDCOBJ@@PEAU_BATCHTEXTOUT@@K@Z.c)
 *     ?GrepExtTextOutW@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXK@Z @ 0x1401C8584 (-GrepExtTextOutW@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@HHIPEBUtagRECT@@PEBGHPEBHPEAXK@Z.c)
 *     ?GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IK@Z @ 0x140333F0C (-GrepPolyTextOutW@@YAHAEAVXDCOBJ@@PEAUtagPOLYTEXTW@@IK@Z.c)
 * Callees:
 *     ?bTightenRao@DC@@QEAAHXZ @ 0x14006CBDC (-bTightenRao@DC@@QEAAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x14006D04C (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x14006FDD0 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x14007813C (-DestSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x14007B224 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1400800FC (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z @ 0x1400BE594 (-vInit@ESTROBJ@@QEAAXPEBGJAEAVXDCOBJ@@AEAVRFONTOBJ@@AEAVEXFORMOBJ@@PEAJHJJJJJJK4PEAXK@Z.c)
 *     ?bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z @ 0x1400BEF70 (-bOpaqueArea@ESTROBJ@@QEAAHPEAU_POINTFIX@@PEAU_RECTL@@@Z.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1400C4834 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z @ 0x1400C5C18 (--$GreAcquireSemaphore@$04PEAVRFONT@@@@YAXPEAVRFONT@@@Z.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x1400C5FFC (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     ?bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4010 (-bLinkedTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D4278 (-bTextToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x1400D42A0 (-bTextToPathWorkhorse@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z @ 0x1400D5100 (-pdcoAA@SURFACE@@QEAAXPEAVXDCOBJ@@@Z.c)
 *     ?bSupportsClearTypeAlways@PDEVOBJ@@SA_NP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@Z@Z @ 0x1400D5148 (-bSupportsClearTypeAlways@PDEVOBJ@@SA_NP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ.c)
 *     ?TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@6PEAU_BRUSHOBJ@@6K@Z @ 0x1400D55E8 (-TextOutBitBlt@@YAXPEAVSURFACE@@AEAVRFONTOBJ@@PEAU_SURFOBJ@@2PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_R.c)
 *     ??0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z @ 0x140114328 (--0XEPATHOBJ@@QEAA@AEAVXDCOBJ@@@Z.c)
 *     ?vUnguard@CAutoTGO@@QEAAXXZ @ 0x140114F5C (-vUnguard@CAutoTGO@@QEAAXXZ.c)
 *     ?fxFastX@EXFORMOBJ@@QEBAJJ@Z @ 0x14011660C (-fxFastX@EXFORMOBJ@@QEBAJJ@Z.c)
 *     ?fxFastY@EXFORMOBJ@@QEBAJJ@Z @ 0x14011667C (-fxFastY@EXFORMOBJ@@QEBAJJ@Z.c)
 *     ?IsRectEmptyInl@@YAHPEBUtagRECT@@@Z @ 0x14011F33C (-IsRectEmptyInl@@YAHPEBUtagRECT@@@Z.c)
 *     ??YERECTL@@QEAAXAEBU_RECTL@@@Z @ 0x140166BB0 (--YERECTL@@QEAAXAEBU_RECTL@@@Z.c)
 *     ?bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z @ 0x14019BA1C (-bExtraRectsToPath@ESTROBJ@@QEAAHAEAVEPATHOBJ@@@Z.c)
 *     ?bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z @ 0x14019BE68 (-bAddRectToPath@@YAHAEAVEPATHOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z @ 0x14019BED8 (-bAddPolygon@EPATHOBJ@@QEAA_NPEBVEXFORMOBJR@@PEBU_POINTL@@K@Z.c)
 *     ?pdcoAA@SURFACE@@QEAAPEAVXDCOBJ@@XZ @ 0x1401AEB08 (-pdcoAA@SURFACE@@QEAAPEAVXDCOBJ@@XZ.c)
 *     ?pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@K@ZXZ @ 0x1401BF03C (-pfnTextOut@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@PEAU_STROBJ@@PEAU_FONTOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@.c)
 *     ?vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z @ 0x1401C1BA4 (-vEudcOpaqueArea@ESTROBJ@@QEAAXPEAU_POINTFIX@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1401D48F0 (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140265F74 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 *     ??0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x140296A18 (--0RGNMEMOBJ@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x140318DAC (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 *     ?vMopUp@TXTCLEANUP@@QEAAXXZ @ 0x1403341AC (-vMopUp@TXTCLEANUP@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall GrepExtTextOutWLocked(
        __int64 a1,
        struct XDCOBJ *a2,
        int a3,
        ULONG a4,
        int a5,
        int *a6,
        unsigned __int16 *a7,
        int a8,
        int *a9,
        int a10,
        void *a11,
        unsigned int a12)
{
  unsigned int v12; // r15d
  int *v14; // r13
  __int64 v15; // rbx
  int v16; // r12d
  DC *v17; // rcx
  int v18; // eax
  unsigned int v19; // edi
  DC *v20; // rcx
  int v21; // eax
  struct _BRUSHOBJ *v22; // rbx
  int v23; // eax
  int v24; // ebx
  struct XDCOBJ *v25; // r14
  int v26; // r9d
  int v27; // r10d
  unsigned __int64 v28; // rdx
  int v29; // r8d
  struct _RECTL *v30; // r13
  RECTL *p_rclBkGround; // rbx
  struct _GRETHREAD *CurrentThread; // rax
  struct _POINTL *v33; // r10
  __int64 v34; // rcx
  struct _GRETHREAD *v35; // rax
  ERECTL *v36; // rcx
  __int64 v37; // rdx
  __int64 v39; // rcx
  int v40; // r9d
  ULONG v41; // r8d
  int v42; // eax
  DC *v43; // r8
  int v44; // r8d
  DC *v45; // rdx
  int v46; // eax
  int v47; // ebx
  int v48; // r11d
  int v49; // ecx
  int v50; // eax
  DC *v51; // rax
  int v52; // r11d
  struct REGION *v53; // rax
  int v54; // r11d
  struct ECLIPOBJ *v55; // rdx
  __int64 v56; // r13
  DC *v57; // rax
  unsigned __int64 v58; // r9
  HDEV v59; // rbx
  __int64 v60; // rdi
  ULONG v61; // ecx
  char *v62; // r10
  __int64 v63; // rsi
  struct _BRUSHOBJ *v64; // r11
  struct XDCOBJ *v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rax
  int v68; // r8d
  struct XDCOBJ *v69; // rdi
  struct _POINTL *v70; // rsi
  __int16 cEntries; // r8
  __int64 v72; // rcx
  int v73; // edx
  const struct EXFORMOBJR *v74; // rdx
  unsigned int v75; // r9d
  bool v76; // cc
  int v77; // eax
  int v78; // eax
  int v79; // ecx
  int v80; // edx
  int v81; // eax
  int v82; // edx
  int v83; // eax
  int v84; // edx
  int v85; // eax
  int v86; // edx
  int bottom; // r13d
  LONG top; // edx
  int right; // edi
  int left; // r11d
  LONG v91; // eax
  unsigned int v92; // ecx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // rax
  int v96; // r9d
  DC *v97; // rdx
  const struct _POINTL *v98; // rdx
  int v99; // r13d
  LONG v100; // ecx
  LONG v101; // eax
  struct _SURFOBJ *v102; // r8
  struct _SURFOBJ *v103; // r9
  struct _BRUSHOBJ *v104; // rax
  int v105; // edx
  unsigned __int64 v106; // r8
  LONG v107; // eax
  LONG v108; // ecx
  const struct EXFORMOBJR *v109; // rdx
  unsigned int v110; // r9d
  ERECTL *v111; // rdi
  __m128i rclBounds; // xmm6
  __int64 v113; // rcx
  struct _BRUSHOBJ *v114; // rdi
  ULONG *v115; // rdx
  struct _SURFOBJ *v116; // r8
  LONG v117; // r10d
  struct _SURFOBJ *v118; // r9
  int v119; // ebx
  LONG v120; // ecx
  LONG v121; // eax
  LONG v122; // ecx
  LONG v123; // eax
  int v124; // eax
  ULONG v125; // ecx
  LONG v126; // ecx
  LONG v127; // eax
  unsigned __int64 v128; // rcx
  int v129; // r11d
  int v130; // edi
  unsigned __int64 v131; // rcx
  int v132; // edx
  int v133; // r13d
  const struct EXFORMOBJR *v134; // rdx
  unsigned int v135; // r9d
  DC *v136; // rcx
  DC *v137; // rcx
  char v138; // r13
  int v139; // eax
  char v140; // al
  BOOL v141; // r9d
  bool v142; // zf
  struct _XLATEOBJ *v143; // [rsp+30h] [rbp-E8h]
  struct _POINTL *v144; // [rsp+40h] [rbp-D8h]
  struct _POINTL *v145; // [rsp+48h] [rbp-D0h]
  unsigned int v146; // [rsp+60h] [rbp-B8h]
  struct _BRUSHOBJ *v147; // [rsp+98h] [rbp-80h] BYREF
  struct _BRUSHOBJ *v148; // [rsp+A0h] [rbp-78h] BYREF
  _DWORD *v149; // [rsp+A8h] [rbp-70h] BYREF
  unsigned int v150; // [rsp+B0h] [rbp-68h]
  struct _POINTL *v151; // [rsp+B8h] [rbp-60h] BYREF
  struct _XLATEOBJ v152; // [rsp+C0h] [rbp-58h] BYREF
  BOOL v153; // [rsp+D8h] [rbp-40h]
  int v154; // [rsp+DCh] [rbp-3Ch]
  int v155; // [rsp+E0h] [rbp-38h]
  struct XDCOBJ *v156; // [rsp+E8h] [rbp-30h]
  ERECTL *pulXlate; // [rsp+F0h] [rbp-28h]
  void *v158; // [rsp+F8h] [rbp-20h]
  int *v159; // [rsp+100h] [rbp-18h]
  struct XDCOBJ *v160; // [rsp+108h] [rbp-10h] BYREF
  __int64 v161; // [rsp+110h] [rbp-8h]
  unsigned __int16 *v162[2]; // [rsp+118h] [rbp+0h] BYREF
  struct _PATHOBJ v163; // [rsp+128h] [rbp+10h] BYREF
  __int64 v164; // [rsp+130h] [rbp+18h]
  char v165[48]; // [rsp+178h] [rbp+60h] BYREF
  struct _SURFOBJ *v166[2]; // [rsp+1A8h] [rbp+90h] BYREF
  struct _RECTL v167; // [rsp+1B8h] [rbp+A0h] BYREF
  struct _RECTL v168; // [rsp+1C8h] [rbp+B0h] BYREF
  struct _CLIPOBJ v169; // [rsp+1D8h] [rbp+C0h] BYREF
  __int64 v170; // [rsp+210h] [rbp+F8h]
  __int64 v171; // [rsp+228h] [rbp+110h]
  int v172; // [rsp+230h] [rbp+118h]
  int v173; // [rsp+258h] [rbp+140h]
  __int64 v174; // [rsp+268h] [rbp+150h]
  STROBJ pstro; // [rsp+278h] [rbp+160h] BYREF
  __int64 v176; // [rsp+2B8h] [rbp+1A0h]
  int v177; // [rsp+2C8h] [rbp+1B0h]
  int v178; // [rsp+2CCh] [rbp+1B4h]
  int v179; // [rsp+2F8h] [rbp+1E0h]
  _BYTE v180[100]; // [rsp+2FCh] [rbp+1E4h] BYREF
  int v181; // [rsp+360h] [rbp+248h]
  void *v182; // [rsp+380h] [rbp+268h]
  struct _POINTL v183; // [rsp+3B8h] [rbp+2A0h] BYREF
  LONG v184; // [rsp+3C0h] [rbp+2A8h]
  LONG v185; // [rsp+3C4h] [rbp+2ACh]
  LONG v186; // [rsp+3C8h] [rbp+2B0h]
  LONG v187; // [rsp+3CCh] [rbp+2B4h]
  int v188; // [rsp+3D0h] [rbp+2B8h]
  LONG v189; // [rsp+3D4h] [rbp+2BCh]
  struct _POINTFIX v190; // [rsp+3D8h] [rbp+2C0h] BYREF
  char v191; // [rsp+488h] [rbp+370h]

  v12 = 0;
  v14 = a6;
  v15 = a1;
  v162[0] = a7;
  v16 = 128;
  v158 = a11;
  v161 = a1;
  v17 = *(DC **)a2;
  v156 = a2;
  v152.cEntries = a4;
  v155 = a3;
  LODWORD(v147) = (a5 & 0x10) != 0 ? 4 : 2;
  v18 = *((_DWORD *)v17 + 62);
  *(_QWORD *)&v168.left = a6;
  v159 = a9;
  v153 = 0;
  v154 = 0;
  if ( (v18 & 1) != 0 && (a5 & 4) != 0 )
    goto LABEL_264;
  if ( (*((_DWORD *)v17 + 9) & 0x10000) != 0 )
  {
    v125 = 6;
    goto LABEL_265;
  }
  LODWORD(v151) = a5 & 0x2000;
  if ( (a5 & 0x2000) != 0 && !a9 )
  {
LABEL_264:
    v125 = 87;
LABEL_265:
    EngSetLastError(v125);
    v37 = 0LL;
    goto LABEL_42;
  }
  v19 = a5 & 0xFFFFC36F;
  v191 = a5 & 0x6F;
  if ( !a6 )
  {
    v19 &= 0xFFFFFFF9;
LABEL_6:
    v191 = v19;
    goto LABEL_7;
  }
  if ( *a6 == a6[2] || a6[1] == a6[3] )
  {
    a6[2] = a3;
    *a6 = a3;
    a6[3] = a4;
    a6[1] = a4;
    if ( (v19 & 6) == 2 )
    {
      v14 = 0LL;
      *(_QWORD *)&v168.left = 0LL;
      v19 &= ~2u;
      goto LABEL_6;
    }
  }
LABEL_7:
  v20 = *(DC **)a2;
  if ( *(_QWORD *)a2 && (!v19 || v14 && (v19 & 0xFFFFFFF9) == 0) )
  {
    v21 = *((_DWORD *)v20 + 62) & 1;
    if ( !v21 || (v19 & 4) == 0 )
    {
      *(_OWORD *)v166 = 0LL;
      if ( v21 )
      {
        v23 = 0;
        v148 = 0LL;
        HIDWORD(v22) = 0;
      }
      else
      {
        v22 = (struct _BRUSHOBJ *)*((_QWORD *)v20 + (*((_DWORD *)v20 + 10) & 1) + 127);
        v148 = v22;
        v23 = (int)v22;
      }
      *(_DWORD *)&v152.iSrcType = 16 * v23;
      v24 = 16 * HIDWORD(v22);
      DC::QuickInitXform(v20, &v152, 516LL);
      v160 = 0LL;
      v25 = 0LL;
      if ( !v14 )
      {
        v26 = HIDWORD(v166[1]);
        v27 = (int)v166[1];
        v28 = HIDWORD(v166[0]);
        v29 = (int)v166[0];
        goto LABEL_15;
      }
      LODWORD(pulXlate) = v19 & 2;
      v16 = (_DWORD)pulXlate != 0 ? 136 : 128;
      v79 = *(_DWORD *)(*(_QWORD *)&v152.iUniq + 32LL);
      if ( (v79 & 2) != 0 )
      {
        left = (_DWORD)v148 + *v14 + ((*(_DWORD *)(*(_QWORD *)&v152.iUniq + 24LL) + 8) >> 4);
        v167.left = left;
        right = (_DWORD)v148 + v14[2] + ((*(_DWORD *)(*(_QWORD *)&v152.iUniq + 24LL) + 8) >> 4);
        v167.right = right;
        top = HIDWORD(v148) + v14[1] + ((*(_DWORD *)(*(_QWORD *)&v152.iUniq + 28LL) + 8) >> 4);
        v167.top = top;
        v99 = *(_DWORD *)(*(_QWORD *)&v152.iUniq + 28LL);
        v150 = top;
        bottom = HIDWORD(v148) + *(_DWORD *)(*(_QWORD *)&v168.left + 12LL) + ((v99 + 8) >> 4);
        v167.bottom = bottom;
      }
      else
      {
        v80 = *v14;
        if ( (v79 & 1) != 0 )
        {
          v81 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v152, v80);
          v82 = v14[2];
          v167.left = (_DWORD)v148 + ((v81 + 8) >> 4);
          v83 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v152, v82);
          v84 = v14[1];
          v167.right = (_DWORD)v148 + ((v83 + 8) >> 4);
          v85 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v152, v84);
          v86 = v14[3];
          v167.top = HIDWORD(v148) + ((v85 + 8) >> 4);
          bottom = HIDWORD(v148) + ((int)(EXFORMOBJ::fxFastY((EXFORMOBJ *)&v152, v86) + 8) >> 4);
          v167.bottom = bottom;
LABEL_139:
          top = v167.top;
          right = v167.right;
          left = v167.left;
          v150 = v167.top;
          goto LABEL_140;
        }
        v126 = v14[1];
        v183.y = v14[3];
        v127 = v14[2];
        v185 = v126;
        v187 = v126;
        v183.x = v80;
        v184 = v80;
        v186 = v127;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v152, &v183, (struct _POINTFIX *)&v183, 3uLL);
        v188 = v183.x + v186 - v184;
        LODWORD(v152.pulXlate) = v188;
        v189 = v183.y + v187 - v185;
        v168.left = v189;
        v128 = (v184 <= v183.x) ^ (unsigned __int64)(v184 > v186);
        v129 = *(&v183.x + 2 * v128);
        v130 = *(&v186 + 2 * v128);
        if ( v129 > v130 )
          v129 += 15;
        else
          v130 += 15;
        left = (_DWORD)v148 + (v129 >> 4);
        right = (_DWORD)v148 + (v130 >> 4);
        v167.right = right;
        v167.left = left;
        v131 = (v185 > v187) ^ (unsigned __int64)(v185 <= v183.y);
        v132 = *(&v183.y + 2 * v131);
        v133 = *(&v187 + 2 * v131);
        if ( v132 > v133 )
          v132 += 15;
        else
          v133 += 15;
        top = HIDWORD(v148) + (v132 >> 4);
        bottom = HIDWORD(v148) + (v133 >> 4);
        v167.bottom = bottom;
        v167.top = top;
        v150 = top;
        if ( (v191 & 4) != 0 )
        {
          PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v163);
          if ( v164
            && EPATHOBJ::bAddPolygon((EPATHOBJ *)&v163, v134, &v183, v135)
            && (v136 = *(DC **)a2,
                v168 = 0LL,
                v168.top = 16 * (*((_DWORD *)v136 + 251) - HIDWORD(v148)),
                v168.bottom = 16 * (*((_DWORD *)v136 + 253) - HIDWORD(v148)),
                RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v148, (struct EPATHOBJ *)&v163, 1u, &v168),
                v148) )
          {
            v137 = *(DC **)a2;
            v25 = a2;
            v160 = a2;
            *((_QWORD *)v137 + 141) = v148;
            v138 = v191;
            if ( DC::bTightenRao(*(DC **)a2) )
              v138 = v191 & 0xFB;
          }
          else
          {
            v138 = v191;
          }
          if ( (v138 & 4) != 0 )
            v16 = 0;
          PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v163);
          v139 = 0;
          if ( (v138 & 4) == 0 )
            v139 = a8;
          a8 = v139;
          v140 = 0;
          if ( (v138 & 4) == 0 )
            v140 = v138;
          bottom = v167.bottom;
          v191 = v140;
          goto LABEL_139;
        }
        if ( (_DWORD)pulXlate )
        {
          v183.x += *(_DWORD *)&v152.iSrcType;
          v184 += *(_DWORD *)&v152.iSrcType;
          v186 += *(_DWORD *)&v152.iSrcType;
          v16 = 130;
          v183.y += v24;
          v185 += v24;
          v189 = v24 + v168.left;
          v187 += v24;
          v188 = *(_DWORD *)&v152.iSrcType + LODWORD(v152.pulXlate);
        }
      }
LABEL_140:
      if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 108LL) & 1) != 0 )
      {
        ++left;
        ++right;
        v167.left = left;
        v167.right = right;
      }
      if ( left > right )
      {
        v91 = left;
        v167.left = right;
        left = right;
        v167.right = v91;
        right = v91;
      }
      if ( top <= bottom )
      {
        v92 = v150;
      }
      else
      {
        v92 = bottom;
        v167.bottom = top;
        v167.top = bottom;
        bottom = top;
      }
      v29 = (int)v166[0];
      v27 = (int)v166[1];
      if ( (v16 & 0xA) != 0 )
      {
        if ( LODWORD(v166[0]) != LODWORD(v166[1]) )
        {
          v28 = HIDWORD(v166[0]);
          v26 = HIDWORD(v166[1]);
          if ( HIDWORD(v166[0]) != HIDWORD(v166[1]) )
          {
            if ( left < SLODWORD(v166[0]) )
              v29 = left;
            LODWORD(v166[0]) = v29;
            if ( (int)v92 < SHIDWORD(v166[0]) )
              v28 = v92;
            HIDWORD(v166[0]) = v28;
            if ( right > SLODWORD(v166[1]) )
              v27 = right;
            LOBYTE(v19) = v191;
            LODWORD(v166[1]) = v27;
            if ( bottom > SHIDWORD(v166[1]) )
            {
              v26 = bottom;
              HIDWORD(v166[1]) = bottom;
            }
LABEL_15:
            v30 = 0LL;
            *(_QWORD *)&v168.left = 0LL;
            v152.pulXlate = 0LL;
            v149 = 0LL;
            v181 = 0;
            if ( !a8 )
            {
LABEL_20:
              p_rclBkGround = 0LL;
              goto LABEL_81;
            }
            if ( (unsigned int)RFONTOBJ::bInit(
                                 (RFONTOBJ *)&v149,
                                 a2,
                                 *(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1,
                                 (unsigned int)v147) )
              GreAcquireSemaphore<5,RFONT *>(v149);
            if ( !v149 )
            {
              v26 = HIDWORD(v166[1]);
              v16 = 0;
              v27 = (int)v166[1];
              v28 = HIDWORD(v166[0]);
              v29 = (int)v166[0];
              goto LABEL_20;
            }
            v154 = v149[22] & 2;
            v153 = v154 && (v149[181] & 0x8000) == 0;
            v39 = *(_QWORD *)(*(_QWORD *)a2 + 976LL);
            v150 = *(_DWORD *)(*(_QWORD *)a2 + 1752LL) | *(_DWORD *)(v39 + 272) & 0x11F;
            if ( (v150 & 1) != 0 )
            {
              v42 = *(_DWORD *)(v39 + 152);
              if ( (v42 & 0x200) == 0 )
              {
                v96 = *(_DWORD *)&v152.iSrcType;
                *(_DWORD *)(v39 + 152) = v42 | 0x100;
                v97 = *(DC **)a2;
                v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 8LL) + v96;
                LODWORD(v147) = v40;
                v41 = *(_DWORD *)(*((_QWORD *)v97 + 122) + 12LL);
                goto LABEL_53;
              }
              *(_DWORD *)(v39 + 152) = v42 & 0xFFFFFDFF;
              *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) |= 0x100u;
              if ( (*(_DWORD *)(*(_QWORD *)&v152.iUniq + 32LL) & 2) != 0 )
              {
                v43 = *(DC **)a2;
                LODWORD(v147) = *(_DWORD *)(*(_QWORD *)&v152.iUniq + 24LL)
                              + 16 * *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 216LL);
                HIDWORD(v147) = *(_DWORD *)(*(_QWORD *)&v152.iUniq + 28LL)
                              + 16 * *(_DWORD *)(*((_QWORD *)v43 + 122) + 220LL);
              }
              else
              {
                v98 = (const struct _POINTL *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 216LL);
                if ( (*(_BYTE *)(*(_QWORD *)&v152.iUniq + 32LL) & 1) != 0 )
                {
                  LODWORD(v147) = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v152, v98->x);
                  HIDWORD(v147) = EXFORMOBJ::fxFastY(
                                    (EXFORMOBJ *)&v152,
                                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 220LL));
                }
                else
                {
                  EXFORMOBJ::bXform((EXFORMOBJ *)&v152, v98, (struct _POINTFIX *)&v147, 1uLL);
                }
              }
              *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 8LL) = v147;
            }
            else
            {
              if ( (*(_DWORD *)(*(_QWORD *)&v152.iUniq + 32LL) & 2) != 0 )
              {
                v40 = *(_DWORD *)&v152.iSrcType + *(_DWORD *)(*(_QWORD *)&v152.iUniq + 24LL) + 16 * v155;
                LODWORD(v147) = v40;
                v41 = *(_DWORD *)(*(_QWORD *)&v152.iUniq + 28LL) + 16 * v152.cEntries;
LABEL_53:
                v44 = v24 + v41;
                goto LABEL_54;
              }
              if ( (*(_BYTE *)(*(_QWORD *)&v152.iUniq + 32LL) & 1) != 0 )
              {
                v77 = EXFORMOBJ::fxFastX((EXFORMOBJ *)&v152, v155);
                LODWORD(v147) = *(_DWORD *)&v152.iSrcType + v77;
                v78 = EXFORMOBJ::fxFastY((EXFORMOBJ *)&v152, v152.cEntries);
                v40 = (int)v147;
                v44 = v24 + v78;
LABEL_54:
                v45 = *(DC **)a2;
                HIDWORD(v147) = v44;
                ESTROBJ::vInit(
                  (ESTROBJ *)&pstro,
                  v162[0],
                  a8,
                  a2,
                  (struct RFONTOBJ *)&v149,
                  (struct EXFORMOBJ *)&v152,
                  v159,
                  (int)v151,
                  *((_DWORD *)v45 + 439),
                  *(_DWORD *)(*((_QWORD *)v45 + 122) + 280LL),
                  *(_DWORD *)(*((_QWORD *)v45 + 122) + 284LL),
                  *(_DWORD *)(*((_QWORD *)v45 + 122) + 288LL),
                  v40,
                  v44,
                  v150,
                  0LL,
                  v158,
                  a12);
                if ( (v181 & 4) == 0 )
                {
                  v26 = HIDWORD(v166[1]);
                  v16 = 0;
                  v27 = (int)v166[1];
                  p_rclBkGround = 0LL;
                  v28 = HIDWORD(v166[0]);
                  v29 = (int)v166[0];
LABEL_79:
                  v152.pulXlate = (ULONG *)v30;
                  *(_QWORD *)&v168.left = p_rclBkGround;
                  if ( (v150 & 1) != 0 )
                  {
                    v51 = *(DC **)a2;
                    *(_QWORD *)&v168.left = p_rclBkGround;
                    v152.pulXlate = (ULONG *)v30;
                    *(_DWORD *)(*((_QWORD *)v51 + 122) + 8LL) += v177;
                    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 12LL) += v178;
                    v26 = HIDWORD(v166[1]);
                    v27 = (int)v166[1];
                    v28 = HIDWORD(v166[0]);
                    v29 = (int)v166[0];
                  }
LABEL_81:
                  v52 = v16;
                  if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1) == 0 )
                  {
                    if ( (_DWORD)v28 == v26 || v29 == v27 )
                      goto LABEL_33;
                    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
                      XDCOBJ::vAccumulate(a2, (struct ECLIPOBJ *)v28, (struct ERECTL *)v166);
                    v53 = XDCOBJ::prgnEffRao((DC **)a2);
                    v170 = 0LL;
                    v171 = 0LL;
                    v172 = 0;
                    v173 = 1;
                    v174 = 0LL;
                    XCLIPOBJ::vSetup((XCLIPOBJ *)&v169, v53, (const struct ERECTL *)v166, v54);
                    *(RECTL *)v166 = v169.rclBounds;
                    if ( _mm_cvtsi128_si32((__m128i)v169.rclBounds) == _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v169.rclBounds, 8))
                      || _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v169.rclBounds, 4)) == _mm_cvtsi128_si32(
                                                                                            _mm_srli_si128(
                                                                                              (__m128i)v169.rclBounds,
                                                                                              12)) )
                    {
                      goto LABEL_33;
                    }
                    if ( (*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 0xE0) != 0 )
                    {
                      *(RECTL *)v162 = v169.rclBounds;
                      XDCOBJ::vAccumulateTight(a2, v55, (__m128i *)v162);
                    }
                    v56 = *(_QWORD *)(*(_QWORD *)a2 + 496LL);
                    if ( !v56 || !(unsigned int)DestSurfaceAccessCheck(*(struct SURFACE **)(*(_QWORD *)a2 + 496LL)) )
                      goto LABEL_33;
                    v57 = *(DC **)a2;
                    v58 = 0LL;
                    v59 = *(HDEV *)(v56 + 48);
                    v60 = *(_QWORD *)(v56 + 128);
                    v158 = v59;
                    v61 = *((_DWORD *)v57 + 18);
                    v62 = (char *)v57 + 1472;
                    v63 = *((_QWORD *)v57 + 11);
                    v64 = (struct _BRUSHOBJ *)((char *)v57 + 1608);
                    v148 = (struct _BRUSHOBJ *)((char *)v57 + 1472);
                    v147 = (struct _BRUSHOBJ *)((char *)v57 + 1608);
                    v152.cEntries = v61;
                    if ( (v61 & 0x10000000) != 0 )
                    {
                      v141 = v153;
                      *(_DWORD *)(*((_QWORD *)v57 + 122) + 152LL) |= 4u;
                      --*((_DWORD *)v57 + 399);
                      v58 = !v141;
                    }
                    v65 = v156;
                    v66 = *(_QWORD *)v156;
                    v67 = *(_QWORD *)(*(_QWORD *)v156 + 976LL);
                    v68 = *(_DWORD *)(*(_QWORD *)v156 + 316LL) | *(_DWORD *)(v67 + 152);
                    if ( ((*(_BYTE *)(*(_QWORD *)v156 + 316LL) | *(_BYTE *)(v67 + 152)) & 0xC) != 0 )
                    {
                      v93 = *((_QWORD *)v156 + 2);
                      v159 = (int *)v93;
                      if ( (v68 & 4) != 0 )
                      {
                        EBRUSHOBJ::vInitBrush(v62, v66, *(_QWORD *)(v93 + 152), v63, v60, v56, v58);
                        v65 = v156;
                        v64 = v147;
                      }
                      v94 = *(_QWORD *)v65;
                      v95 = *(_QWORD *)(v94 + 976);
                      v58 = (unsigned int)(*(_DWORD *)(v94 + 316) | *(_DWORD *)(v95 + 152));
                      if ( ((*(_BYTE *)(v94 + 316) | *(_BYTE *)(v95 + 152)) & 8) != 0 )
                        EBRUSHOBJ::vInitBrush(
                          v64,
                          v94,
                          *((_QWORD *)v159 + 21),
                          v63,
                          v60,
                          v56,
                          (v152.cEntries >> 15) & 1);
                      v69 = v156;
                      v64 = v147;
                      *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v156 + 976LL) + 152LL) &= 0xFFFFFFF3;
                      *(_DWORD *)(*(_QWORD *)v69 + 316LL) &= 0xFFFFFFF3;
                    }
                    else
                    {
                      v69 = v156;
                    }
                    v70 = (struct _POINTL *)(*(_QWORD *)v69 + 1192LL);
                    if ( (v16 & 0x1A) != 0 )
                    {
                      if ( (v16 & 8) != 0 )
                      {
                        v105 = v167.left;
                        v106 = (unsigned int)v167.right;
                        if ( v167.left != v167.right )
                        {
                          v107 = v167.top;
                          v108 = v167.bottom;
                          if ( v167.top != v167.bottom )
                          {
                            if ( SLODWORD(v166[0]) > v167.left )
                              v105 = (int)v166[0];
                            v169.rclBounds.left = v105;
                            if ( SLODWORD(v166[1]) < v167.right )
                              v106 = LODWORD(v166[1]);
                            v169.rclBounds.right = v106;
                            if ( SHIDWORD(v166[0]) > v167.top )
                              v107 = HIDWORD(v166[0]);
                            v169.rclBounds.top = v107;
                            if ( SHIDWORD(v166[1]) < v167.bottom )
                              v108 = HIDWORD(v166[1]);
                            v169.rclBounds.bottom = v108;
                            if ( v105 < (int)v106 && v107 < v108 )
                            {
                              ++*(_DWORD *)(v56 + 92);
                              TextOutBitBlt(
                                (struct SURFACE *)v56,
                                (struct RFONTOBJ *)&v149,
                                (struct _SURFOBJ *)v106,
                                (struct _SURFOBJ *)v58,
                                &v169,
                                v143,
                                &v169.rclBounds,
                                v144,
                                v145,
                                v64,
                                v70,
                                v146);
                            }
                            v169.rclBounds = *(RECTL *)v166;
                          }
                        }
                      }
                      if ( (v16 & 0x12) != 0 )
                      {
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v163);
                        if ( v164 )
                        {
                          if ( ((v16 & 2) == 0 || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v163, v109, &v183, v110))
                            && ((v16 & 0x10) == 0
                             || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v163, v109, (const struct _POINTL *)&v190, v110)) )
                          {
                            v145 = v70;
                            v144 = (struct _POINTL *)v147;
                            v143 = (struct _XLATEOBJ *)v56;
                            v16 = *(_DWORD *)EPATHOBJ_bTextOutSimpleFill(&v151, &v163, v69, &v149, v59) != 0 ? v16 : 0;
                          }
                          else
                          {
                            v16 = 0;
                          }
                        }
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v163);
                      }
                    }
                    if ( (v16 & 1) == 0 )
                      goto LABEL_32;
                    pulXlate = 0LL;
                    if ( v154 )
                    {
                      cEntries = -257;
                      v16 |= (v149[181] & 0x8000) != 0 ? 64 : 32;
                    }
                    else
                    {
                      cEntries = v152.cEntries;
                    }
                    if ( *(_QWORD *)&v168.left && (cEntries & 0x100) == 0 )
                    {
                      v100 = **(_DWORD **)&v168.left;
                      v101 = *(_DWORD *)(*(_QWORD *)&v168.left + 8LL);
                      if ( SLODWORD(v166[0]) > **(_DWORD **)&v168.left )
                        v100 = (LONG)v166[0];
                      v102 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)&v168.left + 4LL);
                      if ( SLODWORD(v166[1]) < v101 )
                        v101 = (LONG)v166[1];
                      v103 = (struct _SURFOBJ *)*(unsigned int *)(*(_QWORD *)&v168.left + 12LL);
                      if ( SHIDWORD(v166[0]) > (int)v102 )
                        v102 = (struct _SURFOBJ *)HIDWORD(v166[0]);
                      v169.rclBounds.left = v100;
                      if ( SHIDWORD(v166[1]) < (int)v103 )
                        v103 = (struct _SURFOBJ *)HIDWORD(v166[1]);
                      v169.rclBounds.bottom = (int)v103;
                      v169.rclBounds.right = v101;
                      v169.rclBounds.top = (int)v102;
                      if ( v100 < v101 && (int)v102 < (int)v103 )
                      {
                        v104 = v147;
                        ++*(_DWORD *)(v56 + 92);
                        TextOutBitBlt(
                          (struct SURFACE *)v56,
                          (struct RFONTOBJ *)&v149,
                          v102,
                          v103,
                          &v169,
                          v143,
                          &v169.rclBounds,
                          v144,
                          v145,
                          v104,
                          v70,
                          v146);
                      }
                      v169.rclBounds = *(RECTL *)v166;
                      *(_QWORD *)&v168.left = 0LL;
                    }
                    if ( v152.pulXlate && *((_DWORD *)v59 + 531) != 4 )
                    {
                      pulXlate = (ERECTL *)v152.pulXlate;
                      v152.pulXlate = 0LL;
                    }
                    if ( (v16 & 0x20) != 0 )
                    {
                      if ( (v181 & 0x1400) != 0 )
                      {
                        v146 = (unsigned int)v59;
                        v145 = (struct _POINTL *)v147;
                        v144 = (struct _POINTL *)v148;
                        v143 = 0LL;
                        if ( !*(_DWORD *)bProxyDrvTextOut(&v151, v69, v56, &pstro, &v169) )
                          v16 = 0;
                      }
                      else
                      {
                        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v163);
                        if ( !v164
                          || !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v163)
                          || !(unsigned int)EPATHOBJ_bTextOutSimpleStroke1(
                                              &v163,
                                              v69,
                                              (struct RFONTOBJ *)&v149,
                                              v59,
                                              (struct SURFACE *)v56,
                                              &v169,
                                              v148,
                                              v70,
                                              (unsigned int)v145) )
                        {
                          v16 = 0;
                        }
                        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v163);
                      }
                      goto LABEL_31;
                    }
                    if ( SURFACE::pdcoAA((SURFACE *)v56) )
                      SURFACE::pdcoAA((SURFACE *)v56, 0LL);
                    v151 = (struct _POINTL *)SURFACE::pfnTextOut((SURFACE *)v56);
                    if ( PDEVOBJ::bSupportsClearTypeAlways((int (*)(struct _SURFOBJ *, struct _STROBJ *, struct _FONTOBJ *, struct _CLIPOBJ *, struct _RECTL *, struct _RECTL *, struct _BRUSHOBJ *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v151) )
                    {
                      if ( (v149[3] & 0x10010000) != 0 )
                      {
                        SURFACE::pdcoAA((SURFACE *)v56, v69);
                        v33 = v151;
                      }
                    }
                    else
                    {
                      v73 = v149[3];
                      if ( (v73 & 0x10000) != 0 )
                      {
                        LOBYTE(v72) = (*(_DWORD *)(*(_QWORD *)v69 + 72LL) & 0x1000000) != 0;
                        if ( ((unsigned __int8)v72 & ((v73 & 0x10000000) == 0)) == 0 )
                        {
                          if ( v33 != (struct _POINTL *)EngTextOut )
                          {
                            *(_QWORD *)(v56 + 104) = v69;
                            CurrentThread = GreGetCurrentThread(v72);
                            if ( CurrentThread )
                              *((_QWORD *)CurrentThread + 36) = v69;
                          }
                          v33 = (struct _POINTL *)SpTextOut;
                          v151 = (struct _POINTL *)SpTextOut;
                        }
                      }
                    }
                    if ( (v16 & 0x40) != 0 )
                    {
                      if ( (v181 & 0x1400) != 0 )
                      {
                        v146 = (unsigned int)v59;
                        v145 = (struct _POINTL *)v147;
                        v144 = (struct _POINTL *)v148;
                        v143 = 0LL;
                        goto LABEL_223;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v163);
                      if ( !v164
                        || !(unsigned int)ESTROBJ::bTextToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v163)
                        || v163.cCurves > 1
                        && (v145 = v70,
                            v144 = (struct _POINTL *)v148,
                            v143 = (struct _XLATEOBJ *)v56,
                            !*(_DWORD *)EPATHOBJ_bTextOutSimpleFill(&v151, &v163, v69, &v149, v59)) )
                      {
                        v16 = 0;
                      }
                    }
                    else
                    {
                      ++*(_DWORD *)(v56 + 92);
                      if ( (v16 & 4) == 0 )
                      {
                        if ( (v181 & 0x1400) == 0 )
                        {
                          v145 = v70;
                          v144 = (struct _POINTL *)v147;
                          v143 = *(struct _XLATEOBJ **)&v168.left;
                          v34 = (unsigned int)-(((unsigned int (__fastcall *)(__int64, STROBJ *, _DWORD *, struct _CLIPOBJ *, ULONG *))v33)(
                                                  v56 + 24,
                                                  &pstro,
                                                  v149,
                                                  &v169,
                                                  v152.pulXlate) != 0);
                          v16 &= v34;
                          goto LABEL_29;
                        }
                        v146 = (unsigned int)v59;
                        v145 = (struct _POINTL *)v147;
                        v144 = (struct _POINTL *)v148;
                        v143 = (struct _XLATEOBJ *)v152.pulXlate;
LABEL_223:
                        if ( !*(_DWORD *)bProxyDrvTextOut(&v151, v69, v56, &pstro, &v169) )
                          v16 = 0;
                        goto LABEL_29;
                      }
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v163);
                      if ( !v164
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v163) )
                      {
                        goto LABEL_334;
                      }
                      if ( (v181 & 0x1400) != 0 )
                      {
                        v146 = 0;
                        v145 = (struct _POINTL *)v147;
                        v144 = (struct _POINTL *)v148;
                        v143 = (struct _XLATEOBJ *)v152.pulXlate;
                        v142 = *(_DWORD *)bProxyDrvTextOut(&v151, v69, v56, &pstro, &v169) == 0;
                      }
                      else
                      {
                        v145 = v70;
                        v144 = (struct _POINTL *)v147;
                        v143 = *(struct _XLATEOBJ **)&v168.left;
                        v142 = ((unsigned int (__fastcall *)(__int64, STROBJ *, _DWORD *, struct _CLIPOBJ *, ULONG *))v151)(
                                 v56 + 24,
                                 &pstro,
                                 v149,
                                 &v169,
                                 v152.pulXlate) == 0;
                      }
                      if ( v142
                        || (v145 = v70,
                            v144 = (struct _POINTL *)v148,
                            v143 = (struct _XLATEOBJ *)v56,
                            !*(_DWORD *)EPATHOBJ_bTextOutSimpleFill(&v151, &v163, v69, &v149, v59)) )
                      {
LABEL_334:
                        v16 = 0;
                      }
                      v16 &= ~4u;
                    }
                    PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v163);
LABEL_29:
                    *(_QWORD *)(v56 + 104) = 0LL;
                    v35 = GreGetCurrentThread(v34);
                    if ( v35 )
                      *((_QWORD *)v35 + 36) = 0LL;
LABEL_31:
                    v36 = pulXlate;
                    if ( pulXlate )
                    {
                      rclBounds = (__m128i)v169.rclBounds;
                      ++*(_DWORD *)(v56 + 92);
                      if ( !ERECTL::bEmpty(v36) )
                      {
                        v114 = v148;
                        v115 = (ULONG *)(v113 + 4);
                        v152.pulXlate = (ULONG *)(v113 + 4);
                        v116 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 12));
                        v117 = _mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 4));
                        v118 = (struct _SURFOBJ *)(unsigned int)_mm_cvtsi128_si32(_mm_srli_si128(rclBounds, 8));
                        LODWORD(v151) = (_DWORD)v116;
                        v168.left = v117;
                        LODWORD(v147) = (_DWORD)v118;
                        v119 = _mm_cvtsi128_si32(rclBounds);
                        do
                        {
                          v120 = *(v115 - 1);
                          v121 = v115[1];
                          if ( v119 > v120 )
                            v120 = v119;
                          v169.rclBounds.left = v120;
                          if ( (int)v118 < v121 )
                            v121 = (int)v118;
                          v169.rclBounds.right = v121;
                          if ( v120 < v121 )
                          {
                            v122 = *v115;
                            v123 = v115[2];
                            if ( v117 > (int)*v115 )
                              v122 = v117;
                            v169.rclBounds.top = v122;
                            if ( (int)v116 < v123 )
                              v123 = (int)v116;
                            v169.rclBounds.bottom = v123;
                            if ( v122 < v123 )
                            {
                              TextOutBitBlt(
                                (struct SURFACE *)v56,
                                (struct RFONTOBJ *)&v149,
                                v116,
                                v118,
                                &v169,
                                v143,
                                &v169.rclBounds,
                                v144,
                                v145,
                                v114,
                                v70,
                                v146);
                              v115 = v152.pulXlate;
                            }
                          }
                          v152.pulXlate = v115 + 4;
                        }
                        while ( !ERECTL::bEmpty((ERECTL *)(v115 + 3)) );
                        v59 = (HDEV)v158;
                        v69 = v156;
                      }
                      v169.rclBounds = (RECTL)rclBounds;
                    }
LABEL_32:
                    if ( (v16 & 4) != 0 )
                    {
                      PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)&v163);
                      if ( !v164
                        || !(unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v163)
                        || !*(_DWORD *)EPATHOBJ_bTextOutSimpleFill(&v151, &v163, v69, &v149, v59) )
                      {
                        v16 = 0;
                      }
                      PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)&v163);
                    }
                    goto LABEL_33;
                  }
                  v16 = 0;
                  if ( (v19 & 4) == 0 )
                    v16 = v52;
                  XEPATHOBJ::XEPATHOBJ((XEPATHOBJ *)&v163, a2);
                  if ( !v164 )
                  {
LABEL_113:
                    EPATHOBJ::vUnlock((EPATHOBJ *)&v163);
                    CAutoTGO::vUnguard((CAutoTGO *)v165);
LABEL_33:
                    if ( (v181 & 0x801) != 0 )
                    {
                      if ( (v181 & 1) != 0 )
                        FreeTmpBuffer(v176);
                      if ( (v181 & 0x800) != 0 )
                        Win32FreePool(v182);
                    }
                    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v149);
                    if ( v25 )
                      TXTCLEANUP::vMopUp((TXTCLEANUP *)&v160);
                    v15 = v161;
                    goto LABEL_41;
                  }
                  if ( ((v16 & 8) == 0 || (unsigned int)bAddRectToPath((struct EPATHOBJ *)&v163, &v167))
                    && ((v16 & 2) == 0 || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v163, v74, &v183, v75))
                    && ((v16 & 0x10) == 0
                     || EPATHOBJ::bAddPolygon((EPATHOBJ *)&v163, v74, (const struct _POINTL *)&v190, v75)) )
                  {
                    if ( (v16 & 1) == 0
                      || p_rclBkGround && !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&v163, p_rclBkGround) )
                    {
                      goto LABEL_257;
                    }
                    if ( (v181 & 0x1400) != 0 )
                      v124 = ESTROBJ::bLinkedTextToPath(&pstro, (struct EPATHOBJ *)&v163);
                    else
                      v124 = ESTROBJ::bTextToPathWorkhorse(&pstro, (struct EPATHOBJ *)&v163);
                    if ( v124 )
                    {
                      if ( v30 )
                      {
                        while ( !ERECTL::bEmpty((ERECTL *)v30) )
                        {
                          if ( !(unsigned int)bAddRectToPath((struct EPATHOBJ *)&v163, v30) )
                            goto LABEL_259;
                          ++v30;
                        }
                      }
LABEL_257:
                      if ( (v16 & 4) == 0
                        || (unsigned int)ESTROBJ::bExtraRectsToPath((ESTROBJ *)&pstro, (struct EPATHOBJ *)&v163) )
                      {
                        goto LABEL_113;
                      }
                    }
                  }
LABEL_259:
                  v16 = 0;
                  goto LABEL_113;
                }
                v46 = ESTROBJ::bOpaqueArea((ESTROBJ *)&pstro, &v190, &pstro.rclBkGround);
                v47 = v46;
                v48 = pstro.rclBkGround.right;
                v49 = pstro.rclBkGround.left;
                if ( (v149[3] & 0x10000000) != 0 )
                {
                  v49 = pstro.rclBkGround.left - 1;
                  v48 = pstro.rclBkGround.right + 1;
                  --pstro.rclBkGround.left;
                  ++pstro.rclBkGround.right;
                }
                if ( (v181 & 0x1400) != 0 )
                {
                  ESTROBJ::vEudcOpaqueArea((ESTROBJ *)&pstro, &v190, v46);
                  v48 = pstro.rclBkGround.right;
                  v49 = pstro.rclBkGround.left;
                }
                v29 = (int)v166[0];
                v27 = (int)v166[1];
                if ( LODWORD(v166[0]) == LODWORD(v166[1])
                  || (v28 = HIDWORD(v166[0]), v26 = HIDWORD(v166[1]), HIDWORD(v166[0]) == HIDWORD(v166[1])) )
                {
                  *(RECTL *)v166 = pstro.rclBkGround;
                  v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)pstro.rclBkGround, 12));
                  v28 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)pstro.rclBkGround, 4));
                  v27 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)pstro.rclBkGround, 8));
                  v29 = _mm_cvtsi128_si32((__m128i)pstro.rclBkGround);
                }
                else
                {
                  if ( v49 < SLODWORD(v166[0]) )
                    v29 = v49;
                  LODWORD(v166[0]) = v29;
                  if ( pstro.rclBkGround.top < SHIDWORD(v166[0]) )
                    v28 = (unsigned int)pstro.rclBkGround.top;
                  HIDWORD(v166[0]) = v28;
                  if ( v48 > SLODWORD(v166[1]) )
                    v27 = v48;
                  LODWORD(v166[1]) = v27;
                  if ( pstro.rclBkGround.bottom > SHIDWORD(v166[1]) )
                  {
                    v26 = pstro.rclBkGround.bottom;
                    HIDWORD(v166[1]) = pstro.rclBkGround.bottom;
                  }
                }
                if ( a10 == 2 )
                {
                  if ( !v47 )
                  {
                    p_rclBkGround = &pstro.rclBkGround;
                    goto LABEL_71;
                  }
                  v16 |= 0x10u;
                }
                p_rclBkGround = 0LL;
LABEL_71:
                if ( v49 >= v48 || (v50 = 0, pstro.rclBkGround.top >= pstro.rclBkGround.bottom) )
                  v50 = 1;
                if ( (v16 & 8) == 0
                  || v167.left > v49
                  || v167.right < v48
                  || v167.top > pstro.rclBkGround.top
                  || v167.bottom < pstro.rclBkGround.bottom
                  || v50 )
                {
                  if ( !p_rclBkGround )
                    goto LABEL_75;
                }
                else
                {
                  p_rclBkGround = &v167;
                  v16 &= ~8u;
                }
                v50 = IsRectEmptyInl((const struct tagRECT *)p_rclBkGround);
LABEL_75:
                if ( !v50 )
                  v16 |= 1u;
                if ( (v150 & 0xA0) != 0 )
                {
                  if ( v179 )
                  {
                    v30 = (struct _RECTL *)v180;
                    if ( !ERECTL::bEmpty((ERECTL *)v180) )
                    {
                      v111 = (ERECTL *)v180;
                      do
                      {
                        ERECTL::operator+=(v166, v111);
                        v111 = (ERECTL *)((char *)v111 + 16);
                      }
                      while ( !ERECTL::bEmpty(v111) );
                      v26 = HIDWORD(v166[1]);
                      v27 = (int)v166[1];
                      v28 = HIDWORD(v166[0]);
                      v29 = (int)v166[0];
                      LOBYTE(v19) = v191;
                    }
                  }
                  else
                  {
                    v16 |= 4u;
                  }
                }
                if ( (v19 & 4) == 0 )
                  goto LABEL_79;
                v76 = v167.left <= v29;
                if ( v167.left <= v29 )
                {
                  if ( v167.bottom >= v26 && v167.top <= (int)v28 && v167.right >= v27 )
                  {
                    LOBYTE(v19) = -5;
                    goto LABEL_79;
                  }
                  v76 = v167.left <= v29;
                }
                if ( !v76 )
                  v29 = v167.left;
                LODWORD(v166[0]) = v29;
                if ( v167.top > (int)v28 )
                  v28 = (unsigned int)v167.top;
                HIDWORD(v166[0]) = v28;
                if ( v167.right < v27 )
                  v27 = v167.right;
                LODWORD(v166[1]) = v27;
                if ( v167.bottom < v26 )
                  v26 = v167.bottom;
                HIDWORD(v166[1]) = v26;
                if ( v27 < v29 )
                {
                  v29 = v27;
                  LODWORD(v166[0]) = v27;
                }
                else if ( v26 < (int)v28 )
                {
                  v28 = (unsigned int)v26;
                  HIDWORD(v166[0]) = v26;
                }
                goto LABEL_79;
              }
              v147 = (struct _BRUSHOBJ *)__PAIR64__(v152.cEntries, v155);
              EXFORMOBJ::bXform((EXFORMOBJ *)&v152, (const struct _POINTL *)&v147, (struct _POINTFIX *)&v147, 1uLL);
            }
            v40 = *(_DWORD *)&v152.iSrcType + (_DWORD)v147;
            v41 = HIDWORD(v147);
            LODWORD(v147) = *(_DWORD *)&v152.iSrcType + (_DWORD)v147;
            goto LABEL_53;
          }
        }
        *(struct _RECTL *)v166 = v167;
        v26 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v167, 12));
        v28 = (unsigned int)_mm_cvtsi128_si32(_mm_srli_si128((__m128i)v167, 4));
        v27 = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)v167, 8));
        v29 = _mm_cvtsi128_si32((__m128i)v167);
      }
      else
      {
        v26 = HIDWORD(v166[1]);
        v28 = HIDWORD(v166[0]);
      }
      LOBYTE(v19) = v191;
      goto LABEL_15;
    }
  }
  v16 = 0;
LABEL_41:
  LOBYTE(v12) = v16 != 0;
  v37 = v12;
LABEL_42:
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(v15, v37);
  return v15;
}
