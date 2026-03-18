/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x14030CF10
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x14020F95C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x140213410 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x14030C8B4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x14030CE9C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x14030CEE8 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *prclSrc,
        BLENDOBJ *a7)
{
  BLENDOBJ *pBlendObj; // r13
  struct _DISPSURF *i; // rbx
  __int64 v13; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v15; // r11
  unsigned int v16; // ebx
  __int64 v18; // [rsp+48h] [rbp-A1h] BYREF
  _BYTE v19[8]; // [rsp+50h] [rbp-99h] BYREF
  struct SURFACE *v20; // [rsp+58h] [rbp-91h] BYREF
  struct SURFACE *v21; // [rsp+60h] [rbp-89h] BYREF
  _BYTE v22[160]; // [rsp+68h] [rbp-81h] BYREF
  __int64 HDEV; // [rsp+138h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v21, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v20, a2);
  pBlendObj = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v22, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
          {
            v13 = *((_QWORD *)i + 6);
            v18 = v13;
            if ( v13
              && (*(_DWORD *)(v13 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v13 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v13 + 1776) + 640LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v19,
                (struct PDEVOBJ *)&v18,
                a1);
              GetDevBitmap(i, a2);
              DevBitmap = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(v13 + 1776) + 640LL))(
                DevBitmap,
                v15,
                pco,
                pxlo,
                prclDest,
                prclSrc,
                pBlendObj);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v19);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
      }
    }
  }
  v16 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  REDIROPEN::~REDIROPEN(&v20);
  REDIROPEN::~REDIROPEN(&v21);
  return v16;
}
