/*
 * XREFs of ?AddRef@VirtualTouchpadControllerProxy@@WIA@EAAKXZ @ 0x180137A10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VirtualTouchpadControllerProxy::AddRef(__int64 a1)
{
  return BamoInputObserverManagerPrincipal::AddRef((BamoInputObserverManagerPrincipal *)(a1 - 128));
}
