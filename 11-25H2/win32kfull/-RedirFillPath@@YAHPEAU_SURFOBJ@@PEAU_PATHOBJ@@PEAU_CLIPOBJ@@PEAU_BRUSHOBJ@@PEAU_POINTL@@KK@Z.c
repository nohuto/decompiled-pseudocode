/*
 * XREFs of ?RedirFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1402FE630
 * Callers:
 *     <none>
 * Callees:
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     EngFillPath @ 0x1400A3A10 (EngFillPath.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401DF71C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401E2718 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FDDC0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FDE08 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirFillPath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        BRUSHOBJ *pbo,
        POINTL *a5,
        MIX a6,
        FLONG a7)
{
  FLONG flOptions; // r15d
  MIX mix; // r12d
  POINTL *pptlBrushOrg; // r13
  _QWORD *i; // rbx
  __int64 v15; // r9
  __int64 v16; // r9
  unsigned int v17; // ebx
  __int64 v19; // [rsp+40h] [rbp-D8h] BYREF
  _BYTE v20[8]; // [rsp+48h] [rbp-D0h] BYREF
  struct SURFACE *v21[2]; // [rsp+50h] [rbp-C8h] BYREF
  _BYTE v22[144]; // [rsp+60h] [rbp-B8h] BYREF
  __int64 HDEV; // [rsp+120h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v21, a1);
  flOptions = a7;
  mix = a6;
  pptlBrushOrg = a5;
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
          for ( i = **(_QWORD ***)(HDEV + 1784); i; i = (_QWORD *)*i )
          {
            v15 = i[6];
            v19 = v15;
            if ( v15
              && (*(_DWORD *)(v15 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v15 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v15 + 1776) + 192LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v20,
                (struct PDEVOBJ *)&v19,
                a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(v16 + 1776) + 192LL))(
                a1,
                ppo,
                pco,
                pbo,
                pptlBrushOrg,
                mix,
                flOptions);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v20);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v22);
      }
    }
  }
  v17 = EngFillPath(a1, ppo, pco, pbo, pptlBrushOrg, mix, flOptions);
  REDIROPEN::~REDIROPEN(v21);
  return v17;
}
