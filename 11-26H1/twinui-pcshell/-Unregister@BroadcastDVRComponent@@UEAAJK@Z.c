/*
 * XREFs of ?Unregister@BroadcastDVRComponent@@UEAAJK@Z @ 0x180314A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BroadcastDVRComponent::Unregister(RTL_SRWLOCK *this, int a2)
{
  return CGITRegistrationList::Unregister(this + 44, a2);
}
