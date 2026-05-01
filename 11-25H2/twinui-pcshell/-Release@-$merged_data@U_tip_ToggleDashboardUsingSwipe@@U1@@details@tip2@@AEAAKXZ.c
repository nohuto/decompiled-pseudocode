/*
 * XREFs of ?Release@?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@AEAAKXZ @ 0x1805B1C58
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805A7CD4 (--1-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1805A83FC (--4-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805B8F28 (-reset@-$com_ptr_t@V-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@Uerr_return.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@QEAA@XZ @ 0x1805A7F94 (--1-$merged_data@U_tip_ToggleDashboardUsingSwipe@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 78);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>::~merged_data<_tip_ToggleDashboardUsingSwipe,_tip_ToggleDashboardUsingSwipe>((__int64)pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
