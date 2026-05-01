/*
 * XREFs of ??1StartupFolderNotification@@QEAA@XZ @ 0x180584158
 * Callers:
 *     ?_Destroy@?$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ @ 0x180584EA0 (-_Destroy@-$_Ref_count_obj2@VStartupFolderNotification@@@std@@EEAAXXZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall StartupFolderNotification::~StartupFolderNotification(StartupFolderNotification *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 8);
  StartupNotification::~StartupNotification(this);
}
