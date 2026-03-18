/*
 * XREFs of ?DirtyRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_N_NPEBUCSM_RGNDATA_@@PEBUScrollOptimization@@PEAVCRegion@@@Z @ 0x18018634C
 * Callers:
 *     ?UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEBUCSM_RGNDATA_@@PEBUScrollOptimization@@@Z @ 0x18012B148 (-UpdateRenderingRealization@CGlobalCompositionSurfaceInfo@@IEAA_NPEAVISwapChainRealization@@PEBU.c)
 * Callees:
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z @ 0x180075B50 (--0CRegion@FastRegion@@QEAA@AEBUtagRECT@@@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z @ 0x1800F5C08 (-SetRectangle@CRegion@@QEAAXAEBUMilRectU@@@Z.c)
 *     ?IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ @ 0x18012A790 (-IsSwapChain@CGlobalCompositionSurfaceInfo@@UEBA_NXZ.c)
 *     ?GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z @ 0x18018658C (-GetBoundingRect@CRegion@@QEBA_NPEAUMilRectU@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CGlobalCompositionSurfaceInfo::DirtyRenderingRealization(
        CGlobalCompositionSurfaceInfo *this,
        char a2,
        const struct tagRECT *a3,
        const struct ScrollOptimization *a4,
        struct CRegion *a5)
{
  char v9; // di
  char v10; // r14
  LONG left; // eax
  struct MilRectU *v12; // rax
  int v13; // r9d
  int v14; // r10d
  int v15; // r11d
  int v16; // edi
  _DWORD *v17; // rdx
  __int64 v19; // [rsp+28h] [rbp-59h] BYREF
  int v20; // [rsp+30h] [rbp-51h]
  int v21; // [rsp+34h] [rbp-4Dh]
  _DWORD v22[2]; // [rsp+38h] [rbp-49h] BYREF
  FastRegion::CRegion *v23[10]; // [rsp+40h] [rbp-41h] BYREF

  v9 = 0;
  v10 = 0;
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL) + 32LL))(
    *((_QWORD *)this + 26) + 8LL,
    v22);
  if ( a3 )
  {
    v20 = v22[0];
    v21 = v22[1];
    left = a3[10].left;
    v19 = 0LL;
    if ( left == -1 )
    {
      CRegion::SetRectangle(a5, (const struct MilRectU *)&v19);
      v9 = 1;
      v10 = 1;
LABEL_18:
      v12 = (CGlobalCompositionSurfaceInfo *)((char *)this + 48);
      goto LABEL_9;
    }
    if ( left )
    {
      **(_DWORD **)a5 = 0;
      if ( (int)CRegion::TryAddRectangles((FastRegion::CRegion **)a5, a3, a3[10].left) < 0 )
      {
        CRegion::SetRectangle(a5, (const struct MilRectU *)&v19);
        v10 = 1;
      }
      v9 = 1;
      if ( v10 )
        goto LABEL_8;
    }
    else if ( *((_DWORD *)this + 36) == 3 )
    {
      CRegion::SetRectangle(a5, (const struct MilRectU *)&v19);
      v10 = 1;
      v9 = 1;
      goto LABEL_18;
    }
  }
  if ( a4 && *(_DWORD *)a4 && (*((_DWORD *)a4 + 5) || *((_DWORD *)a4 + 6)) )
  {
    if ( v9 )
    {
      FastRegion::CRegion::CRegion((FastRegion::CRegion *)v23, (const struct tagRECT *)((char *)a4 + 4));
      CRegion::Union((const struct FastRegion::Internal::CRgnData **)a5, v23);
      FastRegion::CRegion::FreeMemory(v23);
    }
    else
    {
      v13 = *((_DWORD *)a4 + 3);
      v14 = *((_DWORD *)a4 + 1);
      if ( v14 >= v13 || (v15 = *((_DWORD *)a4 + 2), v16 = *((_DWORD *)a4 + 4), v15 >= v16) )
      {
        **(_DWORD **)a5 = 0;
      }
      else
      {
        v17 = *(_DWORD **)a5;
        *v17 = 2;
        v17[1] = v14;
        v17[2] = v13;
        v17[3] = v15;
        v17[4] = 16;
        v17[7] = v14;
        v17[8] = v13;
        v17[5] = v16;
        v17[6] = 16;
      }
      v9 = 1;
    }
    goto LABEL_18;
  }
LABEL_8:
  v12 = (CGlobalCompositionSurfaceInfo *)((char *)this + 48);
  if ( !v9 )
  {
    *((_QWORD *)this + 7) = 0LL;
    *(_QWORD *)v12 = 0LL;
    goto LABEL_25;
  }
LABEL_9:
  CRegion::GetBoundingRect(a5, v12);
LABEL_25:
  if ( v10 || a2 && CGlobalCompositionSurfaceInfo::IsSwapChain(this) )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL) + 88LL))(*((_QWORD *)this + 26) + 8LL);
  }
  else if ( v9 )
  {
    (*(void (__fastcall **)(__int64, struct CRegion *))(*(_QWORD *)(*((_QWORD *)this + 26) + 8LL) + 80LL))(
      *((_QWORD *)this + 26) + 8LL,
      a5);
  }
  return v9;
}
