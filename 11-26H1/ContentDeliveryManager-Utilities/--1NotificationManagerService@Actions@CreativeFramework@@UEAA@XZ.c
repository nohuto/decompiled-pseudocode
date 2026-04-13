/*
 * XREFs of ??1NotificationManagerService@Actions@CreativeFramework@@UEAA@XZ @ 0x18009FBBC
 * Callers:
 *     ??_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z @ 0x18009FDB0 (--_ENotificationManagerService@Actions@CreativeFramework@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?_Tidy@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAX_N_K@Z @ 0x18005C76C (-_Tidy@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAX_N_K@Z.c)
 *     ??1?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@QEAA@XZ @ 0x1800917C8 (--1-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@V12@.c)
 *     ?_Delete@?$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U?$default_delete@VToastHelpers@NotificationManager@CreativeFramework@@@std@@@std@@AEAAXXZ @ 0x1800A022C (-_Delete@-$unique_ptr@VToastHelpers@NotificationManager@CreativeFramework@@U-$default_delete@VTo.c)
 */

void __fastcall CreativeFramework::Actions::NotificationManagerService::~NotificationManagerService(void **this)
{
  std::unique_ptr<CreativeFramework::NotificationManager::ToastHelpers>::_Delete(this + 17);
  std::_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>::~_Tree<std::_Tmap_traits<std::wstring,std::wstring,std::less<std::wstring>,std::allocator<std::pair<std::wstring const,std::wstring>>,0>>(this + 15);
  std::wstring::_Tidy(this + 10, 1, 0LL);
  std::wstring::_Tidy(this + 6, 1, 0LL);
  std::wstring::_Tidy(this + 2, 1, 0LL);
  *this = &CreativeFramework::Actions::IActionService::`vftable';
}
