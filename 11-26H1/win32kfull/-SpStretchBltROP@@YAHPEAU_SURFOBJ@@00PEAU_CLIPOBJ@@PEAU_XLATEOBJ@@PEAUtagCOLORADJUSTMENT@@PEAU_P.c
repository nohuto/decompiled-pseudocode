/*
 * XREFs of ?SpStretchBltROP@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54KPEAU_BRUSHOBJ@@K@Z @ 0x1401B5330
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffStretchBltROP @ 0x1401B5734 (OffStretchBltROP.c)
 *     EngStretchBltROP @ 0x1401B5900 (EngStretchBltROP.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

BOOL __fastcall SpStretchBltROP(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlHTOrg,
        RECTL *prclDest,
        RECTL *prclSrc,
        POINTL *pptlMask,
        ULONG iMode,
        struct _BRUSHOBJ *pbo,
        DWORD rop4)
{
  int v13; // r12d
  int v16; // r14d
  HDEV hdev; // rax
  LONG left; // edx
  LONG right; // r8d
  LONG top; // eax
  LONG bottom; // ecx
  struct _SURFOBJ *v23; // rsi
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  int v26; // eax
  PVOID *v27; // rbx
  CLIPOBJ *v28; // r14
  BOOL (__stdcall *v29)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD); // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // [rsp+80h] [rbp-80h]
  CLIPOBJ *ppco; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL v41; // [rsp+90h] [rbp-70h] BYREF
  struct _SURFOBJ *v42; // [rsp+98h] [rbp-68h] BYREF
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  __int64 v47; // [rsp+C0h] [rbp-40h]
  __int64 v48; // [rsp+C8h] [rbp-38h]
  __int64 v49; // [rsp+D0h] [rbp-30h]
  int v50[2]; // [rsp+D8h] [rbp-28h] BYREF
  struct _RECTL v51; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v52[912]; // [rsp+F0h] [rbp-10h] BYREF

  v13 = 0;
  v16 = 1;
  v39 = 1;
  hdev = a2->hdev;
  v42 = a1;
  ppco = a4;
  v49 = (__int64)a3;
  v48 = (__int64)pxlo;
  v47 = (__int64)pca;
  v46 = (__int64)pptlHTOrg;
  v45 = (__int64)prclSrc;
  v44 = (__int64)pptlMask;
  v43 = (__int64)pbo;
  v41 = 0LL;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    left = prclDest->left;
    right = prclDest->right;
    top = prclDest->top;
    bottom = prclDest->bottom;
    v51.left = left;
    v51.top = top;
    v51.right = right;
    v51.bottom = bottom;
    if ( left > right )
    {
      v51.left = right;
      v51.right = left;
    }
    if ( top > bottom )
    {
      v51.top = bottom;
      v51.bottom = top;
    }
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v52, a1, a4, &v51);
    *(_QWORD *)v50 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v52, &v42, &v41, &ppco) )
          return v16;
        v23 = v42;
        p_pvScan0 = 0LL;
        if ( v42 )
        {
          hsurf = (int)v42[1].hsurf;
          if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v42[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>((__int64)v42->hdev);
          }
        }
        v26 = (int)a2[1].hsurf;
        v27 = 0LL;
        if ( ((v26 & 0x4000) != 0 || v26 < 0) && (v26 & 0x200) == 0 )
        {
          v27 = &a2[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v27 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v27[6]);
LABEL_34:
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
      }
      v28 = ppco;
      if ( v23->iType == 1 )
      {
        if ( bAllowShareAccess(v23)
          && GreGetCurrentThread(v30)
          && *((_QWORD *)GreGetCurrentThread(v31) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v32) + 85) || *((_DWORD *)GreGetCurrentThread(v33) + 86)) )
        {
          v34 = *((_QWORD *)GreGetCurrentThread(v33) + 34);
          if ( (*(_DWORD *)(v34 + 20) & 0x2000) != 0 )
          {
            v29 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))(*((_QWORD *)GreGetCurrentThread(v34) + 34) + 152LL);
            goto LABEL_21;
          }
        }
        if ( v23->iType == 1
          && bAllowShareAccess(v23)
          && GreGetCurrentThread(v35)
          && *((_QWORD *)GreGetCurrentThread(v36) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v37) + 85) || *((_DWORD *)GreGetCurrentThread(v38) + 86)) )
        {
LABEL_48:
          v29 = EngStretchBltROP;
          goto LABEL_21;
        }
      }
      if ( ((__int64)v23[1].hsurf & 0x2000) == 0 )
        goto LABEL_48;
      v13 |= 1u;
      v29 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG, BRUSHOBJ *, DWORD))*((_QWORD *)v23->hdev + 174);
LABEL_21:
      v16 = OffStretchBltROP(
              (int)v29,
              (int)&v41,
              (int)v23,
              (int)v50,
              (__int64)a2,
              v49,
              v28,
              v48,
              v47,
              v46,
              (__int64)prclDest,
              v45,
              v44,
              iMode,
              v43,
              rop4) & v39;
      v39 = v16;
      if ( (v13 & 1) != 0 )
        v13 &= ~1u;
      if ( v27 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v27[6]);
      if ( p_pvScan0 )
        goto LABEL_34;
    }
  }
  return EngStretchBltROP(a1, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode, pbo, rop4);
}
