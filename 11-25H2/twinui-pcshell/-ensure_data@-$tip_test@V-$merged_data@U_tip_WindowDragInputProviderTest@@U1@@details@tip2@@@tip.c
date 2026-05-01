/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028A604
 * Callers:
 *     ?start_and_watch_errors@?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_watcher@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@2@XZ @ 0x18028A0F4 (-start_and_watch_errors@-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@1@XZ @ 0x18028A5C8 (--C-$tip_test@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@@tip2@@QEAA-AV.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ?Release@?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@AEAAKXZ @ 0x180295158 (-Release@-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@AEAAKXZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1802971FC (--1-$com_ptr_t@V-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@Uerr_returnco.c)
 *     ??0?$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@QEAA@XZ @ 0x18059B598 (--0-$merged_data@U_tip_WindowDragInputProviderTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v4; // rax
  void *v5; // rcx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x118uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v4 = tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>(v2);
    v5 = *a1;
    v7 = 0LL;
    *a1 = (void *)v4;
    if ( v5 )
      tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>::Release(v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_WindowDragInputProviderTest,_tip_WindowDragInputProviderTest>,wil::err_returncode_policy>(&v7);
  }
  return a1;
}
