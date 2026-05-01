/*
 * XREFs of ?Unregister@FullScreenPositioner@@UEAAJK@Z @ 0x1802BA280
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FullScreenPositioner::Unregister(RTL_SRWLOCK *this, int a2)
{
  return CGITRegistrationList::Unregister(this + 23, a2);
}
