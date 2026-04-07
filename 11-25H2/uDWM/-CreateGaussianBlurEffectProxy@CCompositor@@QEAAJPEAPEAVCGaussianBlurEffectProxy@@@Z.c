/*
 * XREFs of ?CreateGaussianBlurEffectProxy@CCompositor@@QEAAJPEAPEAVCGaussianBlurEffectProxy@@@Z @ 0x1800A9ED8
 * Callers:
 *     ?ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ @ 0x1800B0D68 (-ScheduleEntranceAnimations@CDisplayDuplicateToExtendAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateGaussianBlurEffectProxy(__int64 this, CBaseObject **a2)
{
  return CCompositor::CreateProxy<CGaussianBlurEffectProxy>(this, a2);
}
