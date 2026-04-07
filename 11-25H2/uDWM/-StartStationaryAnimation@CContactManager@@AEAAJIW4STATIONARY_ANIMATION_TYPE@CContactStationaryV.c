/*
 * XREFs of ?StartStationaryAnimation@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K@Z @ 0x18008F130
 * Callers:
 *     ?OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z @ 0x18007EF64 (-OnGesture@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_RENDERGESTURE@@@Z.c)
 * Callees:
 *     ?StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactStationaryVisual@@PEBUtagPOINT@@PEBUtagRECT@@_K_N@Z @ 0x18002FA00 (-StartStationaryAnimationWithDelay@CContactManager@@AEAAJIW4STATIONARY_ANIMATION_TYPE@CContactSt.c)
 */

__int64 __fastcall CContactManager::StartStationaryAnimation(
        __int64 a1,
        int a2,
        unsigned int a3,
        __int64 *a4,
        __int64 a5,
        unsigned __int64 a6)
{
  return CContactManager::StartStationaryAnimationWithDelay(a1, a2, a3, a4, a5, a6, 0);
}
