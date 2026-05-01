/*
 * XREFs of _dynamic_atexit_destructor_for__c_retailDemoHotspot___0 @ 0x180708970
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x180031D20 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     ?on_result@?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXAEBUTipReportingInfo@@@Z @ 0x18020E8F0 (-on_result@-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@EEAAXAEBUTip.c)
 */

void dynamic_atexit_destructor_for__c_retailDemoHotspot___0()
{
  std::wstring::_Tidy_deallocate(&xmmword_1808DA5C0);
  tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>::on_result();
  std::wstring::_Tidy_deallocate(qword_1808DA5A0);
  tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>::on_result();
}
