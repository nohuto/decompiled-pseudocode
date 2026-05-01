/*
 * XREFs of ?Release@?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180639C7C
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180638FDC (--1-$com_ptr_t@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x18063982C (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18063A2D8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@AEB.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18063A8AC (-reset@-$com_ptr_t@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode.c)
 * Callees:
 *     ??1?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063901C (--1-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>::~merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
