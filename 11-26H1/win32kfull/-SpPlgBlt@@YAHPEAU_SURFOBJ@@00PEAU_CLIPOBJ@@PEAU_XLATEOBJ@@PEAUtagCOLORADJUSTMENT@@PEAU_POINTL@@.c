/*
 * XREFs of ?SpPlgBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAUtagCOLORADJUSTMENT@@PEAU_POINTL@@PEAU_POINTFIX@@PEAU_RECTL@@4K@Z @ 0x1400E9B20
 * Callers:
 *     <none>
 * Callees:
 *     ??$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x1400686B0 (--$GreReleaseSemaphoreExclusive@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x140069BE4 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x14006A21C (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ??$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z @ 0x14006AA00 (--$GreAcquireSemaphore@$07VPDEVOBJ@@@@YAXVPDEVOBJ@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x1400BC884 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     OffPlgBlt @ 0x1400E9F78 (OffPlgBlt.c)
 *     EngPlgBlt @ 0x1400EA130 (EngPlgBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x14016874C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

BOOL __fastcall SpPlgBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        XLATEOBJ *pxlo,
        COLORADJUSTMENT *pca,
        POINTL *pptlBrushOrg,
        POINTFIX *pptfx,
        struct _RECTL *a9,
        struct _POINTL *a10,
        ULONG iMode)
{
  int v11; // r12d
  int v14; // r13d
  FIX x; // ecx
  BOOL v16; // r10d
  bool v17; // zf
  bool v18; // sf
  bool v19; // of
  FIX y; // ecx
  __int64 v21; // r10
  __int64 v22; // r11
  HDEV hdev; // rax
  CLIPOBJ *v24; // r13
  BOOL (__stdcall *v25)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG); // rcx
  struct _SURFOBJ *v26; // rsi
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  int v29; // eax
  PVOID *v30; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // [rsp+70h] [rbp-90h]
  CLIPOBJ *ppco; // [rsp+78h] [rbp-88h] BYREF
  struct _POINTL v43; // [rsp+80h] [rbp-80h] BYREF
  struct _SURFOBJ *v44; // [rsp+88h] [rbp-78h] BYREF
  POINTL *pptl; // [rsp+90h] [rbp-70h]
  RECTL *prcl; // [rsp+98h] [rbp-68h]
  __int64 v47; // [rsp+A0h] [rbp-60h]
  __int64 v48; // [rsp+A8h] [rbp-58h]
  __int64 v49; // [rsp+B0h] [rbp-50h]
  __int64 v50; // [rsp+B8h] [rbp-48h]
  int v51[2]; // [rsp+C0h] [rbp-40h] BYREF
  struct _RECTL v52; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v53[912]; // [rsp+E0h] [rbp-20h] BYREF

  v11 = 0;
  prcl = a9;
  pptl = a10;
  v14 = 1;
  v44 = a1;
  x = pptfx[1].x;
  v16 = x > pptfx[3].x;
  v41 = 1;
  ppco = a4;
  v19 = __OFSUB__(x, pptfx->x);
  v17 = x == pptfx->x;
  v18 = x - pptfx->x < 0;
  y = pptfx[1].y;
  v21 = (v18 ^ v19 | v17) ^ (unsigned int)v16;
  v50 = (__int64)a3;
  v49 = (__int64)pxlo;
  v19 = __OFSUB__(y, pptfx[3].y);
  v17 = y == pptfx[3].y;
  v18 = y - pptfx[3].y < 0;
  v48 = (__int64)pca;
  v47 = (__int64)pptlBrushOrg;
  v43 = 0LL;
  v22 = (y <= pptfx->y) ^ (unsigned int)!(v18 ^ v19 | v17);
  hdev = a2->hdev;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 14) != a2 )
  {
    if ( pptfx[v21].x > pptfx[(unsigned int)v21 ^ 3LL].x )
      v21 = (unsigned int)v21 ^ 3;
    if ( pptfx[v22].y > pptfx[(unsigned int)v22 ^ 3LL].y )
      v22 = (unsigned int)v22 ^ 3;
    v52.left = (pptfx[v21].x >> 4) - 1;
    v52.top = (pptfx[v22].y >> 4) - 1;
    v52.right = ((pptfx[(unsigned int)v21 ^ 3LL].x + 15) >> 4) + 1;
    v52.bottom = ((pptfx[(unsigned int)v22 ^ 3LL].y + 15) >> 4) + 1;
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v53, a1, a4, &v52);
    *(_QWORD *)v51 = 0LL;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v53, &v44, &v43, &ppco) )
          return v14;
        v26 = v44;
        p_pvScan0 = 0LL;
        if ( v44 )
        {
          hsurf = (int)v44[1].hsurf;
          if ( ((hsurf & 0x4000) != 0 || hsurf < 0) && (hsurf & 0x200) == 0 )
          {
            p_pvScan0 = &v44[-1].pvScan0;
            GreAcquireSemaphore<8,PDEVOBJ>((__int64)v44->hdev);
          }
        }
        v29 = (int)a2[1].hsurf;
        v30 = 0LL;
        if ( ((v29 & 0x4000) != 0 || v29 < 0) && (v29 & 0x200) == 0 )
        {
          v30 = &a2[-1].pvScan0;
          GreAcquireSemaphore<8,PDEVOBJ>((__int64)a2->hdev);
        }
        if ( !p_pvScan0 || *((_WORD *)p_pvScan0 + 50) != 1 || EngUpdateDeviceSurface((SURFOBJ *)(p_pvScan0 + 3), &ppco) )
          break;
        if ( v30 )
          GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v30[6]);
LABEL_34:
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)p_pvScan0[6]);
      }
      v24 = ppco;
      if ( v26->iType == 1 )
      {
        if ( (unsigned int)bAllowShareAccess(v26)
          && GreGetCurrentThread(v32)
          && *((_QWORD *)GreGetCurrentThread(v33) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v34) + 85) || *((_DWORD *)GreGetCurrentThread(v35) + 86)) )
        {
          v36 = *((_QWORD *)GreGetCurrentThread(v35) + 34);
          if ( (*(_DWORD *)(v36 + 20) & 4) != 0 )
          {
            v25 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))(*((_QWORD *)GreGetCurrentThread(v36) + 34) + 128LL);
            goto LABEL_13;
          }
        }
        if ( v26->iType == 1
          && (unsigned int)bAllowShareAccess(v26)
          && GreGetCurrentThread(v37)
          && *((_QWORD *)GreGetCurrentThread(v38) + 34)
          && (*((_DWORD *)GreGetCurrentThread(v39) + 85) || *((_DWORD *)GreGetCurrentThread(v40) + 86)) )
        {
LABEL_48:
          v25 = EngPlgBlt;
          goto LABEL_13;
        }
      }
      if ( ((__int64)v26[1].hsurf & 4) == 0 )
        goto LABEL_48;
      v11 |= 1u;
      v25 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, COLORADJUSTMENT *, POINTL *, POINTFIX *, RECTL *, POINTL *, ULONG))*((_QWORD *)v26->hdev + 171);
LABEL_13:
      v14 = OffPlgBlt(
              (int)v25,
              (int)&v43,
              (int)v26,
              (int)v51,
              (__int64)a2,
              v50,
              v24,
              v49,
              v48,
              v47,
              (__int64)pptfx,
              (__int64)prcl,
              (__int64)pptl,
              iMode) & v41;
      v41 = v14;
      if ( (v11 & 1) != 0 )
        v11 &= ~1u;
      if ( v30 )
        GreReleaseSemaphoreExclusive<8,PDEVOBJ>((__int64)v30[6]);
      if ( p_pvScan0 )
        goto LABEL_34;
    }
  }
  return EngPlgBlt(a1, a2, a3, a4, pxlo, pca, pptlBrushOrg, pptfx, prcl, pptl, iMode);
}
