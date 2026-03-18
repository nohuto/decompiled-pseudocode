/*
 * XREFs of ?LoadAndConnectRustCode@@YAJXZ @ 0x1402F34D4
 * Callers:
 *     InitializeGre @ 0x1402F3768 (InitializeGre.c)
 * Callees:
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1400BCE24 (wil_details_FeatureReporting_ReportUsageToService.c)
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x1401C56C4 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     ?InitializeAndLoadBaseRustExports@@YA?AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z @ 0x1402F33B8 (-InitializeAndLoadBaseRustExports@@YA-AVLOGGED_NTSTATUS@@PEAPEAUBaseRustExportsStorage@@@Z.c)
 */

__int64 LoadAndConnectRustCode(void)
{
  int v1; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned int)PsGetCurrentProcessSessionId() )
    return 0LL;
  v2 = (unsigned int)Feature_Rust_GDI_REGION__private_featureState;
  if ( (Feature_Rust_GDI_REGION__private_featureState & 0x10) == 0 )
  {
    LODWORD(v2) = Feature_Rust_GDI_REGION__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_Rust_GDI_REGION__private_descriptor,
      Feature_Rust_GDI_REGION__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v2,
      3,
      (__int64)&Feature_Rust_GDI_REGION__private_descriptor);
  }
  v1 = *InitializeAndLoadBaseRustExports((int *)&v2, (PSECURITY_DESCRIPTOR **)&WPP_MAIN_CB.Dpc.SystemArgument1);
  InitializeSListHead((PSLIST_HEADER)&WPP_MAIN_CB.Dpc.DpcData);
  if ( v1 >= 0 )
    WPP_MAIN_CB.Dpc.DeferredContext = &WPP_MAIN_CB.Dpc.SystemArgument1;
  return (unsigned int)v1;
}
