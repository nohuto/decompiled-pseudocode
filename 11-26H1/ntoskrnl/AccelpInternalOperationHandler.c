/*
 * XREFs of AccelpInternalOperationHandler @ 0x140531E58
 * Callers:
 *     AccelWaitForWorkCompletion @ 0x1402A1F3C (AccelWaitForWorkCompletion.c)
 *     AccelGetStatusFromCompletionRecord @ 0x1402A20AC (AccelGetStatusFromCompletionRecord.c)
 *     AccelSubmitWorkAsync @ 0x140530C4C (AccelSubmitWorkAsync.c)
 *     AccelBuildDescriptorMemoryCompress @ 0x1406DE714 (AccelBuildDescriptorMemoryCompress.c)
 *     AccelBuildDescriptorMemoryDecompress @ 0x1406DE858 (AccelBuildDescriptorMemoryDecompress.c)
 *     AccelBuildDescriptorMemoryFill @ 0x1406DE99C (AccelBuildDescriptorMemoryFill.c)
 *     AccelBuildDescriptorNop @ 0x1406DEAA4 (AccelBuildDescriptorNop.c)
 *     AccelInitializeCompressionWorkspace @ 0x1406DEE34 (AccelInitializeCompressionWorkspace.c)
 *     AccelQueryCompletionInformation @ 0x1406DF030 (AccelQueryCompletionInformation.c)
 *     AccelQueryDescriptorSize @ 0x1406DF100 (AccelQueryDescriptorSize.c)
 *     AccelpBuildDescriptorComputeHistogram @ 0x1406DF1B4 (AccelpBuildDescriptorComputeHistogram.c)
 * Callees:
 *     AccelpSiovInternalOperationHandler @ 0x140511B88 (AccelpSiovInternalOperationHandler.c)
 *     AccelpCpuInternalOperationHandler @ 0x1406E07A8 (AccelpCpuInternalOperationHandler.c)
 *     AccelpSdxiInternalOperationHandler @ 0x1406E0A10 (AccelpSdxiInternalOperationHandler.c)
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
