/*
 * XREFs of ?CreateAnimationTriggerProxyFromSharedHandle@CCompositor@@QEAAJPEAXPEAPEAVCAnimationTriggerProxy@@@Z @ 0x180082AD4
 * Callers:
 *     ?_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x18003E6A4 (-_SetStoryboardTriggerForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?_TriggerAnimation@CAnimationClock@@AEAAJXZ @ 0x180040EC8 (-_TriggerAnimation@CAnimationClock@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositor::CreateAnimationTriggerProxyFromSharedHandle(
        struct IDwmChannel **this,
        void *a2,
        struct CAnimationTriggerProxy **a3)
{
  return CResourceProxy::CreateFromSharedHandle<CAnimationTriggerProxy>(this[3]);
}
