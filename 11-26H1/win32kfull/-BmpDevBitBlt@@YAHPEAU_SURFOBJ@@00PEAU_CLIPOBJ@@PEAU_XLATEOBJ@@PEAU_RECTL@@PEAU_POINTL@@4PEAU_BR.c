/*
 * XREFs of ?BmpDevBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x14030AFB0
 * Callers:
 *     ?BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z @ 0x14030B230 (-BmpDevCopyBits@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@@Z.c)
 * Callees:
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x14020F95C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x140213410 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x14030AD50 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x14030AD98 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x14030C8B4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmpDevBitBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v15; // ebp
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rax
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rdi
  __int64 v19; // rsi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v21; // r11
  __int64 v23; // [rsp+60h] [rbp-58h] BYREF
  _BYTE v24[8]; // [rsp+68h] [rbp-50h] BYREF
  struct SURFACE *v25; // [rsp+70h] [rbp-48h] BYREF
  struct SURFACE *v26; // [rsp+78h] [rbp-40h] BYREF
  struct SURFACE *v27[2]; // [rsp+80h] [rbp-38h] BYREF

  v15 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)v27, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v26, a2);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a3);
  if ( a1 )
  {
    v16 = ((__int64)a1[1].hsurf & 1) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a1->hdev + 353)
        : EngBitBlt;
    v15 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))v16)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8,
            a9,
            a10,
            a11);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
        {
          v19 = *((_QWORD *)i + 6);
          v23 = v19;
          if ( v19
            && (*(_DWORD *)(v19 + 1808) & 0x8000000) != 0
            && (*(_DWORD *)(v19 + 2112) & 0x9000) == 0x9000
            && *(_QWORD *)(*(_QWORD *)(v19 + 1776) + 216LL) )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)v24,
              (struct PDEVOBJ *)&v23,
              a1);
            GetDevBitmap(i, a2);
            DevBitmap = GetDevBitmap(i, a1);
            (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int))(*(_QWORD *)(v19 + 1776) + 216LL))(
              DevBitmap,
              v21,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9,
              a10,
              a11);
            MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v24);
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v25);
  BMPDEVOPEN::~BMPDEVOPEN(&v26);
  BMPDEVOPEN::~BMPDEVOPEN(v27);
  return v15;
}
