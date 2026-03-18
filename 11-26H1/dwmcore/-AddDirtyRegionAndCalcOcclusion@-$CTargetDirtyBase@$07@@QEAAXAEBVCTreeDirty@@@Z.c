/*
 * XREFs of ?AddDirtyRegionAndCalcOcclusion@?$CTargetDirtyBase@$07@@QEAAXAEBVCTreeDirty@@@Z @ 0x180057560
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801234B0 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x180255400 (-Render@CRemoteRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?AddDirtyRects@?$CTargetDirtyBase@$07@@QEAAXAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x1800557B0 (-AddDirtyRects@-$CTargetDirtyBase@$07@@QEAAXAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ??0?$extent_type@$0?0@details@gsl@@QEAA@_K@Z @ 0x180055920 (--0-$extent_type@$0-0@details@gsl@@QEAA@_K@Z.c)
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ??0?$CMergedRectBase@$07@@QEAA@_N@Z @ 0x18005A1BC (--0-$CMergedRectBase@$07@@QEAA@_N@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x1800797A0 (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?Optimize@?$CMergedRectBase@$07@@AEAAXXZ @ 0x18008C734 (-Optimize@-$CMergedRectBase@$07@@AEAAXXZ.c)
 *     ?CalcOcclusion@?$CTargetDirtyBase@$07@@IEAAJAEBV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@@Z @ 0x18008C7A8 (-CalcOcclusion@-$CTargetDirtyBase@$07@@IEAAJAEBV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18008D01C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?Union@CRegion@@QEAAXAEBV1@@Z @ 0x1800ECDBC (-Union@CRegion@@QEAAXAEBV1@@Z.c)
 *     ?GetDirtyRects@CTreeDirty@@QEBA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x180192B98 (-GetDirtyRects@CTreeDirty@@QEBA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTA.c)
 *     ?GetOptimizedRect@CTreeDirty@@QEBA?AV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@IAEBV2@AEBVCOcclusionContext@@PEAVCRegion@@PEBVCMILMatrix@@AEBV?$span@PEBVCVisual@@$0?0@gsl@@@Z @ 0x180201808 (-GetOptimizedRect@CTreeDirty@@QEBA-AV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CTargetDirtyBase<8>::AddDirtyRegionAndCalcOcclusion(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int128 *v9; // rax
  __int64 *v10; // rcx
  __int128 v11; // xmm0
  __int64 v12; // rax
  __int64 v13; // r12
  unsigned int i; // edi
  unsigned int v15; // ecx
  bool v16; // cf
  CRegion *v17; // rcx
  __int64 v18; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v19; // [rsp+48h] [rbp-B8h]
  struct D2D_RECT_F v20; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v21; // [rsp+60h] [rbp-A0h] BYREF
  int *v22; // [rsp+70h] [rbp-90h] BYREF
  int v23; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v24; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE v25[444]; // [rsp+C4h] [rbp-3Ch] BYREF

  CMergedRectBase<8>::CMergedRectBase<8>(&v24, 0LL);
  CMergedRectBase<8>::GetRects(a1 + 16, &v18);
  v4 = v19;
  v5 = v19 + 16 * v18;
  while ( v4 != v5 )
  {
    CMergedRectBase<8>::Add(&v24, v4);
    v4 += 16LL;
  }
  CTreeDirty::GetDirtyRects(a2, &v18);
  if ( !*(_BYTE *)(a1 + 1872) )
  {
    v6 = v19;
    v7 = v19 + 16 * v18;
    while ( v6 != v7 )
    {
      CMergedRectBase<8>::Add(&v24, v6);
      v6 += 16LL;
    }
  }
  if ( !v25[436] )
    CMergedRectBase<8>::Optimize(&v24);
  gsl::details::extent_type<-1>::extent_type<-1>(&v20, v24);
  *(_QWORD *)&v20.right = v25;
  if ( *(_QWORD *)&v20.left == -1LL )
    ((void (*)(void))`gsl::details::get_terminate_handler'::`2'::handler)();
  CTargetDirtyBase<8>::CalcOcclusion(a1, &v20);
  if ( !*(_BYTE *)(a1 + 1872) )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64))a1)(a1);
    if ( v8 )
    {
      v9 = (__int128 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8));
      v10 = *(__int64 **)(a1 + 8);
      v11 = *v9;
      v12 = *v10;
      v21 = v11;
      v13 = (*(__int64 (__fastcall **)(__int64 *))(v12 + 56))(v10);
      for ( i = 0; ; ++i )
      {
        v15 = 1;
        if ( !*(_BYTE *)(a2 + 2324) )
          v15 = *(_DWORD *)(a2 + 16);
        if ( i >= v15 )
          break;
        v23 = 0;
        v22 = &v23;
        v16 = *(_QWORD *)(a1 + 464) != 0LL;
        v18 = 0LL;
        v19 = 0LL;
        ((void (__fastcall *)(__int64, struct D2D_RECT_F *, _QWORD, __int128 *, __int64, unsigned __int64, __int64, __int64 *))CTreeDirty::GetOptimizedRect)(
          a2,
          &v20,
          i,
          &v21,
          v8,
          (unsigned __int64)&v22 & -(__int64)v16,
          v13,
          &v18);
        if ( !IsEmpty(&v20) )
        {
          CMergedRectBase<8>::Add(a1 + 16, &v20);
          v17 = *(CRegion **)(a1 + 464);
          if ( v17 )
            CRegion::Union(v17, (const struct CRegion *)&v22);
        }
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)&v22);
      }
    }
    else
    {
      CTargetDirtyBase<8>::AddDirtyRects(a1, &v18);
    }
  }
}
