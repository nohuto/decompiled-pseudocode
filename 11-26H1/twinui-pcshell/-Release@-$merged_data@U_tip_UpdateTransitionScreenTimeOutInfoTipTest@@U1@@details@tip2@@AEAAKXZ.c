/*
 * XREFs of ?Release@?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x18064FFD0
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180649A50 (--1-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ??4?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x18064A598 (--4-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180654B00 (-reset@-$com_ptr_t@V-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@ti.c)
 * Callees:
 *     ??1?$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180649E20 (--1-$merged_data@U_tip_UpdateTransitionScreenTimeOutInfoTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>::~merged_data<_tip_UpdateTransitionScreenTimeOutInfoTipTest,_tip_UpdateTransitionScreenTimeOutInfoTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
