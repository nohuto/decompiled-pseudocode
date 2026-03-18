/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x14093F9E4
 * Callers:
 *     EtwpCovSampModuleCleanup @ 0x14093F994 (EtwpCovSampModuleCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x14093FBF0 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampContextGetModule @ 0x140941058 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     FsRtlReleaseFileNameInformation @ 0x1409FDA00 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePool @ 0x140C10E30 (ExFreePool.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1)
{
  __int64 v1; // rax
  void *v3; // rcx

  v1 = *a1;
  if ( *a1 )
  {
    v3 = (void *)(v1 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v1 & 1) != 0 )
    {
      FsRtlReleaseFileNameInformation(v3);
    }
    else if ( v3 )
    {
      ExFreePool(v3);
    }
    *a1 = 0LL;
  }
}
