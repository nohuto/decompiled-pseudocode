/*
 * XREFs of ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38
 * Callers:
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400845B8 (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D4898 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x140318DAC (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140067E34 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400A2640 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z @ 0x140114F8C (-bStrokeCosmetic@@YAHPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@K@Z.c)
 *     ??0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z @ 0x140116358 (--0BOUNDCLIPRGNTOSURFACE@@QEAA@PEAU_SURFOBJ@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1401170D8 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     IsPathBoundsInRange @ 0x1401187C0 (IsPathBoundsInRange.c)
 *     EngFillPath @ 0x140118840 (EngFillPath.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x140119278 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z @ 0x1401877F8 (-vSolidLine@@YAXPEAVSURFACE@@PEAU_PATHOBJ@@PEAU_POINTFIX@@PEAU_CLIPOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall EPATHOBJ_bSimpleStroke(
        struct _PATHOBJ *a1,
        int a2,
        CLIPOBJ *a3,
        unsigned __int64 a4,
        struct _CLIPOBJ *a5,
        struct EXFORMOBJ *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        struct _LINEATTRS *a9,
        unsigned int a10)
{
  struct _BRUSHOBJ *v11; // r12
  __int64 v12; // rcx
  unsigned int v14; // r14d
  struct EPATHOBJ *v15; // r11
  SURFOBJ *v16; // rbx
  int v17; // eax
  char *v19; // r12
  FLONG fl; // ecx
  unsigned __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  int v24; // eax
  int v25; // r12d
  __int64 (__fastcall *v26)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, struct EPATHOBJ *); // rax
  __int64 (__fastcall *v27)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, struct EPATHOBJ *); // rax
  int v28; // r14d
  __int64 (__fastcall *v29)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, struct EPATHOBJ *, BRUSHOBJ *, POINTL *, struct _LINEATTRS *, MIX); // rax
  POINTL *pptlBrushOrg; // [rsp+20h] [rbp-E0h]
  CLIPOBJ *pco; // [rsp+50h] [rbp-B0h] BYREF
  MIX mix; // [rsp+58h] [rbp-A8h]
  int v33; // [rsp+5Ch] [rbp-A4h] BYREF
  BRUSHOBJ *pbo; // [rsp+60h] [rbp-A0h]
  struct EPATHOBJ *v35; // [rsp+68h] [rbp-98h] BYREF
  CLIPOBJ *v36; // [rsp+70h] [rbp-90h]
  POINTL *v37; // [rsp+78h] [rbp-88h]
  _OWORD v38[2]; // [rsp+80h] [rbp-80h] BYREF
  _OWORD v39[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v40; // [rsp+C0h] [rbp-40h]
  _BYTE v41[152]; // [rsp+D0h] [rbp-30h] BYREF
  CLIPOBJ *v42; // [rsp+168h] [rbp+68h]
  int v43; // [rsp+170h] [rbp+70h]

  v11 = a7;
  v12 = *(_QWORD *)&a1[1] + 48LL;
  v14 = a10;
  v36 = a5;
  v37 = a8;
  pco = a3;
  v33 = a2;
  pbo = a7;
  v35 = a6;
  mix = a10;
  memset(v38, 0, sizeof(v38));
  v16 = 0LL;
  if ( !(unsigned __int8)IsPathBoundsInRange(v12) )
    return 0LL;
  if ( a1->cCurves )
  {
    v17 = *(_DWORD *)(a4 + 112);
    ++*(_DWORD *)(a4 + 92);
    if ( (v17 & 0x20) == 0 )
      goto LABEL_4;
    memset(v39, 0, sizeof(v39));
    v40 = 0LL;
    PRECOMPUTE::vInit(
      (const struct _LINEATTRS **)v39,
      (SURFACE *)a4,
      (__int64)pco,
      (const struct EPATHOBJ *)a1,
      (__int64)v36,
      v15,
      (struct EXFORMOBJ *)a9,
      a10,
      0,
      0);
    if ( !v40 )
    {
      EngSetLastError(8u);
      goto LABEL_37;
    }
    if ( (a9->fl & 1) == 0 || (v33 & 2) != 0 )
    {
      v25 = -1;
      if ( (a1->fl & 1) != 0 )
      {
        if ( (v33 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v38, a1, vCleanupPathStackObj);
          v27 = *(__int64 (__fastcall **)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, struct EPATHOBJ *))&pco[116].rclBounds.top;
          if ( v27 )
          {
            pptlBrushOrg = (POINTL *)pbo;
            v28 = v27(a4 + 24, a1, v36, v35);
          }
          else
          {
            v28 = -1;
          }
          if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v38);
          if ( v28 == 1 )
            goto LABEL_36;
          if ( v28 == -1 )
            goto LABEL_37;
          v14 = mix;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)a1) )
          goto LABEL_37;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v38, a1, vCleanupPathStackObj);
      v26 = *(__int64 (__fastcall **)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, struct EPATHOBJ *))&pco[116].rclBounds.top;
      if ( v26 )
      {
        pptlBrushOrg = (POINTL *)pbo;
        v25 = v26(a4 + 24, a1, v36, v35);
      }
      if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v38);
      if ( v25 == 1 )
      {
LABEL_36:
        LODWORD(v16) = 1;
LABEL_37:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v39);
        return (unsigned int)v16;
      }
      if ( v25 == -1 )
        goto LABEL_37;
      v11 = pbo;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v39);
    v15 = v35;
LABEL_4:
    if ( (a9->fl & 1) != 0 )
    {
      if ( pathwide::bWiden(
             (pathwide *)a1,
             (struct EPATHOBJ *)a1,
             v15,
             (const struct EXFORMOBJ *)a9,
             (const struct _LINEATTRS *)pptlBrushOrg) )
      {
        return (unsigned int)*EPATHOBJ_bSimpleFill(
                                &v33,
                                (__int64)a1,
                                v33,
                                (__int64)pco,
                                (SURFACE *)a4,
                                v36,
                                v11,
                                v37,
                                v14,
                                2u);
      }
      return 0LL;
    }
    v19 = (char *)(a4 + 24);
    pco = v36;
    BOUNDCLIPRGNTOSURFACE::BOUNDCLIPRGNTOSURFACE((BOUNDCLIPRGNTOSURFACE *)v41, (struct _SURFOBJ *)(a4 + 24), &pco);
    if ( !v43 )
      goto LABEL_62;
    fl = a1->fl;
    v21 = a4 & -(__int64)(v19 != 0LL);
    if ( (a9->fl & 1) != 0 )
    {
      if ( (fl & 0x10) == 0
        && !pathwide::bWiden(
              (pathwide *)a1,
              (struct EPATHOBJ *)a1,
              v35,
              (const struct EXFORMOBJ *)a9,
              (const struct _LINEATTRS *)pptlBrushOrg) )
      {
        goto LABEL_62;
      }
      if ( v21 )
        v16 = (SURFOBJ *)(v21 + 24);
      v24 = EngFillPath(v16, a1, pco, pbo, v37, mix, 2u);
    }
    else
    {
      if ( (fl & 1) != 0 && !EPATHOBJ::bFlatten((EPATHOBJ *)a1) )
        goto LABEL_62;
      v22 = *(_QWORD *)((a4 & -(__int64)(v19 != 0LL)) + 0x30);
      if ( *(_WORD *)((a4 & -(__int64)(v19 != 0LL)) + 0x64) )
      {
        v29 = *(__int64 (__fastcall **)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, struct EPATHOBJ *, BRUSHOBJ *, POINTL *, struct _LINEATTRS *, MIX))(v22 + 2792);
        if ( !v29 )
        {
LABEL_62:
          pco = v42;
          goto LABEL_23;
        }
        v24 = v29((v21 + 24) & -(__int64)(v21 != 0), a1, pco, v35, pbo, v37, a9, mix);
      }
      else
      {
        v35 = *(struct EPATHOBJ **)((a4 & -(__int64)(v19 != 0LL)) + 0x30);
        if ( v22 )
          PDEVOBJ::vSync((PDEVOBJ *)&v35, (struct _SURFOBJ *)(a4 + 24), 0LL, 0);
        if ( (_BYTE)mix == 13 && (!pco || pco->iDComplexity != 3) && !a9->pstyle && (a9->fl & 2) == 0 )
        {
          v23 = *(_QWORD *)((a4 & -(__int64)(v19 != 0LL)) + 0x30);
          if ( (*(_DWORD *)((a4 & -(__int64)(v19 != 0LL)) + 0x70) & 0x200) == 0
            || v23 && (*(_DWORD *)(v23 + 40) & 0x8000) != 0 )
          {
            vSolidLine((struct SURFACE *)(a4 & -(__int64)(v19 != 0LL)), a1, 0LL, pco, pbo->iSolidColor);
            pco = v42;
            RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pco);
            LODWORD(v16) = 1;
            return (unsigned int)v16;
          }
        }
        v24 = bStrokeCosmetic((struct SURFACE *)(a4 & -(__int64)(v19 != 0LL)), a1, pco, pbo, a9, mix);
      }
    }
    LODWORD(v16) = v24;
    pco = v42;
LABEL_23:
    RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)&pco);
    return (unsigned int)v16;
  }
  return 1LL;
}
