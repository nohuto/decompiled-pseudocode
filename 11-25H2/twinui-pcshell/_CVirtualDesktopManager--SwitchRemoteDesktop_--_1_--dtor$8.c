/*
 * XREFs of _CVirtualDesktopManager::SwitchRemoteDesktop_::_1_::dtor$8 @ 0x1806AA8EF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CVirtualDesktopManager::SwitchRemoteDesktop_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  Microsoft::WRL::Wrappers::Details::SyncLockExclusive::InternalUnlock((RTL_SRWLOCK **)(a2 + 32));
}
