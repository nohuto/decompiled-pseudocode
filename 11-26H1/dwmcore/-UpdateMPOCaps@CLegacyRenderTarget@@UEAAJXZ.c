/*
 * XREFs of ?UpdateMPOCaps@CLegacyRenderTarget@@UEAAJXZ @ 0x18014ACF0
 * Callers:
 *     ?CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z @ 0x1801FBF80 (-CheckOcclusionState@CLegacyRenderTarget@@UEAAJ_N@Z.c)
 *     ?EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ @ 0x1801FC1D0 (-EnsureSwapChain@CLegacyRenderTarget@@MEAAJXZ.c)
 *     ?ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDERTARGET_UPDATETRANSFORM@@@Z @ 0x1801FC5DC (-ProcessUpdateTransform@CLegacyRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_LEGACYRENDER.c)
 *     ?ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x1802532E0 (-ProcessUpdateRefreshRate@CLegacyRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARG.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ @ 0x18014ADBC (-CheckForceParallelMode@CLegacyRenderTarget@@AEAAXXZ.c)
 *     ?UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ @ 0x18014AE74 (-UpdateAlphaMode@CLegacyRenderTarget@@IEAAXXZ.c)
 *     ?UpdateMPOCaps@COverlayContext@@QEAAJXZ @ 0x18023E170 (-UpdateMPOCaps@COverlayContext@@QEAAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CLegacyRenderTarget::UpdateMPOCaps(CLegacyRenderTarget *this)
{
  CLegacyRenderTarget *v1; // rsi
  __int64 v3; // rcx
  int v4; // ebx
  int v5; // eax
  int updated; // eax
  int v7; // edi

  v1 = (CLegacyRenderTarget *)((char *)this - 160);
  v3 = *((_QWORD *)this + 5);
  v4 = 0;
  if ( v3 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v3 + 24) + 296LL))(v3 + 24);
    v4 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v5, 0x106u, 0LL);
    updated = COverlayContext::UpdateMPOCaps((CLegacyRenderTarget *)((char *)this + 56));
    v7 = updated;
    if ( updated < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, 0x107u, 0LL);
    if ( !v4 || v4 >= 0 && v7 < 0 )
      v4 = v7;
    CLegacyRenderTarget::UpdateAlphaMode(v1);
    CLegacyRenderTarget::CheckForceParallelMode(v1);
  }
  return (unsigned int)v4;
}
