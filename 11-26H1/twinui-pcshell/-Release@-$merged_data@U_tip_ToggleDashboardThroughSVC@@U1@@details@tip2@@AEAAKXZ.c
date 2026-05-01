/*
 * XREFs of ?Release@?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@AEAAKXZ @ 0x1802831D0
 * Callers:
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1802827B8 (-ensure_data@-$tip_test@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@@tip2@.c)
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18028EB4C (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DC990 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@Uerr_return.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ @ 0x180283218 (--1-$merged_data@U_tip_ToggleDashboardThroughSVC@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 88);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>::~merged_data<_tip_ToggleDashboardThroughSVC,_tip_ToggleDashboardThroughSVC>();
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
