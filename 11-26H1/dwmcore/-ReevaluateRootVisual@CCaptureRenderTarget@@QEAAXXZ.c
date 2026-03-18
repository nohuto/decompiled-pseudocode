/*
 * XREFs of ?ReevaluateRootVisual@CCaptureRenderTarget@@QEAAXXZ @ 0x18014A110
 * Callers:
 *     ?SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18014A014 (-SetTargetVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z @ 0x18021EB9C (-SetReferenceVisual@CCaptureRenderTarget@@QEAAXPEAVCVisual@@@Z.c)
 *     ?ProcessSetPreferReferenceVisual@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CAPTURERENDERTARGET_SETPREFERREFERENCEVISUAL@@@Z @ 0x18021EF94 (-ProcessSetPreferReferenceVisual@CCaptureRenderTarget@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_CA.c)
 * Callees:
 *     ?SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z @ 0x18014A9D8 (-SetRootVisual@CRenderTarget@@QEAAJPEAVCVisual@@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1802014C4 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

void __fastcall CCaptureRenderTarget::ReevaluateRootVisual(struct CVisual **this)
{
  struct CVisual *v1; // rdx
  int v2; // eax
  int v3; // eax
  int v4; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_BYTE *)this + 2808) && (v1 = this[327]) != 0LL )
  {
    v2 = CRenderTarget::SetRootVisual((CRenderTarget *)this, v1);
    if ( v2 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16B,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
        (const char *)(unsigned int)v2,
        v4);
  }
  else
  {
    v3 = CRenderTarget::SetRootVisual((CRenderTarget *)this, this[352]);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x16F,
        (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\capturerendertarget.cpp",
        (const char *)(unsigned int)v3,
        v4);
  }
}
