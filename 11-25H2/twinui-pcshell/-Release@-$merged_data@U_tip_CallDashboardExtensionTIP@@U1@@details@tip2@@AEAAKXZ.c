/*
 * XREFs of ?Release@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@AEAAKXZ @ 0x18028D4A0
 * Callers:
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180288D5C (--4-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028D480 (--1-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B8E50 (-reset@-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_return.c)
 * Callees:
 *     ??1?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ @ 0x18028D4E8 (--1-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 76);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::~merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>();
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
