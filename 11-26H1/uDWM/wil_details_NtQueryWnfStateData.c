/*
 * XREFs of wil_details_NtQueryWnfStateData @ 0x180086FE0
 * Callers:
 *     ?wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV?$heap_vector@Uwil_details_FeatureUsageSRUM@@@details_abi@wil@@@Z @ 0x18009379C (-wil_details_WriteSRUMWnfUsageBuffer@@YAJPEAV-$heap_vector@Uwil_details_FeatureUsageSRUM@@@detai.c)
 * Callees:
 *     ?wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z @ 0x180087058 (-wil_details_GetNtDllProcedureAddress@@YAP6A_JXZPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall wil_details_NtQueryWnfStateData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 (__fastcall *v6)(__int64, _QWORD, _QWORD, __int64, __int64, __int64); // r10

  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))g_wil_details_pfnNtQueryWnfStateData;
  if ( g_wil_details_pfnNtQueryWnfStateData )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  g_wil_details_pfnNtQueryWnfStateData = (__int64)wil_details_GetNtDllProcedureAddress("NtQueryWnfStateData");
  v6 = (__int64 (__fastcall *)(__int64, _QWORD, _QWORD, __int64, __int64, __int64))g_wil_details_pfnNtQueryWnfStateData;
  if ( g_wil_details_pfnNtQueryWnfStateData )
    return v6(a1, 0LL, 0LL, a4, a5, a6);
  else
    return 3221225785LL;
}
