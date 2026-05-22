/*
 * XREFs of ?AddRef@VirtualTouchpadControllerProxy@@WII@EAAKXZ @ 0x180137A30
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 136));
}
