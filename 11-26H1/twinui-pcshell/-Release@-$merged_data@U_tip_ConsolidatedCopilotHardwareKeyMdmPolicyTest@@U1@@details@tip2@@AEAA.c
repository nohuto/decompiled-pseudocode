/*
 * XREFs of ?Release@?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@AEAAKXZ @ 0x180633C68
 * Callers:
 *     ??1?$com_ptr_t@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180622D2C (--1-$com_ptr_t@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip.c)
 *     ?reset@?$com_ptr_t@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18063728C (-reset@-$com_ptr_t@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details.c)
 *     ?start@?$tip_test@V?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@@tip2@@QEAA?AU_GUID@@XZ @ 0x180637664 (-start@-$tip_test@V-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@.c)
 * Callees:
 *     ??1?$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@QEAA@XZ @ 0x180622DC4 (--1-$merged_data@U_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest@@U1@@details@tip2@@QEAA@XZ.c)
 */

__int64 __fastcall tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>::Release(
        volatile signed __int32 *pv)
{
  unsigned __int32 v2; // ebx

  v2 = _InterlockedDecrement(pv + 70);
  if ( !v2 )
  {
    tip2::details::merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>::~merged_data<_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest,_tip_ConsolidatedCopilotHardwareKeyMdmPolicyTest>(pv);
    CoTaskMemFree((LPVOID)pv);
  }
  return v2;
}
