/*
 * XREFs of ??1_tip_InboxedAppInstallerTest@@QEAA@XZ @ 0x1805CC4BC
 * Callers:
 *     ??1?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805CC024 (--1-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_InboxedAppInstallerTest::~_tip_InboxedAppInstallerTest(_tip_InboxedAppInstallerTest *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 14);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 10);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 6);
}
