/*
 * XREFs of ?Release@?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18062A530
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180623D74 (--1-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x180624854 (--4-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18062EF80 (-reset@-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@ti.c)
 * Callees:
 *     ??1?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180624144 (--1-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 68);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>::~merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
