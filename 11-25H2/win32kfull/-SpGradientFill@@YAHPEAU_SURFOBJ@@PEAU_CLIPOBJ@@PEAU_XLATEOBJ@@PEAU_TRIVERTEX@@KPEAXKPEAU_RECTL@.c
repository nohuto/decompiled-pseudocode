/*
 * XREFs of ?SpGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1401E6160
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     OffGradientFill @ 0x1401E6460 (OffGradientFill.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  PVOID *v15; // rsi
  CLIPOBJ *v16; // rsi
  BOOL (__stdcall *v17)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG); // rcx
  PVOID v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rcx
  struct _POINTL v38; // [rsp+60h] [rbp-A0h] BYREF
  CLIPOBJ *ppco; // [rsp+68h] [rbp-98h] BYREF
  struct _SURFOBJ *v40; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v41; // [rsp+78h] [rbp-88h]
  struct _RECTL *v42; // [rsp+80h] [rbp-80h]
  void *v43; // [rsp+88h] [rbp-78h]
  struct _TRIVERTEX *v44; // [rsp+90h] [rbp-70h]
  struct _XLATEOBJ *v45; // [rsp+98h] [rbp-68h]
  _BYTE v46[912]; // [rsp+A0h] [rbp-60h] BYREF

  v10 = 0;
  v45 = a3;
  v41 = a9;
  v43 = a6;
  v11 = 1;
  ppco = a2;
  v44 = a4;
  v40 = a1;
  v38 = 0LL;
  v42 = a8;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v46, a1, a2, a8);
  if ( (unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v46, &v40, &v38, &ppco) )
  {
    while ( 1 )
    {
      v12 = v40;
      p_pvScan0 = 0LL;
      if ( !v40 )
        break;
      hsurf = (int)v40[1].hsurf;
      if ( (hsurf & 0x80004000) == 0 )
        break;
      if ( (hsurf & 0x200) != 0 )
        break;
      p_pvScan0 = &v40[-1].pvScan0;
      v15 = &v40[-1].pvScan0;
      GreLockDisplayDevice(v40->hdev);
      if ( *((_WORD *)p_pvScan0 + 50) != 1 )
        break;
      p_pvScan0 = &v12[-1].pvScan0;
      if ( EngUpdateDeviceSurface((SURFOBJ *)((unsigned __int64)v12 & -(__int64)(v12 != (struct _SURFOBJ *)24)), &ppco) )
        break;
      if ( v12 != (struct _SURFOBJ *)24 )
      {
        v19 = v15[6];
LABEL_32:
        GreUnlockDisplayDevice(v19);
      }
LABEL_13:
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v46, &v40, &v38, &ppco) )
        return v11;
    }
    v16 = ppco;
    if ( v12->iType != 1 )
      goto LABEL_8;
    if ( bAllowShareAccess(v12)
      && GreGetCurrentThread(v21, v20)
      && *((_QWORD *)GreGetCurrentThread(v23, v22) + 34)
      && (*((_DWORD *)GreGetCurrentThread(v25, v24) + 87) || *((_DWORD *)GreGetCurrentThread(v27, v26) + 88)) )
    {
      v29 = *((_QWORD *)GreGetCurrentThread(v27, v26) + 34);
      if ( (*(_DWORD *)(v29 + 20) & 0x20000) != 0 )
      {
        v17 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*((_QWORD *)GreGetCurrentThread(v29, v28) + 34) + 136LL);
        goto LABEL_10;
      }
    }
    if ( v12->iType != 1
      || !bAllowShareAccess(v12)
      || !GreGetCurrentThread(v31, v30)
      || !*((_QWORD *)GreGetCurrentThread(v33, v32) + 34)
      || !*((_DWORD *)GreGetCurrentThread(v35, v34) + 87) && !*((_DWORD *)GreGetCurrentThread(v37, v36) + 88) )
    {
LABEL_8:
      if ( ((__int64)v12[1].hsurf & 0x20000) != 0 )
      {
        v10 |= 1u;
        v17 = (BOOL (__stdcall *)(SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))*((_QWORD *)v12->hdev + 172);
LABEL_10:
        v11 &= OffGradientFill(v17, &v38, v12, v16, v45, v44, a5, v43, a7, v42, v41, a10);
        if ( (v10 & 1) != 0 )
          v10 &= ~1u;
        if ( !p_pvScan0 )
          goto LABEL_13;
        v19 = p_pvScan0[6];
        goto LABEL_32;
      }
    }
    v17 = EngGradientFill;
    goto LABEL_10;
  }
  return v11;
}
