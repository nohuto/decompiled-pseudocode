/*
 * XREFs of ??$open@V?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@@tip2@@YA?AV?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@0@XZ @ 0x1805C6130
 * Callers:
 *     _lambda_7017635d5b356f6d3f79dc972349e24e_::operator() @ 0x1805CCD38 (_lambda_7017635d5b356f6d3f79dc972349e24e_--operator().c)
 *     _lambda_edd22ea2698d38aa4454b60a8c07f089_::operator() @ 0x1805CDC40 (_lambda_edd22ea2698d38aa4454b60a8c07f089_--operator().c)
 *     _lambda_eee19e414dd6f5105c1576905e54cebc_::operator() @ 0x1805CDD24 (_lambda_eee19e414dd6f5105c1576905e54cebc_--operator().c)
 * Callees:
 *     ??$tip_make_shared_nothrow@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@AEAPEAU_GUID@@@details@tip2@@YA?AV?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@AEAPEAU_GUID@@@Z @ 0x1805CA9D0 (--$tip_make_shared_nothrow@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@d.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBE0C (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805CC540 (--4-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 */

_QWORD *__fastcall tip2::open<tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>>(
        _QWORD *a1)
{
  __int64 v2; // rax
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF
  char v5; // [rsp+38h] [rbp+10h] BYREF

  *a1 = 0LL;
  v4 = 0LL;
  v2 = tip2::details::tip_make_shared_nothrow<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,_GUID * &>(
         &v5,
         &v4);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::operator=(
    a1,
    v2);
  wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>(&v5);
  return a1;
}
