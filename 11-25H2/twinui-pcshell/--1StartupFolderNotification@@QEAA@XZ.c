/*
 * XREFs of ??1StartupFolderNotification@@QEAA@XZ @ 0x1805601BC
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ @ 0x180560E90 (-_Destroy@-$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall StartupFolderNotification::~StartupFolderNotification(void **this)
{
  std::wstring::_Tidy_deallocate(this + 8);
  StartupNotification::~StartupNotification((StartupNotification *)this);
}
