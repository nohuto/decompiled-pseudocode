/*
 * XREFs of ??1_tip_InboxedAppInstallerTest@@QEAA@XZ @ 0x1805A8374
 * Callers:
 *     ??1?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805A7E8C (--1-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_InboxedAppInstallerTest::~_tip_InboxedAppInstallerTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 14);
  std::wstring::_Tidy_deallocate(this + 10);
  std::wstring::_Tidy_deallocate(this + 6);
}
