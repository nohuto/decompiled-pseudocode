/*
 * XREFs of ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400A2EAC
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x14000F5CC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A32F0 (-EPATHOBJ_bSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     IsPathBoundsInRange @ 0x1400A3994 (IsPathBoundsInRange.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     EngStrokeAndFillPath @ 0x1400E48A0 (EngStrokeAndFillPath.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

BOOL __fastcall EPATHOBJ_bSimpleStrokeAndFill(
        struct EPATHOBJ *a1,
        unsigned int a2,
        HDEV a3,
        struct SURFACE *a4,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *a8,
        BRUSHOBJ *pboFill,
        struct _POINTL *pptlBrushOrg,
        MIX a11,
        FLONG flOptions)
{
  MIX mixFill; // r15d
  __int64 v14; // rcx
  char v16; // r12
  HDEV v17; // r11
  int v18; // edi
  int v19; // eax
  int v20; // ebx
  LINEATTRS *plineattrs; // r13
  int v22; // ecx
  int v23; // r8d
  CLIPOBJ *v24; // r12
  __int64 v26; // r9
  int v27; // r12d
  __int64 (__fastcall *v28)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // r10
  __int64 (__fastcall *v29)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG); // r10
  _OWORD v30[2]; // [rsp+68h] [rbp-49h] BYREF
  _OWORD v31[2]; // [rsp+88h] [rbp-29h] BYREF
  __int64 v32; // [rsp+A8h] [rbp-9h]
  char v33; // [rsp+F8h] [rbp+47h] BYREF
  unsigned int v34; // [rsp+100h] [rbp+4Fh]
  HDEV v35; // [rsp+108h] [rbp+57h]

  v35 = a3;
  v34 = a2;
  mixFill = a11;
  v14 = *((_QWORD *)a1 + 1) + 48LL;
  v16 = a2;
  memset(v30, 0, sizeof(v30));
  v18 = 0;
  if ( !(unsigned __int8)IsPathBoundsInRange(v14) )
    return 0;
  if ( !*((_DWORD *)a1 + 1) )
    return 1;
  v19 = *((_DWORD *)a4 + 28);
  v20 = 1;
  ++*((_DWORD *)a4 + 23);
  plineattrs = a8;
  if ( (v19 & 0x80u) != 0 )
  {
    memset(v31, 0, sizeof(v31));
    v32 = 0LL;
    PRECOMPUTE::vInit(v31, a4, v17, a1, pco, pxo, a8, mixFill, flOptions, 2);
    if ( !v32 )
    {
      EngSetLastError(8u);
      goto LABEL_28;
    }
    if ( (plineattrs->fl & 1) == 0 || (v16 & 2) != 0 )
    {
      v27 = -1;
      if ( (*(_BYTE *)a1 & 1) != 0 )
      {
        if ( (v34 & 1) != 0 )
        {
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v30, a1, vCleanupPathStackObj, v26);
          v28 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))*((_QWORD *)v35 + 351);
          if ( v28 )
            v27 = v28(
                    ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                    a1,
                    pco,
                    pxo,
                    pboStroke,
                    plineattrs,
                    pboFill,
                    pptlBrushOrg,
                    mixFill,
                    flOptions);
          if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v30);
          if ( v27 == 1 )
            goto LABEL_27;
          if ( v27 == -1 )
            goto LABEL_28;
          v27 = -1;
        }
        if ( !EPATHOBJ::bFlatten(a1) )
          goto LABEL_28;
      }
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v30, a1, vCleanupPathStackObj, v26);
      v29 = (__int64 (__fastcall *)(unsigned __int64, struct EPATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, struct _POINTL *, MIX, FLONG))*((_QWORD *)v35 + 351);
      if ( v29 )
        v27 = v29(
                ((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL),
                a1,
                pco,
                pxo,
                pboStroke,
                plineattrs,
                pboFill,
                pptlBrushOrg,
                mixFill,
                flOptions);
      if ( (*(_DWORD *)(*((_QWORD *)a1 + 1) + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v30);
      if ( v27 == 1 )
      {
LABEL_27:
        v18 = 1;
LABEL_28:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v31);
        return v18;
      }
      if ( v27 == -1 )
        goto LABEL_28;
    }
    PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v31);
    v17 = v35;
  }
  if ( (plineattrs->fl & 1) != 0
    && ((unsigned __int8)mixFill != 13 || (unsigned int)(*(_DWORD *)(*((_QWORD *)a4 + 6) + 2124LL) - 1) > 1) )
  {
    return EngStrokeAndFillPath(
             (SURFOBJ *)(((unsigned __int64)a4 + 24) & -(__int64)(a4 != 0LL)),
             (PATHOBJ *)a1,
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
    mixFill = v22 | (unsigned __int8)mixFill;
  v24 = pco;
  if ( !*(_DWORD *)EPATHOBJ_bSimpleFill(&v33, a1, v34, v17, a4, pco, pboFill, pptlBrushOrg, v23, flOptions)
    || !(unsigned int)EPATHOBJ_bSimpleStroke(a1, v34, v35, a4, v24, pxo, pboStroke, pptlBrushOrg, plineattrs, mixFill) )
  {
    return 0;
  }
  return v20;
}
