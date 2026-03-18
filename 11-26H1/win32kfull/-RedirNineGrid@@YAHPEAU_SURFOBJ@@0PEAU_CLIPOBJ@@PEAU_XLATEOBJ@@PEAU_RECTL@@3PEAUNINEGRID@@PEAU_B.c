/*
 * XREFs of ?RedirNineGrid@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAUNINEGRID@@PEAU_BLENDOBJ@@PEAX@Z @ 0x14030DC80
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14006BE08 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14006EFE0 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     EngNineGrid @ 0x1400DF040 (EngNineGrid.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x14020F95C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x140213410 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x14030C8B4 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x14030CE9C (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x14030CEE8 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirNineGrid(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _RECTL *a6,
        struct NINEGRID *a7,
        struct _BLENDOBJ *a8,
        void *a9)
{
  void *v13; // r13
  struct _DISPSURF *i; // rbx
  __int64 v15; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v17; // r11
  unsigned int v18; // ebx
  __int64 v20; // [rsp+58h] [rbp-B0h] BYREF
  _BYTE v21[8]; // [rsp+60h] [rbp-A8h] BYREF
  struct SURFACE *v22; // [rsp+68h] [rbp-A0h] BYREF
  struct SURFACE *v23; // [rsp+70h] [rbp-98h] BYREF
  _BYTE v24[160]; // [rsp+78h] [rbp-90h] BYREF
  __int64 HDEV; // [rsp+148h] [rbp+40h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v23, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v22, a2);
  v13 = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      if ( HDEV )
      {
        DEVLOCKOBJ::DEVLOCKOBJ((DEVLOCKOBJ *)v24, (struct PDEVOBJ *)&HDEV);
        if ( (*(_DWORD *)(HDEV + 40) & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(HDEV + 1784); i; i = *(struct _DISPSURF **)i )
          {
            v15 = *((_QWORD *)i + 6);
            v20 = v15;
            if ( v15
              && (*(_DWORD *)(v15 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v15 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v15 + 1776) + 800LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v21,
                (struct PDEVOBJ *)&v20,
                a1);
              GetDevBitmap(i, a2);
              DevBitmap = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _RECTL *, struct NINEGRID *, struct _BLENDOBJ *, void *))(*(_QWORD *)(v15 + 1776) + 800LL))(
                DevBitmap,
                v17,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8,
                v13);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v21);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v24);
      }
    }
  }
  v18 = EngNineGrid((int)a1, (__int64)a2, (int)a3, (int)a4, (__int64)a5, (__int64)a6, (__int64)a7, (__int64)a8);
  REDIROPEN::~REDIROPEN(&v22);
  REDIROPEN::~REDIROPEN(&v23);
  return v18;
}
