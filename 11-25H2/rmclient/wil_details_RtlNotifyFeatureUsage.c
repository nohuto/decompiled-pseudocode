/*
 * XREFs of wil_details_RtlNotifyFeatureUsage @ 0x180017F4C
 * Callers:
 *     ?WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z @ 0x180007360 (-WilApiImpl_RecordFeatureUsage@details@wil@@YAXIIIPEBD@Z.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180017A8C (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 */

__int64 __fastcall wil_details_RtlNotifyFeatureUsage(__int64 a1)
{
  FARPROC NtDllProcedureAddress; // rax

  NtDllProcedureAddress = (FARPROC)g_wil_details_pfnRtlNotifyFeatureUsage;
  if ( g_wil_details_pfnRtlNotifyFeatureUsage )
    return ((__int64 (__fastcall *)(__int64))NtDllProcedureAddress)(a1);
  NtDllProcedureAddress = wil_details_GetNtDllProcedureAddress("RtlNotifyFeatureUsage");
  g_wil_details_pfnRtlNotifyFeatureUsage = (__int64)NtDllProcedureAddress;
  if ( NtDllProcedureAddress )
    return ((__int64 (__fastcall *)(__int64))NtDllProcedureAddress)(a1);
  else
    return 3221225785LL;
}
