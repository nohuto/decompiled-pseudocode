/*
 * XREFs of FsRtlpOplockIsSubjectToTimeout @ 0x1405B7740
 * Callers:
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077BB44 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE6EA0 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x140AE8CD4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlpOplockIsSubjectToTimeout(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) & 6) == 0;
}
