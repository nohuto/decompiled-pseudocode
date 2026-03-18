/*
 * XREFs of ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1402FE430
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     EngDrawStream @ 0x140171570 (EngDrawStream.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401DF71C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401E2718 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1402FD784 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FDDC0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FDE08 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirDrawStream(
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
  struct _DSSTATE *v13; // r13
  struct _DISPSURF *i; // rbx
  __int64 v15; // rdi
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v17; // r11
  unsigned int v18; // ebx
  __int64 v20; // [rsp+58h] [rbp-A1h] BYREF
  _BYTE v21[8]; // [rsp+60h] [rbp-99h] BYREF
  struct SURFACE *v22; // [rsp+68h] [rbp-91h] BYREF
  struct SURFACE *v23; // [rsp+70h] [rbp-89h] BYREF
  _BYTE v24[144]; // [rsp+78h] [rbp-81h] BYREF
  __int64 HDEV; // [rsp+138h] [rbp+3Fh] BYREF

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
              && *(_QWORD *)(*(_QWORD *)(v15 + 1776) + 792LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v21,
                (struct PDEVOBJ *)&v20,
                a1);
              GetDevBitmap(i, a2);
              DevBitmap = GetDevBitmap(i, a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, void *, struct _DSSTATE *))(*(_QWORD *)(v15 + 1776) + 792LL))(
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
  v18 = EngDrawStream((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, (int *)a6, a7, (__int64)a8, v13);
  REDIROPEN::~REDIROPEN(&v22);
  REDIROPEN::~REDIROPEN(&v23);
  return v18;
}
