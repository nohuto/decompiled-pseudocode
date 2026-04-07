/*
 * XREFs of ??0CIndirectSwapchainRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800B80C4
 * Callers:
 *     ??$Create@VCIndirectSwapchainRenderTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCIndirectSwapchainRenderTargetProxy@@@Z @ 0x1800A7140 (--$Create@VCIndirectSwapchainRenderTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCInd.c)
 * Callees:
 *     ??0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A394 (--0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CIndirectSwapchainRenderTargetProxy *__fastcall CIndirectSwapchainRenderTargetProxy::CIndirectSwapchainRenderTargetProxy(
        CIndirectSwapchainRenderTargetProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CIndirectSwapchainRenderTargetProxy *v3; // rcx
  CIndirectSwapchainRenderTargetProxy *result; // rax

  CBaseRenderTargetProxy::CBaseRenderTargetProxy((__int64)this, (__int64)a2, a3, 7LL);
  result = v3;
  *(_QWORD *)v3 = &CIndirectSwapchainRenderTargetProxy::`vftable';
  return result;
}
