/*
 * XREFs of ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180254160
 * Callers:
 *     <none>
 * Callees:
 *     ?reset@?$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180015450 (-reset@-$com_ptr_t@UIDXGISwapChain1@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801491D8 (-ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ.c)
 *     ?EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ @ 0x18014A234 (-EnsureDXGIOutput@CDDisplayRenderTarget@@IEAAJXZ.c)
 *     ?UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ @ 0x1801D4930 (-UpdateMPOCaps@CDDisplayRenderTarget@@UEAAJXZ.c)
 *     ?UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ @ 0x18029B1B0 (-UpdateRefreshRate@CDDisplaySwapChain@@UEAAJXZ.c)
 */

__int64 __fastcall CDDisplayRenderTarget::ProcessUpdateRefreshRate(
        CDDisplayRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_RENDERTARGET_UPDATEREFRESHRATE *a3)
{
  int updated; // eax
  __int64 v5; // rcx
  unsigned int v6; // r9d

  CDDisplayRenderTarget::ResetSyncLockGroup(this);
  wil::com_ptr_t<IDXGISwapChain1,wil::err_returncode_policy>::reset((__int64 *)this + 26);
  updated = CDDisplayRenderTarget::EnsureDXGIOutput(this);
  if ( updated < 0 )
  {
    v6 = 163;
    goto LABEL_6;
  }
  CDDisplayRenderTarget::UpdateMPOCaps((CDDisplayRenderTarget *)((char *)this + 160));
  v5 = *((_QWORD *)this + 27);
  if ( v5 )
  {
    updated = CDDisplaySwapChain::UpdateRefreshRate((CDDisplaySwapChain *)(v5 + 24));
    if ( updated < 0 )
    {
      v6 = 171;
LABEL_6:
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, updated, v6, 0LL);
      CDDisplayRenderTarget::ReleaseSwapChain((CDDisplayRenderTarget *)((char *)this + 160));
    }
  }
  return 0LL;
}
