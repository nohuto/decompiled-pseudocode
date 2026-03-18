/*
 * XREFs of EngStrokePath @ 0x14006C7B0
 * Callers:
 *     OffStrokePath @ 0x14000F258 (OffStrokePath.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 *     W32kCddStrokePath @ 0x1401D7190 (W32kCddStrokePath.c)
 *     ?MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1401DC8D0 (-MulStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 *     NtGdiEngStrokePath @ 0x140264B40 (NtGdiEngStrokePath.c)
 *     ?BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1402FD1E0 (-BmpDevStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PE.c)
 *     ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1402FF710 (-RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEA.c)
 *     ?PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x14030B630 (-PanStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_.c)
 * Callees:
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x14006AED0 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     ??0ECLIPOBJ@@QEAA@XZ @ 0x14006CB8C (--0ECLIPOBJ@@QEAA@XZ.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x14006CBAC (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x14009AC08 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ??0RGNMEMOBJTMP@@QEAA@XZ @ 0x14009ACF4 (--0RGNMEMOBJTMP@@QEAA@XZ.c)
 *     EngFillPath @ 0x1400A3A10 (EngFillPath.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A4EB4 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

BOOL __stdcall EngStrokePath(
        SURFOBJ *pso,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        LINEATTRS *plineattrs,
        MIX mix)
{
  struct EPATHOBJ *v11; // r10
  SURFOBJ *v12; // rbx
  __int64 v13; // r8
  int cx; // edx
  int cy; // r8d
  PVOID *p_pvScan0; // rdi
  FLONG fl; // ecx
  int v18; // eax
  BOOL v19; // ebx
  __int64 (__fastcall *v21)(PVOID *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rax
  POINTL *v22; // [rsp+20h] [rbp-E0h]
  XFORMOBJ *v23; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v26; // [rsp+68h] [rbp-98h] BYREF
  POINTL *v27; // [rsp+78h] [rbp-88h]
  struct _RECTL v28; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v29[152]; // [rsp+90h] [rbp-70h] BYREF
  XFORMOBJ *v30; // [rsp+128h] [rbp+28h]
  int v31; // [rsp+130h] [rbp+30h]

  v27 = pptlBrushOrg;
  v23 = pxo;
  ECLIPOBJ::ECLIPOBJ((ECLIPOBJ *)v29);
  v12 = 0LL;
  v31 = 1;
  v30 = 0LL;
  if ( v13 )
  {
    cx = pso->sizlBitmap.cx;
    cy = pso->sizlBitmap.cy;
    v28.right = cx;
    v28.bottom = cy;
    *(_QWORD *)&v28.left = 0LL;
    v26 = *(_OWORD *)(*(_QWORD *)&pco[2].rclBounds.top + 52LL);
    if ( (int)v26 < 0 || cx < SDWORD2(v26) || SDWORD1(v26) < 0 || cy < SHIDWORD(v26) )
    {
      RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)&v26);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v24);
      RGNMEMOBJTMP::RGNMEMOBJTMP((RGNMEMOBJTMP *)&v25);
      v30 = (XFORMOBJ *)v26;
      if ( (_QWORD)v26
        && v24
        && v25
        && (RGNOBJ::vSet((RGNOBJ *)&v25, &v28),
            RGNOBJ::bMerge((RGNOBJ *)&v24, (struct RGNOBJ *)&pco[2].rclBounds.top, (struct RGNOBJ *)&v25, 8u))
        && (unsigned int)RGNOBJ::iComplexity((RGNOBJ *)&v24) != 1 )
      {
        RGNOBJ::vSwap((RGNOBJ *)&v26, (struct RGNOBJ *)&v24);
        v30 = (XFORMOBJ *)v26;
        XCLIPOBJ::vSetup((XCLIPOBJ *)v29, (struct REGION *)v26, (const struct ERECTL *)&v28, 1);
        pco = (CLIPOBJ *)v29;
      }
      else
      {
        v31 = 0;
      }
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v25);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v25);
      RGNMEMOBJ::vPopThreadGuardedObject((RGNMEMOBJ *)&v24);
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v24);
      if ( !v31 )
        goto LABEL_35;
      v11 = (struct EPATHOBJ *)v23;
    }
  }
  p_pvScan0 = &pso[-1].pvScan0;
  if ( !pso )
    p_pvScan0 = 0LL;
  fl = ppo->fl;
  if ( (plineattrs->fl & 1) != 0 )
  {
    if ( (fl & 0x10) == 0
      && !pathwide::bWiden(
            (pathwide *)ppo,
            (struct EPATHOBJ *)ppo,
            v11,
            (const struct EXFORMOBJ *)plineattrs,
            (const struct _LINEATTRS *)v22) )
    {
      goto LABEL_35;
    }
    if ( p_pvScan0 )
      v12 = (SURFOBJ *)(p_pvScan0 + 3);
    v18 = EngFillPath(v12, ppo, pco, pbo, v27, mix, 2u);
LABEL_27:
    v19 = v18;
    v23 = v30;
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
    return v19;
  }
  if ( (fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)ppo) )
    goto LABEL_35;
  if ( !*((_WORD *)p_pvScan0 + 50) )
  {
    v23 = (XFORMOBJ *)p_pvScan0[6];
    PDEVOBJ::vSync((PDEVOBJ *)&v23, pso, 0LL, 0);
    if ( (_BYTE)mix == 13
      && (!pco || pco->iDComplexity != 3)
      && !plineattrs->pstyle
      && (plineattrs->fl & 2) == 0
      && (((_DWORD)p_pvScan0[14] & 0x200) == 0 || (*((_DWORD *)p_pvScan0[6] + 10) & 0x8000) != 0) )
    {
      vSolidLine((struct SURFACE *)p_pvScan0, ppo, 0LL, pco, pbo->iSolidColor);
      v23 = v30;
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
      return 1;
    }
    v18 = bStrokeCosmetic((struct SURFACE *)p_pvScan0, ppo, pco, pbo, plineattrs, mix);
    goto LABEL_27;
  }
  v21 = (__int64 (__fastcall *)(PVOID *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)p_pvScan0[6] + 349);
  if ( v21 )
  {
    v18 = v21(p_pvScan0 + 3, ppo, pco, v23, pbo, v27, plineattrs, mix);
    goto LABEL_27;
  }
LABEL_35:
  v23 = v30;
  RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&v23);
  return 0;
}
