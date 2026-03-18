/*
 * XREFs of ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160
 * Callers:
 *     ?TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ @ 0x1801FC7E4 (-TryEnsureSwapChain@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ??1CDDisplayRenderTarget@@MEAA@XZ @ 0x180245E38 (--1CDDisplayRenderTarget@@MEAA@XZ.c)
 *     ?DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z @ 0x180247250 (-DetachFromChannel@CDDisplayRenderTarget@@MEAAXPEAVCChannelContext@@_N@Z.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180254160 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?InternalRelease@?$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ @ 0x1800E1DB8 (-InternalRelease@-$CMILCOMBaseWeakRefSource@VCMilObjectDeleter@@@@IEAAKXZ.c)
 *     ?Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z @ 0x180148FEC (-Reset@CTargetStats@@QEAAXIPEAVIOverlaySwapChain@@@Z.c)
 *     ?reset@?$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180149134 (-reset@-$com_ptr_t@VCDDARenderTarget@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801491D8 (-ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x18020A23C (-Reset@COverlayContext@@QEAAXXZ.c)
 *     ?CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z @ 0x18021F2D0 (-CleanupComputeScribble@CDDisplayRenderTarget@@UEAAX_N@Z.c)
 */

void __fastcall CDDisplayRenderTarget::ReleaseSwapChain(CDDisplayRenderTarget *this)
{
  __int64 v2; // rcx

  CDDisplayRenderTarget::CleanupComputeScribble(this, 1);
  CDDisplayRenderTarget::ResetSyncLockGroup((CDDisplayRenderTarget *)((char *)this - 160));
  COverlayContext::Reset((CDDisplayRenderTarget *)((char *)this + 72));
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 6);
  v2 = *((_QWORD *)this + 7);
  *((_QWORD *)this + 7) = 0LL;
  if ( v2 )
    CMILCOMBaseWeakRefSource<CMilObjectDeleter>::InternalRelease(v2);
  wil::com_ptr_t<CDDARenderTarget,wil::err_returncode_policy>::reset((CResource **)this + 8);
  CTargetStats::Reset((CDDisplayRenderTarget *)((char *)this + 31992), *((_DWORD *)this + 7995), 0LL);
  *((_BYTE *)this + 32368) = 0;
}
