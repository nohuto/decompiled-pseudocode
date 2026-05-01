/*
 * XREFs of ?Release@?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A4E8
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D54 (--1-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180624824 (--4-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18062EF5C (-reset@-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x1806240FC (--1-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 96);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::~merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
