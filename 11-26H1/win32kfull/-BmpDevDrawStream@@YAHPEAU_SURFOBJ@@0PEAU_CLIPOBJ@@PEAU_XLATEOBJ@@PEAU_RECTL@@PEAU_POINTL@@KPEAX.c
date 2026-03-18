/*
 * XREFs of ?BmpDevDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x14030B280
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

__int64 __fastcall BmpDevDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        void *a8,
        struct _DSSTATE *a9)
{
  unsigned int v13; // ebp
  HDEV hdev; // rcx
  __int64 (__fastcall *v15)(__int64, __int64, __int64, __int64, int, int *, unsigned int, __int64, struct _DSSTATE *); // r10
  __int64 v16; // rax
  struct _DISPSURF *i; // rdi
  __int64 v18; // rsi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v20; // r11
  __int64 v22; // [rsp+50h] [rbp-48h] BYREF
  _BYTE v23[8]; // [rsp+58h] [rbp-40h] BYREF
  struct SURFACE *v24; // [rsp+60h] [rbp-38h] BYREF
  struct SURFACE *v25; // [rsp+68h] [rbp-30h] BYREF

  v13 = 0;
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v25, a1);
  BMPDEVOPEN::BMPDEVOPEN((BMPDEVOPEN *)&v24, a2);
  if ( a1 )
  {
    hdev = a1->hdev;
    v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, __int64, struct _DSSTATE *))EngDrawStream;
    if ( *((_QWORD *)hdev + 425) )
      v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, __int64, struct _DSSTATE *))*((_QWORD *)hdev + 425);
    if ( SLODWORD(a1[1].hsurf) >= 0 && (((_DWORD)hdev[10] & 0x20000) == 0 || a1->iType != 3) )
      v15 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64, int, int *, unsigned int, __int64, struct _DSSTATE *))EngDrawStream;
    v13 = v15((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, (int *)a6, a7, (__int64)a8, a9);
    v16 = UserGetHDEV();
    if ( v16 )
    {
      if ( (*(_DWORD *)(v16 + 40) & 0x20000000) != 0 )
      {
        for ( i = **(struct _DISPSURF ***)(v16 + 1784); i; i = *(struct _DISPSURF **)i )
        {
          v18 = *((_QWORD *)i + 6);
          v22 = v18;
          if ( v18
            && (*(_DWORD *)(v18 + 1808) & 0x8000000) != 0
            && (*(_DWORD *)(v18 + 2112) & 0x9000) == 0x9000
            && *(_QWORD *)(*(_QWORD *)(v18 + 1776) + 792LL) )
          {
            MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
              (MARK_ACCDRV_NOTIFICATION *)v23,
              (struct PDEVOBJ *)&v22,
              a1);
            GetDevBitmap(i, a2);
            DevBitmap = GetDevBitmap(i, a1);
            (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, void *, struct _DSSTATE *))(*(_QWORD *)(v18 + 1776) + 792LL))(
              DevBitmap,
              v20,
              a3,
              a4,
              a5,
              a6,
              a7,
              a8,
              a9);
            MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v23);
          }
        }
      }
    }
  }
  BMPDEVOPEN::~BMPDEVOPEN(&v24);
  BMPDEVOPEN::~BMPDEVOPEN(&v25);
  return v13;
}
