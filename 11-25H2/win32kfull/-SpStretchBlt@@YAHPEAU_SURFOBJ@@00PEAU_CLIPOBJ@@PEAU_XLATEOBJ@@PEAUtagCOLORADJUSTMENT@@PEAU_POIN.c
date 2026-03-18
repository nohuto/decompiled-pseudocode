/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x14000A5E0
 * Callers:
 *     <none>
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14000934C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBlt @ 0x14000A9D8 (OffStretchBlt.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x140011E3C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1400125A4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001B014 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngStretchBlt @ 0x140132EF0 (EngStretchBlt.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

BOOL __fastcall SpStretchBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        struct _POINTL *pptlMask,
        ULONG iMode)
{
  int v11; // r13d
  int v14; // r12d
  HDEV hdev; // rax
  LONG left; // edx
  LONG right; // r8d
  LONG top; // eax
  LONG bottom; // ecx
  struct _SURFOBJ *v21; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v24; // eax
  PVOID *v25; // rdi
  CLIPOBJ *v26; // r12
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  int v28; // [rsp+70h] [rbp-90h]
  CLIPOBJ *ppco; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v30; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v31; // [rsp+88h] [rbp-78h] BYREF
  __int64 v32; // [rsp+90h] [rbp-70h]
  __int64 v33; // [rsp+98h] [rbp-68h]
  __int64 v34; // [rsp+A0h] [rbp-60h]
  __int64 v35; // [rsp+A8h] [rbp-58h]
  __int64 v36; // [rsp+B0h] [rbp-50h]
  __int64 v37; // [rsp+B8h] [rbp-48h]
  int v38[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v39; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v40[912]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 0;
  v30 = 0LL;
  v14 = 1;
  v28 = 1;
  hdev = a2->hdev;
  v31 = a1;
  ppco = a4;
  v37 = (__int64)a3;
  v36 = (__int64)pxlo;
  v35 = (__int64)pca;
  v34 = (__int64)pptlHTOrg;
  v33 = (__int64)prclSrc;
  v32 = (__int64)pptlMask;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    left = prclDest->left;
    right = prclDest->right;
    top = prclDest->top;
    bottom = prclDest->bottom;
    v39.left = left;
    v39.top = top;
    v39.right = right;
    v39.bottom = bottom;
    if ( left > right )
    {
      v39.left = right;
      v39.right = left;
    }
    if ( top > bottom )
    {
      v39.top = bottom;
      v39.bottom = top;
    }
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v40, a1, a4, &v39);
    *(_QWORD *)v38 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v40, &v31, &v30, &ppco) )
          return v14;
        v21 = v31;
        p_pvScan0 = 0LL;
        if ( v31 )
        {
          hsurf = (int)v31[1].hsurf;
          if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v31[-1].pvScan0;
            GreLockDisplayDevice(v31->hdev);
          }
        }
        v24 = (int)a2[1].hsurf;
        v25 = 0LL;
        if ( (v24 & 0x80004000) != 0 && (v24 & 0x200) == 0 )
        {
          v25 = &a2[-1].pvScan0;
          GreLockDisplayDevice(a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v25 )
          GreUnlockDisplayDevice(v25[6]);
LABEL_27:
        GreUnlockDisplayDevice(p_pvScan0[6]);
      }
      v26 = ppco;
      if ( v21->iType == 1 )
      {
        if ( bAllowShareAccess(v21)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88))
          && (*(_DWORD *)(*((_QWORD *)GreGetCurrentThread() + 34) + 20LL) & 2) != 0 )
        {
          v27 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)GreGetCurrentThread() + 34) + 88LL);
          goto LABEL_22;
        }
        if ( v21->iType == 1
          && bAllowShareAccess(v21)
          && GreGetCurrentThread()
          && *((_QWORD *)GreGetCurrentThread() + 34)
          && (*((_DWORD *)GreGetCurrentThread() + 87) || *((_DWORD *)GreGetCurrentThread() + 88)) )
        {
LABEL_45:
          v27 = EngStretchBlt;
          goto LABEL_22;
        }
      }
      if ( ((__int64)v21[1].hsurf & 2) == 0 )
        goto LABEL_45;
      v11 |= 1u;
      v27 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v21->hdev + 166);
LABEL_22:
      v14 = OffStretchBlt(
              (int)v27,
              (int)&v30,
              (int)v21,
              (int)v38,
              (__int64)a2,
              v37,
              v26,
              v36,
              v35,
              v34,
              (__int64)prclDest,
              v33,
              v32,
              iMode) & v28;
      v28 = v14;
      if ( (v11 & 1) != 0 )
        v11 &= ~1u;
      if ( v25 )
        GreUnlockDisplayDevice(v25[6]);
      if ( p_pvScan0 )
        goto LABEL_27;
    }
  }
  return EngStretchBlt(a1, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
