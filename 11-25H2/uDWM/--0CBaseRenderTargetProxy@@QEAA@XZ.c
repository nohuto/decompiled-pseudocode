/*
 * XREFs of ??0CBaseRenderTargetProxy@@QEAA@XZ @ 0x1800968DC
 * Callers:
 *     ??$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x180084AD8 (--$CreateProxy@VCLegacyVisualCaptureRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCLegacyVisualCa.c)
 *     ??$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800A9768 (--$CreateProxy@VCIndirectSwapchainRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCIndirectSwapchai.c)
 *     ??$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800A9840 (--$CreateProxy@VCMagnifierRenderTargetProxy@@@CCompositor@@IEAAJPEAPEAVCMagnifierRenderTargetPro.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@XZ @ 0x1800088BC (--0CResourceProxy@@IEAA@XZ.c)
 */

CBaseRenderTargetProxy *__fastcall CBaseRenderTargetProxy::CBaseRenderTargetProxy(CBaseRenderTargetProxy *this)
{
  CBaseRenderTargetProxy *v1; // rcx
  CBaseRenderTargetProxy *result; // rax

  CResourceProxy::CResourceProxy(this);
  result = v1;
  *(_QWORD *)v1 = &CBaseRenderTargetProxy::`vftable';
  return result;
}
