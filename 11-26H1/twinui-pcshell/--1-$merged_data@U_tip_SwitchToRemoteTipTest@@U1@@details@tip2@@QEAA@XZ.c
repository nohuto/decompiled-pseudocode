/*
 * XREFs of ??1?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180649DD8
 * Callers:
 *     ?Release@?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18064FF88 (-Release@-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@AEAAKXZ.c)
 * Callees:
 *     ?on_destroy@?$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ @ 0x180283260 (-on_destroy@-$shared_data@$00$0A@$0A@@details@tip2@@IEAAXXZ.c)
 *     ??1_tip_SwitchToRemoteTipTest@@QEAA@XZ @ 0x18064A418 (--1_tip_SwitchToRemoteTipTest@@QEAA@XZ.c)
 */

void __fastcall tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::~merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>(
        _QWORD *a1)
{
  *a1 = &tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::`vftable';
  tip2::details::shared_data<1,0,0>::on_destroy((__int64)(a1 + 1));
  _tip_SwitchToRemoteTipTest::~_tip_SwitchToRemoteTipTest((_tip_SwitchToRemoteTipTest *)(a1 + 32));
  tip2::details::shared_data<0,0,1>::~shared_data<0,0,1>((__int64)(a1 + 1));
}
