/*
 * XREFs of ?Release@?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@AEAAKXZ @ 0x18061C2BC
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180618D80 (--1-$com_ptr_t@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180619184 (--4-$com_ptr_t@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18061D79C (-reset@-$com_ptr_t@V-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 * Callees:
 *     ??1?$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ @ 0x180618DE0 (--1-$merged_data@U_tip_BootToCloudPCTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 90);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>::~merged_data<_tip_BootToCloudPCTest,_tip_BootToCloudPCTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
