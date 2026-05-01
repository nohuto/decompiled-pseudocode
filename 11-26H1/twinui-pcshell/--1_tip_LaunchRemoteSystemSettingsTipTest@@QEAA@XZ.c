/*
 * XREFs of ??1_tip_LaunchRemoteSystemSettingsTipTest@@QEAA@XZ @ 0x18063EFBC
 * Callers:
 *     ??1?$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063ECE4 (--1-$merged_data@U_tip_RecoverRemoteSessionTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180658B14 (--1-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 */

void __fastcall _tip_LaunchRemoteSystemSettingsTipTest::~_tip_LaunchRemoteSystemSettingsTipTest(
        _tip_LaunchRemoteSystemSettingsTipTest *this)
{
  std::wstring::_Tidy_deallocate((_QWORD *)this + 6);
  std::wstring::_Tidy_deallocate((_QWORD *)this + 2);
}
