/*
 * XREFs of ?Release@?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805A1388
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18059D750 (--1-$com_ptr_t@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@w.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805A49F4 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@@tip2@@AEBAAEAV.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805A4D1C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@Uerr_returncode_poli.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@QEAA@XZ @ 0x18059D85C (--1-$merged_data@U_tip_SnapLauncherTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 84);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>::~merged_data<_tip_SnapLauncherTest,_tip_SnapLauncherTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
