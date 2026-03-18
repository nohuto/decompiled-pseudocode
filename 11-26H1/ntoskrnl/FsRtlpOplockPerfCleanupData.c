/*
 * XREFs of FsRtlpOplockPerfCleanupData @ 0x14078F18C
 * Callers:
 *     FsRtlpOplockPerfPrepareToSendData @ 0x14078F2FC (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSendData @ 0x140AE8CD4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void FsRtlpOplockPerfCleanupData()
{
  void *v0; // rcx
  void *v1; // rcx

  byte_140E65AB0 = 0;
  v0 = (void *)_InterlockedExchange64(&g_OplockPerfSummaryContext, 0LL);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  g_OplockPerfSummaryContext = 0LL;
  xmmword_140E65AC0 = 0LL;
  v1 = (void *)_InterlockedExchange64(&qword_140E65AB8, 0LL);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  qword_140E65AB8 = 0LL;
}
