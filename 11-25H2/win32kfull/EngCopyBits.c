/*
 * XREFs of EngCopyBits @ 0x140070750
 * Callers:
 *     EngHTBlt @ 0x14006F20C (EngHTBlt.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV?$umptr_w@E@@PEAUtagBITMAPINFO@@III@Z @ 0x1400716E4 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@IIAEAV-$umpt.c)
 *     GreAlphaBlend @ 0x140073C58 (GreAlphaBlend.c)
 *     EngBitBlt @ 0x1400815E0 (EngBitBlt.c)
 *     ?GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_r@E@@PEAJ@Z @ 0x140093084 (-GreSetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_r@E@@PEAJ@Z.c)
 *     ?GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV?$umptr_w@E@@PEAJ@Z @ 0x140094658 (-GreGetBitmapBitsInternal@@YAJPEAUHBITMAP__@@AEAV-$umptr_w@E@@PEAJ@Z.c)
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x140094F18 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV?$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX@Z @ 0x1400962F4 (-GreStretchDIBitsInternalImpl@@YAHPEAUHDC__@@HHHHHHHHAEAV-$umptr_r@E@@PEAUtagBITMAPINFO@@KKIPEAX.c)
 *     ?BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1400F8750 (-BltLnk@@YAHPEAVSURFACE@@00PEAVECLIPOBJ@@PEAVXLATE@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@.c)
 *     ?EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z @ 0x1400FE4C0 (-EngRealizeBrush@@YAHPEAU_BRUSHOBJ@@PEAU_SURFOBJ@@11PEAU_XLATEOBJ@@K@Z.c)
 *     EngStretchBlt @ 0x140132EF0 (EngStretchBlt.c)
 *     ?bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEAU_RECTL@@PEAKPEAPEAV3@@Z @ 0x1401743E4 (-bSpDwmUpdateMaskCursor@@YAHPEAUHDEV__@@PEAVDWMSPRITE@@PEAVSFMLOGICALSURFACE@@PEAU_SURFOBJ@@3PEA.c)
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x140195AC8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x14022F0F8 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 *     ?bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z @ 0x14032C124 (-bSpUpdateCursor@@YAHPEAVSPRITE@@PEAU_SURFOBJ@@1PEAU_XLATEOBJ@@PEAU_RECTL@@@Z.c)
 *     NtGdiEngCopyBits @ 0x14033B220 (NtGdiEngCopyBits.c)
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x14006EF0C (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x140072810 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     ??1SFMALTLOGICALSURFACEREF@@QEAA@XZ @ 0x14007DDEC (--1SFMALTLOGICALSURFACEREF@@QEAA@XZ.c)
 *     ??0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x140094608 (--0SURFREF@@QEAA@PEAUHSURF__@@AEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x14009868C (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z @ 0x1400CD520 (-vSrcCopyS24D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z @ 0x1400CEA30 (-vSrcCopyS32D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z @ 0x1400CF4A0 (-vSrcCopyS16D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z @ 0x1400CFEB0 (-vSrcCopyS16D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z @ 0x1400CFFE0 (-vSrcCopyS24D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z @ 0x1400D06E0 (-vSrcCopyS32D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z @ 0x1400D0790 (-vSrcCopyS32D1@@YAXPEAUBLTINFO@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400D8AF0 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     ?cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z @ 0x1400F596C (-cEnumStart@XCLIPOBJ@@QEAAKHKKK@Z.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     ?vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z @ 0x14012E6C0 (-vSrcCopyS24D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z @ 0x14012E810 (-vSrcCopyS16D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z @ 0x14012EAD0 (-vSrcCopyS32D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z @ 0x140142540 (-vSrcCopyS32D32Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D32@@YAXPEAUBLTINFO@@@Z @ 0x140142660 (-vSrcCopyS8D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z @ 0x140144560 (-vSrcCopyS1D1LtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z @ 0x14014FD60 (-vSrcCopyS1D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D32@@YAXPEAUBLTINFO@@@Z @ 0x140175C30 (-vSrcCopyS4D32@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z @ 0x140185E50 (-vSrcCopyS1D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D24@@YAXPEAUBLTINFO@@@Z @ 0x14019C8D0 (-vSrcCopyS8D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z @ 0x14019FDC0 (-vSrcCopyS1D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z @ 0x1401A09A0 (-vSrcCopyS1D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401A3AB0 (-vSrcCopyS24D24Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z @ 0x1401A8780 (-vSrcCopyS32D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8@@YAXPEAUBLTINFO@@@Z @ 0x1401AD8A0 (-vSrcCopyS8D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z @ 0x1401B20E0 (-vSrcCopyS24D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D1@@YAXPEAUBLTINFO@@@Z @ 0x1401B68F0 (-vSrcCopyS4D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z @ 0x1401BA350 (-vSrcCopyS1D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401C3D80 (-vSrcCopyS16D16Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D1@@YAXPEAUBLTINFO@@@Z @ 0x1401C65A0 (-vSrcCopyS8D1@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z @ 0x1401C6FA0 (-vSrcCopyS8D8IdentityLtoR@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z @ 0x1401CA4E0 (-vSrcCopyS4D4Identity@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z @ 0x1401D92E0 (-vSrcCopyS24D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z @ 0x1401E0130 (-vSrcCopyS32D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z @ 0x1401E14F0 (-vSrcCopyS4D24@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D4@@YAXPEAUBLTINFO@@@Z @ 0x1401EB390 (-vSrcCopyS4D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z @ 0x1401F1140 (-vSrcCopyS16D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z @ 0x14020E030 (-vSrcCopyDummy@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z @ 0x140317920 (-vSrcCopyS1D1RtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z @ 0x140317D50 (-vSrcCopyS16D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z @ 0x140317EA0 (-vSrcCopyS24D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D4@@YAXPEAUBLTINFO@@@Z @ 0x1403180A0 (-vSrcCopyS8D4@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS16D8@@YAXPEAUBLTINFO@@@Z @ 0x140318180 (-vSrcCopyS16D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D8@@YAXPEAUBLTINFO@@@Z @ 0x1403183B0 (-vSrcCopyS4D8@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z @ 0x140318480 (-vSrcCopyS8D8IdentityRtoL@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS4D16@@YAXPEAUBLTINFO@@@Z @ 0x140318510 (-vSrcCopyS4D16@@YAXPEAUBLTINFO@@@Z.c)
 *     ?vSrcCopyS8D16@@YAXPEAUBLTINFO@@@Z @ 0x1403185F0 (-vSrcCopyS8D16@@YAXPEAUBLTINFO@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

BOOL __stdcall EngCopyBits(
        SURFOBJ *psoDest,
        SURFOBJ *psoSrc,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        POINTL *pptlSrc)
{
  void *v7; // rax
  SURFOBJ *v8; // rsi
  POINTL *v10; // r9
  PVOID *p_pvScan0; // r15
  unsigned int v12; // ebx
  __int64 p_iBitmapFormat; // rax
  int v14; // edi
  int v15; // r10d
  int v16; // r9d
  int v17; // eax
  LONG lDelta; // eax
  unsigned __int64 v19; // rcx
  RECTL v20; // xmm0
  int v21; // r12d
  int v22; // ebx
  struct Gre::Base::SESSION_GLOBALS *v23; // rax
  ULONG iBitmapFormat; // eax
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  void (*const near *v28)(struct BLTINFO *); // r12
  RECTL *v29; // r13
  unsigned int i; // ebx
  int left; // ecx
  LONG v32; // r10d
  int right; // r9d
  LONG v34; // edx
  LONG v35; // edx
  LONG v36; // r15d
  LONG bottom; // r11d
  LONG v38; // r8d
  int v39; // r8d
  int v40; // edi
  int v41; // r10d
  LONG v42; // ecx
  char *pvScan0; // r9
  LONG v44; // r8d
  char *v45; // r10
  ULONG v47; // ecx
  ULONG v48; // eax
  ULONG v49; // eax
  __int64 (__fastcall *v50)(struct BLTINFO *); // rbx
  PVOID v51; // rbx
  __int64 (__fastcall *v52)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  LONG x; // edx
  LONG y; // r8d
  unsigned __int64 v55; // rcx
  LONG v56; // ecx
  LONG top; // edx
  unsigned __int64 v58; // rdx
  RECTL *v59; // r13
  __int64 v60; // r8
  int v61; // eax
  __int64 v62; // rcx
  ULONG v63; // eax
  ULONG v64; // ecx
  __int64 v65; // rdx
  __int64 v66; // rcx
  char *v67; // rdx
  char *v68; // rcx
  XCLIPOBJ *v69; // r15
  unsigned int j; // edi
  LONG v71; // r8d
  LONG v72; // eax
  LONG v73; // r10d
  LONG v74; // eax
  int v75; // edx
  LONG v76; // eax
  int v77; // eax
  int v78; // r9d
  unsigned __int64 v79; // rax
  int v80; // ebx
  __int64 v81; // rdi
  struct Gre::Base::SESSION_GLOBALS *v82; // rsi
  int v83; // [rsp+60h] [rbp-2E8h]
  XLATEOBJ *v84; // [rsp+68h] [rbp-2E0h] BYREF
  int v85; // [rsp+70h] [rbp-2D8h]
  int v86; // [rsp+78h] [rbp-2D0h] BYREF
  LONG v87; // [rsp+7Ch] [rbp-2CCh]
  RECTL *v88; // [rsp+80h] [rbp-2C8h]
  XCLIPOBJ *v89; // [rsp+88h] [rbp-2C0h]
  POINTL *v90; // [rsp+90h] [rbp-2B8h]
  int v91; // [rsp+98h] [rbp-2B0h]
  CLIPOBJ *v92; // [rsp+A0h] [rbp-2A8h]
  RECTL *v93; // [rsp+A8h] [rbp-2A0h]
  SURFOBJ *v94; // [rsp+B0h] [rbp-298h]
  SURFOBJ *v95; // [rsp+B8h] [rbp-290h]
  POINTL *v96; // [rsp+C0h] [rbp-288h]
  POINTL *v97; // [rsp+C8h] [rbp-280h]
  HDEV hdev; // [rsp+D0h] [rbp-278h] BYREF
  HDEV v99; // [rsp+D8h] [rbp-270h] BYREF
  _BYTE v100[32]; // [rsp+E0h] [rbp-268h] BYREF
  __int64 v101; // [rsp+100h] [rbp-248h]
  XLATEOBJ *v102; // [rsp+110h] [rbp-238h] BYREF
  char *v103; // [rsp+118h] [rbp-230h]
  char *v104; // [rsp+120h] [rbp-228h]
  int v105; // [rsp+128h] [rbp-220h]
  int v106; // [rsp+12Ch] [rbp-21Ch]
  int v107; // [rsp+130h] [rbp-218h]
  int v108; // [rsp+134h] [rbp-214h]
  int v109; // [rsp+138h] [rbp-210h]
  LONG v110; // [rsp+13Ch] [rbp-20Ch]
  int v111; // [rsp+140h] [rbp-208h]
  int v112; // [rsp+144h] [rbp-204h]
  int v113; // [rsp+148h] [rbp-200h]
  unsigned int v114; // [rsp+14Ch] [rbp-1FCh]
  int v115; // [rsp+150h] [rbp-1F8h]
  PVOID *v116; // [rsp+158h] [rbp-1F0h]
  POINTL v117; // [rsp+160h] [rbp-1E8h]
  RECTL v118; // [rsp+168h] [rbp-1E0h]
  char *v119; // [rsp+178h] [rbp-1D0h]
  char *v120; // [rsp+180h] [rbp-1C8h]
  int v121; // [rsp+188h] [rbp-1C0h]
  int v122; // [rsp+18Ch] [rbp-1BCh]
  int v123; // [rsp+190h] [rbp-1B8h]
  unsigned int v124; // [rsp+194h] [rbp-1B4h]
  int v125; // [rsp+198h] [rbp-1B0h]
  unsigned int v126; // [rsp+1B0h] [rbp-198h] BYREF
  RECTL v127[20]; // [rsp+1B4h] [rbp-194h]

  v7 = pco;
  v89 = (XCLIPOBJ *)pco;
  v8 = psoSrc;
  v94 = psoDest;
  v95 = psoSrc;
  v92 = pco;
  v88 = prclDest;
  v93 = prclDest;
  v10 = pptlSrc;
  v90 = pptlSrc;
  v97 = pptlSrc;
  if ( psoDest->iType )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(psoDest, psoSrc, pco);
    v7 = v89;
    v10 = v90;
  }
  p_pvScan0 = &v8[-1].pvScan0;
  v12 = 0;
  if ( !v8 )
    p_pvScan0 = 0LL;
  if ( v8->iType )
  {
    v51 = p_pvScan0[6];
    if ( !v51 )
      return 0;
    v52 = (__int64 (__fastcall *)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)v51 + 354);
    v84 = 0LL;
    x = v10->x;
    v86 = v10->x;
    y = v10->y;
    v87 = y;
    v55 = *((unsigned int *)p_pvScan0 + 28);
    if ( (v55 & 0x80000) != 0 )
    {
      if ( v51 != *((PVOID *)v51 + 3) )
      {
        if ( (v55 & 0x80000000) != 0LL )
        {
          v86 = x + *((_DWORD *)v51 + 644);
          v55 = (unsigned int)(y + *((_DWORD *)v51 + 645));
          v87 = y + *((_DWORD *)v51 + 645);
          v90 = (POINTL *)&v86;
        }
        v81 = *((_QWORD *)v51 + 3);
        v82 = Gre::Base::Globals((Gre::Base *)v55);
        SURFREF::SURFREF((SURFREF *)v100, (HSURF)p_pvScan0[18], v82);
        if ( !v101
          || (v97 = (POINTL *)*((_QWORD *)v82 + 471),
              v96 = v97,
              v95 = (SURFOBJ *)*((_QWORD *)v51 + 224),
              v94 = *(SURFOBJ **)(v81 + 1792),
              !(unsigned int)EXLATEOBJ::bInitXlateObj(&v84, 0LL, 0LL, v94, v95, v97, v97, 0, 0, 0, 0x2000)) )
        {
          SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v100);
          goto LABEL_70;
        }
        pxlo = v84;
        v8 = (SURFOBJ *)v101;
        if ( v101 )
          v8 = (SURFOBJ *)(v101 + 24);
        v52 = *(__int64 (__fastcall **)(SURFOBJ *, SURFOBJ *, void *, XLATEOBJ *, RECTL *, POINTL *))(v81 + 2832);
        SFMALTLOGICALSURFACEREF::~SFMALTLOGICALSURFACEREF((SFMALTLOGICALSURFACEREF *)v100);
        v10 = v90;
      }
      v7 = v89;
    }
    if ( v52 )
    {
      v80 = v52(psoDest, v8, v7, pxlo, prclDest, v10);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v84);
      return v80;
    }
LABEL_70:
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v84);
    return 0;
  }
  if ( *((_DWORD *)p_pvScan0 + 24) > 8u )
    goto LABEL_157;
  p_iBitmapFormat = (__int64)&psoDest->iBitmapFormat;
  if ( !psoDest )
    p_iBitmapFormat = 96LL;
  if ( *(_DWORD *)p_iBitmapFormat > 8u )
  {
LABEL_157:
    if ( (unsigned int)bUMPDSecurityGateEx() )
      return 0;
  }
  hdev = psoDest->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, psoDest, 0LL, 0);
  v99 = v8->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&v99, v8, 0LL, 0);
  v83 = 0;
  v14 = 0;
  v115 = 0;
  v15 = 1;
  v86 = 1;
  v16 = 1;
  v85 = 1;
  if ( v8->iBitmapFormat - 7 <= 1 )
  {
    v12 = 2;
    v86 = 1;
    v85 = -1;
    lDelta = psoDest->lDelta;
    v109 = 0;
    v14 = 1;
LABEL_18:
    lDelta = -lDelta;
    goto LABEL_19;
  }
  if ( v8->pvScan0 == psoDest->pvScan0 )
  {
    v56 = v90->y;
    top = prclDest->top;
    if ( v90->x < prclDest->left )
    {
      v15 = -1;
      v86 = -1;
      v16 = -1;
      if ( v56 >= top )
        v16 = 1;
      v85 = v16;
      v12 = 3;
      if ( v56 >= top )
        v12 = 1;
    }
    else if ( v56 < top )
    {
      v16 = -1;
      v85 = -1;
      v12 = 2;
    }
  }
  else
  {
    v12 = 4;
  }
  v17 = v8->lDelta;
  if ( v16 <= 0 )
    v17 = -v17;
  v109 = v17;
  lDelta = psoDest->lDelta;
  if ( v16 <= 0 )
    goto LABEL_18;
LABEL_19:
  v110 = lDelta;
  LODWORD(v84) = v15;
  memset_0(&v126, 0, 0x144uLL);
  if ( !v89 || (v19 = *((unsigned __int8 *)v89 + 20), !*((_BYTE *)v89 + 20)) )
  {
    v20 = *prclDest;
    v21 = 1;
    v126 = 1;
LABEL_21:
    v22 = 0;
    v83 = 0;
    v127[0] = v20;
    goto LABEL_22;
  }
  v19 = (unsigned int)(v19 - 1);
  v21 = 1;
  if ( !(_DWORD)v19 )
  {
    v126 = 1;
    v20 = *(RECTL *)((char *)v89 + 4);
    goto LABEL_21;
  }
  if ( (_DWORD)v19 == 2 )
  {
    v83 = 1;
    XCLIPOBJ::cEnumStart(v89, 0, 0, v12, 0x14u);
    v22 = 1;
  }
  else
  {
    v22 = 0;
  }
LABEL_22:
  v23 = Gre::Base::Globals((Gre::Base *)v19);
  if ( !pxlo )
    pxlo = (XLATEOBJ *)((char *)v23 + 4552);
  v102 = pxlo;
  v105 = v86;
  v108 = v85;
  iBitmapFormat = psoDest->iBitmapFormat;
  if ( !v14 )
  {
    v25 = 4 * (v8->iBitmapFormat | (8 * iBitmapFormat));
    v26 = v25 + 2;
    if ( v86 >= 0 )
      v26 = v25;
    if ( (pxlo->flXlate & 1) != 0 )
    {
      v26 = (unsigned int)(v26 + 1);
      v27 = v115;
      if ( (v8->fjBitmap & 0x20) != 0 )
        v27 = 1;
      v115 = v27;
    }
    v28 = (&SrcCopyFunctionTable)[v26];
    v96 = (POINTL *)v28;
    v29 = v88;
    if ( v22 )
      goto LABEL_78;
    while ( 1 )
    {
      for ( i = 0; ; ++i )
      {
        LODWORD(v88) = i;
        if ( i >= v126 )
          break;
        left = v127[i].left;
        v32 = v29->left;
        if ( left < v29->left )
        {
          v127[i].left = v32;
          left = v32;
        }
        right = v127[i].right;
        v34 = v29->right;
        if ( right > v34 )
        {
          v127[i].right = v34;
          right = v34;
        }
        v35 = v127[i].top;
        v36 = v29->top;
        if ( v35 < v36 )
        {
          v127[i].top = v36;
          v35 = v36;
        }
        bottom = v127[i].bottom;
        v38 = v29->bottom;
        if ( bottom > v38 )
        {
          v127[i].bottom = v38;
          bottom = v38;
        }
        if ( v35 < bottom && left < right )
        {
          v39 = left + v90->x - v32;
          v40 = v35 + v90->y - v36;
          v41 = right - left;
          v106 = right - left;
          v107 = bottom - v35;
          if ( v86 <= 0 )
            v39 = v41 + v39 - 1;
          v111 = v39;
          v112 = v39 + v41 * (_DWORD)v84;
          if ( v86 <= 0 )
            v113 = right - 1;
          else
            v113 = left;
          v114 = v35;
          v42 = v8->lDelta;
          pvScan0 = (char *)v8->pvScan0;
          v44 = psoDest->lDelta;
          v45 = (char *)psoDest->pvScan0;
          if ( v85 <= 0 )
          {
            v103 = &pvScan0[v42 * (v40 + bottom - v35 - 1)];
            v104 = &v45[v44 * (bottom - 1)];
          }
          else
          {
            v103 = &pvScan0[v40 * v42];
            v104 = &v45[v35 * v44];
          }
          ((void (__fastcall *)(XLATEOBJ **))v28)(&v102);
        }
      }
      if ( !v83 )
        break;
LABEL_78:
      v83 = XCLIPOBJ::bEnum(v89, 0x144u, (char *)&v126, 0LL);
    }
    return 1;
  }
  v47 = v8->iBitmapFormat;
  if ( iBitmapFormat == 1 )
  {
    if ( v47 == 7 )
    {
      v50 = bSrcCopySRLE4D1;
      goto LABEL_61;
    }
    if ( v47 == 8 )
    {
      v50 = bSrcCopySRLE8D1;
      goto LABEL_61;
    }
    goto LABEL_72;
  }
  if ( iBitmapFormat == 2 )
  {
LABEL_72:
    if ( v47 == 7 )
    {
      v50 = bSrcCopySRLE4D4;
      goto LABEL_61;
    }
    if ( v47 == 8 )
    {
      v50 = bSrcCopySRLE8D4;
      goto LABEL_61;
    }
    goto LABEL_74;
  }
  v48 = iBitmapFormat - 3;
  if ( !v48 )
  {
LABEL_74:
    if ( v47 == 7 )
    {
      v50 = bSrcCopySRLE4D8;
      goto LABEL_61;
    }
    if ( v47 == 8 )
    {
      v50 = bSrcCopySRLE8D8;
      goto LABEL_61;
    }
    goto LABEL_58;
  }
  v49 = v48 - 1;
  if ( v49 )
  {
    v63 = v49 - 1;
    if ( v63 )
    {
      if ( v63 != 1 )
        goto LABEL_138;
      goto LABEL_104;
    }
LABEL_149:
    if ( v47 == 7 )
    {
      v50 = bSrcCopySRLE4D24;
      goto LABEL_61;
    }
    if ( v47 == 8 )
    {
      v50 = bSrcCopySRLE8D24;
      goto LABEL_61;
    }
LABEL_104:
    v64 = v47 - 7;
    if ( !v64 )
    {
      v50 = bSrcCopySRLE4D32;
      goto LABEL_61;
    }
    if ( v64 == 1 )
    {
      v50 = bSrcCopySRLE8D32;
      goto LABEL_61;
    }
LABEL_138:
    v50 = 0LL;
    goto LABEL_61;
  }
LABEL_58:
  if ( v47 == 7 )
  {
    v50 = bSrcCopySRLE4D16;
    goto LABEL_61;
  }
  if ( v47 != 8 )
    goto LABEL_149;
  v50 = bSrcCopySRLE8D16;
LABEL_61:
  v84 = (XLATEOBJ *)v50;
  if ( !v50 )
    return 0;
  v91 = 1;
  v58 = HIDWORD(*(unsigned __int64 *)v90);
  v117 = *v90;
  v116 = p_pvScan0;
  v59 = v88;
  v60 = v8->sizlBitmap.cy + (__int64)v88->top;
  if ( (unsigned __int64)(v60 + 0x80000000LL) <= 0xFFFFFFFF )
  {
    v61 = 0;
  }
  else
  {
    v61 = -2147024362;
    LODWORD(v60) = -1;
  }
  if ( v61 < 0 )
    return 0;
  v62 = (int)v60 - (__int64)(int)v58;
  if ( (unsigned __int64)(v62 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v65 = (int)v62 - 1LL;
  if ( (unsigned __int64)(v65 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v114 = v62 - 1;
  v113 = v88->left - v90->x;
  v123 = v113;
  v103 = (char *)v8->pvScan0;
  v66 = (int)v65 * (__int64)psoDest->lDelta;
  if ( (unsigned __int64)(v66 + 0x80000000LL) > 0xFFFFFFFF )
    return 0;
  v67 = (char *)psoDest->pvScan0;
  if ( (int)v66 < 0 )
  {
    v79 = (unsigned int)-(int)v66;
    if ( (unsigned __int64)v67 >= v79 )
    {
      v68 = &v67[-v79];
      goto LABEL_114;
    }
    return 0;
  }
  v68 = &v67[(int)v66];
  if ( v68 < v67 )
    return 0;
LABEL_114:
  v104 = v68;
  v121 = 0;
  v118.top = 0;
  v69 = v89;
  if ( v83 )
    goto LABEL_115;
  while ( 2 )
  {
    for ( j = 0; ; ++j )
    {
      LODWORD(v88) = j;
      if ( j >= v126 )
        break;
      v71 = v127[j].left;
      v72 = v59->left;
      if ( v71 < v59->left )
      {
        v127[j].left = v72;
        v71 = v72;
      }
      v73 = v127[j].right;
      v74 = v59->right;
      if ( v73 > v74 )
      {
        v127[j].right = v74;
        v73 = v74;
      }
      v75 = v127[j].top;
      v76 = v59->top;
      if ( v75 < v76 )
      {
        v127[j].top = v76;
        v75 = v76;
      }
      v77 = v127[j].bottom;
      v78 = v59->bottom;
      if ( v77 > v78 )
      {
        v127[j].bottom = v78;
        v77 = v78;
      }
      if ( v75 < v77 && v71 < v73 )
      {
        if ( v77 <= v118.top )
        {
          if ( v75 > v124 )
            continue;
          if ( !v21 )
            return 1;
          v103 = v119;
          v104 = v120;
          v114 = v124;
          v123 = v125;
          v121 = v122;
        }
        v118 = v127[j];
        v21 = v50((struct BLTINFO *)&v102);
        v91 = v21;
      }
    }
    if ( v83 )
    {
LABEL_115:
      v83 = XCLIPOBJ::bEnum(v69, 0x144u, (char *)&v126, 0LL);
      continue;
    }
    break;
  }
  return 1;
}
