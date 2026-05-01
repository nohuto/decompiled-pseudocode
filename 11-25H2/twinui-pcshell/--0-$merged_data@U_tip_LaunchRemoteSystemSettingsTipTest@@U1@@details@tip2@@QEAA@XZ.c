/*
 * XREFs of ??0?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806324B8
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180637558 (-ensure_data@-$tip_test@V-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2.c)
 * Callees:
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 *     ??0_tip_LaunchRemoteSystemSettingsTipTest@@QEAA@XZ @ 0x180632CB8 (--0_tip_LaunchRemoteSystemSettingsTipTest@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>(
        __int64 a1)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1);
  _tip_LaunchRemoteSystemSettingsTipTest::_tip_LaunchRemoteSystemSettingsTipTest((_tip_LaunchRemoteSystemSettingsTipTest *)(a1 + 248));
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>::`vftable';
  *(_DWORD *)(a1 + 336) = 1;
  *(_QWORD *)(a1 + 256) = a1 + 16;
  return a1;
}
