/*
 * XREFs of _CVirtualDesktopManager::CopyDesktopState_::_1_::dtor$0 @ 0x1806D0DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::CopyDesktopState_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)(a2 + 96));
}
