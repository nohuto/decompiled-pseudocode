/*
 * XREFs of ?ProcessSetPreferReferenceVisual@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL@@@Z @ 0x18021EF94
 * Callers:
 *     ?ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x1801E7E80 (-ProcessMessage@CGlobalComposition@@EEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@.c)
 * Callees:
 *     ?ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ @ 0x18014A110 (-ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ.c)
 */

__int64 __fastcall CCaptureRenderTarget::ProcessSetPreferReferenceVisual(
        CCaptureRenderTarget *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL *a3)
{
  char v3; // al

  v3 = *((_BYTE *)a3 + 8);
  if ( *((_BYTE *)this + 2808) != v3 )
  {
    *((_BYTE *)this + 2808) = v3;
    CCaptureRenderTarget::ReevaluateRootVisual((struct CVisual **)this);
  }
  return 0LL;
}
