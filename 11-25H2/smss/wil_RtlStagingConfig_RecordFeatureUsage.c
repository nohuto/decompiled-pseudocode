/*
 * XREFs of wil_RtlStagingConfig_RecordFeatureUsage @ 0x14001B738
 * Callers:
 *     wil_details_FeatureReporting_ReportUsageToServiceDirect @ 0x14001BB58 (wil_details_FeatureReporting_ReportUsageToServiceDirect.c)
 * Callees:
 *     wil_details_GetNtDllProcedureAddress @ 0x14001BEB0 (wil_details_GetNtDllProcedureAddress.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140020010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_RtlStagingConfig_RecordFeatureUsage(int a1, __int16 a2, int a3)
{
  __int64 (__fastcall *NtDllProcedureAddress)(int *); // rax
  int v5; // [rsp+48h] [rbp+20h] BYREF
  __int16 v6; // [rsp+4Ch] [rbp+24h]
  __int16 v7; // [rsp+4Eh] [rbp+26h]

  v7 = 0;
  v5 = a1;
  v6 = a2;
  if ( a3 )
    v7 |= 1u;
  NtDllProcedureAddress = (__int64 (__fastcall *)(int *))g_wil_details_pfnRtlNotifyFeatureUsage;
  if ( g_wil_details_pfnRtlNotifyFeatureUsage )
    return NtDllProcedureAddress(&v5);
  NtDllProcedureAddress = (__int64 (__fastcall *)(int *))wil_details_GetNtDllProcedureAddress("RtlNotifyFeatureUsage");
  g_wil_details_pfnRtlNotifyFeatureUsage = (__int64)NtDllProcedureAddress;
  if ( NtDllProcedureAddress )
    return NtDllProcedureAddress(&v5);
  else
    return 3221225785LL;
}
