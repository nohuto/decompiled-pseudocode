/*
 * XREFs of EtwpCovSampModuleNameInfoCleanup @ 0x140A32AF4
 * Callers:
 *     EtwpCovSampModuleCleanup @ 0x140A32AA4 (EtwpCovSampModuleCleanup.c)
 *     EtwpCoverageSamplerQuery @ 0x140A32D00 (EtwpCoverageSamplerQuery.c)
 *     EtwpCovSampContextGetModule @ 0x140A34168 (EtwpCovSampContextGetModule.c)
 * Callees:
 *     FsRtlReleaseFileNameInformation @ 0x140922600 (FsRtlReleaseFileNameInformation.c)
 *     ExFreePool @ 0x140C16E30 (ExFreePool.c)
 */

void __fastcall EtwpCovSampModuleNameInfoCleanup(__int64 *a1, __int64 a2)
{
  __int64 v2; // rax
  void *v4; // rcx

  v2 = *a1;
  if ( *a1 )
  {
    v4 = (void *)(v2 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( (v2 & 1) != 0 )
    {
      FsRtlReleaseFileNameInformation((__int64)v4, a2);
    }
    else if ( v4 )
    {
      ExFreePool(v4);
    }
    *a1 = 0LL;
  }
}
