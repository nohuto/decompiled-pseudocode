/*
 * XREFs of EngLineTo @ 0x14006ABB0
 * Callers:
 *     ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14000B680 (-MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     OffLineTo @ 0x14000C850 (OffLineTo.c)
 *     W32kCddLineTo @ 0x140069F90 (W32kCddLineTo.c)
 *     ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1402FC700 (-BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     ?RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1402FE9C0 (-RedirLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z.c)
 *     NtGdiEngLineTo @ 0x14033BA90 (NtGdiEngLineTo.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x14000F5CC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     EngCreatePath @ 0x140069F10 (EngCreatePath.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x14006AED0 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x14006CBAC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ??1RGNMEMOBJTMP@@QEAA@XZ @ 0x14006D204 (--1RGNMEMOBJTMP@@QEAA@XZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngDeletePath @ 0x1400D49A0 (EngDeletePath.c)
 *     ??0PRECOMPUTE@@QEAA@PEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DD988 (--0PRECOMPUTE@@QEAA@PEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LIN.c)
 *     ?bUMPDSecurityGateEx@@YAHXZ @ 0x1400F9DE8 (-bUMPDSecurityGateEx@@YAHXZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngLineTo(
        SURFOBJ *pso,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        LONG x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  unsigned __int64 v11; // r14
  int v12; // edi
  PATHOBJ *Path; // rax
  PATHOBJ *v15; // rbx
  PATHOBJ *v16; // rcx
  PATHOBJ *v17; // rax
  PATHOBJ *v18; // r15
  __int64 v19; // rbx
  int v20; // eax
  struct REGION *v21; // [rsp+50h] [rbp-B0h] BYREF
  POINTFIX ptfx; // [rsp+58h] [rbp-A8h] BYREF
  POINTFIX pptfx; // [rsp+60h] [rbp-A0h] BYREF
  SURFOBJ *v24; // [rsp+68h] [rbp-98h] BYREF
  BRUSHOBJ *v25; // [rsp+70h] [rbp-90h]
  struct _LINEATTRS v26; // [rsp+78h] [rbp-88h] BYREF
  _BYTE v27[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v28; // [rsp+C0h] [rbp-40h]
  _BYTE v29[160]; // [rsp+D0h] [rbp-30h] BYREF

  v24 = pso;
  v25 = pbo;
  ptfx.y = 16 * y1;
  v11 = (unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL);
  v12 = 0;
  pptfx.x = 16 * x2;
  ptfx.x = 16 * x1;
  pptfx.y = 16 * y2;
  if ( !*(_WORD *)(v11 + 0x64) )
  {
    v24 = *(SURFOBJ **)(((unsigned __int64)&pso[-1].pvScan0 & -(__int64)(pso != 0LL)) + 0x30);
    PDEVOBJ::vSync((PDEVOBJ *)&v24, pso, 0LL, 0);
    if ( (!pco || pco->iDComplexity != 3) && mix == 3341 )
    {
      vSolidLine((struct SURFACE *)v11, 0LL, &ptfx, pco, pbo->iSolidColor);
      return 1;
    }
    memset(&v26, 0, sizeof(v26));
    Path = EngCreatePath();
    v15 = Path;
    if ( !Path )
      return v12;
    if ( PATHOBJ_bMoveTo(Path, ptfx) )
    {
      if ( PATHOBJ_bPolyLineTo(v15, &pptfx, 1u) )
        v12 = bStrokeCosmetic((struct SURFACE *)v11, v15, pco, pbo, &v26, mix);
    }
    v16 = v15;
LABEL_12:
    EngDeletePath(v16);
    return v12;
  }
  memset(&v26, 0, sizeof(v26));
  v26.elWidth.l = 1;
  v17 = EngCreatePath();
  v18 = v17;
  if ( !v17 )
    return v12;
  if ( !PATHOBJ_bMoveTo(v17, ptfx) || !PATHOBJ_bPolyLineTo(v18, &pptfx, 1u) )
  {
LABEL_29:
    v16 = v18;
    goto LABEL_12;
  }
  v19 = *(_QWORD *)(v11 + 48);
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v29);
  RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
  if ( pco )
    goto LABEL_22;
  if ( !v21 )
  {
LABEL_28:
    RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
    goto LABEL_29;
  }
  if ( !(unsigned int)bUMPDSecurityGateEx() || prclBounds )
  {
    RGNOBJ::vSet((RGNOBJ *)&v21, prclBounds);
    XCLIPOBJ::vSetup((XCLIPOBJ *)v29, v21, (const struct ERECTL *)prclBounds, 0);
    pco = (CLIPOBJ *)v29;
LABEL_22:
    PRECOMPUTE::PRECOMPUTE(v27, v11, v19, v18, pco, 0LL, &v26, mix, 0, 0);
    if ( v28 )
    {
      if ( (*(_DWORD *)(v11 + 112) & 0x20) != 0 )
        v20 = (*(__int64 (__fastcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))(v19 + 2792))(
                v24,
                v18,
                pco,
                0LL,
                v25,
                0LL,
                &v26,
                mix);
      else
        v20 = ((__int64 (__fastcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, _QWORD, BRUSHOBJ *, _QWORD, struct _LINEATTRS *, MIX))EngStrokePath)(
                v24,
                v18,
                pco,
                0LL,
                v25,
                0LL,
                &v26,
                mix);
      v12 = v20;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v27);
    goto LABEL_28;
  }
  RGNMEMOBJTMP::~RGNMEMOBJTMP((RGNMEMOBJTMP *)&v21);
  return 0;
}
