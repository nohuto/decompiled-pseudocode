/*
 * XREFs of ?CreateMagnifierRenderTargetProxy@CCompositor@@QEAAJPEAPEAVCMagnifierRenderTargetProxy@@@Z @ 0x1800A9EFC
 * Callers:
 *     ?Initialize@CMagnifier@@AEAAJXZ @ 0x1800BA6DC (-Initialize@CMagnifier@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateMagnifierRenderTargetProxy(__int64 this, CBaseObject **a2)
{
  return CCompositor::CreateProxy<CMagnifierRenderTargetProxy>(this, a2);
}
