/*
 * XREFs of ?ProcessSetClearColor@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_SETCLEARCOLOR@@@Z @ 0x180206310
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ @ 0x180206340 (-ForceFullDirty@CRemoteAppRenderTarget@@UEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessSetClearColor(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_SETCLEARCOLOR *a3)
{
  *(_OWORD *)((char *)this + 140) = *(_OWORD *)((char *)a3 + 8);
  CRemoteAppRenderTarget::ForceFullDirty((CRemoteAppRenderTarget *)((char *)this + 96));
  return 0LL;
}
