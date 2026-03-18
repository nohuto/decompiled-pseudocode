/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x140067F50
 * Callers:
 *     <none>
 * Callees:
 *     OffAlphaBlend @ 0x140067298 (OffAlphaBlend.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

BOOL __fastcall SpAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _BLENDOBJ *pBlendObj)
{
  int v7; // r15d
  HDEV hdev; // rax
  int v10; // r13d
  struct _SURFOBJ *v12; // rsi
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  int v15; // eax
  PVOID *v16; // rbx
  CLIPOBJ *v17; // r12
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  struct _POINTL v19; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *ppco; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v21; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  int v26[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v27[912]; // [rsp+90h] [rbp-70h] BYREF

  v7 = 0;
  v19.x = 0;
  v25 = (__int64)a4;
  hdev = a2->hdev;
  v10 = 1;
  v21 = a1;
  ppco = a3;
  v24 = (__int64)prclDest;
  v23 = (__int64)prclSrc;
  v22 = (__int64)pBlendObj;
  v19 = 0LL;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v27, a1, a3, prclDest);
    *(_QWORD *)v26 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v27, &v21, &v19, &ppco) )
          return v10;
        v12 = v21;
        p_pvScan0 = 0LL;
        if ( v21 )
        {
          hsurf = (int)v21[1].hsurf;
          if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v21[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>(v21->hdev);
          }
        }
        v15 = (int)a2[1].hsurf;
        v16 = 0LL;
        if ( ((v15 & 0x4000) != 0 || v15 < 0) && (v15 & 0x200) == 0 )
        {
          v16 = &a2[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>(a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v16 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v16[6]);
LABEL_22:
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(p_pvScan0[6]);
      }
      v17 = ppco;
      if ( v12->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v12)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x10000) != 0 )
        {
          v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)GreGetCurrentThread() + 34) + 120LL);
          goto LABEL_17;
        }
        if ( v12->iType == 1
          && (unsigned int)bAllowShareAccess(v12)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86)) )
        {
LABEL_43:
          v18 = EngAlphaBlend;
          goto LABEL_17;
        }
      }
      if ( ((__int64)v12[1].hsurf & 0x10000) == 0 )
        goto LABEL_43;
      v7 |= 1u;
      v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v12->hdev + 170);
LABEL_17:
      v10 &= OffAlphaBlend(
               (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v18,
               (LONG *)&v19,
               (__int64)v12,
               v26,
               (__int64)a2,
               v17,
               v25,
               (__int128 *)v24,
               (__int128 *)v23,
               v22);
      if ( (v7 & 1) != 0 )
        v7 &= ~1u;
      if ( v16 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v16[6]);
      if ( p_pvScan0 )
        goto LABEL_22;
    }
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
