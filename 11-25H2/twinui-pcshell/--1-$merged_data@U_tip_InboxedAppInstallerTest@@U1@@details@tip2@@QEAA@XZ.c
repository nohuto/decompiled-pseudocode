/*
 * XREFs of ??1?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805A7E8C
 * Callers:
 *     ?Release@?$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805B1B38 (-Release@-$merged_data@U_tip_InboxedAppInstallerTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180294FA0 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_InboxedAppInstallerTest@@QEAA@XZ @ 0x1805A8374 (--1_tip_InboxedAppInstallerTest@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>::~merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_InboxedAppInstallerTest,_tip_InboxedAppInstallerTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  _tip_InboxedAppInstallerTest::~_tip_InboxedAppInstallerTest((_tip_InboxedAppInstallerTest *)(a1 + 31));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
