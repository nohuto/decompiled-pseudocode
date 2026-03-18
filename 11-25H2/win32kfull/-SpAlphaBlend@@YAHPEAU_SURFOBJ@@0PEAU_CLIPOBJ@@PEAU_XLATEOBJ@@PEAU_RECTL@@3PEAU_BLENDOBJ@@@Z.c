/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1401BD980
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffAlphaBlend @ 0x14000F3F4 (OffAlphaBlend.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngAlphaBlend @ 0x14006D290 (EngAlphaBlend.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
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
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v15; // eax
  PVOID *v16; // rdi
  CLIPOBJ *v17; // r12
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  struct _POINTL v37; // [rsp+50h] [rbp-B0h] BYREF
  CLIPOBJ *ppco; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v39; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v40; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h]
  __int64 v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  int v44[2]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v45[912]; // [rsp+90h] [rbp-70h] BYREF

  v7 = 0;
  v37 = 0LL;
  hdev = a2->hdev;
  v10 = 1;
  v43 = (__int64)a4;
  v39 = a1;
  ppco = a3;
  v42 = (__int64)prclDest;
  v41 = (__int64)prclSrc;
  v40 = (__int64)pBlendObj;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v45, a1, a3, prclDest);
    *(_QWORD *)v44 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v45, &v39, &v37, &ppco) )
          return v10;
        v12 = v39;
        p_pvScan0 = 0LL;
        if ( v39 )
        {
          hsurf = (int)v39[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v39[-1].pvScan0;
            GreLockDisplayDevice(v39->hdev);
          }
        }
        v15 = (int)a2[1].hsurf;
        v16 = 0LL;
        if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
        {
          v16 = &a2[-1].pvScan0;
          GreLockDisplayDevice(a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v16 )
          GreUnlockDisplayDevice(v16[6]);
LABEL_24:
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      v17 = ppco;
      if ( v12->iType == 1 )
      {
        if ( bAllowShareAccess(v12)
          && GreGetCurrentThread(v20, v19)
          && *((_QWORD *)GreGetCurrentThread(v22, v21) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v24, v23) + 87) || *((_DWORD *)GreGetCurrentThread(v26, v25) + 88)) )
        {
          v28 = *((_QWORD *)GreGetCurrentThread(v26, v25) + 34);
          if ( (*(_DWORD *)(v28 + 20) & 0x10000) != 0 )
          {
            v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*((_QWORD *)GreGetCurrentThread(v28, v27) + 34) + 120LL);
            goto LABEL_19;
          }
        }
        if ( v12->iType == 1
          && bAllowShareAccess(v12)
          && GreGetCurrentThread(v30, v29)
          && *((_QWORD *)GreGetCurrentThread(v32, v31) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v34, v33) + 87) || *((_DWORD *)GreGetCurrentThread(v36, v35) + 88)) )
        {
LABEL_41:
          v18 = EngAlphaBlend;
          goto LABEL_19;
        }
      }
      if ( ((__int64)v12[1].hsurf & 0x10000) == 0 )
        goto LABEL_41;
      v7 |= 1u;
      v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v12->hdev + 170);
LABEL_19:
      v10 &= OffAlphaBlend(
               (__int64 (__fastcall *)(__int64, __int64, struct _CLIPOBJ *, __int64, __int128 *, __int128 *, __int64))v18,
               (LONG *)&v37,
               (__int64)v12,
               v44,
               (__int64)a2,
               v17,
               v43,
               (__int128 *)v42,
               (__int128 *)v41,
               v40);
      if ( (v7 & 1) != 0 )
        v7 &= ~1u;
      if ( v16 )
        GreUnlockDisplayDevice(v16[6]);
      if ( p_pvScan0 )
        goto LABEL_24;
    }
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
