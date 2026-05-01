/*
 * XREFs of ?Release@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@AEAAKXZ @ 0x18027FDF4
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18027FDD4 (--1-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802BFAC0 (--4-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DC8F0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@Uerr_return.c)
 * Callees:
 *     ??1?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ @ 0x18027FE3C (--1-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 78);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>::~merged_data<_tip_CallDashboardExtensionTIP,_tip_CallDashboardExtensionTIP>();
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
