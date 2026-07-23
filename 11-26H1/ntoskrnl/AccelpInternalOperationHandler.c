/*
 * XREFs of AccelpInternalOperationHandler @ 0x1405342F8
 * Callers:
 *     AccelWaitForWorkCompletion @ 0x1402A148C (AccelWaitForWorkCompletion.c)
 *     AccelGetStatusFromCompletionRecord @ 0x1402A15FC (AccelGetStatusFromCompletionRecord.c)
 *     AccelSubmitWorkAsync @ 0x14053314C (AccelSubmitWorkAsync.c)
 *     AccelBuildDescriptorMemoryCompress @ 0x1406E29B4 (AccelBuildDescriptorMemoryCompress.c)
 *     AccelBuildDescriptorMemoryDecompress @ 0x1406E2AF8 (AccelBuildDescriptorMemoryDecompress.c)
 *     AccelBuildDescriptorMemoryFill @ 0x1406E2C3C (AccelBuildDescriptorMemoryFill.c)
 *     AccelBuildDescriptorNop @ 0x1406E2D44 (AccelBuildDescriptorNop.c)
 *     AccelInitializeCompressionWorkspace @ 0x1406E30D4 (AccelInitializeCompressionWorkspace.c)
 *     AccelQueryCompletionInformation @ 0x1406E32D0 (AccelQueryCompletionInformation.c)
 *     AccelQueryDescriptorSize @ 0x1406E33A0 (AccelQueryDescriptorSize.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x1406E3454 (AccelpBuildDescriptorComputeHistogram.c)
 * Callees:
 *     AccelpSiovInternalOperationHandler @ 0x14050B5F8 (AccelpSiovInternalOperationHandler.c)
 *     AccelpCpuInternalOperationHandler @ 0x1406E4A28 (AccelpCpuInternalOperationHandler.c)
 *     AccelpSdxiInternalOperationHandler @ 0x1406E4C90 (AccelpSdxiInternalOperationHandler.c)
 */

__int64 __fastcall AccelpInternalOperationHandler(__int64 a1, unsigned int *a2)
{
  __int64 v2; // r8
  int v3; // eax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v3 = *(_DWORD *)(v2 + 184);
  if ( v3 == 1 )
    return AccelpSiovInternalOperationHandler(a1, a2);
  if ( v3 != 2 )
    return 3221225659LL;
  if ( *(_DWORD *)(v2 + 188) == 6 )
    return AccelpCpuInternalOperationHandler();
  return AccelpSdxiInternalOperationHandler();
}
