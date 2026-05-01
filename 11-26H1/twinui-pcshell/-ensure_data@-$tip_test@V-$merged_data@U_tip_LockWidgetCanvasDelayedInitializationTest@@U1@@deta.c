/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DB4C0
 * Callers:
 *     ??4?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAAAEAV01@AEBV01@@Z @ 0x1805CC5A8 (--4-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ??C?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AV?$test_data_control@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@1@XZ @ 0x1805CC674 (--C-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@.c)
 *     ?EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAXXZ @ 0x1805CFA34 (-EnsureLockWidgetCanvasRegistryPath@DashboardManager@implementation@Shell@Internal@Windows@winrt.c)
 *     winrt::Windows::Internal::Shell::implementation::DashboardManager::RunWidgetCanvasDelayedInitializeAsync$_ResumeCoro$1 @ 0x1805D6690 (winrt--Windows--Internal--Shell--implementation--DashboardManager--RunWidgetCanvasDelayedInitial.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x1805DD07C (-start@-$tip_test@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@ti.c)
 * Callees:
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18027FD64 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805CB3B8 (--0-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBE0C (--1-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805CC540 (--4-$com_ptr_t@V-$merged_data@U_tip_LockWidgetCanvasDelayedInitializationTest@@U1@@details@tip2@.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>>::ensure_data(
        void **a1)
{
  LPVOID v2; // rax
  wil::details::in1diag3 *v3; // rcx
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !*a1 )
  {
    v2 = CoTaskMemAlloc(0x138uLL);
    if ( !v2 )
      wil::details::in1diag3::FailFastImmediate_Unexpected(v3);
    v5 = tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>((__int64)v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_LockWidgetCanvasDelayedInitializationTest,_tip_LockWidgetCanvasDelayedInitializationTest>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
