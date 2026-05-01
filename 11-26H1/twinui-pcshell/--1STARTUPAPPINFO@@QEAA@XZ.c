/*
 * XREFs of ??1STARTUPAPPINFO@@QEAA@XZ @ 0x180030E00
 * Callers:
 *     ?CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z @ 0x1801E95A0 (-CheckForNewStartupAppAdded@StartupRegKeyNotification@@UEAAX_N@Z.c)
 *     ??1?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@USTARTUPAPPINFO@@@std@@QEAA@XZ @ 0x1801ECFDC (--1-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@USTARTUPAPPINFO@@@st.c)
 *     ?UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z @ 0x1802917C8 (-UpdateNotificationMap@StartupAppMonitor@@SAJUSTARTUPAPPINFO@@@Z.c)
 *     _StartupAppMonitor::StartupToastNotifier_::_1_::dtor$6 @ 0x1806CE05A (_StartupAppMonitor--StartupToastNotifier_--_1_--dtor$6.c)
 *     _StartupFolderNotification::CheckForNewStartupAppAdded_::_1_::dtor$18 @ 0x1806D34F7 (_StartupFolderNotification--CheckForNewStartupAppAdded_--_1_--dtor$18.c)
 *     _StartupRegKeyNotification::CheckForNewStartupAppAdded_::_1_::dtor$10 @ 0x1806DB0DC (_StartupRegKeyNotification--CheckForNewStartupAppAdded_--_1_--dtor$10.c)
 *     _StartupAppMonitor::UpdateNotificationMap_::_1_::dtor$0 @ 0x1806DDFCD (_StartupAppMonitor--UpdateNotificationMap_--_1_--dtor$0.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall STARTUPAPPINFO::~STARTUPAPPINFO(STARTUPAPPINFO *this)
{
  std::wstring::_Tidy_deallocate((char *)this + 152);
  std::wstring::_Tidy_deallocate((char *)this + 104);
  std::wstring::_Tidy_deallocate((char *)this + 72);
  std::wstring::_Tidy_deallocate((char *)this + 40);
  std::wstring::_Tidy_deallocate((char *)this + 8);
}
