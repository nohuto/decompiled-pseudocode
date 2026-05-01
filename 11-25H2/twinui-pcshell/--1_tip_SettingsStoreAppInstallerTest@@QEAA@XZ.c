/*
 * XREFs of ??1_tip_SettingsStoreAppInstallerTest@@QEAA@XZ @ 0x1805A83A4
 * Callers:
 *     ??1?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805A7F04 (--1-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_SettingsStoreAppInstallerTest::~_tip_SettingsStoreAppInstallerTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 12);
  std::wstring::_Tidy_deallocate(this + 8);
}
