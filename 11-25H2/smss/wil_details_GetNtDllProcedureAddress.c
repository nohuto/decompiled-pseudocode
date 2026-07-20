/*
 * XREFs of wil_details_GetNtDllProcedureAddress @ 0x14001BEB0
 * Callers:
 *     wil_RtlStagingConfig_QueryFeatureState @ 0x14001B640 (wil_RtlStagingConfig_QueryFeatureState.c)
 *     wil_RtlStagingConfig_RecordFeatureUsage @ 0x14001B738 (wil_RtlStagingConfig_RecordFeatureUsage.c)
 * Callees:
 *     GetModuleHandleW @ 0x14001D2D8 (GetModuleHandleW.c)
 */

__int64 __fastcall wil_details_GetNtDllProcedureAddress(__int64 a1)
{
  __int64 ModuleHandleW; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  ModuleHandleW = `wil_details_GetNtDllModuleHandle'::`2'::wil_details_ntdllModuleHandle;
  if ( !`wil_details_GetNtDllModuleHandle'::`2'::wil_details_ntdllModuleHandle )
  {
    ModuleHandleW = GetModuleHandleW();
    `wil_details_GetNtDllModuleHandle'::`2'::wil_details_ntdllModuleHandle = ModuleHandleW;
  }
  return GetProcAddressForCaller(ModuleHandleW, a1, retaddr);
}
