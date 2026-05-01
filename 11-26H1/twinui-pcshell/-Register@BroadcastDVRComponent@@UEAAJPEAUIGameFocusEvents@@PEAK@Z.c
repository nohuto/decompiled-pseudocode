/*
 * XREFs of ?Register@BroadcastDVRComponent@@UEAAJPEAUIGameFocusEvents@@PEAK@Z @ 0x180313E80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall BroadcastDVRComponent::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  return CGITRegistrationList::Register(this + 44, a2, a3);
}
