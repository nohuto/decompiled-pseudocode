/*
 * XREFs of ?Release@?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18064FF88
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649A30 (--1-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18064A564 (--4-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_pol.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180654AD8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@Uerr_returncode.c)
 * Callees:
 *     ??1?$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180649DD8 (--1-$merged_data@U_tip_SwitchToRemoteTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 98);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>::~merged_data<_tip_SwitchToRemoteTipTest,_tip_SwitchToRemoteTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
