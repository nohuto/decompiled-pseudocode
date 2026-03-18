/*
 * XREFs of ?BmpDevLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x14030B830
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x1401874C0 (EngLineTo.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x14020F95C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x140213410 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x14030AD50 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x14030AD98 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmpDevLineTo(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        unsigned int x1,
        LONG y1,
        LONG x2,
        LONG y2,
        RECTL *prclBounds,
        MIX mix)
{
  unsigned int v13; // esi
  __int64 HDEV; // rax
  _QWORD *i; // rbx
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v19; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v20[8]; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v21[2]; // [rsp+60h] [rbp-38h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v21, a1);
  if ( a1 )
  {
    v13 = EngLineTo(a1, pco, pbo, x1, y1, x2, y2, prclBounds, mix);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(_QWORD ***)(HDEV + 1784); i; i = (_QWORD *)*i )
        {
          v16 = i[6];
          v19 = v16;
          if ( v16
            && (*(_DWORD *)(v16 + 1808) & 0x8000000) != 0
            && (*(_DWORD *)(v16 + 2112) & 0x9000) == 0x9000
            && *(_QWORD *)(*(_QWORD *)(v16 + 1776) + 320LL) )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)v20,
              (struct PDEVOBJ *)&v19,
              a1);
            (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, _QWORD, LONG, LONG, LONG, RECTL *, MIX))(*(_QWORD *)(v17 + 1776) + 320LL))(
              a1,
              pco,
              pbo,
              x1,
              y1,
              x2,
              y2,
              prclBounds,
              mix);
            MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v20);
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(v21);
  return v13;
}
