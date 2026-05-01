/*
 * XREFs of ?Release@?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@AEAAKXZ @ 0x180666628
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180666578 (--1-$com_ptr_t@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1806668C8 (-reset@-$com_ptr_t@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@Uerr_returncode_policy@.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180666984 (-start@-$tip_test@V-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@@tip2@@QEAA-AU_GUID@@XZ.c)
 * Callees:
 *     ??1?$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@QEAA@XZ @ 0x180666598 (--1-$merged_data@U_tip_BrokerTipTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 74);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>::~merged_data<_tip_BrokerTipTest,_tip_BrokerTipTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
