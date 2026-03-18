/*
 * XREFs of ?BmpDevGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1402FC520
 * Callers:
 *     <none>
 * Callees:
 *     EngGradientFill @ 0x1400F77E0 (EngGradientFill.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401DF71C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401E2718 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FBC20 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x1402FBC68 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmpDevGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *pptlDitherOrg,
        ULONG ulMode)
{
  unsigned int v14; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v17; // r9
  __int64 v18; // r9
  __int64 v20; // [rsp+60h] [rbp-48h] BYREF
  _BYTE v21[8]; // [rsp+68h] [rbp-40h] BYREF
  struct SURFACE *v22[2]; // [rsp+70h] [rbp-38h] BYREF

  v14 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v22, a1);
  if ( a1 )
  {
    v14 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1784); i; i = (_QWORD *)*i )
        {
          v17 = i[6];
          v20 = v17;
          if ( v17
            && (*(_DWORD *)(v17 + 1808) & 0x8000000) != 0
            && (*(_DWORD *)(v17 + 2112) & 0x9000) == 0x9000
            && *(_QWORD *)(*(_QWORD *)(v17 + 1776) + 616LL) )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)v21,
              (struct PDEVOBJ *)&v20,
              a1);
            (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v18 + 1776) + 616LL))(
              a1,
              pco,
              pxlo,
              pVertex,
              nVertex,
              pMesh,
              nMesh,
              prclExtents,
              pptlDitherOrg,
              ulMode);
            MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v21);
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(v22);
  return v14;
}
