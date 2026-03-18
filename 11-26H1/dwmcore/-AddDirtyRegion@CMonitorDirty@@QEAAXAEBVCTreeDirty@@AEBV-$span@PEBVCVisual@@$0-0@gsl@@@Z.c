/*
 * XREFs of ?AddDirtyRegion@CMonitorDirty@@QEAAXAEBVCTreeDirty@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x1800EDF9C
 * Callers:
 *     ?RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z @ 0x1800EE2B0 (-RenderAndPresent@CDDisplayRenderTarget@@UEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ @ 0x1800EE280 (-GetSharedOcclusionContext@CDesktopTree@@QEBAPEBVCOcclusionContext@@XZ.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CMonitorDirty::AddDirtyRegion(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r15
  CDesktopTree *v7; // rax
  const struct COcclusionContext *SharedOcclusionContext; // r12
  __int64 v9; // r13
  unsigned int v10; // edi
  unsigned int v11; // ecx
  __int64 v12; // r8
  const char *v13; // r9
  const struct FastRegion::Internal::CRgnData **v14; // rcx
  float v15[4]; // [rsp+40h] [rbp-49h] BYREF
  FastRegion::CRegion *v16; // [rsp+50h] [rbp-39h] BYREF
  int v17; // [rsp+58h] [rbp-31h] BYREF

  if ( !*(_BYTE *)(a1 + 1872) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8));
    v7 = (CDesktopTree *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 1880) + 56LL))(*(_QWORD *)(a1 + 1880));
    SharedOcclusionContext = CDesktopTree::GetSharedOcclusionContext(v7);
    v9 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 56LL))(*(_QWORD *)(a1 + 8));
    v17 = 0;
    v10 = 0;
    v16 = (FastRegion::CRegion *)&v17;
    while ( 1 )
    {
      v11 = 1;
      if ( !*(_BYTE *)(a2 + 2324) )
        v11 = *(_DWORD *)(a2 + 16);
      if ( v10 >= v11 )
        break;
      ((void (__fastcall *)(__int64, float *, _QWORD, __int64, const struct COcclusionContext *, unsigned __int64, __int64, __int64))CTreeDirty::GetOptimizedRect)(
        a2,
        v15,
        v10,
        v6,
        SharedOcclusionContext,
        (unsigned __int64)&v16 & -(__int64)(*(_QWORD *)(a1 + 464) != 0LL),
        v9,
        a3);
      if ( v15[2] > v15[0] && v15[3] > v15[1] )
      {
        CMergedRectBase<8>::Add((unsigned int *)(a1 + 16), (__int64)v15, v12, v13);
        v14 = *(const struct FastRegion::Internal::CRgnData ***)(a1 + 464);
        if ( v14 )
        {
          CRegion::Union(v14, &v16);
          *(_DWORD *)v16 = 0;
        }
      }
      ++v10;
    }
    FastRegion::CRegion::FreeMemory(&v16);
  }
}
