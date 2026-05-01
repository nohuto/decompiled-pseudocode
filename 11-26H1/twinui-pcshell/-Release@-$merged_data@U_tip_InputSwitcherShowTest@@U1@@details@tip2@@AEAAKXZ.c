/*
 * XREFs of ?Release@?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@AEAAKXZ @ 0x180639CC4
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180638FFC (--1-$com_ptr_t@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x18063982C (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18063A340 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@@tip2@@AEB.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18063A8D4 (-reset@-$com_ptr_t@V-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@Uerr_returncode.c)
 * Callees:
 *     ??1?$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063904C (--1-$merged_data@U_tip_InputSwitcherShowTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>::~merged_data<_tip_InputSwitcherShowTest,_tip_InputSwitcherShowTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
