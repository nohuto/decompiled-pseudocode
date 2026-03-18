/*
 * XREFs of EngHTBlt @ 0x14006F20C
 * Callers:
 *     EngAlphaBlend @ 0x14006D290 (EngAlphaBlend.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1400FE4C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     ?EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x140133474 (-EngStretchBltNew@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 *     ?EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAH@Z @ 0x14022CD88 (-EngStretchBltOld@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_.c)
 * Callees:
 *     ?bIsSourceBGRA@@YAHPEAVSURFACE@@@Z @ 0x14006D238 (-bIsSourceBGRA@@YAHPEAVSURFACE@@@Z.c)
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     EngCopyBits @ 0x140070750 (EngCopyBits.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngBitBlt @ 0x1400815E0 (EngBitBlt.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z @ 0x1400FDB28 (-bCreateHTPalette@PALMEMOBJ@@QEAAHJPEAU_GDIINFO@@@Z.c)
 *     ?vRelease@HTSEMOBJ@@QEAAXXZ @ 0x1400FEE48 (-vRelease@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z @ 0x1400FEE80 (--$GreReleaseSemaphoreCommon@$09P6AXPEAUHSEMAPHORE__@@@Z@@YAXP6AXPEAUHSEMAPHORE__@@@Z0@Z.c)
 *     ?pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ @ 0x1400FEEE8 (-pDevHTInfo@PDEVOBJ@@QEAAPEAXXZ.c)
 *     ?bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z @ 0x1400FEFA4 (-bEnableHalftone@PDEVOBJ@@QEAAHPEAUtagCOLORADJUSTMENT@@@Z.c)
 *     HT_HalftoneBitmap @ 0x14013D908 (HT_HalftoneBitmap.c)
 *     ??1EPALOBJ@@QEAA@XZ @ 0x1401853D0 (--1EPALOBJ@@QEAA@XZ.c)
 *     ?vAcquire@HTSEMOBJ@@QEAAXXZ @ 0x1401ACA38 (-vAcquire@HTSEMOBJ@@QEAAXXZ.c)
 *     ??$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401ACA64 (--$GreAcquireSemaphore@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z @ 0x1401AF7CC (-bSetHTSrcSurfInfo@@YAHPEAU_SURFOBJ@@VXEPALOBJ@@PEAU_HTSURFACEINFO@@PEAU_XLATEOBJ@@@Z.c)
 *     ??$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1401BC94C (--$GreReleaseSemaphoreExclusive@$09$$V@@YAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ??1?$AutoResource@$1?FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ @ 0x1401C6BD8 (--1-$AutoResource@$1-FreeTmpBuffer@@YAXPEAX@Z@@QEAA@XZ.c)
 *     ?ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z @ 0x1401CCC2C (-ppalGetFromXlate@@YAPEAVPALETTE@@PEAVSURFACE@@0PEAVXLATE@@IH@Z.c)
 *     ?bEqualEntries@XEPALOBJ@@QEAAHV1@@Z @ 0x1401CDA8C (-bEqualEntries@XEPALOBJ@@QEAAHV1@@Z.c)
 *     ?bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z @ 0x1401D9280 (-bSetHTSurfInfo@@YAHPEAU_SURFOBJ@@PEAU_HTSURFACEINFO@@J@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall EngHTBlt(
        SURFOBJ *a1,
        SURFOBJ *a2,
        __int64 a3,
        CLIPOBJ *a4,
        struct XLATE *a5,
        struct tagCOLORADJUSTMENT *a6,
        __int64 *a7,
        RECTL *a8,
        LONG *a9,
        __int64 *a10,
        int a11,
        __int64 a12)
{
  struct SURFACE *v15; // r8
  struct SURFACE *v16; // r13
  Gre::Base *v17; // rcx
  unsigned int v18; // r15d
  __int64 v19; // rax
  unsigned int v20; // edi
  __int64 v21; // rax
  int v22; // r9d
  bool v23; // zf
  int v24; // esi
  struct Gre::Base::SESSION_GLOBALS *v25; // rax
  int v26; // r12d
  LONG v27; // r9d
  LONG cx; // edx
  unsigned __int64 v29; // rcx
  LONG cy; // r8d
  int v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  void *v34; // rax
  Gre::Base *v35; // rcx
  struct tagCOLORADJUSTMENT *v36; // r14
  struct Gre::Base::SESSION_GLOBALS *v37; // rax
  struct Gre::Base::SESSION_GLOBALS *v38; // rax
  struct SURFACE *v39; // rdx
  struct XLATE *v40; // r8
  struct PALETTE *v41; // rax
  __int64 v42; // rbx
  struct PALETTE *v43; // r14
  int v44; // r12d
  __int16 v45; // dx
  __int16 v46; // r8
  __int128 v47; // xmm0
  int v48; // eax
  struct SURFACE *v49; // rcx
  BYTE iDComplexity; // bl
  CLIPOBJ *v51; // rdx
  LONG *v52; // r13
  int v53; // r11d
  RECTL *p_rclBounds; // rdi
  LONG *v55; // rax
  LONG right; // ecx
  LONG v57; // r9d
  int left; // edx
  LONG v59; // ecx
  int v60; // r10d
  LONG bottom; // eax
  LONG v62; // edx
  int top; // ecx
  LONG v64; // eax
  int v65; // ecx
  int v66; // eax
  XLATEOBJ *v67; // rdi
  __int64 v68; // r12
  _QWORD *v69; // rax
  __int64 v70; // rdx
  Gre::Base *v71; // rcx
  __int64 v72; // rbx
  __int64 *v73; // r12
  __int64 v74; // rdi
  struct Gre::Base::SESSION_GLOBALS *v75; // rax
  SURFOBJ *v76; // r14
  Gre::Base *v77; // rcx
  struct Gre::Base::SESSION_GLOBALS *v78; // rax
  SURFOBJ *v79; // r14
  int v80; // ebx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // r8
  struct _SURFOBJ *v84; // rcx
  __int64 v85; // rax
  _OWORD *v86; // r12
  __int16 v87; // dx
  unsigned int v88; // eax
  Gre::Base *v89; // rcx
  CLIPOBJ *v90; // r14
  struct Gre::Base::SESSION_GLOBALS *v91; // rax
  struct SURFACE *v92; // rax
  SURFOBJ *v93; // rdx
  int v94; // eax
  struct Gre::Base::SESSION_GLOBALS *v95; // rax
  int v96; // ebx
  Gre::Base *v97; // rcx
  struct Gre::Base::SESSION_GLOBALS *v98; // rax
  struct Gre::Base::SESSION_GLOBALS *v100; // rax
  struct Gre::Base::SESSION_GLOBALS *v101; // rax
  int v102; // eax
  CLIPOBJ *v103; // rax
  int v104; // eax
  int v105; // r9d
  Gre::Base *v106; // rcx
  struct Gre::Base::SESSION_GLOBALS *v107; // rax
  Gre::Base *v108; // rcx
  struct Gre::Base::SESSION_GLOBALS *v109; // rax
  BOOL (__stdcall *v110)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rax
  LONG *v111; // rdx
  char v112; // cl
  ULONG iBitmapFormat; // ecx
  int v114; // eax
  int v115; // eax
  _DWORD *v116; // rax
  BOOL (__stdcall *v117)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  __int64 v118; // rdx
  __int64 v119; // r8
  unsigned int cEntries; // ecx
  _BYTE *v121; // r8
  __int64 v122; // r10
  __int64 v123; // r9
  char v124; // cl
  __int64 v125; // rax
  char *v126; // rdi
  int v127; // esi
  CLIPOBJ *v128; // r13
  int v129; // eax
  unsigned int v130; // r14d
  int v131; // r13d
  int v132; // [rsp+60h] [rbp-A0h]
  BYTE v133; // [rsp+64h] [rbp-9Ch]
  int v134; // [rsp+68h] [rbp-98h]
  __int64 v135; // [rsp+70h] [rbp-90h] BYREF
  RECTL *v136; // [rsp+78h] [rbp-88h] BYREF
  int v137; // [rsp+80h] [rbp-80h] BYREF
  LONG *p_left; // [rsp+88h] [rbp-78h]
  int v139; // [rsp+90h] [rbp-70h]
  CLIPOBJ *pco; // [rsp+98h] [rbp-68h]
  __int64 *v141; // [rsp+A0h] [rbp-60h] BYREF
  POINTL pptlSrc; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v143; // [rsp+B0h] [rbp-50h] BYREF
  struct SURFACE *v144; // [rsp+B8h] [rbp-48h]
  __int64 v145; // [rsp+C0h] [rbp-40h] BYREF
  int v146; // [rsp+C8h] [rbp-38h]
  LONG *v147; // [rsp+D0h] [rbp-30h] BYREF
  char v148; // [rsp+D8h] [rbp-28h]
  int v149; // [rsp+DCh] [rbp-24h]
  __int64 v150; // [rsp+E0h] [rbp-20h] BYREF
  char v151; // [rsp+E8h] [rbp-18h]
  int v152; // [rsp+ECh] [rbp-14h]
  struct tagCOLORADJUSTMENT *v153; // [rsp+F0h] [rbp-10h]
  struct XLATE *v154; // [rsp+F8h] [rbp-8h]
  __int64 v155; // [rsp+100h] [rbp+0h]
  struct SURFACE *v156; // [rsp+108h] [rbp+8h] BYREF
  int v157; // [rsp+110h] [rbp+10h]
  SURFOBJ *psoDest; // [rsp+118h] [rbp+18h]
  SURFOBJ *v159; // [rsp+120h] [rbp+20h]
  __int64 v160; // [rsp+128h] [rbp+28h] BYREF
  __int128 v161; // [rsp+130h] [rbp+30h] BYREF
  __int128 v162; // [rsp+140h] [rbp+40h] BYREF
  _BYTE *v163; // [rsp+150h] [rbp+50h]
  __int64 *v164; // [rsp+158h] [rbp+58h]
  __int64 *v165; // [rsp+160h] [rbp+60h]
  __int64 v166; // [rsp+168h] [rbp+68h]
  _DWORD v167[4]; // [rsp+170h] [rbp+70h] BYREF
  __int64 v168; // [rsp+180h] [rbp+80h]
  int v169; // [rsp+188h] [rbp+88h]
  int v170; // [rsp+18Ch] [rbp+8Ch]
  struct PALETTE *v171; // [rsp+190h] [rbp+90h]
  _DWORD v172[4]; // [rsp+198h] [rbp+98h] BYREF
  __int64 v173; // [rsp+1A8h] [rbp+A8h]
  int v174; // [rsp+1B0h] [rbp+B0h]
  int v175; // [rsp+1B4h] [rbp+B4h]
  _OWORD v176[2]; // [rsp+1B8h] [rbp+B8h] BYREF
  __int64 v177; // [rsp+1D8h] [rbp+D8h]
  _OWORD v178[2]; // [rsp+1E0h] [rbp+E0h] BYREF
  __int128 *v179; // [rsp+200h] [rbp+100h]
  _OWORD v180[2]; // [rsp+208h] [rbp+108h] BYREF
  __int64 v181; // [rsp+228h] [rbp+128h]
  __int16 v182; // [rsp+230h] [rbp+130h] BYREF
  char v183; // [rsp+233h] [rbp+133h]
  __int128 *v184; // [rsp+238h] [rbp+138h]
  __int128 v185; // [rsp+240h] [rbp+140h]
  RECTL v186; // [rsp+250h] [rbp+150h]
  RECTL rclBounds; // [rsp+260h] [rbp+160h]
  RECTL prclDest; // [rsp+270h] [rbp+170h] BYREF
  __int64 v189; // [rsp+280h] [rbp+180h]
  __int64 v190; // [rsp+288h] [rbp+188h]
  RECTL prclTrg; // [rsp+2A0h] [rbp+1A0h] BYREF
  RECTL v192; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v193[256]; // [rsp+2C0h] [rbp+1C0h] BYREF

  v154 = a5;
  v153 = a6;
  v141 = a7;
  v136 = a8;
  v164 = a10;
  pco = a4;
  *(_QWORD *)&prclTrg.left = a12;
  v160 = a3;
  v159 = a2;
  psoDest = a1;
  p_left = a9;
  pptlSrc = (POINTL)Gre::Base::Globals((Gre::Base *)a1);
  v15 = (struct SURFACE *)((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL));
  v144 = v15;
  v16 = (struct SURFACE *)((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL));
  v17 = (Gre::Base *)-a3;
  memset(v178, 0, sizeof(v178));
  v18 = 0;
  v19 = (a3 - 24) & -(__int64)(a3 != 0);
  v20 = 0;
  v155 = v19;
  v179 = 0LL;
  v177 = 0LL;
  v181 = 0LL;
  v163 = 0LL;
  memset(v176, 0, sizeof(v176));
  memset(v180, 0, sizeof(v180));
  v162 = 0LL;
  if ( !v15 )
    return 0xFFFFFFFFLL;
  v21 = *(_QWORD *)(((unsigned __int64)&a1[-1].pvScan0 & -(__int64)(a1 != 0LL)) + 0x30);
  v135 = v21;
  if ( !v21 )
    return 0LL;
  v22 = 1;
  v23 = (*(_DWORD *)(v21 + 40) & 1) == 0;
  v24 = *(_DWORD *)(v21 + 40) & 1;
  v157 = v24;
  v137 = v24;
  if ( !v23 )
  {
    v25 = Gre::Base::Globals(v17);
    GreAcquireSemaphore<10,>(v25);
    v21 = v135;
    v22 = 1;
    v15 = v144;
  }
  if ( a1->iType )
  {
    v26 = *(_DWORD *)(v21 + 2360);
    if ( v26 )
    {
      switch ( v26 )
      {
        case 2:
          v132 = 2;
          v134 = 2;
          break;
        case 3:
          v134 = 255;
          v132 = 2;
          break;
        case 4:
          v134 = 254;
          v132 = 3;
          break;
        case 5:
          v134 = 253;
          v132 = 4;
          break;
        case 6:
          v134 = 5;
          v132 = 5;
          break;
        case 7:
          v134 = 6;
          v132 = 6;
          break;
        default:
          if ( v24 )
          {
            v100 = Gre::Base::Globals((Gre::Base *)0xFF);
            GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
              GreReleaseSemaphoreExclusiveInternal,
              *(_QWORD *)v100 + 1352LL);
          }
          return 0LL;
      }
      goto LABEL_16;
    }
    goto LABEL_14;
  }
  switch ( *((_DWORD *)v15 + 24) )
  {
    case 1:
      v26 = 0;
      v20 = ((a1->sizlBitmap.cx + 31) >> 3) & 0xFFFFFFFC;
LABEL_14:
      v132 = 1;
LABEL_15:
      v134 = v22;
      break;
    case 2:
      v132 = 2;
      v22 = 2;
      v20 = ((a1->sizlBitmap.cx + 7) >> 1) & 0xFFFFFFFC;
      if ( *(_DWORD *)(v21 + 2360) != 2 )
        v22 = 255;
      v26 = (*(_DWORD *)(v21 + 2360) != 2) + 2;
      goto LABEL_15;
    case 3:
      v26 = 4;
      v134 = 254;
      v20 = (a1->sizlBitmap.cx + 3) & 0xFFFFFFFC;
      v132 = 3;
      break;
    case 4:
      v26 = 5;
      v134 = 253;
      v132 = 4;
      v20 = (2 * a1->sizlBitmap.cx + 2) & 0xFFFFFFFC;
      break;
    case 5:
      v26 = 6;
      v134 = 5;
      v132 = 5;
      v20 = (3 * (a1->sizlBitmap.cx + 1)) & 0xFFFFFFFC;
      break;
    case 6:
      v26 = 7;
      v20 = 4 * a1->sizlBitmap.cx;
      v134 = 6;
      v132 = 6;
      break;
    default:
      HTSEMOBJ::vRelease((HTSEMOBJ *)&v137);
      return 0LL;
  }
LABEL_16:
  v27 = 0;
  cx = a2->sizlBitmap.cx;
  v29 = 0LL;
  cy = a2->sizlBitmap.cy;
  if ( *p_left > 0 )
    v27 = *p_left;
  v31 = p_left[1];
  v192.left = v27;
  if ( v31 > 0 )
    v29 = (unsigned int)v31;
  v32 = p_left[2];
  v192.top = v29;
  if ( v32 < cx )
    cx = v32;
  v33 = p_left[3];
  v192.right = cx;
  if ( v33 < cy )
    cy = v33;
  v192.bottom = cy;
  if ( cx < v27 )
  {
    v192.left = cx;
  }
  else
  {
    if ( cy < (int)v29 )
      v29 = (unsigned int)cy;
    v192.top = v29;
    if ( (_DWORD)v29 != cy && v27 != cx )
    {
      v34 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135);
      v36 = v153;
      if ( !v34 && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v135, v153) )
        goto LABEL_186;
      v150 = 0LL;
      v151 = 0;
      v152 = 0;
      if ( v24 )
      {
        v37 = Gre::Base::Globals(v35);
        GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
          GreReleaseSemaphoreExclusiveInternal,
          *(_QWORD *)v37 + 1352LL);
      }
      if ( !v16 )
        goto LABEL_196;
      if ( (*(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x1000) != 0 )
      {
        v156 = *(struct SURFACE **)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x30);
        PDEVOBJ::vSync((PDEVOBJ *)&v156, a2, 0LL, 0);
      }
      if ( a2->iType || a2->iBitmapFormat - 7 <= 1 )
      {
        iBitmapFormat = a2->iBitmapFormat;
        v167[1] = a2->sizlBitmap.cx;
        v167[2] = a2->sizlBitmap.cy;
        v114 = *(_DWORD *)(((unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL)) + 0x70) & 0x40000;
        v167[3] = 0;
        v169 = v114;
        v170 = 0;
        v168 = 0LL;
        if ( iBitmapFormat == 7 )
        {
          v167[0] = 2;
        }
        else if ( iBitmapFormat == 8 )
        {
          v167[0] = 3;
        }
        else
        {
          v167[0] = iBitmapFormat;
        }
        if ( !SURFMEM::bCreateDIB((SURFMEM *)&v150, (struct _DEVBITMAPINFO *)v167, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
          || !EngCopyBits(
                (SURFOBJ *)(-(__int64)(v150 != 0) & (v150 + 24)),
                a2,
                0LL,
                (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 4552LL),
                &v192,
                (POINTL *)&v192) )
        {
          HTSEMOBJ::vAcquire((HTSEMOBJ *)&v137);
          SURFMEM::~SURFMEM((SURFMEM *)&v150);
LABEL_186:
          HTSEMOBJ::vRelease((HTSEMOBJ *)&v137);
          return 0xFFFFFFFFLL;
        }
        v166 = v150;
      }
      else
      {
        v166 = (unsigned __int64)&a2[-1].pvScan0 & -(__int64)(a2 != 0LL);
      }
      if ( v24 )
      {
        v38 = Gre::Base::Globals(v35);
        GreAcquireSemaphore<10,>(v38);
      }
      if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v135, v36) )
        goto LABEL_196;
      v171 = ppalGetFromXlate(v16, v144, v154, 1u, 1);
      if ( !v171 )
      {
LABEL_197:
        SURFMEM::~SURFMEM((SURFMEM *)&v150);
        HTSEMOBJ::vRelease((HTSEMOBJ *)&v137);
        return v18;
      }
      v41 = ppalGetFromXlate(v16, v39, v40, 2u, 1);
      v42 = v135;
      v43 = v41;
      v146 = 0;
      v145 = 0LL;
      v165 = 0LL;
      if ( v26 == *(_DWORD *)(v135 + 2360) )
      {
        v44 = *(_DWORD *)(v135 + 40) & 0x200;
      }
      else
      {
        if ( !(unsigned int)PALMEMOBJ::bCreateHTPalette((PALMEMOBJ *)&v145, v26, (struct _GDIINFO *)(v135 + 2120)) )
        {
LABEL_201:
          PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v145);
LABEL_196:
          v18 = -1;
          goto LABEL_197;
        }
        v165 = &v145;
        v102 = XEPALOBJ::bEqualEntries(&v145, v43);
        v42 = v135;
        v44 = v102;
      }
      LODWORD(v143) = v44;
      memset_0(&v182, 0, 0x68uLL);
      v45 = a11;
      v161 = 0LL;
      if ( a11 == 512 )
      {
        v104 = **(_DWORD **)&prclTrg.left;
        if ( (unsigned __int8)**(_DWORD **)&prclTrg.left )
        {
          v45 = 0;
          a11 = 0;
        }
        else
        {
          v105 = 255;
          BYTE1(v161) = BYTE2(**(_DWORD **)&prclTrg.left);
          if ( HIBYTE(v104) == 1 && BYTE2(v104) == 0xFF )
          {
            if ( !(unsigned int)bIsSourceBGRA(v16) )
            {
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v145);
              SURFMEM::~SURFMEM((SURFMEM *)&v150);
              if ( v24 )
              {
                v107 = Gre::Base::Globals(v106);
                GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
                  GreReleaseSemaphoreExclusiveInternal,
                  *(_QWORD *)v107 + 1352LL);
              }
              return 0xFFFFFFFFLL;
            }
            v45 = 512;
            v112 = 4;
          }
          else
          {
            v112 = 1;
          }
          LOBYTE(v161) = v112;
          if ( v43 )
          {
            *((_QWORD *)&v161 + 1) = *((_QWORD *)v43 + 14);
            WORD1(v161) = *((_WORD *)v43 + 14);
            v115 = *((_DWORD *)v43 + 6);
            if ( (v115 & 8) != 0
              || (v115 & 2) != 0
              && (v116 = (_DWORD *)*((_QWORD *)v43 + 14), *v116 == 16711680)
              && v116[1] == 65280
              && v116[2] == v105 )
            {
              LOBYTE(v161) = v112 | 2;
            }
          }
          v184 = &v161;
        }
      }
      v46 = v45;
      v182 = v45;
      v47 = *(_OWORD *)p_left;
      v186 = *v136;
      v189 = *v141;
      v185 = v47;
      v183 = *(_BYTE *)(v42 + 2352);
      if ( v154 )
      {
        v48 = *((_DWORD *)v154 + 18);
        if ( (v48 & 4) != 0 || (v48 & 0x20) == 0 && (v48 & 3) != 0 )
        {
          v46 = v45 | 0x80;
          v182 = v45 | 0x80;
        }
      }
      v49 = v144;
      iDComplexity = 0;
      v51 = pco;
      v52 = (LONG *)v144;
      v156 = v144;
      v147 = 0LL;
      v148 = 0;
      v149 = 0;
      v139 = 0;
      if ( pco )
        iDComplexity = pco->iDComplexity;
      v53 = v132;
      v133 = iDComplexity;
      if ( !psoDest->iType && psoDest->lDelta == v20 && (v132 == 3 || v44) && iDComplexity != 3 )
      {
        if ( psoDest != v159 )
          goto LABEL_74;
        p_rclBounds = v136;
        if ( !(unsigned int)bIntersect(p_left, v136) )
          goto LABEL_74;
        v46 = v182;
        v49 = (struct SURFACE *)v52;
        v53 = v132;
        v51 = pco;
      }
      else
      {
        p_rclBounds = v136;
      }
      v139 = 1;
      if ( iDComplexity )
      {
        v133 = 0;
        v103 = 0LL;
        p_rclBounds = &v51->rclBounds;
        if ( iDComplexity != 1 )
          v103 = v51;
        pco = v103;
      }
      v55 = (LONG *)*((_QWORD *)v49 + 7);
      right = p_rclBounds->right;
      v57 = right;
      left = p_rclBounds->left;
      p_left = v55;
      if ( right <= left )
      {
        v57 = left;
        left = right;
      }
      v59 = 0;
      if ( left >= 0 )
        v59 = left;
      if ( v57 > (int)v55 )
        v57 = (int)v55;
      v60 = v57 - v59;
      if ( v57 - v59 > 0 )
      {
        bottom = p_rclBounds->bottom;
        v62 = bottom;
        prclDest.left = v59;
        top = p_rclBounds->top;
        prclDest.right = v57;
        if ( bottom <= top )
        {
          v62 = top;
          top = bottom;
        }
        v64 = 0;
        if ( top >= 0 )
          v64 = top;
        if ( v62 > SHIDWORD(p_left) )
          v62 = HIDWORD(p_left);
        v65 = v62 - v64;
        if ( v62 - v64 > 0 )
        {
          prclDest.top = v64;
          v66 = v52[28] & 0x40000;
          prclDest.bottom = v62;
          v182 = v46 | 0x10;
          v172[2] = v65;
          v172[3] = 0;
          v175 = 0;
          v172[1] = v60;
          v173 = 0LL;
          v174 = v66;
          v172[0] = v53;
          if ( !SURFMEM::bCreateDIB((SURFMEM *)&v147, (struct _DEVBITMAPINFO *)v172, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
          {
LABEL_200:
            SURFMEM::~SURFMEM((SURFMEM *)&v147);
            goto LABEL_201;
          }
          v52 = v147;
          v156 = (struct SURFACE *)v147;
LABEL_74:
          v136 = 0LL;
          v67 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 4552LL);
          p_left = (LONG *)(*(_QWORD *)&pptlSrc + 4552LL);
          v68 = *(_QWORD *)&pptlSrc + 4552LL;
          *(_QWORD *)&prclTrg.left = *(_QWORD *)&pptlSrc + 4552LL;
          v141 = 0LL;
          v69 = PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135);
          if ( !(_DWORD)v143 )
          {
            LOBYTE(v70) = 8;
            v72 = HmgShareLockCheck(*v69, v70);
            v143 = v72;
            v73 = &v143;
            if ( v165 )
              v73 = v165;
            if ( !v154 || (v74 = *((_QWORD *)v154 + 7)) == 0 )
              v74 = *(_QWORD *)(*(_QWORD *)&pptlSrc + 3768LL);
            if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(&v136, 0LL, 0LL, *v73, v43, v74, v74, 0, 0xFFFFFF, 0xFFFFFF, 0) )
            {
              if ( v72 )
                DEC_SHARE_REF_CNT(v72);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v141);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v136);
              SURFMEM::~SURFMEM((SURFMEM *)&v147);
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v145);
              SURFMEM::~SURFMEM((SURFMEM *)&v150);
              if ( v24 )
              {
                v109 = Gre::Base::Globals(v108);
                GreReleaseSemaphoreExclusive<10,>(v109);
              }
              return 0xFFFFFFFFLL;
            }
            p_left = &v136->left;
            if ( (v155 || a11 == 512) && v139 )
            {
              if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                                    &v141,
                                    0LL,
                                    0LL,
                                    v43,
                                    *v73,
                                    v74,
                                    v74,
                                    0,
                                    0xFFFFFF,
                                    0xFFFFFF,
                                    0) )
              {
                EPALOBJ::~EPALOBJ((EPALOBJ *)&v143);
LABEL_199:
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v141);
                EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v136);
                goto LABEL_200;
              }
              v68 = (__int64)v141;
            }
            else
            {
              v68 = *(_QWORD *)&prclTrg.left;
            }
            if ( v72 )
              DEC_SHARE_REF_CNT(v72);
            v67 = (XLATEOBJ *)p_left;
          }
          if ( v24 )
          {
            v75 = Gre::Base::Globals(v71);
            GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
              GreReleaseSemaphoreExclusiveInternal,
              *(_QWORD *)v75 + 1352LL);
          }
          v76 = psoDest;
          PDEVOBJ::vSync((PDEVOBJ *)&v135, psoDest, 0LL, 0);
          if ( v155 || a11 == 512 )
          {
            if ( v139 )
            {
              prclTrg.right = v52[14];
              prclTrg.bottom = v52[15];
              ++v52[23];
              *(_QWORD *)&prclTrg.left = 0LL;
              v117 = (*((_DWORD *)v144 + 28) & 0x400) != 0
                   ? *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v135 + 2832)
                   : EngCopyBits;
              if ( !((unsigned int (__fastcall *)(unsigned __int64, SURFOBJ *, _QWORD, __int64, RECTL *, RECTL *))v117)(
                      (unsigned __int64)(v52 + 6) & -(__int64)(v52 != 0LL),
                      v76,
                      0LL,
                      v68,
                      &prclTrg,
                      &prclDest)
                && !EngBitBlt(
                      (SURFOBJ *)((unsigned __int64)(v52 + 6) & -(__int64)(v52 != 0LL)),
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      &prclTrg,
                      0LL,
                      0LL,
                      0LL,
                      0LL,
                      0xFFFFu) )
              {
                HTSEMOBJ::vAcquire((HTSEMOBJ *)&v137);
                goto LABEL_199;
              }
            }
          }
          if ( v24 )
          {
            v78 = Gre::Base::Globals(v77);
            GreAcquireSemaphore<10,>(v78);
          }
          if ( !PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135) && !(unsigned int)PDEVOBJ::bEnableHalftone((PDEVOBJ *)&v135, v153) )
            goto LABEL_199;
          v79 = (SURFOBJ *)PDEVOBJ::pDevHTInfo((PDEVOBJ *)&v135);
          v159 = v79;
          v80 = 0;
          v177 = 0LL;
          v81 = v166 + 24;
          if ( !v166 )
            v81 = 0LL;
          if ( !(unsigned int)bSetHTSrcSurfInfo(v81, v171, v176, v154) )
            goto LABEL_118;
          v84 = (struct _SURFOBJ *)(v52 + 6);
          if ( !v52 )
            v84 = 0LL;
          if ( !(unsigned int)bSetHTSurfInfo(v84, (struct _HTSURFACEINFO *)v178, v134) )
            goto LABEL_118;
          v85 = v155;
          if ( v155 )
          {
            if ( !(unsigned int)bSetHTSurfInfo(
                                  (struct _SURFOBJ *)(v155 + 24),
                                  (struct _HTSURFACEINFO *)v180,
                                  *(_DWORD *)(v160 + 72)) )
            {
LABEL_118:
              if ( v177 )
                FreeThreadBufferWithTag(v177, v82, v83);
              v96 = v80 != 0 ? 2 : 0;
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v141);
              EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v136);
              SURFMEM::~SURFMEM((SURFMEM *)&v147);
              PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v145);
              SURFMEM::~SURFMEM((SURFMEM *)&v150);
              if ( v24 )
              {
                v98 = Gre::Base::Globals(v97);
                GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
                  GreReleaseSemaphoreExclusiveInternal,
                  *(_QWORD *)v98 + 1352LL);
              }
              return (unsigned int)(v96 - 1);
            }
            v85 = v155;
          }
          LODWORD(v86) = 0;
          if ( v85 )
          {
            if ( (unsigned int)bUMPDSecurityGateEx() && !v164 )
            {
              if ( v177 )
                FreeThreadBufferWithTag(v177, v118, v119);
              goto LABEL_199;
            }
            v86 = v180;
            v190 = *v164;
          }
          v87 = v182;
          v88 = 256;
          if ( (*(_DWORD *)(v135 + 2364) & 0x100) == 0 )
          {
            v87 = v182 | 2;
            v182 |= 2u;
          }
          v80 = 1;
          if ( v132 == 3 )
          {
            *(_QWORD *)&v162 = 0xFF00010100LL;
            v179 = &v162;
            v163 = v193;
            DWORD2(v162) = 256;
            cEntries = v67->cEntries;
            if ( cEntries > 0x100 || (v88 = v67->cEntries, cEntries) )
            {
              v121 = v193;
              v122 = v88;
              v123 = 0LL;
              do
              {
                v124 = v67->pulXlate[v123++];
                *v121++ = v124;
                --v122;
              }
              while ( v122 );
            }
            v67 = (XLATEOBJ *)(*(_QWORD *)&pptlSrc + 4552LL);
            p_left = (LONG *)(*(_QWORD *)&pptlSrc + 4552LL);
          }
          if ( v133 )
          {
            v182 = v87 | 1;
            if ( v133 != 1 )
            {
              v90 = pco;
              XCLIPOBJ::cEnumStart((XCLIPOBJ *)pco, 0, 0, 4u, 0x14u);
              v125 = AllocFreeTmpBuffer(324LL);
              v126 = (char *)v125;
              if ( !v125 )
              {
                v67 = (XLATEOBJ *)p_left;
                v80 = 0;
                goto LABEL_107;
              }
              v127 = (int)v159;
              v128 = v90;
              v160 = v125;
              do
              {
                v129 = XCLIPOBJ::bEnum((XCLIPOBJ *)v128, 0x144u, v126, 0LL);
                v130 = 0;
                LODWORD(v143) = v129;
                if ( *(_DWORD *)v126 )
                {
                  v131 = (int)v153;
                  do
                  {
                    rclBounds = *(RECTL *)&v126[16 * v130++ + 4];
                    v80 = ((int)HT_HalftoneBitmap(
                                  v127,
                                  v131,
                                  (unsigned int)v176,
                                  (_DWORD)v86,
                                  (__int64)v178,
                                  (__int64)&v182) >= 0) & (unsigned __int8)v80;
                  }
                  while ( v130 < *(_DWORD *)v126 );
                  v129 = v143;
                  v128 = pco;
                }
              }
              while ( v129 && v80 );
              AutoResource<&void FreeTmpBuffer(void *)>::~AutoResource<&void FreeTmpBuffer(void *)>(&v160);
              v24 = v157;
              v52 = (LONG *)v156;
              v67 = (XLATEOBJ *)p_left;
LABEL_106:
              v90 = pco;
LABEL_107:
              if ( v24 )
              {
                v91 = Gre::Base::Globals(v89);
                GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
                  GreReleaseSemaphoreExclusiveInternal,
                  *(_QWORD *)v91 + 1352LL);
              }
              if ( v139 && v80 )
              {
                v92 = v144;
                pptlSrc = 0LL;
                ++*((_DWORD *)v144 + 23);
                if ( psoDest->iType )
                {
                  if ( (*((_DWORD *)v92 + 28) & 0x400) != 0 )
                    v110 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v135 + 2832);
                  else
                    v110 = EngCopyBits;
                  v111 = v52 + 6;
                  if ( !v52 )
                    v111 = 0LL;
                  v94 = ((__int64 (__fastcall *)(SURFOBJ *, LONG *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))v110)(
                          psoDest,
                          v111,
                          v90,
                          v67,
                          &prclDest,
                          &pptlSrc);
                }
                else
                {
                  v93 = (SURFOBJ *)(v52 + 6);
                  if ( !v52 )
                    v93 = 0LL;
                  v94 = EngCopyBits(psoDest, v93, v90, v67, &prclDest, &pptlSrc);
                }
                v80 = v94;
              }
              if ( v24 )
              {
                v95 = Gre::Base::Globals(v89);
                GreAcquireSemaphore<10,>(v95);
              }
              goto LABEL_118;
            }
            rclBounds = pco->rclBounds;
          }
          v80 = (int)HT_HalftoneBitmap(
                       (_DWORD)v79,
                       (_DWORD)v153,
                       (unsigned int)v176,
                       (_DWORD)v86,
                       (__int64)v178,
                       (__int64)&v182) >= 0;
          goto LABEL_106;
        }
      }
      SURFMEM::~SURFMEM((SURFMEM *)&v147);
      PALMEMOBJ::~PALMEMOBJ((PALMEMOBJ *)&v145);
      SURFMEM::~SURFMEM((SURFMEM *)&v150);
    }
  }
  if ( v24 )
  {
    v101 = Gre::Base::Globals((Gre::Base *)v29);
    GreReleaseSemaphoreCommon<10,void (*)(HSEMAPHORE__ *)>(
      GreReleaseSemaphoreExclusiveInternal,
      *(_QWORD *)v101 + 1352LL);
  }
  return 1LL;
}
