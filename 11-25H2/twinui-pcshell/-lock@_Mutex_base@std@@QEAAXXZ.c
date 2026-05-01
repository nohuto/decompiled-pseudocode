/*
 * XREFs of ?lock@_Mutex_base@std@@QEAAXXZ @ 0x18005A388
 * Callers:
 *     ?StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z @ 0x1800589A0 (-StartupToastNotifier@StartupAppMonitor@@CAXPEAV1@@Z.c)
 *     ?unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXPEAUIServiceProvider@@@Z @ 0x1800A6E10 (-unsubscribe_from_services@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@UEAAXP.c)
 *     ?RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1800A8DC4 (-RegisterUTMListeners@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ.c)
 *     ?GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@U?$pair@Uhstring@winrt@@U12@@std@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1800AC660 (-GetAppThatWasUpdatedOrInstalled@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@.c)
 *     ?GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA?AV?$optional@Uhstring@winrt@@@std@@PEAUHKEY__@@PEBG@Z @ 0x1801BF13C (-GetAppThatWasDeleted@AppBackupListener@implementation@Shell@Internal@Windows@winrt@@AEAA-AV-$op.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x18029A81C (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::UpdateWidgetsTelemetryAsync$_ResumeCoro$1 @ 0x1805B5D00 (winrt--Windows--Internal--Shell--implementation--DashboardManager--UpdateWidgetsTel_ea_1805B5D00.c)
 *     winrt::Windows::Internal::Shell::implementation::AppBackupListener::OnTileAdded$_ResumeCoro$1 @ 0x1805F0C80 (winrt--Windows--Internal--Shell--implementation--AppBackupListener--OnTileAdded$_ResumeCoro$1.c)
 * Callees:
 *     <none>
 */

void __fastcall std::_Mutex_base::lock(std::_Mutex_base *this)
{
  if ( _Mtx_lock(this) )
  {
    std::_Throw_Cpp_error(5);
    __debugbreak();
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 7) == 0x7FFFFFFF )
  {
LABEL_5:
    *((_DWORD *)this + 7) = 2147483646;
    std::_Throw_Cpp_error(6);
    __debugbreak();
    JUMPOUT(0x18005A3DCLL);
  }
}
