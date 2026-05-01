/*
 * XREFs of _ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor$0 @ 0x1806CEDDE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ApplicationViewManagerVisibilityDebouncer::OnApplicationViewChanged_::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)(a2 + 184));
}
