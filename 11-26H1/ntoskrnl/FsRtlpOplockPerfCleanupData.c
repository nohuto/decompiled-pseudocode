/*
 * XREFs of FsRtlpOplockPerfCleanupData @ 0x140791CBC
 * Callers:
 *     FsRtlpOplockPerfPrepareToSendData @ 0x140791E2C (FsRtlpOplockPerfPrepareToSendData.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void FsRtlpOplockPerfCleanupData()
{
  void *v0; // rcx
  void *v1; // rcx

  byte_140E65DC0 = 0;
  v0 = (void *)_InterlockedExchange64(&g_OplockPerfSummaryContext, 0LL);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  g_OplockPerfSummaryContext = 0LL;
  xmmword_140E65DD0 = 0LL;
  v1 = (void *)_InterlockedExchange64(&qword_140E65DC8, 0LL);
  if ( v1 )
    ExFreePoolWithTag(v1, 0);
  qword_140E65DC8 = 0LL;
}
