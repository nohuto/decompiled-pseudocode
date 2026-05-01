/*
 * XREFs of ?Release@?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x180640B48
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180640A98 (--1-$com_ptr_t@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x180640DD8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180640E90 (-start@-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??1?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180640AB8 (--1-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 72);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>::~merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
