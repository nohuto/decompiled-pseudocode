/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x14030EBE0
 * Callers:
 *     <none>
 * Callees:
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x14020F95C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x140213410 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x14030C8B4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x14030CE9C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x14030CEE8 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG a8)
{
  ULONG ulReserved; // r13d
  struct _DISPSURF *i; // rbx
  __int64 v14; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v16; // r11
  unsigned int v17; // ebx
  __int64 v19; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v20[8]; // [rsp+60h] [rbp-A8h] BYREF
  struct SURFACE *v21; // [rsp+68h] [rbp-A0h] BYREF
  struct SURFACE *v22; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v23[160]; // [rsp+78h] [rbp-90h] BYREF
  __int64 HDEV; // [rsp+148h] [rbp+40h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v21, a2);
  ulReserved = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v23, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
          {
            v14 = *((_QWORD *)i + 6);
            v19 = v14;
            if ( v14
              && (*(_DWORD *)(v14 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v14 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v14 + 1776) + 664LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v20,
                (struct PDEVOBJ *)&v19,
                a1);
              GetDevBitmap(i, a2);
              DevBitmap = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(v14 + 1776) + 664LL))(
                DevBitmap,
                v16,
                pco,
                pxlo,
                prclDst,
                prclSrc,
                iTransColor,
                ulReserved);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v20);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
      }
    }
  }
  v17 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  REDIROPEN::~REDIROPEN(&v21);
  REDIROPEN::~REDIROPEN(&v22);
  return v17;
}
