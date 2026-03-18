/*
 * XREFs of ?BmpDevAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x14030ADC0
 * Callers:
 *     <none>
 * Callees:
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x14020F95C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x140213410 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x14030AD50 (--0BMPDEVOPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1BMPDEVOPEN@@QEAA@XZ @ 0x14030AD98 (--1BMPDEVOPEN@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x14030C8B4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall BmpDevAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct _BLENDOBJ *a7)
{
  unsigned int v11; // ebp
  BOOL (__stdcall *v12)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rax
  __int64 HDEV; // rax
  struct _DISPSURF *i; // rbx
  __int64 v15; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v17; // r11
  __int64 v19; // [rsp+40h] [rbp-48h] BYREF
  _BYTE v20[8]; // [rsp+48h] [rbp-40h] BYREF
  struct SURFACE *v21; // [rsp+50h] [rbp-38h] BYREF
  struct SURFACE *v22; // [rsp+58h] [rbp-30h] BYREF

  v11 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v22, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v21, a2);
  if ( a1 )
  {
    v12 = ((__int64)a1[1].hsurf & 0x10000) != 0
        ? (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)a1->hdev + 406)
        : EngAlphaBlend;
    v11 = ((__int64 (__fastcall *)(struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))v12)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7);
    HDEV = UserGetHDEV();
    if ( HDEV )
    {
      if ( (*(_DWORD *)(HDEV + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
        {
          v15 = *((_QWORD *)i + 6);
          v19 = v15;
          if ( v15
            && (*(_DWORD *)(v15 + 1808) & 0x8000000) != 0
            && (*(_DWORD *)(v15 + 2112) & 0x9000) == 0x9000
            && *(_QWORD *)(*(_QWORD *)(v15 + 1776) + 640LL) )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)v20,
              (struct PDEVOBJ *)&v19,
              a1);
            GetDevBitmap(i, a2);
            DevBitmap = GetDevBitmap(i, a1);
            (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct _BLENDOBJ *))(*(_QWORD *)(v15 + 1776) + 640LL))(
              DevBitmap,
              v17,
              a3,
              a4,
              a5,
              a6,
              a7);
            MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v20);
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v21);
  BMPDEVOPEN::~BMPDEVOPEN(&v22);
  return v11;
}
