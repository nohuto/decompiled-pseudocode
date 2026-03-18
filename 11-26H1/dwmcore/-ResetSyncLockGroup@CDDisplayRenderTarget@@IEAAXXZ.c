/*
 * XREFs of ?ResetSyncLockGroup@CDDisplayRenderTarget@@IEAAXXZ @ 0x1801491D8
 * Callers:
 *     ?ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ @ 0x180149160 (-ReleaseSwapChain@CDDisplayRenderTarget@@UEAAXXZ.c)
 *     ?ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTARGET_UPDATEREFRESHRATE@@@Z @ 0x180254160 (-ProcessUpdateRefreshRate@CDDisplayRenderTarget@@UEAAJPEAVCResourceTable@@PEBUtagMILCMD_RENDERTA.c)
 * Callees:
 *     ?RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z @ 0x1802066B0 (-RemoveRenderTarget@CSyncLockGroup@@QEAAXPEAVIMonitorTarget@@@Z.c)
 */

void __fastcall CDDisplayRenderTarget::ResetSyncLockGroup(CDDisplayRenderTarget *this)
{
  CSyncLockGroup **v1; // rbx

  v1 = (CSyncLockGroup **)((char *)this + 32520);
  if ( *((_QWORD *)this + 4065) )
  {
    CSyncLockGroup::RemoveRenderTarget(
      *v1,
      (struct IMonitorTarget *)(((unsigned __int64)this + 160) & -(__int64)(this != 0LL)));
    *v1 = 0LL;
  }
}
