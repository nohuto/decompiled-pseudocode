/*
 * XREFs of ??1?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAA@XZ @ 0x18035D0C0
 * Callers:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18035D0EC (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x1803609C0 (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     _CActionCenterExperienceManager::CActionCenterExperienceManager_::_1_::dtor$17 @ 0x1806BE2E1 (_CActionCenterExperienceManager--CActionCenterExperienceManager_--_1_--dtor$17.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x180066570 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?revoke@?$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ @ 0x180362D28 (-revoke@-$event_revoker@UIViewCoordinator@Shell@UI@WindowsUdk@winrt@@@winrt@@QEAAXXZ.c)
 */

__int64 __fastcall winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::~event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>(
        __int64 *a1)
{
  __int64 result; // rax

  result = winrt::event_revoker<winrt::WindowsUdk::UI::Shell::IViewCoordinator>::revoke();
  if ( *a1 )
    return winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(a1);
  return result;
}
