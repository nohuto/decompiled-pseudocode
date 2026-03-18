/*
 * XREFs of ?EPATHOBJ_bSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400A32F0
 * Callers:
 *     ?EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1400A2118 (-EPATHOBJ_bStrokeAndOrFill@@YAHPEAVEPATHOBJ@@AEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     ?EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@5PEAU_POINTL@@KK@Z @ 0x1400A2EAC (-EPATHOBJ_bSimpleStrokeAndFill@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXF.c)
 *     ?EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1400A3624 (-EPATHOBJ_bSimpleStroke@@YAHPEAVEPATHOBJ@@KPEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@.c)
 *     ?bProxyDrvTextOut@@YA?AV?$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOBJ@@PEAU_RECTL@@4PEAU_BRUSHOBJ@@5PEAU_POINTL@@AEAVRFONTOBJ@@PEAUHDEV__@@K4@Z @ 0x1400D9D50 (-bProxyDrvTextOut@@YA-AV-$ReturnValueTracer@H@@AEAVXDCOBJ@@PEAVSURFACE@@AEAVESTROBJ@@AEAVECLIPOB.c)
 *     ?EPATHOBJ_bTextOutSimpleFill@@YA?AV?$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ@@PEAUHDEV__@@PEAVSURFACE@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x140301534 (-EPATHOBJ_bTextOutSimpleFill@@YA-AV-$ReturnValueTracer@H@@PEAVEPATHOBJ@@AEAVXDCOBJ@@AEAVRFONTOBJ.c)
 * Callees:
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x14000F5CC (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ??0?$ReturnValueTracer@K@@QEAA@K@Z @ 0x14001680C (--0-$ReturnValueTracer@K@@QEAA@K@Z.c)
 *     IsPathBoundsInRange @ 0x1400A3994 (IsPathBoundsInRange.c)
 *     EngFillPath @ 0x1400A3A10 (EngFillPath.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1400DDA04 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAUHDEV__@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAVEXFORMOBJ@@PEBU.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

_DWORD *__fastcall EPATHOBJ_bSimpleFill(
        _DWORD *a1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *pptlBrushOrg,
        MIX mix,
        FLONG flOptions)
{
  __int64 v11; // rcx
  __int64 v14; // r11
  BOOL v15; // edx
  __int64 v17; // r9
  int v18; // r12d
  __int64 (__fastcall *v19)(__int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rax
  int v20; // r15d
  int v21; // edx
  __int64 (__fastcall *v22)(__int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rax
  _OWORD v23[2]; // [rsp+58h] [rbp-49h] BYREF
  _OWORD v24[2]; // [rsp+78h] [rbp-29h] BYREF
  __int64 v25; // [rsp+98h] [rbp-9h]

  v11 = *(_QWORD *)(a2 + 8) + 48LL;
  memset(v23, 0, sizeof(v23));
  if ( !(unsigned __int8)IsPathBoundsInRange(v11) )
  {
    v15 = 0;
    goto LABEL_5;
  }
  if ( !*(_DWORD *)(a2 + 4) )
  {
    v15 = 1;
    goto LABEL_5;
  }
  if ( (*(_DWORD *)(a5 + 112) & 0x40) != 0
    && ((a3 & 8) != 0 && (flOptions & 2) != 0 || (flOptions & 2) == 0 && (a3 & 4) != 0) )
  {
    memset(v24, 0, sizeof(v24));
    v25 = 0LL;
    PRECOMPUTE::vInit(v24, a5, v14, a2, pco, 0LL, 0LL, mix, flOptions, 1);
    if ( v25 )
    {
      v18 = -1;
      if ( (*(_BYTE *)a2 & 1) == 0 )
        goto LABEL_33;
      if ( (a3 & 1) == 0 )
        goto LABEL_40;
      ++*(_DWORD *)(a5 + 92);
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
        PushThreadGuardedObject(v23, a2, vCleanupPathStackObj, v17);
      v19 = *(__int64 (__fastcall **)(__int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(a4 + 2800);
      if ( v19 )
        v20 = v19((a5 + 24) & -(__int64)(a5 != 0), a2, pco, pbo, pptlBrushOrg, mix, flOptions);
      else
        v20 = -1;
      if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
        PopThreadGuardedObject(v23);
      if ( v20 == 1 )
        goto LABEL_20;
      if ( v20 != -1 )
      {
LABEL_40:
        if ( EPATHOBJ::bFlatten((EPATHOBJ *)a2) )
        {
LABEL_33:
          ++*(_DWORD *)(a5 + 92);
          if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
            PushThreadGuardedObject(v23, a2, vCleanupPathStackObj, v17);
          v22 = *(__int64 (__fastcall **)(__int64, __int64, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(a4 + 2800);
          if ( v22 )
            v18 = v22((a5 + 24) & -(__int64)(a5 != 0), a2, pco, pbo, pptlBrushOrg, mix, flOptions);
          if ( (*(_DWORD *)(*(_QWORD *)(a2 + 8) + 88LL) & 1) != 0 )
            PopThreadGuardedObject(v23);
          if ( v18 == 1 )
          {
LABEL_20:
            v21 = 1;
LABEL_21:
            ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v21);
            PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
            return a1;
          }
          if ( v18 != -1 )
          {
            PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v24);
            goto LABEL_4;
          }
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    v21 = 0;
    goto LABEL_21;
  }
LABEL_4:
  ++*(_DWORD *)(a5 + 92);
  v15 = EngFillPath((SURFOBJ *)((a5 + 24) & -(__int64)(a5 != 0)), (PATHOBJ *)a2, pco, pbo, pptlBrushOrg, mix, flOptions);
LABEL_5:
  ReturnValueTracer<unsigned long>::ReturnValueTracer<unsigned long>(a1, v15);
  return a1;
}
