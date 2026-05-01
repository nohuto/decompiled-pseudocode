/*
 * XREFs of ?Release@?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@AEAAKXZ @ 0x1805D5A58
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1805CBE2C (--1-$com_ptr_t@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_return.c)
 *     ?ensure_data@?$tip_test@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@tip2@@AEBAAEAV?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@XZ @ 0x1805DB520 (-ensure_data@-$tip_test@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@@t.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1805DC968 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@Uerr_re.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@QEAA@XZ @ 0x1805CC09C (--1-$merged_data@U_tip_SettingsStoreAppInstallerTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 98);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>::~merged_data<_tip_SettingsStoreAppInstallerTest,_tip_SettingsStoreAppInstallerTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
