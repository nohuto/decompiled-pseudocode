/*
 * XREFs of EngPlgBlt @ 0x1400E89F0
 * Callers:
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     EngPlgBlt @ 0x1400E89F0 (EngPlgBlt.c)
 *     ?GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z @ 0x1401B4D84 (-GrepTransparentBlt@@YAHAEAVXDCOBJ@@HHHH0HHHHK@Z.c)
 *     ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1401E79D0 (-SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@.c)
 *     ?RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1402FEDB0 (-RedirPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINT.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z @ 0x140306BB8 (-bRotate@BLTRECORD@@QEAAHAEAVPROXYDCOBJ@1@AEAVSURFMEM@@1KK@Z.c)
 *     ?bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z @ 0x140306E18 (-bRotate@BLTRECORD@@QEAAHAEAVSURFMEM@@K@Z.c)
 *     NtGdiEngPlgBlt @ 0x14033BF20 (NtGdiEngPlgBlt.c)
 * Callees:
 *     ??0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z @ 0x140013B1C (--0ECLIPOBJ@@QEAA@PEAVREGION@@AEAVERECTL@@H@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x14007A070 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x140082160 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1400DEA60 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?vOrder@ERECTL@@QEAAXXZ @ 0x1400E810C (-vOrder@ERECTL@@QEAAXXZ.c)
 *     EngPlgBlt @ 0x1400E89F0 (EngPlgBlt.c)
 *     ?vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z @ 0x1400EA230 (-vAdvYDDA@rotate@@YAXPEAU_PLGDDA@1@@Z.c)
 *     ?lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z @ 0x1400EA3E0 (-lSizeDDA@rotate@@YAJPEAU_PLGDDA@1@@Z.c)
 *     ?bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z @ 0x1400EA4A0 (-bInitPlgDDA@rotate@@YAHPEAU_PLGDDA@1@PEAU_RECTL@@1PEAU_POINTFIX@@@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     PALLOCMEM @ 0x140108044 (PALLOCMEM.c)
 *     ?bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z @ 0x140152CAC (-bOffsetAdd@ERECTL@@QEAAHAEBU_POINTL@@H@Z.c)
 *     EngEraseSurface @ 0x1401E2EE0 (EngEraseSurface.c)
 *     ??0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z @ 0x1401F323C (--0RGNMEMOBJTMP@@QEAA@AEAVEPATHOBJ@@KPEAU_RECTL@@@Z.c)
 *     ?vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x14031FD10 (-vPlgWriteAND@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     ?vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z @ 0x1403200B0 (-vPlgWriteOR@rotate@@YAXPEAU_PLGRUN@1@0PEAVSURFACE@@PEAU_CLIPOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngPlgBlt(
        SURFOBJ *psoTrg,
        SURFOBJ *psoSrc,
        SURFOBJ *psoMsk,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        RECTL *prcl,
        POINTL *pptl,
        ULONG iMode)
{
  RECTL *v11; // r14
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r15
  BOOL v14; // ebx
  PVOID *p_pvScan0; // r9
  BOOL v16; // edi
  int v17; // ecx
  int v18; // eax
  unsigned int v19; // r8d
  __int64 v20; // r9
  char v21; // r13
  Gre::Base *v22; // rcx
  LONG v23; // eax
  unsigned __int64 v24; // r12
  struct SURFACE *v25; // r13
  int v26; // eax
  rotate *v27; // rax
  rotate *v28; // r14
  struct rotate::_PLGDDA *v29; // rdx
  unsigned int v30; // eax
  unsigned __int64 v31; // r8
  void (*v32)(rotate *__hidden, struct rotate::_PLGRUN *, struct rotate::_PLGRUN *, struct SURFACE *, struct _CLIPOBJ *); // rax
  LONG top; // edx
  struct _CLIPOBJ *v34; // r8
  POINTL *v35; // rcx
  __int64 v36; // rax
  struct rotate::_PLGDDA *v37; // rdx
  int v38; // r12d
  __int64 v39; // r15
  FIX v40; // edx
  FIX v41; // eax
  struct _RECTL *v42; // r9
  struct SURFACE *v43; // r13
  int v45; // r9d
  __int64 v46; // rdx
  LONG v47; // r13d
  LONG v48; // r11d
  LONG v49; // r12d
  LONG v50; // r14d
  LONG v51; // r10d
  LONG v52; // r9d
  LONG v53; // edx
  LONG v54; // r8d
  int v55; // eax
  BOOL (__stdcall *v56)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // r10
  unsigned __int64 v57; // rdx
  ULONG v58; // r8d
  LONG v59; // ecx
  LONG v60; // eax
  int v61; // r9d
  int v62; // r10d
  int v63; // r8d
  int v64; // edx
  int (*v65)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // r11
  __int64 v66; // r8
  unsigned __int64 v67; // rcx
  BOOL (__stdcall *v68)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // r10
  __int64 v69; // r8
  unsigned __int64 v70; // rcx
  RECTL *v71; // [rsp+20h] [rbp-508h]
  COLORADJUSTMENT *v72; // [rsp+28h] [rbp-500h]
  char v73; // [rsp+60h] [rbp-4C8h]
  char v74; // [rsp+61h] [rbp-4C7h]
  ULONG v75; // [rsp+64h] [rbp-4C4h]
  LONG v76; // [rsp+64h] [rbp-4C4h]
  struct REGION *v77; // [rsp+68h] [rbp-4C0h] BYREF
  __int64 v78; // [rsp+70h] [rbp-4B8h] BYREF
  int v79; // [rsp+78h] [rbp-4B0h]
  struct _CLIPOBJ *v80; // [rsp+80h] [rbp-4A8h]
  BOOL (__stdcall *v81)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // [rsp+88h] [rbp-4A0h]
  struct REGION *v82; // [rsp+90h] [rbp-498h] BYREF
  POINTFIX *v83; // [rsp+98h] [rbp-490h] BYREF
  POINTL *v84; // [rsp+A0h] [rbp-488h]
  __int64 v85; // [rsp+A8h] [rbp-480h] BYREF
  LONG v86; // [rsp+B0h] [rbp-478h]
  LONG v87; // [rsp+B4h] [rbp-474h]
  POINTFIX v88; // [rsp+B8h] [rbp-470h] BYREF
  struct REGION *v89; // [rsp+C0h] [rbp-468h] BYREF
  struct Gre::Base::SESSION_GLOBALS *v90; // [rsp+C8h] [rbp-460h]
  PVOID *v91; // [rsp+D0h] [rbp-458h]
  POINTFIX *v92; // [rsp+D8h] [rbp-450h]
  rotate *v93; // [rsp+E0h] [rbp-448h]
  unsigned __int64 v94; // [rsp+E8h] [rbp-440h] BYREF
  char v95; // [rsp+F0h] [rbp-438h]
  int v96; // [rsp+F4h] [rbp-434h]
  unsigned __int64 v97; // [rsp+F8h] [rbp-430h] BYREF
  char v98; // [rsp+100h] [rbp-428h]
  int v99; // [rsp+104h] [rbp-424h]
  __int64 v100; // [rsp+108h] [rbp-420h]
  RECTL *v101; // [rsp+110h] [rbp-418h]
  struct SURFACE *v102; // [rsp+118h] [rbp-410h]
  __int64 v103; // [rsp+120h] [rbp-408h] BYREF
  struct _CLIPOBJ *v104; // [rsp+128h] [rbp-400h]
  struct _SURFOBJ *v105; // [rsp+130h] [rbp-3F8h]
  struct _SURFOBJ *v106; // [rsp+138h] [rbp-3F0h]
  struct rotate::_PLGRUN *(*const near *v107)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+140h] [rbp-3E8h]
  unsigned __int64 v108; // [rsp+148h] [rbp-3E0h] BYREF
  char v109; // [rsp+150h] [rbp-3D8h]
  int v110; // [rsp+154h] [rbp-3D4h]
  struct _CLIPOBJ *v111; // [rsp+160h] [rbp-3C8h]
  unsigned __int64 v112; // [rsp+168h] [rbp-3C0h]
  __int64 v113; // [rsp+170h] [rbp-3B8h] BYREF
  int v114; // [rsp+178h] [rbp-3B0h] BYREF
  LONG right; // [rsp+17Ch] [rbp-3ACh]
  LONG bottom; // [rsp+180h] [rbp-3A8h]
  int v117; // [rsp+184h] [rbp-3A4h]
  __int64 v118; // [rsp+188h] [rbp-3A0h]
  int v119; // [rsp+190h] [rbp-398h]
  int v120; // [rsp+194h] [rbp-394h]
  int *p_x; // [rsp+198h] [rbp-390h] BYREF
  __int64 v122; // [rsp+1A0h] [rbp-388h]
  __int64 v123; // [rsp+1A8h] [rbp-380h]
  __int16 v124; // [rsp+1B0h] [rbp-378h]
  _DWORD v125[4]; // [rsp+1B8h] [rbp-370h] BYREF
  __int64 v126; // [rsp+1C8h] [rbp-360h]
  int v127; // [rsp+1D0h] [rbp-358h]
  int v128; // [rsp+1D4h] [rbp-354h]
  _QWORD v129[3]; // [rsp+1D8h] [rbp-350h] BYREF
  char v130[8]; // [rsp+1F0h] [rbp-338h] BYREF
  __int64 v131; // [rsp+1F8h] [rbp-330h]
  RECTL v132; // [rsp+270h] [rbp-2B8h] BYREF
  RECTL v133; // [rsp+280h] [rbp-2A8h] BYREF
  struct _RECTL v134; // [rsp+290h] [rbp-298h] BYREF
  __int128 v135; // [rsp+2A0h] [rbp-288h] BYREF
  struct _RECTL v136; // [rsp+2B0h] [rbp-278h] BYREF
  _BYTE v137[160]; // [rsp+2C0h] [rbp-268h] BYREF
  _BYTE v138[4]; // [rsp+360h] [rbp-1C8h] BYREF
  char v139[156]; // [rsp+364h] [rbp-1C4h] BYREF
  CLIPOBJ pcoa; // [rsp+400h] [rbp-128h] BYREF
  POINTFIX v141; // [rsp+4A0h] [rbp-88h] BYREF
  struct rotate::_PLGRUN *(*const near *v142)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int); // [rsp+4A8h] [rbp-80h]
  POINTFIX v143; // [rsp+4B0h] [rbp-78h]
  int v144; // [rsp+4B8h] [rbp-70h]
  int v145; // [rsp+4BCh] [rbp-6Ch]
  FIX x; // [rsp+4C0h] [rbp-68h] BYREF
  int y; // [rsp+4C4h] [rbp-64h]
  int v148; // [rsp+4C8h] [rbp-60h] BYREF
  FIX v149; // [rsp+4CCh] [rbp-5Ch]
  __int64 v150; // [rsp+4D0h] [rbp-58h]
  int v151; // [rsp+4D8h] [rbp-50h]
  FIX v152; // [rsp+4DCh] [rbp-4Ch]

  v102 = (struct SURFACE *)pco;
  v105 = psoSrc;
  v106 = psoTrg;
  *(_QWORD *)&v136.left = pco;
  v80 = (struct _CLIPOBJ *)pxlo;
  v92 = pptfx;
  v11 = prcl;
  v77 = (struct REGION *)prcl;
  v84 = pptl;
  v75 = iMode;
  v12 = (unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL);
  v97 = v12;
  v13 = (unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL);
  v14 = 0;
  p_pvScan0 = &psoMsk[-1].pvScan0;
  if ( !psoMsk )
    p_pvScan0 = 0LL;
  v91 = p_pvScan0;
  v79 = 0;
  if ( iMode != 4 || p_pvScan0 )
  {
    v73 = 0;
    v16 = 1;
  }
  else
  {
    v16 = 1;
    v73 = 1;
  }
  if ( iMode - 1 > 3 )
    return 0;
  v17 = *(_DWORD *)(((unsigned __int64)&psoTrg[-1].pvScan0 & -(__int64)(psoTrg != 0LL)) + 0x60);
  if ( (unsigned int)(v17 - 7) <= 2 )
    return 0;
  v18 = *(_DWORD *)(((unsigned __int64)&psoSrc[-1].pvScan0 & -(__int64)(psoSrc != 0LL)) + 0x60);
  if ( v18 == 9 || v17 == 10 || v18 == 10 )
    return 0;
  ERECTL::vOrder((ERECTL *)prcl);
  if ( v19 < 3 && !v20 && (*(_DWORD *)(v13 + 96) == 1 || *(_DWORD *)(v12 + 96) == 1) )
  {
    v21 = 1;
    v74 = 1;
  }
  else
  {
    v21 = 0;
    v74 = 0;
    if ( v19 < 3 )
      v19 = 3;
    v75 = v19;
  }
  v103 = *(_QWORD *)(v12 + 48);
  v113 = *(_QWORD *)(v13 + 48);
  v94 = 0LL;
  v95 = 0;
  v96 = 0;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v137);
  v133 = 0LL;
  v78 = 0LL;
  v104 = 0LL;
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v89);
  v22 = (Gre::Base *)*(unsigned int *)(v13 + 60);
  v23 = *(_DWORD *)(v13 + 56);
  *(_QWORD *)&v132.left = 0LL;
  v132.right = v23;
  v132.bottom = (int)v22;
  v90 = Gre::Base::Globals(v22);
  if ( v113 && v13 == *(_QWORD *)(v113 + 2544) && (*(_DWORD *)(v113 + 40) & 0x20000) != 0 )
    ERECTL::bOffsetAdd((ERECTL *)&v132, (const struct _POINTL *)(v113 + 2576), 0);
  if ( !v21 && !*(_WORD *)(v12 + 100) && *(_QWORD *)(v12 + 32) != *(_QWORD *)(v13 + 32) && !v73 )
  {
    v24 = v12;
    v112 = v12;
    v83 = v92;
    v25 = v102;
    v82 = v102;
    v81 = EngCopyBits;
LABEL_20:
    PDEVOBJ::vSync((PDEVOBJ *)&v113, v105, 0LL, 0);
    ERECTL::operator*=(&v132.left, &v11->left);
    if ( v132.left == v132.right || (v26 = 0, v132.top == v132.bottom) )
      v26 = 1;
    if ( v26 )
    {
      v14 = 1;
      goto LABEL_65;
    }
    v108 = 0LL;
    v109 = 0;
    v110 = 0;
    v135 = 0LL;
    if ( *(_WORD *)(v13 + 100) || (unsigned int)(*(_DWORD *)(v13 + 96) - 7) <= 1 )
    {
      v149 = 0;
      v152 = 0;
      y = v132.right - v132.left + 1;
      v148 = v132.bottom - v132.top + 1;
      v150 = 0LL;
      x = *(_DWORD *)(v24 + 96);
      v151 = *(_DWORD *)(v13 + 112) & 0x40000;
      SURFMEM::bCreateDIB((SURFMEM *)&v108, (struct _DEVBITMAPINFO *)&x, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
      if ( !v108 )
        goto LABEL_145;
      DWORD2(v135) = v132.right - v132.left;
      HIDWORD(v135) = v132.bottom - v132.top;
      if ( (*(_DWORD *)(v13 + 112) & 0x400) != 0 )
        v81 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v113 + 2832);
      v72 = (COLORADJUSTMENT *)&v132;
      v71 = (RECTL *)&v135;
      ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, struct _CLIPOBJ *))v81)(
        (v108 + 24) & -(__int64)(v108 != 0),
        v13 + 24,
        0LL,
        v80);
      LODWORD(v135) = v11->left - v132.left;
      DWORD1(v135) = v11->top - v132.top;
      DWORD2(v135) = v11->right - v132.left;
      HIDWORD(v135) = v11->bottom - v132.top;
      v13 = v108;
      v80 = 0LL;
      v111 = 0LL;
      v101 = (RECTL *)&v135;
      v132.right -= v132.left;
      v132.bottom -= v132.top;
      *(_QWORD *)&v132.left = 0LL;
    }
    else
    {
      v111 = v80;
      v101 = v11;
    }
    v106 = (struct _SURFOBJ *)v13;
    v129[0] = *(_QWORD *)(v24 + 48);
    PDEVOBJ::vSync((PDEVOBJ *)v129, (struct _SURFOBJ *)(v24 + 24), 0LL, 0);
    v27 = (rotate *)Win32AllocPoolZInit(396LL, 1650946119LL);
    v28 = v27;
    v129[1] = v27;
    if ( !v27 )
    {
LABEL_64:
      SURFMEM::~SURFMEM((SURFMEM *)&v108);
      v14 = v79;
LABEL_65:
      RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v89);
      SURFMEM::~SURFMEM((SURFMEM *)&v94);
      return v14;
    }
    if ( !(unsigned int)rotate::bInitPlgDDA(
                          v27,
                          (struct rotate::_PLGDDA *)&v132,
                          v101,
                          (struct _RECTL *)v83,
                          (struct _POINTFIX *)v71) )
      goto LABEL_99;
    v107 = (&rotate::apfnRead)[*(unsigned int *)(v13 + 96)];
    v129[2] = v107;
    v30 = rotate::lSizeDDA(v28, v29);
    v31 = v30 * (unsigned __int64)(unsigned int)(v132.right - v132.left + 2);
    if ( v31 > 0xFFFFFFFF || !(_DWORD)v31 )
      goto LABEL_63;
    if ( v74 )
    {
      *(_DWORD *)v28 = 1;
      v32 = funcs_1400E8F5D[v75 - 1];
    }
    else
    {
      *(_DWORD *)v28 = 0;
      v32 = (void (*)(rotate *__hidden, struct rotate::_PLGRUN *, struct rotate::_PLGRUN *, struct SURFACE *, struct _CLIPOBJ *))(&rotate::apfnWrite)[*(unsigned int *)(v24 + 96)];
    }
    v88 = (POINTFIX)v32;
    v90 = (struct Gre::Base::SESSION_GLOBALS *)v32;
    v93 = (rotate *)PALLOCMEM((unsigned int)v31, 1650946119LL);
    if ( !v93 )
      goto LABEL_63;
    top = v132.top;
    v76 = v132.top;
    v100 = *(_QWORD *)(v13 + 80) + *(_DWORD *)(v13 + 88) * v132.top;
    v105 = 0LL;
    if ( !v91 )
    {
      v84 = 0LL;
      goto LABEL_35;
    }
    if ( !(unsigned int)bUMPDSecurityGateEx() || v84 )
    {
      LODWORD(v105) = v132.left + v84->x - v101->left;
      top = v132.top;
      v76 = v132.top;
      v84 = (POINTL *)((char *)v91[10] + *((_DWORD *)v91 + 22) * (v132.top + v84->y - v101->top));
LABEL_35:
      v34 = v80;
      if ( v80 )
      {
        if ( (v80->rclBounds.left & 1) != 0 )
          v34 = 0LL;
        v80 = v34;
        v111 = v34;
      }
      if ( !v25 || !*((_BYTE *)v25 + 20) )
      {
        v59 = *(_DWORD *)(v24 + 60);
        v60 = *(_DWORD *)(v24 + 56);
        *(_QWORD *)&v134.left = 0LL;
        v134.right = v60;
        v134.bottom = v59;
        RGNOBJ::vSet((RGNOBJ *)&v89, &v134);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v137, v89, (const struct ERECTL *)&v134, 1);
        v25 = (struct SURFACE *)v137;
        v82 = (struct REGION *)v137;
        top = v132.top;
        v76 = v132.top;
        v34 = v80;
      }
      if ( *((_DWORD *)v25 + 1) >= *((_DWORD *)v25 + 3) || *((_DWORD *)v25 + 2) >= *((_DWORD *)v25 + 4) )
      {
        Win32FreePool(v93);
        goto LABEL_63;
      }
      v35 = v84;
      while ( 1 )
      {
        LODWORD(v81) = top;
        if ( top >= v132.bottom )
          break;
        *(_OWORD *)((char *)v28 + 68) = *(_OWORD *)((char *)v28 + 4);
        *(_OWORD *)((char *)v28 + 84) = *(_OWORD *)((char *)v28 + 20);
        *(_OWORD *)((char *)v28 + 100) = *(_OWORD *)((char *)v28 + 36);
        *(_OWORD *)((char *)v28 + 116) = *(_OWORD *)((char *)v28 + 52);
        LODWORD(v72) = v132.left;
        v36 = ((__int64 (__fastcall *)(rotate *, rotate *, __int64, POINTL *, struct _CLIPOBJ *, COLORADJUSTMENT *, LONG, _DWORD))v107)(
                v28,
                v93,
                v100,
                v35,
                v34,
                v72,
                v132.right,
                (_DWORD)v105);
        ((void (__fastcall *)(rotate *, __int64, unsigned __int64, struct SURFACE *))v90)(v93, v36, v24, v25);
        rotate::vAdvYDDA(v28, v37);
        v100 += *(int *)(v13 + 88);
        v35 = v84;
        if ( v84 )
        {
          v35 = (POINTL *)((char *)v84 + *((int *)v91 + 22));
          v84 = v35;
        }
        top = ++v76;
        v34 = v80;
      }
      Win32FreePool(v93);
      if ( v24 != v12 )
      {
        v38 = 0;
        v85 = 0LL;
        LOBYTE(v86) = 0;
        v87 = 0;
        v39 = 0LL;
        if ( *((_DWORD *)v77 + 2) - *(_DWORD *)v77 == v132.right
          && *((_DWORD *)v77 + 3) - *((_DWORD *)v77 + 1) == v132.bottom )
        {
          v38 = 1;
        }
        else
        {
          v117 = 0;
          v120 = 0;
          right = v133.right + 1;
          bottom = v133.bottom + 1;
          v118 = 0LL;
          v114 = 1;
          v119 = *(_DWORD *)(v12 + 112) & 0x40000;
          SURFMEM::bCreateDIB((SURFMEM *)&v85, (struct _DEVBITMAPINFO *)&v114, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
          if ( v85 )
          {
            v97 = 0LL;
            v98 = 0;
            v99 = 0;
            right = v132.right;
            bottom = v132.bottom;
            v118 = 0LL;
            v114 = 1;
            v119 = *(_DWORD *)(v12 + 112) & 0x40000;
            SURFMEM::bCreateDIB((SURFMEM *)&v97, (struct _DEVBITMAPINFO *)&v114, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
            RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
            if ( v97 )
            {
              if ( v82 )
              {
                RGNOBJ::vSet((RGNOBJ *)&v82, &v133);
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)&pcoa, v82, (struct ERECTL *)&v133);
                if ( EngEraseSurface((SURFOBJ *)((v85 + 24) & -(__int64)(v85 != 0)), &v133, 0) )
                {
                  if ( EngEraseSurface((SURFOBJ *)((v97 + 24) & -(__int64)(v97 != 0)), &v132, 0xFFFFFFFF)
                    && EngPlgBlt(
                         (SURFOBJ *)((v85 + 24) & -(__int64)(v85 != 0)),
                         (SURFOBJ *)((v97 + 24) & -(__int64)(v97 != 0)),
                         0LL,
                         &pcoa,
                         0LL,
                         0LL,
                         0LL,
                         v83,
                         v101,
                         0LL,
                         3u) )
                  {
                    v39 = v85;
                    v38 = 1;
                  }
                }
              }
            }
            RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v82);
            SURFMEM::~SURFMEM((SURFMEM *)&v97);
          }
        }
        PATHMEMOBJ::PATHMEMOBJ((PATHMEMOBJ *)v130);
        if ( !v38 )
          goto LABEL_62;
        if ( !v131 )
          goto LABEL_62;
        x = v92->x;
        y = v92->y;
        v148 = v92[1].x;
        v149 = v92[1].y;
        v40 = v92[2].x;
        LODWORD(v150) = v40 + v148 - x;
        v41 = v92[2].y;
        HIDWORD(v150) = v41 + v149 - y;
        v151 = v40;
        v152 = v41;
        p_x = &x;
        v122 = 1LL;
        v123 = 0LL;
        v124 = 0;
        if ( !(unsigned __int8)EPATHOBJ::bMoveTo(v130, 0LL, &p_x) )
          goto LABEL_62;
        p_x = &v148;
        v122 = 3LL;
        v123 = 0LL;
        v124 = 0;
        if ( !(unsigned __int8)EPATHOBJ::bPolyLineTo(v130, 0LL, &p_x, 3LL) )
          goto LABEL_62;
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83, (struct EPATHOBJ *)v130, 1u, v42);
        RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v77);
        if ( v83 && v77 )
        {
          v43 = v102;
          if ( v102 )
          {
            if ( RGNOBJ::bMerge((RGNOBJ *)&v77, (struct RGNOBJ *)&v83, (struct SURFACE *)((char *)v102 + 56), 8u) )
            {
LABEL_57:
              v136 = *(struct _RECTL *)((char *)v77 + 52);
              if ( !v43 || bIntersect(&v136, (const struct _RECTL *)((char *)v43 + 4), &v136) )
              {
                ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v138, v77, (struct ERECTL *)&v136);
                if ( !ERECTL::bEmpty((ERECTL *)v139) )
                {
                  v61 = v78 + v133.left;
                  v133.left += v78;
                  v62 = HIDWORD(v78) + v133.top;
                  v133.top += HIDWORD(v78);
                  v63 = v78 + v133.right;
                  v133.right += v78;
                  v64 = HIDWORD(v78) + v133.bottom;
                  v133.bottom += HIDWORD(v78);
                  v78 = 0LL;
                  ++*(_DWORD *)(v12 + 92);
                  if ( v73 )
                  {
                    *(_QWORD *)&v134.left = 0LL;
                    v134.right = v63 - v61;
                    v134.bottom = v64 - v62;
                    v88 = 0LL;
                    if ( (*(_DWORD *)(v12 + 112) & 2) != 0 )
                      v68 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(v103 + 2840);
                    else
                      v68 = EngStretchBlt;
                    v69 = v39 + 24;
                    if ( !v39 )
                      v69 = 0LL;
                    v70 = v12 + 24;
                    if ( !v12 )
                      v70 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, _QWORD, __int64, _BYTE *, struct _CLIPOBJ *, _QWORD, POINTFIX *, RECTL *, struct _RECTL *, __int64 *, int))v68)(
                      v70,
                      (v94 + 24) & ((unsigned __int128)-(__int128)v94 >> 64),
                      v69,
                      v138,
                      v104,
                      0LL,
                      &v88,
                      &v133,
                      &v134,
                      &v78,
                      4);
                  }
                  else
                  {
                    v65 = SURFACE::pfnBitBlt((SURFACE *)v12);
                    v66 = v39 + 24;
                    if ( !v39 )
                      v66 = 0LL;
                    v67 = v12 + 24;
                    if ( !v12 )
                      v67 = 0LL;
                    ((void (__fastcall *)(unsigned __int64, unsigned __int64, __int64, _BYTE *, struct _CLIPOBJ *, RECTL *, __int64 *, __int64 *, _QWORD, _QWORD, int))v65)(
                      v67,
                      (v94 + 24) & -(__int64)(v94 != 0),
                      v66,
                      v138,
                      v104,
                      &v133,
                      &v78,
                      &v78,
                      0LL,
                      0LL,
                      v39 != 0 ? 43724 : 52428);
                  }
                }
              }
              v79 = 1;
            }
          }
          else if ( RGNOBJ::bCopy((RGNOBJ *)&v77, (struct RGNOBJ *)&v83) )
          {
            goto LABEL_57;
          }
        }
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v77);
        RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v83);
LABEL_62:
        PATHMEMOBJ::~PATHMEMOBJ((PATHMEMOBJ *)v130);
        SURFMEM::~SURFMEM((SURFMEM *)&v85);
LABEL_63:
        Win32FreePool(v28);
        goto LABEL_64;
      }
LABEL_99:
      v79 = 1;
      goto LABEL_63;
    }
    Win32FreePool(v93);
    Win32FreePool(v28);
LABEL_145:
    SURFMEM::~SURFMEM((SURFMEM *)&v108);
    goto LABEL_65;
  }
  v88 = *v92;
  v141 = v88;
  v107 = (struct rotate::_PLGRUN *(*const near *)(struct rotate::_PLGDDA *, struct rotate::_PLGRUN *, unsigned __int8 *, unsigned __int8 *, struct _XLATEOBJ *, int, int, int))v92[1];
  v142 = v107;
  v143 = v92[2];
  v144 = (_DWORD)v107 + v143.x - v88.x;
  v145 = v92[1].y + v92[2].y - v92->y;
  v45 = ((int)v107 <= v144) ^ ((int)v107 > v88.x);
  v46 = (SHIDWORD(v107) <= v145) ^ (unsigned int)(SHIDWORD(v107) > v88.y);
  if ( *(&v141.x + 2 * v45) > *(&v141.x + 2 * (v45 ^ 3LL)) )
    v45 ^= 3u;
  if ( *(&v141.y + 2 * v46) > *(&v141.y + 2 * ((unsigned int)v46 ^ 3LL)) )
    v46 = (unsigned int)v46 ^ 3;
  v47 = (*(&v141.x + 2 * v45) >> 4) - 1;
  v133.left = v47;
  v48 = (*(&v141.y + 2 * v46) >> 4) - 1;
  v133.top = v48;
  v49 = ((*(&v141.x + 2 * (v45 ^ 3LL)) + 15) >> 4) + 1;
  v133.right = v49;
  v50 = ((*(&v141.y + 2 * ((unsigned int)v46 ^ 3LL)) + 15) >> 4) + 1;
  v133.bottom = v50;
  v51 = *(_DWORD *)(v12 + 60);
  v52 = *(_DWORD *)(v12 + 56);
  v53 = 0;
  v85 = 0LL;
  v54 = 0;
  v86 = v52;
  v87 = v51;
  if ( v103 && v12 == *(_QWORD *)(v103 + 2544) && (*(_DWORD *)(v103 + 40) & 0x20000) != 0 )
  {
    ERECTL::bOffsetAdd((ERECTL *)&v85, (const struct _POINTL *)(v103 + 2576), 0);
    v51 = v87;
    v52 = v86;
    v54 = HIDWORD(v85);
    v53 = v85;
  }
  if ( v53 > v47 )
    v47 = v53;
  v133.left = v47;
  if ( v54 > v48 )
    v48 = v54;
  v133.top = v48;
  if ( v52 < v49 )
    v49 = v52;
  v133.right = v49;
  if ( v51 < v50 )
    v50 = v51;
  v133.bottom = v50;
  if ( v49 < v47 )
  {
    v47 = v49;
    v133.left = v49;
  }
  else
  {
    if ( v50 < v48 )
      v48 = v50;
    v133.top = v48;
  }
  if ( v47 == v49 || (v55 = 0, v48 == v50) )
    v55 = 1;
  if ( !v55 )
  {
    if ( !v74
      && !*(_WORD *)(v12 + 100)
      && !v73
      && (v47 > *((_DWORD *)v77 + 2) || v49 < *(_DWORD *)v77 || v48 > *((_DWORD *)v77 + 3) || v50 < *((_DWORD *)v77 + 1)) )
    {
      v24 = v12;
      v112 = v12;
      v83 = v92;
      v25 = v102;
      v82 = v102;
      v81 = EngCopyBits;
LABEL_97:
      v11 = (RECTL *)v77;
      goto LABEL_20;
    }
    v141.x = v88.x - 16 * v47;
    v141.y -= 16 * v48;
    LODWORD(v142) = (_DWORD)v107 - 16 * v47;
    HIDWORD(v142) -= 16 * v48;
    v143.x -= 16 * v47;
    v143.y -= 16 * v48;
    v125[3] = 0;
    v128 = 0;
    v125[1] = v49 - v47 + 1;
    v125[2] = v50 - v48 + 1;
    v126 = 0LL;
    v125[0] = *(_DWORD *)(v12 + 96);
    v127 = *(_DWORD *)(v12 + 112) & 0x40000;
    if ( v74 )
    {
      v125[0] = 1;
    }
    else if ( v73 )
    {
      v125[0] = *(_DWORD *)(v13 + 96);
    }
    SURFMEM::bCreateDIB((SURFMEM *)&v94, (struct _DEVBITMAPINFO *)v125, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
    if ( v94 )
    {
      v78 = *(_QWORD *)&v133.left;
      if ( v89 )
      {
        *(_QWORD *)&v133.left = 0LL;
        v133.right -= v78;
        v133.bottom -= HIDWORD(v78);
        RGNOBJ::vSet((RGNOBJ *)&v89, &v133);
        XCLIPOBJ::vSetup((XCLIPOBJ *)v137, v89, (const struct ERECTL *)&v133, 1);
        PDEVOBJ::vSync((PDEVOBJ *)&v103, v106, 0LL, 0);
        if ( v91 )
        {
          v81 = EngCopyBits;
          if ( (*(_DWORD *)(v12 + 112) & 0x400) != 0 )
            v56 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v103 + 2832);
          else
            v56 = EngCopyBits;
          v57 = v12 + 24;
          if ( !v12 )
            v57 = 0LL;
          v72 = (COLORADJUSTMENT *)&v78;
          v71 = &v133;
          ((void (__fastcall *)(unsigned __int64, unsigned __int64, _QWORD, char *))v56)(
            (v94 + 24) & -(__int64)(v94 != 0),
            v57,
            0LL,
            (char *)v90 + 4552);
        }
        else
        {
          v81 = EngCopyBits;
        }
        if ( !v74 )
          goto LABEL_94;
        v58 = -1;
        if ( v75 != 1 )
          v58 = 0;
        if ( EngEraseSurface((SURFOBJ *)((v94 + 24) & -(__int64)(v94 != 0)), &v133, v58) )
        {
LABEL_94:
          v24 = v94;
          v112 = v94;
          v83 = &v141;
          v25 = (struct SURFACE *)v137;
          v82 = (struct REGION *)v137;
          if ( v74 && *(_DWORD *)(v13 + 96) == 1 || v73 )
          {
            v104 = v80;
            v80 = 0LL;
          }
          else
          {
            v104 = (struct _CLIPOBJ *)((char *)v90 + 4552);
          }
          goto LABEL_97;
        }
      }
    }
    v16 = 0;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v89);
  SURFMEM::~SURFMEM((SURFMEM *)&v94);
  return v16;
}
