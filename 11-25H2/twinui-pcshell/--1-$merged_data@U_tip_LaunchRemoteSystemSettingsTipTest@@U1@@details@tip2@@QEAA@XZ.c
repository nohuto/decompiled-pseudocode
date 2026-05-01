/*
 * XREFs of ??1?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180632ECC
 * Callers:
 *     ?Release@?$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x1806364D8 (-Release@-$merged_data@U_tip_LaunchRemoteSystemSettingsTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180294FA0 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_LaunchRemoteSystemSettingsTipTest@@QEAA@XZ @ 0x180619130 (--1_tip_LaunchRemoteSystemSettingsTipTest@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>::~merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>(
        __int64 a1)
{
  *(_QWORD *)a1 = &tip2::details::merged_data<_tip_LaunchRemoteSystemSettingsTipTest,_tip_LaunchRemoteSystemSettingsTipTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy(a1 + 8);
  _tip_LaunchRemoteSystemSettingsTipTest::~_tip_LaunchRemoteSystemSettingsTipTest((void **)(a1 + 248));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>(a1 + 8);
}
