/*
 * XREFs of ?SpStretchBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_RECTL@@54K@Z @ 0x1401F2F90
 * Callers:
 *     <none>
 * Callees:
 *     OffStretchBlt @ 0x140067B90 (OffStretchBlt.c)
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     EngStretchBlt @ 0x1400E65F0 (EngStretchBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
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
  int v11; // r12d
  int v14; // r14d
  HDEV hdev; // rax
  LONG left; // edx
  LONG right; // r8d
  LONG top; // eax
  LONG bottom; // ecx
  struct _SURFOBJ *v21; // rsi
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  int v24; // eax
  PVOID *v25; // rbx
  CLIPOBJ *v26; // r14
  BOOL (__stdcall *v27)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG); // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // [rsp+70h] [rbp-90h]
  CLIPOBJ *ppco; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v39; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v40; // [rsp+88h] [rbp-78h] BYREF
  __int64 v41; // [rsp+90h] [rbp-70h]
  __int64 v42; // [rsp+98h] [rbp-68h]
  __int64 v43; // [rsp+A0h] [rbp-60h]
  __int64 v44; // [rsp+A8h] [rbp-58h]
  __int64 v45; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+B8h] [rbp-48h]
  int v47[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v48; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v49[912]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 0;
  v14 = 1;
  v37 = 1;
  hdev = a2->hdev;
  v40 = a1;
  ppco = a4;
  v46 = (__int64)a3;
  v45 = (__int64)pxlo;
  v44 = (__int64)pca;
  v43 = (__int64)pptlHTOrg;
  v42 = (__int64)prclSrc;
  v41 = (__int64)pptlMask;
  v39 = 0LL;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    left = prclDest->left;
    right = prclDest->right;
    top = prclDest->top;
    bottom = prclDest->bottom;
    v48.left = left;
    v48.top = top;
    v48.right = right;
    v48.bottom = bottom;
    if ( left > right )
    {
      v48.left = right;
      v48.right = left;
    }
    if ( top > bottom )
    {
      v48.top = bottom;
      v48.bottom = top;
    }
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v49, a1, a4, &v48);
    *(_QWORD *)v47 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v49, &v40, &v39, &ppco) )
          return v14;
        v21 = v40;
        p_pvScan0 = 0LL;
        if ( v40 )
        {
          hsurf = (int)v40[1].hsurf;
          if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v40[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>((__int64)v40->hdev);
          }
        }
        v24 = (int)a2[1].hsurf;
        v25 = 0LL;
        if ( ((v24 & 0x4000) != 0 || v24 < 0) && (v24 & 0x200) == 0 )
        {
          v25 = &a2[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v25 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v25[6]);
LABEL_25:
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
      }
      v26 = ppco;
      if ( v21->iType == 1 )
      {
        if ( bAllowShareAccess(v21)
          && GreGetCurrentThread(v28)
          && *((_QWORD *)GreGetCurrentThread(v29) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v30) + 85) || *((_DWORD *)GreGetCurrentThread(v31) + 86)) )
        {
          v32 = *((_QWORD *)GreGetCurrentThread(v31) + 34);
          if ( (*(_DWORD *)(v32 + 20) & 2) != 0 )
          {
            v27 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))(*((_QWORD *)GreGetCurrentThread(v32) + 34) + 88LL);
            goto LABEL_20;
          }
        }
        if ( v21->iType == 1
          && bAllowShareAccess(v21)
          && GreGetCurrentThread(v33)
          && *((_QWORD *)GreGetCurrentThread(v34) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v35) + 85) || *((_DWORD *)GreGetCurrentThread(v36) + 86)) )
        {
LABEL_47:
          v27 = EngStretchBlt;
          goto LABEL_20;
        }
      }
      if ( ((__int64)v21[1].hsurf & 2) == 0 )
        goto LABEL_47;
      v11 |= 1u;
      v27 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, RECTL *, RECTL *, POINTL *, ULONG))*((_QWORD *)v21->hdev + 166);
LABEL_20:
      v14 = OffStretchBlt(
              (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, __int64, __int64 *, _DWORD *, _DWORD *, __int64, int))v27,
              (LONG *)&v39,
              (__int64)v21,
              v47,
              (__int64)a2,
              v46,
              v26,
              v45,
              v44,
              (__int64 *)v43,
              prclDest,
              (_DWORD *)v42,
              v41,
              iMode) & v37;
      v37 = v14;
      if ( (v11 & 1) != 0 )
        v11 &= ~1u;
      if ( v25 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v25[6]);
      if ( p_pvScan0 )
        goto LABEL_25;
    }
  }
  return EngStretchBlt(a1, a2, a3, a4, pxlo, pca, pptlHTOrg, prclDest, prclSrc, pptlMask, iMode);
}
