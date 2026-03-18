/*
 * XREFs of ?RedirStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1402FF290
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     EngStretchBltROP @ 0x140132850 (EngStretchBltROP.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401DF71C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401E2718 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1402FD784 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FDDC0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FDE08 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        BRUSHOBJ *pbo,
        DWORD rop4)
{
  struct _DISPSURF *i; // rdi
  __int64 v18; // rsi
  struct _SURFOBJ *DevBitmap; // rbx
  struct _SURFOBJ *v20; // rax
  __int64 v21; // r11
  unsigned int v22; // ebx
  __int64 v24; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v25[8]; // [rsp+80h] [rbp-88h] BYREF
  struct SURFACE *v26; // [rsp+88h] [rbp-80h] BYREF
  struct SURFACE *v27; // [rsp+90h] [rbp-78h] BYREF
  struct SURFACE *v28[2]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v29[144]; // [rsp+A8h] [rbp-60h] BYREF
  __int64 HDEV; // [rsp+168h] [rbp+60h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v28, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a2);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a3);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v29, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
          {
            v18 = *((_QWORD *)i + 6);
            v24 = v18;
            if ( v18
              && (*(_DWORD *)(v18 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v18 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v18 + 1776) + 624LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v25,
                (struct PDEVOBJ *)&v24,
                a1);
              DevBitmap = GetDevBitmap(i, a3);
              GetDevBitmap(i, a2);
              v20 = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*(_QWORD *)(v18 + 1776) + 624LL))(
                v20,
                v21,
                DevBitmap,
                pco,
                pxlo,
                pca,
                pptlHTOrg,
                prclDest,
                prclSrc,
                pptlMask,
                iMode,
                pbo,
                rop4);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v25);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v29);
      }
    }
  }
  v22 = EngStretchBltROP(a1, a2, a3, pco, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
  REDIROPEN::~REDIROPEN(&v26);
  REDIROPEN::~REDIROPEN(&v27);
  REDIROPEN::~REDIROPEN(v28);
  return v22;
}
