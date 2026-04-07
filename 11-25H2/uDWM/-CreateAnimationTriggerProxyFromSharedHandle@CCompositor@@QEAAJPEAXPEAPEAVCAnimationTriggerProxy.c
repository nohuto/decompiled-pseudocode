/*
 * XREFs of ?CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x18009A5E8
 * Callers:
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x18004EA88 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180050DE8 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall CCompositor::CreateAnimationTriggerProxyFromSharedHandle(__int64 this, void *a2, CBaseObject **a3)
{
  return CCompositor::CreateProxyFromSharedHandle<CAnimationTriggerProxy>(this, a2, a3);
}
