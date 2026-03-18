/*
 * XREFs of ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400845B8
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x140117414 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x140067E34 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400A2640 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1401170D8 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x140117E38 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     IsPathBoundsInRange @ 0x1401187C0 (IsPathBoundsInRange.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

BOOL __fastcall EPATHOBJ_bSimpleStrokeAndFill(
        struct _PATHOBJ *a1,
        unsigned int a2,
        HDEV a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX a11,
        FLONG flOptions)
{
  __int64 v14; // rcx
  char v15; // r12
  HDEV v16; // r11
  int v17; // edi
  MIX mixFill; // r15d
  unsigned __int64 v19; // r13
  int v20; // ebx
  struct _LINEATTRS *v21; // r12
  int v22; // edx
  int v23; // r8d
  struct _CLIPOBJ *v24; // r13
  int v26; // edx
  LINEATTRS *v27; // rdx
  int v28; // r12d
  __int64 (__fastcall *v29)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // r10
  __int64 (__fastcall *v30)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // r10
  _OWORD v31[2]; // [rsp+68h] [rbp-49h] BYREF
  _OWORD v32[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-9h]
  char v34; // [rsp+F8h] [rbp+47h] BYREF
  unsigned int v35; // [rsp+100h] [rbp+4Fh]
  HDEV v36; // [rsp+108h] [rbp+57h]

  v36 = a3;
  v35 = a2;
  v14 = *(_QWORD *)&a1[1] + 48LL;
  v15 = a2;
  memset(v31, 0, sizeof(v31));
  v17 = 0;
  if ( !(unsigned __int8)IsPathBoundsInRange(v14) )
    return 0;
  if ( !a1->cCurves )
    return 1;
  mixFill = a11;
  v19 = (unsigned __int64)a4 + 24;
  v20 = 1;
  ++*((_DWORD *)a4 + 23);
  if ( (*((_DWORD *)a4 + 28) & 0x80u) != 0 )
  {
    memset(v32, 0, sizeof(v32));
    v33 = 0LL;
    PRECOMPUTE::vInit(v32, a4, v16, a1, pco, pxo, plineattrs, mixFill, flOptions, 2);
    if ( !v33 )
    {
      EngSetLastError(8u);
      goto LABEL_30;
    }
    v27 = plineattrs;
    if ( (plineattrs->fl & 1) == 0 || (v15 & 2) != 0 )
    {
      v28 = -1;
      if ( (a1->fl & 1) != 0 )
      {
        if ( (v35 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
          {
            PushThreadGuardedObject(v31, a1, vCleanupPathStackObj);
            v27 = plineattrs;
          }
          v29 = (__int64 (__fastcall *)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))*((_QWORD *)v36 + 351);
          if ( v29 )
            v28 = v29(
                    v19 & -(__int64)(a4 != 0LL),
                    a1,
                    pco,
                    pxo,
                    pboStroke,
                    v27,
                    pboFill,
                    pptlBrushOrg,
                    mixFill,
                    flOptions);
          if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v31);
          if ( v28 == 1 )
            goto LABEL_29;
          if ( v28 == -1 )
            goto LABEL_30;
          v28 = -1;
        }
        if ( !EPATHOBJ::bFlatten((EPATHOBJ *)a1) )
          goto LABEL_30;
      }
      if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v31, a1, vCleanupPathStackObj);
      v30 = (__int64 (__fastcall *)(unsigned __int64, struct _PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))*((_QWORD *)v36 + 351);
      if ( v30 )
        v28 = v30(
                v19 & -(__int64)(a4 != 0LL),
                a1,
                pco,
                pxo,
                pboStroke,
                plineattrs,
                pboFill,
                pptlBrushOrg,
                mixFill,
                flOptions);
      if ( (*(_DWORD *)(*(_QWORD *)&a1[1] + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v31);
      if ( v28 == 1 )
      {
LABEL_29:
        v17 = 1;
LABEL_30:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
        return v17;
      }
      if ( v28 == -1 )
        goto LABEL_30;
      v19 = (unsigned __int64)a4 + 24;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
    v16 = v36;
  }
  v21 = plineattrs;
  if ( (plineattrs->fl & 1) != 0 )
  {
    if ( (unsigned __int8)mixFill != 13 )
      return EngStrokeAndFillPath(
               (SURFOBJ *)(v19 & -(__int64)(a4 != 0LL)),
               a1,
               pco,
               pxo,
               pboStroke,
               plineattrs,
               pboFill,
               pptlBrushOrg,
               mixFill,
               flOptions);
    v26 = *(_DWORD *)(*((_QWORD *)a4 + 6) + 2124LL);
    if ( v26 != 1 && v26 != 2 )
      return EngStrokeAndFillPath(
               (SURFOBJ *)(v19 & -(__int64)(a4 != 0LL)),
               a1,
               pco,
               pxo,
               pboStroke,
               plineattrs,
               pboFill,
               pptlBrushOrg,
               mixFill,
               flOptions);
  }
  v22 = (unsigned __int8)mixFill << 8;
  v23 = mixFill;
  if ( !_bittest((const signed __int32 *)&pboFill[5], 0xFu) )
    v23 = (unsigned __int8)mixFill | v22;
  if ( !_bittest((const signed __int32 *)&pboStroke[5], 0xFu) )
    mixFill = (unsigned __int8)mixFill | v22;
  v24 = pco;
  if ( !*(_DWORD *)EPATHOBJ_bSimpleFill(&v34, a1, v35, v16, a4, pco, pboFill, pptlBrushOrg, v23, flOptions)
    || !(unsigned int)EPATHOBJ_bSimpleStroke(
                        a1,
                        v35,
                        v36,
                        a4,
                        v24,
                        (struct EXFORMOBJ *)pxo,
                        pboStroke,
                        pptlBrushOrg,
                        v21,
                        mixFill) )
  {
    return 0;
  }
  return v20;
}
