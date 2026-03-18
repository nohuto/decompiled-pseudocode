/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1400F5F10
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngTransparentBlt @ 0x1400F62F0 (EngTransparentBlt.c)
 *     OffTransparentBlt @ 0x140217948 (OffTransparentBlt.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v16; // eax
  PVOID *v17; // rdi
  CLIPOBJ *v18; // r12
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
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
  __int64 v41; // [rsp+78h] [rbp-88h]
  __int64 v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  int v44[2]; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v45[912]; // [rsp+A0h] [rbp-60h] BYREF

  v8 = 0;
  v38 = 0LL;
  v43 = (__int64)a4;
  hdev = a2->hdev;
  v11 = 1;
  v40 = a1;
  ppco = a3;
  v42 = (__int64)prclDst;
  v41 = (__int64)prclSrc;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v45, a1, a3, prclDst);
    *(_QWORD *)v44 = 0LL;
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v45, &v40, &v38, &ppco) )
        return v11;
      v13 = v40;
      p_pvScan0 = 0LL;
      if ( v40 )
      {
        hsurf = (int)v40[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v40[-1].pvScan0;
          GreLockDisplayDevice(v40->hdev);
        }
      }
      v16 = (int)a2[1].hsurf;
      v17 = 0LL;
      if ( (v16 & 0x80004000) != 0 && (v16 & 0x200) == 0 )
      {
        v17 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( p_pvScan0 && *((_WORD *)p_pvScan0 + 50) == 1 && !EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
      {
        if ( v17 )
          GreUnlockDisplayDevice(v17[6]);
        goto LABEL_28;
      }
      v18 = ppco;
      if ( v13->iType == 1 )
      {
        if ( bAllowShareAccess(v13)
          && GreGetCurrentThread(v21, v20)
          && *((_QWORD *)GreGetCurrentThread(v23, v22) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v25, v24) + 87) || *((_DWORD *)GreGetCurrentThread(v27, v26) + 88)) )
        {
          v29 = *((_QWORD *)GreGetCurrentThread(v27, v26) + 34);
          if ( (*(_DWORD *)(v29 + 20) & 0x8000) != 0 )
          {
            v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*((_QWORD *)GreGetCurrentThread(v29, v28) + 34) + 112LL);
            goto LABEL_18;
          }
        }
        if ( v13->iType == 1
          && bAllowShareAccess(v13)
          && GreGetCurrentThread(v31, v30)
          && *((_QWORD *)GreGetCurrentThread(v33, v32) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v35, v34) + 87) || *((_DWORD *)GreGetCurrentThread(v37, v36) + 88)) )
        {
LABEL_42:
          v19 = EngTransparentBlt;
          goto LABEL_18;
        }
      }
      if ( ((__int64)v13[1].hsurf & 0x8000) == 0 )
        goto LABEL_42;
      v8 |= 1u;
      v19 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v13->hdev + 169);
LABEL_18:
      v11 &= OffTransparentBlt(
               (int)v19,
               (int)&v38,
               (int)v13,
               (int)v44,
               (__int64)a2,
               v18,
               v43,
               v42,
               v41,
               iTransColor,
               ulReserved);
      if ( (v8 & 1) != 0 )
        v8 &= ~1u;
      if ( v17 )
        GreUnlockDisplayDevice(v17[6]);
      if ( p_pvScan0 )
LABEL_28:
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
  }
  return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
}
