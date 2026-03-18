/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x140210A00
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffGradientFill @ 0x140210CD8 (OffGradientFill.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SpGradientFill(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _XLATEOBJ *a3,
        struct _TRIVERTEX *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        struct _RECTL *a8,
        struct _POINTL *a9,
        unsigned int a10)
{
  int v10; // r14d
  unsigned int v11; // r15d
  struct _SURFOBJ *v12; // rdi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  CLIPOBJ *v15; // rsi
  BOOL (__stdcall *v16)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  struct _POINTL v27; // [rsp+60h] [rbp-A0h] BYREF
  CLIPOBJ *ppco; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v29; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v30; // [rsp+78h] [rbp-88h]
  struct _RECTL *v31; // [rsp+80h] [rbp-80h]
  void *v32; // [rsp+88h] [rbp-78h]
  struct _TRIVERTEX *v33; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v34; // [rsp+98h] [rbp-68h]
  _BYTE v35[912]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = 0;
  v34 = a3;
  v30 = a9;
  v32 = a6;
  v11 = 1;
  ppco = a2;
  v33 = a4;
  v29 = a1;
  v31 = a8;
  v27 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v35, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v35, &v29, &v27, &ppco) )
  {
    while ( 1 )
    {
      v12 = v29;
      p_pvScan0 = 0LL;
      if ( !v29 )
        break;
      hsurf = (int)v29[1].hsurf;
      if ( (hsurf & 0x4000) == 0 && hsurf >= 0 )
        break;
      if ( (hsurf & 0x200) != 0 )
        break;
      p_pvScan0 = &v29[-1].pvScan0;
      GreAcquireSemaphore<8,PDEVOBJ>((__int64)v29->hdev);
      if ( v12 == (struct _SURFOBJ *)24 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface(v12, &ppco) )
        break;
LABEL_17:
      GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
LABEL_15:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v35, &v29, &v27, &ppco) )
        return v11;
    }
    v15 = ppco;
    if ( v12->iType != 1 )
      goto LABEL_10;
    if ( bAllowShareAccess(v12)
      && GreGetCurrentThread(v18)
      && *((_QWORD *)GreGetCurrentThread(v19) + 34)
      && (*((_DWORD *)GreGetCurrentThread(v20) + 85) || *((_DWORD *)GreGetCurrentThread(v21) + 86)) )
    {
      v22 = *((_QWORD *)GreGetCurrentThread(v21) + 34);
      if ( (*(_DWORD *)(v22 + 20) & 0x20000) != 0 )
      {
        v16 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*((_QWORD *)GreGetCurrentThread(v22) + 34) + 136LL);
        goto LABEL_12;
      }
    }
    if ( v12->iType != 1
      || !bAllowShareAccess(v12)
      || !GreGetCurrentThread(v23)
      || !*((_QWORD *)GreGetCurrentThread(v24) + 34)
      || !*((_DWORD *)GreGetCurrentThread(v25) + 85) && !*((_DWORD *)GreGetCurrentThread(v26) + 86) )
    {
LABEL_10:
      if ( ((__int64)v12[1].hsurf & 0x20000) != 0 )
      {
        v10 |= 1u;
        v16 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v12->hdev + 172);
        goto LABEL_12;
      }
    }
    v16 = EngGradientFill;
LABEL_12:
    v11 &= OffGradientFill(v16, &v27, v12, v15, v34, v33, a5, v32, a7, v31, v30, a10);
    if ( (v10 & 1) != 0 )
      v10 &= ~1u;
    if ( !p_pvScan0 )
      goto LABEL_15;
    goto LABEL_17;
  }
  return v11;
}
