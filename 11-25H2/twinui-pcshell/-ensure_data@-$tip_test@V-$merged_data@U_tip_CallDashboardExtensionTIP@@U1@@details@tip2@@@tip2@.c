/*
 * XREFs of ?ensure_data@?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028D584
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18020AD54 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PU_GUID@@@Z @ 0x1805A1EB0 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details.c)
 * Callees:
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180288D5C (--4-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028D480 (--1-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ @ 0x18028D664 (-FailFastImmediate_Unexpected@in1diag3@details@wil@@YAXXZ.c)
 *     ??0?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ @ 0x1805A6F1C (--0-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ.c)
 */

void **__fastcall tip2::tip_test<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>>::ensure_data(
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
    v5 = tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>(v2);
    wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::operator=(
      a1,
      (void **)&v5);
    wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>((void **)&v5);
  }
  return a1;
}
