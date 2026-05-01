/*
 * XREFs of ??1?$test_data_control@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x180613288
 * Callers:
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x180613A18 (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAA_NXZ @ 0x180613F98 (-ShowControlCenterSwitcher@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QE.c)
 * Callees:
 *     ?end_update@?$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ @ 0x18028B08C (-end_update@-$shared_data@$00$0A@$0A@@details@tip2@@AEAAXXZ.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180614A04 (-reset@-$com_ptr_t@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode.c)
 */

__int64 __fastcall tip2::test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>::~test_data_control<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>>(
        void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    tip2::details::shared_data<1,0,0>::end_update((__int64)v2 + 8);
    wil::com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>,wil::err_returncode_policy>::reset(a1);
  }
  return wil::com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>,wil::err_returncode_policy>(a1);
}
