/*
 * XREFs of ?ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ @ 0x180241850
 * Callers:
 *     <none>
 * Callees:
 *     ?BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802AB0FC (-BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ.c)
 */

__int64 __fastcall BroadcastDVRComponent::ExitBroadcastMode(BroadcastDVRComponent *this)
{
  GameDVRTraceProvider::BroadcastDVRComponent_ExitBroadcastMode();
  *(_WORD *)((char *)this + 447) = 0;
  return 0LL;
}
