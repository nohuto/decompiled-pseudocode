/*
 * XREFs of ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400A2EAC (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D9D50 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@K@Z @ 0x1403016B8 (-EPATHOBJ_bTextOutSimpleStroke1@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURF.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x14000F5CC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     EngStrokePath @ 0x14006C7B0 (EngStrokePath.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A32F0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     IsPathBoundsInRange @ 0x1400A3994 (IsPathBoundsInRange.c)
 *     ?bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z @ 0x1400A4EB4 (-bWiden@pathwide@@YA_NAEAVEPATHOBJ@@0AEBVEXFORMOBJ@@AEBU_LINEATTRS@@@Z.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

int __fastcall EPATHOBJ_bSimpleStroke(
        struct EPATHOBJ *a1,
        int a2,
        HDEV a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *a7,
        struct _POINTL *pptlBrushOrg,
        struct _LINEATTRS *a9,
        MIX mix)
{
  __int64 v12; // rcx
  HDEV v13; // r13
  char v14; // r12
  int v15; // edi
  struct _LINEATTRS *plineattrs; // r15
  __int64 v18; // r9
  int v19; // r13d
  __int64 (__fastcall *v20)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  __int64 (__fastcall *v21)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *); // rax
  int v22; // r12d
  BRUSHOBJ *pbo; // [rsp+20h] [rbp-79h]
  _OWORD v24[2]; // [rsp+50h] [rbp-49h] BYREF
  _OWORD v25[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 v26; // [rsp+90h] [rbp-9h]
  int v27; // [rsp+E0h] [rbp+47h] BYREF
  int v28; // [rsp+E8h] [rbp+4Fh]
  HDEV v29; // [rsp+F0h] [rbp+57h]

  v29 = a3;
  v28 = a2;
  v12 = *((_QWORD *)a1 + 1) + 48LL;
  v13 = a3;
  v14 = a2;
  memset(v24, 0, sizeof(v24));
  v15 = 0;
  if ( !(unsigned __int8)IsPathBoundsInRange(v12) )
    return 0;
  if ( *((_DWORD *)a1 + 1) )
  {
    ++*((_DWORD *)a4 + 23);
    plineattrs = a9;
    if ( (*((_DWORD *)a4 + 28) & 0x20) == 0 )
      goto LABEL_4;
    memset(v25, 0, sizeof(v25));
    v26 = 0LL;
    PRECOMPUTE::vInit(v25, a4, v13, a1, pco, pxo, a9, mix, 0, 0);
    if ( !v26 )
    {
      EngSetLastError(8u);
      goto LABEL_19;
    }
    if ( (plineattrs->fl & 1) == 0 || (v28 & 2) != 0 )
    {
      v19 = -1;
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        if ( (v28 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v24, a1, vCleanupPathStackObj, v18);
          v21 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *))*((_QWORD *)v29 + 349);
          if ( v21 )
          {
            pbo = a7;
            v22 = v21(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL), a1, pco, pxo);
          }
          else
          {
            v22 = -1;
          }
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v24);
          if ( v22 == 1 )
            goto LABEL_18;
          if ( v22 == -1 )
            goto LABEL_19;
        }
        if ( !EPATHOBJ::bFlatten(a1) )
          goto LABEL_19;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v24, a1, vCleanupPathStackObj, v18);
      v20 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *))*((_QWORD *)v29 + 349);
      if ( v20 )
      {
        pbo = a7;
        v19 = v20(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL), a1, pco, pxo);
      }
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v24);
      if ( v19 == 1 )
      {
LABEL_18:
        v15 = 1;
LABEL_19:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v25);
        return v15;
      }
      if ( v19 == -1 )
        goto LABEL_19;
      v13 = v29;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v25);
    v14 = v28;
LABEL_4:
    if ( (plineattrs->fl & 1) == 0 )
      return EngStrokePath(
               (SURFOBJ *)(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL)),
               (PATHOBJ *)a1,
               pco,
               pxo,
               a7,
               pptlBrushOrg,
               plineattrs,
               mix);
    if ( pathwide::bWiden(
           a1,
           a1,
           (struct EPATHOBJ *)pxo,
           (const struct EXFORMOBJ *)plineattrs,
           (const struct _LINEATTRS *)pbo) )
    {
      return *EPATHOBJ_bSimpleFill(&v27, (__int64)a1, v14, (__int64)v13, (__int64)a4, pco, a7, pptlBrushOrg, mix, 2u);
    }
    return 0;
  }
  return 1;
}
