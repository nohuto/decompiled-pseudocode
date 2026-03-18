/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x140060540
 * Callers:
 *     <none>
 * Callees:
 *     OffTransparentBlt @ 0x14006088C (OffTransparentBlt.c)
 *     EngTransparentBlt @ 0x1400609D0 (EngTransparentBlt.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

BOOL __fastcall SpTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  int v8; // r15d
  HDEV hdev; // rax
  int v11; // r13d
  struct _SURFOBJ *v13; // rsi
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  int v16; // eax
  PVOID *v17; // rbx
  CLIPOBJ *v18; // r12
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  struct _POINTL v20; // [rsp+60h] [rbp-A0h] BYREF
  CLIPOBJ *ppco; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v22; // [rsp+70h] [rbp-90h] BYREF
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  int v26[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v27[912]; // [rsp+A0h] [rbp-60h] BYREF

  v8 = 0;
  v20.x = 0;
  v25 = (__int64)a4;
  v22 = a1;
  hdev = a2->hdev;
  v11 = 1;
  ppco = a3;
  v24 = (__int64)prclDst;
  v23 = (__int64)prclSrc;
  v20 = 0LL;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v27, a1, a3, prclDst);
    *(_QWORD *)v26 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v27, &v22, &v20, &ppco) )
          return v11;
        v13 = v22;
        p_pvScan0 = 0LL;
        if ( v22 )
        {
          hsurf = (int)v22[1].hsurf;
          if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v22[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>(v22->hdev);
          }
        }
        v16 = (int)a2[1].hsurf;
        v17 = 0LL;
        if ( ((v16 & 0x4000) != 0 || v16 < 0) && (v16 & 0x200) == 0 )
        {
          v17 = &a2[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>(a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v17 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v17[6]);
LABEL_22:
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(p_pvScan0[6]);
      }
      v18 = ppco;
      if ( v13->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v13)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 0x8000) != 0 )
        {
          v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)GreGetCurrentThread() + 34) + 112LL);
          goto LABEL_17;
        }
        if ( v13->iType == 1
          && (unsigned int)bAllowShareAccess(v13)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 85) || *((_DWORD *)GreGetCurrentThread() + 86)) )
        {
LABEL_43:
          v19 = EngTransparentBlt;
          goto LABEL_17;
        }
      }
      if ( ((__int64)v13[1].hsurf & 0x8000) == 0 )
        goto LABEL_43;
      v8 |= 1u;
      v19 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v13->hdev + 169);
LABEL_17:
      v11 &= OffTransparentBlt(
               (int)v19,
               (int)&v20,
               (int)v13,
               (int)v26,
               (__int64)a2,
               v18,
               v25,
               v24,
               v23,
               iTransColor,
               ulReserved);
      if ( (v8 & 1) != 0 )
        v8 &= ~1u;
      if ( v17 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>(v17[6]);
      if ( p_pvScan0 )
        goto LABEL_22;
    }
  }
  return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
}
