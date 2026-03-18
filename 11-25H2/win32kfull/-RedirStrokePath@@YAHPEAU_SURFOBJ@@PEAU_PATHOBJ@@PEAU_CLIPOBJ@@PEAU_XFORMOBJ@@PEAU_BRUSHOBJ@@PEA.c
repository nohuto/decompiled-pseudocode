/*
 * XREFs of ?RedirStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1402FF710
 * Callers:
 *     <none>
 * Callees:
 *     EngStrokePath @ 0x14006C7B0 (EngStrokePath.c)
 *     ??0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z @ 0x14007E404 (--0DEVLOCKOBJ@@QEAA@AEAVPDEVOBJ@@@Z.c)
 *     ??1DEVLOCKOBJ@@QEAA@XZ @ 0x14008A870 (--1DEVLOCKOBJ@@QEAA@XZ.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1401DF71C (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ @ 0x1401E2718 (--1MARK_ACCDRV_NOTIFICATION@@QEAA@XZ.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1402FDDC0 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ??1REDIROPEN@@QEAA@XZ @ 0x1402FDE08 (--1REDIROPEN@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x140342490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall RedirStrokePath(
        struct _SURFOBJ *a1,
        PATHOBJ *ppo,
        CLIPOBJ *pco,
        XFORMOBJ *pxo,
        BRUSHOBJ *pbo,
        POINTL *a6,
        LINEATTRS *a7,
        MIX a8)
{
  MIX mix; // r15d
  LINEATTRS *plineattrs; // r12
  POINTL *pptlBrushOrg; // r13
  _QWORD *i; // rbx
  __int64 v16; // r9
  __int64 v17; // r9
  unsigned int v18; // ebx
  __int64 v20; // [rsp+50h] [rbp-D8h] BYREF
  _BYTE v21[8]; // [rsp+58h] [rbp-D0h] BYREF
  struct SURFACE *v22[2]; // [rsp+60h] [rbp-C8h] BYREF
  _BYTE v23[144]; // [rsp+70h] [rbp-B8h] BYREF
  __int64 HDEV; // [rsp+130h] [rbp+8h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)v22, a1);
  mix = a8;
  plineattrs = a7;
  pptlBrushOrg = a6;
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
          for ( i = **(_QWORD ***)(HDEV + 1784); i; i = (_QWORD *)*i )
          {
            v16 = i[6];
            v20 = v16;
            if ( v16
              && (*(_DWORD *)(v16 + 1808) & 0x8000000) != 0
              && (*(_DWORD *)(v16 + 2112) & 0x8000) != 0
              && *(_QWORD *)(*(_QWORD *)(v16 + 1776) + 184LL) )
            {
              MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                (MARK_ACCDRV_NOTIFICATION *)v21,
                (struct PDEVOBJ *)&v20,
                a1);
              (*(void (__fastcall **)(struct _SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(v17 + 1776) + 184LL))(
                a1,
                ppo,
                pco,
                pxo,
                pbo,
                pptlBrushOrg,
                plineattrs,
                mix);
              MARK_ACCDRV_NOTIFICATION::~MARK_ACCDRV_NOTIFICATION((MARK_ACCDRV_NOTIFICATION *)v21);
            }
          }
        }
        DEVLOCKOBJ::~DEVLOCKOBJ((DEVLOCKOBJ *)v23);
      }
    }
  }
  v18 = EngStrokePath(a1, ppo, pco, pxo, pbo, pptlBrushOrg, plineattrs, mix);
  REDIROPEN::~REDIROPEN(v22);
  return v18;
}
