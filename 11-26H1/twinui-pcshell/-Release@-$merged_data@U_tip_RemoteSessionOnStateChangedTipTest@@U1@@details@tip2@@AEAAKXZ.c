/*
 * XREFs of ?Release@?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18065C1E8
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180658A50 (--1-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_r.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180658F44 (--4-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_r.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18065DBA0 (-reset@-$com_ptr_t@V-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@Ue.c)
 * Callees:
 *     ??1?$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180658BA4 (--1-$merged_data@U_tip_RemoteSessionOnStateChangedTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 96);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>::~merged_data<_tip_RemoteSessionOnStateChangedTipTest,_tip_RemoteSessionOnStateChangedTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
