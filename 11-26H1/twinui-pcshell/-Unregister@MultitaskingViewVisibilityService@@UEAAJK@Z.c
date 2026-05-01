/*
 * XREFs of ?Unregister@MultitaskingViewVisibilityService@@UEAAJK@Z @ 0x180498AB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall MultitaskingViewVisibilityService::Unregister(RTL_SRWLOCK *this, int a2)
{
  return CGITRegistrationList::Unregister(this + 9, a2);
}
