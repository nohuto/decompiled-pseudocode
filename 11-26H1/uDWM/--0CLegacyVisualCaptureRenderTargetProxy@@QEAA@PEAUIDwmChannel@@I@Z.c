/*
 * XREFs of ??0CLegacyVisualCaptureRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800B8D28
 * Callers:
 *     ??$Create@VCLegacyVisualCaptureRenderTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCLegacyVisualCaptureRenderTargetProxy@@@Z @ 0x1800A7248 (--$Create@VCLegacyVisualCaptureRenderTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCL.c)
 * Callees:
 *     ??0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A394 (--0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CLegacyVisualCaptureRenderTargetProxy *__fastcall CLegacyVisualCaptureRenderTargetProxy::CLegacyVisualCaptureRenderTargetProxy(
        CLegacyVisualCaptureRenderTargetProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CLegacyVisualCaptureRenderTargetProxy *v3; // rcx
  CLegacyVisualCaptureRenderTargetProxy *result; // rax

  CBaseRenderTargetProxy::CBaseRenderTargetProxy((__int64)this, (__int64)a2, a3, 9LL);
  result = v3;
  *(_QWORD *)v3 = &CIndirectSwapchainRenderTargetProxy::`vftable';
  return result;
}
