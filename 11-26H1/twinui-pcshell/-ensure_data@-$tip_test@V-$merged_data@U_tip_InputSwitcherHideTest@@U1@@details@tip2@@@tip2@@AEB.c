/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18063A2D8
 * Callers:
 *     ??C?$tip_test@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@1@XZ @ 0x180639190 (--C-$tip_test@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@@tip2@@QEAA-AV-$test.c)
 *     ?InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4InputSwitcherActionKind@23456@@Z @ 0x18063982C (-InsertActionToQueue@InputSwitchingManager@implementation@Shell@Internal@Windows@winrt@@QEAAXW4I.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@QEAA@XZ @ 0x180638E24 (--0-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180638FDC (--1-$com_ptr_t@V-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ?Release@?$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@AEAAKXZ @ 0x180639C7C (-Release@-$merged_data@U_tip_InputSwitcherHideTest@@U1@@details@tip2@@AEAAKXZ.c)
 */

volatile signed __int32 **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>>::ensure_data(
        volatile signed __int32 **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  volatile signed __int32 *v5; // rcx
  void *v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x120uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>((__int64)v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (volatile signed __int32 *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_InputSwitcherHideTest,_tip_InputSwitcherHideTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
