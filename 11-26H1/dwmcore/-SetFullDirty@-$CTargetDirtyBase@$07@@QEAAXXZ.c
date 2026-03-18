/*
 * XREFs of ?SetFullDirty@?$CTargetDirtyBase@$07@@QEAAXXZ @ 0x180057900
 * Callers:
 *     ?Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x18005714C (-Render@CDDARenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ @ 0x1800643C8 (-CalcTreeBounds@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801234B0 (-UpdateTargetDirty@COffScreenRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180148BBC (-ProcessUpdateTransform@CRemoteRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTERENDER.c)
 *     ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x18014AE74 (-UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z @ 0x1801A4A70 (-CheckOcclusionState@CDDARenderTarget@@UEAAJ_N@Z.c)
 *     ?EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ @ 0x1801B61B0 (-EnsureRenderTargets@COffScreenRenderTarget@@MEAAJXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ @ 0x1801D3630 (-HandleDDAArrivalOrDeparture@CLegacyRenderTarget@@UEAAJXZ.c)
 *     ?UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801D4998 (-UpdateAlphaMode@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D7880 (-HandleDDAArrivalOrDeparture@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ @ 0x1801DB730 (-ForceFullDirty@CLegacyRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ @ 0x1801DD1D0 (-ForceFullDirty@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ @ 0x1801E3C10 (-ForceFullDirty@COffScreenRenderTarget@@UEAAXXZ.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801FC5DC (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z @ 0x1801FD0C0 (-UpdateTargetDirty@CCaptureRenderTarget@@MEAAXAEBVCTreeDirty@@_N@Z.c)
 *     ?ForceFullDirty@CDDARenderTarget@@UEAAXXZ @ 0x1801FD1F0 (-ForceFullDirty@CDDARenderTarget@@UEAAXXZ.c)
 *     ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x180206340 (-ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ.c)
 *     ?SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z @ 0x1802063B4 (-SetSize@CRemoteAppRenderTarget@@IEAAJAEBUD2D_SIZE_U@@@Z.c)
 *     ?SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z @ 0x180206BF8 (-SetSDRBoost@CDDisplayRenderTarget@@IEAAXM@Z.c)
 *     ?SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z @ 0x180206CF0 (-SetSDRBoost@CLegacyRenderTarget@@IEAAXM@Z.c)
 *     ?ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ @ 0x180247380 (-ForceFullDirty@CRemoteRenderTarget@@UEAAXXZ.c)
 *     ?SetSDRBoost@CDDARenderTarget@@QEAAXM@Z @ 0x180253388 (-SetSDRBoost@CDDARenderTarget@@QEAAXM@Z.c)
 *     ?CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z @ 0x180253770 (-CheckOcclusionState@CDDisplayRenderTarget@@UEAAJ_N@Z.c)
 *     ?ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x180254208 (-ProcessUpdateTransform@CDDisplayRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_DDISPLAYRE.c)
 *     ?ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ @ 0x180254870 (-ResizeSwapChainBuffers@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ @ 0x180254DC0 (-EnsureSwapChain@CRemoteRenderTarget@@IEAAJXZ.c)
 *     ?EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255B18 (-EnsureSwapChain@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?Present@CRemoteAppRenderTarget@@IEAAJXZ @ 0x180255D8C (-Present@CRemoteAppRenderTarget@@IEAAJXZ.c)
 *     ?Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z @ 0x1802560AC (-Render@CRemoteAppRenderTarget@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802566B4 (-UpdateTransformAndTreeBounds@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     _CCaptureRenderTarget::AddCursorInvalidRects_::_2_::_lambda_1_::operator() @ 0x180256B00 (_CCaptureRenderTarget--AddCursorInvalidRects_--_2_--_lambda_1_--operator().c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x1802584CC (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 *     ?EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ @ 0x1802588A0 (-EnsureSwapChain@CLegacyStereoRenderTarget@@MEAAJXZ.c)
 *     ?UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z @ 0x1802594EC (-UpdateTransform@CDDARenderTarget@@QEAAXAEBVCMonitorTransform@@@Z.c)
 * Callees:
 *     ?Reset@?$CMergedRectBase@$07@@QEAAXXZ @ 0x180057518 (-Reset@-$CMergedRectBase@$07@@QEAAXXZ.c)
 *     ?Add@?$CMergedRectBase@$07@@QEAAXAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180057AB0 (-Add@-$CMergedRectBase@$07@@QEAAXAEBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@.c)
 *     ?GetRects@?$CMergedRectBase@$07@@QEAA?AV?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@XZ @ 0x18008D01C (-GetRects@-$CMergedRectBase@$07@@QEAA-AV-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_.c)
 *     ?DoesContain@?$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1801737C0 (-DoesContain@-$TMilRect@MUD2D_RECT_F@@UD3D_RECT_F@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     ??A?$span@$$CBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@$0?0@gsl@@QEBAAEBV?$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUniqueness@@@@_K@Z @ 0x1801A4F38 (--A-$span@$$CBV-$TMilRect_@MUD2D_RECT_F@@UD3D_RECT_F@@UD2D_POINTANDSIZE_F@@UNotNeeded@RectUnique.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CTargetDirtyBase<8>::SetFullDirty(__int64 a1)
{
  __m128 v2; // xmm1
  __int64 v3; // rcx
  __int64 result; // rax
  __int64 v5; // rax
  __m128 v6; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v7[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = (__m128)_mm_loadu_si128((const __m128i *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 32LL))(*(_QWORD *)(a1 + 8)));
  v6 = v2;
  if ( _mm_shuffle_ps(v2, v2, 170).m128_f32[0] <= v2.m128_f32[0]
    || _mm_shuffle_ps(v2, v2, 255).m128_f32[0] <= _mm_shuffle_ps(v2, v2, 85).m128_f32[0] )
  {
    return CTargetDirtyBase<8>::Reset(a1);
  }
  if ( !*(_BYTE *)(a1 + 1872)
    || !*(_BYTE *)(a1 + 1873)
    && (CMergedRectBase<8>::GetRects(a1 + 16, v7),
        v5 = gsl::span<TMilRect_<float,D2D_RECT_F,D3D_RECT_F,D2D_POINTANDSIZE_F,RectUniqueness::NotNeeded> const,-1>::operator[](
               v7,
               0LL),
        !(unsigned __int8)TMilRect<float,D2D_RECT_F,D3D_RECT_F,RectUniqueness::NotNeeded>::DoesContain(v5, &v6)) )
  {
    *(_BYTE *)(a1 + 1873) = 1;
  }
  CMergedRectBase<8>::Reset(a1 + 16);
  result = CMergedRectBase<8>::Add(v3, &v6);
  if ( *(_QWORD *)(a1 + 464) )
    result = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)a1 + 8LL))(a1, 0LL);
  *(_BYTE *)(a1 + 1872) = 1;
  return result;
}
