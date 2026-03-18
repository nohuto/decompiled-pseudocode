/*
 * XREFs of ?BmpDevStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x14030C120
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokeAndFillPath @ 0x140084A20 (EngStrokeAndFillPath.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x14020F95C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x140213410 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x14030AD50 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x14030AD98 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmpDevStrokeAndFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pboStroke,
        LINEATTRS *plineattrs,
        BRUSHOBJ *pboFill,
        POINTL *pptlBrushOrg,
        MIX mixFill,
        FLONG flOptions)
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
    v14 = EngStrokeAndFillPath(a1, ppo, pco, pxo, pboStroke, plineattrs, pboFill, pptlBrushOrg, mixFill, flOptions);
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
            && *(_QWORD *)(*(_QWORD *)(v17 + 1776) + 200LL) )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)v21,
              (struct PDEVOBJ *)&v20,
              a1);
            (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v18 + 1776) + 200LL))(
              a1,
              ppo,
              pco,
              pxo,
              pboStroke,
              plineattrs,
              pboFill,
              pptlBrushOrg,
              mixFill,
              flOptions);
            MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v21);
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(v22);
  return v14;
}
