/*
 * XREFs of ??0?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@PEAU_GUID@@@Z @ 0x180289598
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PU_GUID@@@Z @ 0x1805A1EB0 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details.c)
 * Callees:
 *     ??0_tip_CallDashboardExtensionTIP@@QEAA@XZ @ 0x180274CB8 (--0_tip_CallDashboardExtensionTIP@@QEAA@XZ.c)
 *     ?open_without_lock@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z @ 0x180289A9C (-open_without_lock@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXPEAU_GUID@@@Z.c)
 *     ??0?$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z @ 0x18028A4F4 (--0-$shared_data@$00$0A@$0A@@details@tip2@@QEAA@AEAUtest_data_interface@12@AEBUtest_info@2@@Z.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>(
        __int64 a1,
        __int64 a2)
{
  __int128 v5; // [rsp+20h] [rbp-60h]
  _OWORD v6[3]; // [rsp+50h] [rbp-30h] BYREF

  *(_QWORD *)&v5 = 0x410101E59BECLL;
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *((_QWORD *)&v5 + 1) = "CallDashboardExtensionTIP";
  v6[0] = v5;
  v6[2] = 0uLL;
  v6[1] = 0x401uLL;
  tip2::details::shared_data<1,0,0>::shared_data<1,0,0>(a1 + 8, a1, v6);
  _tip_CallDashboardExtensionTIP::_tip_CallDashboardExtensionTIP((_tip_CallDashboardExtensionTIP *)(a1 + 248));
  *(_DWORD *)(a1 + 304) = 1;
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::`vftable';
  *(_QWORD *)(a1 + 256) = a1 + 16;
  tip2::details::shared_data<1,0,0>::open_without_lock(a1 + 8, a2);
  return a1;
}
