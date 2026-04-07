/*
 * XREFs of ??0CBaseRenderTargetProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x18009A394
 * Callers:
 *     ??0CIndirectSwapchainRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800B80C4 (--0CIndirectSwapchainRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CLegacyVisualCaptureRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800B8D28 (--0CLegacyVisualCaptureRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 *     ??0CMagnifierRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z @ 0x1800BB69C (--0CMagnifierRenderTargetProxy@@QEAA@PEAUIDwmChannel@@I@Z.c)
 * Callees:
 *     ??0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z @ 0x1800BF338 (--0CResourceProxy@@IEAA@PEAUIDwmChannel@@IW4Enum@DwmResourceType@@@Z.c)
 */

_QWORD *__fastcall CBaseRenderTargetProxy::CBaseRenderTargetProxy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v4; // rcx
  _QWORD *result; // rax

  CResourceProxy::CResourceProxy(a1, a2, a3, a4);
  result = v4;
  *v4 = &CBaseRenderTargetProxy::`vftable';
  return result;
}
