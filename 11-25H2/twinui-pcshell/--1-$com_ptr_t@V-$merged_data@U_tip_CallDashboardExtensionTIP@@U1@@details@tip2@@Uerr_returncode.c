/*
 * XREFs of ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028D480
 * Callers:
 *     ?CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEAV?$function@$$A6AXUDashboardExtension@Dashboard@Shell@UI@WindowsUdk@winrt@@@Z@std@@V?$duration@_JU?$ratio@$00$0DOI@@std@@@chrono@8@@Z @ 0x18020AD54 (-CallDashboardExtension@DashboardManager@implementation@Shell@Internal@Windows@winrt@@AEAAJ$$QEA.c)
 *     ??1?$test_watcher@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x18028D458 (--1-$test_watcher@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x18028D584 (-ensure_data@-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$test_data_control@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@QEAA@XZ @ 0x1802AEE5C (--1-$test_data_control@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@.c)
 *     ??$open_and_watch_errors@V?$tip_test@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@@tip2@@@tip2@@YA?A_PU_GUID@@@Z @ 0x1805A1EB0 (--$open_and_watch_errors@V-$tip_test@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details.c)
 * Callees:
 *     ?Release@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@AEAAKXZ @ 0x18028D4A0 (-Release@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@AEAAKXZ.c)
 */

__int64 __fastcall wil::com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>::~com_ptr_t<tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>,wil::err_returncode_policy>(
        void **a1)
{
  void *v1; // rcx
  __int64 result; // rax

  v1 = *a1;
  if ( v1 )
    return tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::Release(v1);
  return result;
}
