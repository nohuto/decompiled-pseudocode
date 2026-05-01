/*
 * XREFs of ??1?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180624054
 * Callers:
 *     ?Release@?$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A410 (-Release@-$merged_data@U_tip_DeactivateRemoteDesktopTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180294FA0 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ @ 0x1806246BC (--1_tip_DeactivateRemoteDesktopTipTest@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>::~merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_DeactivateRemoteDesktopTipTest,_tip_DeactivateRemoteDesktopTipTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  _tip_DeactivateRemoteDesktopTipTest::~_tip_DeactivateRemoteDesktopTipTest((_tip_DeactivateRemoteDesktopTipTest *)(a1 + 31));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
