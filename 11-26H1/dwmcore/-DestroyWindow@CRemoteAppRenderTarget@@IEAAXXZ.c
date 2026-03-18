/*
 * XREFs of ?DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18020613C
 * Callers:
 *     ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x180206124 (-ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRE.c)
 *     ?DetachFromChannel@CRemoteAppRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z @ 0x180255AA0 (-DetachFromChannel@CRemoteAppRenderTarget@@UEAAXPEAVCChannelContext@@_N@Z.c)
 * Callees:
 *     ?RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x180148E64 (-RemoveFromRenderTargetManager@CRenderTarget@@QEAAXXZ.c)
 *     ?SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z @ 0x18020619C (-SendMetaData@CRemoteAppRenderTarget@@IEBAJAEBU_DWMIndirectMetaData@@@Z.c)
 *     ?ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ @ 0x1802064A4 (-ReleaseSwapChain@CRemoteAppRenderTarget@@IEAAXXZ.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

void __fastcall CRemoteAppRenderTarget::DestroyWindow(CRemoteAppRenderTarget *this)
{
  CRemoteAppRenderTarget *v2; // rcx
  __int64 v3; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v4[10]; // [rsp+28h] [rbp-50h] BYREF

  v3 = 4LL;
  memset_0(v4, 0, 0x40uLL);
  v4[0] = *((_QWORD *)this + 271);
  CRemoteAppRenderTarget::SendMetaData(v2, (const struct _DWMIndirectMetaData *)&v3);
  CRenderTarget::RemoveFromRenderTargetManager(this);
  CRemoteAppRenderTarget::ReleaseSwapChain(this);
  *((_QWORD *)this + 271) = 0LL;
}
