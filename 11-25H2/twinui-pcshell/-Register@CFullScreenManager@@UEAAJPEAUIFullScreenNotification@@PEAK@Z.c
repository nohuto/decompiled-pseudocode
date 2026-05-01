/*
 * XREFs of ?Register@CFullScreenManager@@UEAAJPEAUIFullScreenNotification@@PEAK@Z @ 0x1803270B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CFullScreenManager::Register(RTL_SRWLOCK *this, struct IUnknown *a2, unsigned int *a3)
{
  return CGITRegistrationList::Register(this + 5, a2, a3);
}
