/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x180642650
 * Callers:
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063CDA8 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@.c)
 *     ??$start_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PXZ @ 0x18063E244 (--$start_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ @ 0x18063E624 (--0-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18063EC0C (--1-$com_ptr_t@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18063F010 (--4-$com_ptr_t@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x178uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>((__int64)v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
