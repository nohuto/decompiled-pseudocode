/*
 * XREFs of ?ExitBroadcastMode@BroadcastDVRComponent@@UEAAJXZ @ 0x180232A40
 * Callers:
 *     <none>
 * Callees:
 *     ?BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ @ 0x1802A379C (-BroadcastDVRComponent_ExitBroadcastMode@GameDVRTraceProvider@@SAXXZ.c)
 */

__int64 __fastcall BroadcastDVRComponent::ExitBroadcastMode(BroadcastDVRComponent *this)
{
  __int64 result; // rax

  GameDVRTraceProvider::BroadcastDVRComponent_ExitBroadcastMode();
  result = 0LL;
  *(_WORD *)((char *)this + 447) = 0;
  return result;
}
