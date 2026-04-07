/*
 * XREFs of ?wil_details_GetKernelBaseProcAddress@@YAP6A_JXZPEBD@Z @ 0x1800795C0
 * Callers:
 *     wil_StagingConfig_LogStagedFeatureUsage @ 0x180079560 (wil_StagingConfig_LogStagedFeatureUsage.c)
 *     ?MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z @ 0x180091D50 (-MicrosoftInternalNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

FARPROC __fastcall wil_details_GetKernelBaseProcAddress(LPCSTR lpProcName)
{
  HMODULE ModuleHandleW; // rax
  __int64 v2; // rbx

  ModuleHandleW = `wil_details_GetKernelBaseProcAddress'::`2'::wil_details_kernelbaseModuleHandle;
  v2 = 0LL;
  if ( `wil_details_GetKernelBaseProcAddress'::`2'::wil_details_kernelbaseModuleHandle )
    return GetProcAddress(ModuleHandleW, lpProcName);
  ModuleHandleW = GetModuleHandleW(L"kernelbase.dll");
  `wil_details_GetKernelBaseProcAddress'::`2'::wil_details_kernelbaseModuleHandle = ModuleHandleW;
  if ( ModuleHandleW )
    return GetProcAddress(ModuleHandleW, lpProcName);
  return (FARPROC)v2;
}
