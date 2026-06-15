/*
 * XREFs of _AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor$0 @ 0x1801647C2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall AtmosCheck::UpdateEndpointUnderLock_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockCriticalSection::~SyncLockCriticalSection((struct _RTL_CRITICAL_SECTION **)(a2 + 40));
}
