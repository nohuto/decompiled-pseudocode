/*
 * XREFs of ?ProcessDestroyWindow@CRemoteAppRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW@@@Z @ 0x180206124
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ @ 0x18020613C (-DestroyWindow@CRemoteAppRenderTarget@@IEAAXXZ.c)
 */

__int64 __fastcall CRemoteAppRenderTarget::ProcessDestroyWindow(
        CRemoteAppRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_REMOTEAPPRENDERTARGET_DESTROYWINDOW *a3)
{
  CRemoteAppRenderTarget::DestroyWindow(this);
  return 0LL;
}
