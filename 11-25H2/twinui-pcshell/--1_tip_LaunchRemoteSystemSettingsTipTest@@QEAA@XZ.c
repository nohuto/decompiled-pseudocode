/*
 * XREFs of ??1_tip_LaunchRemoteSystemSettingsTipTest@@QEAA@XZ @ 0x180619130
 * Callers:
 *     ??1?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180618E58 (--1-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180632ECC (--1-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180058780 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_LaunchRemoteSystemSettingsTipTest::~_tip_LaunchRemoteSystemSettingsTipTest(void **this)
{
  std::wstring::_Tidy_deallocate(this + 6);
  std::wstring::_Tidy_deallocate(this + 2);
}
