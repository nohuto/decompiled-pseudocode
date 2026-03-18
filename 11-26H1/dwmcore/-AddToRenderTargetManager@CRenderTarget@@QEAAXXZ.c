/*
 * XREFs of ?AddToRenderTargetManager@CRenderTarget@@QEAAXXZ @ 0x18014AB68
 * Callers:
 *     ?NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014A970 (-NotifyOnChanged@CVisualCapture@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?Initialize@CRenderTarget@@MEAAJXZ @ 0x18014AB50 (-Initialize@CRenderTarget@@MEAAJXZ.c)
 *     ?ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_CREATE@@@Z @ 0x18021EF08 (-ProcessCreate@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTAR.c)
 *     ?Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMonitorTransform@@PEAPEAV1@@Z @ 0x18025935C (-Create@CDDARenderTarget@@SAJPEAUIDXGIOutputDWM@@PEAVCDesktopTree@@AEBVRenderTargetInfo@@AEBVCMo.c)
 * Callees:
 *     ?AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z @ 0x18014ABB0 (-AddRenderTarget@CRenderTargetManager@@AEAAXPEAVIRenderTarget@@@Z.c)
 */

void __fastcall CRenderTarget::AddToRenderTargetManager(CRenderTarget *this)
{
  if ( !*((_BYTE *)this + 156) )
  {
    CRenderTargetManager::AddRenderTarget(
      *(CRenderTargetManager **)(*((_QWORD *)this + 3) + 616LL),
      (struct IRenderTarget *)(((unsigned __int64)this + 96) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)));
    *((_BYTE *)this + 156) = 1;
  }
}
