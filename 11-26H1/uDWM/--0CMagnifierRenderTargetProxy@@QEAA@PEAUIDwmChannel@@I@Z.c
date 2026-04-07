/*
 * XREFs of ??0CMagnifierRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BB69C
 * Callers:
 *     ??$Create@VCMagnifierRenderTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800A7350 (--$Create@VCMagnifierRenderTargetProxy@@@CResourceProxy@@SAJPEAUIDwmChannel@@PEAPEAVCMagnifierRe.c)
 * Callees:
 *     ??0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A394 (--0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

CMagnifierRenderTargetProxy *__fastcall CMagnifierRenderTargetProxy::CMagnifierRenderTargetProxy(
        CMagnifierRenderTargetProxy *this,
        struct IDwmChannel *a2,
        __int64 a3)
{
  CMagnifierRenderTargetProxy *v3; // rcx
  CMagnifierRenderTargetProxy *result; // rax

  CBaseRenderTargetProxy::CBaseRenderTargetProxy((__int64)this, (__int64)a2, a3, 12LL);
  result = v3;
  *(_QWORD *)v3 = &CIndirectSwapchainRenderTargetProxy::`vftable';
  return result;
}
