/*
 * XREFs of FsRtlpOplockIsSubjectToTimeout @ 0x1405B9FB0
 * Callers:
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14077E784 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     FsRtlpOplockTryPrepForAckTimeout @ 0x140AE4C60 (FsRtlpOplockTryPrepForAckTimeout.c)
 *     FsRtlpOplockPerfSendData @ 0x140AEAF28 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     <none>
 */

bool __fastcall FsRtlpOplockIsSubjectToTimeout(__int64 a1)
{
  return (*(_DWORD *)(a1 + 8) & 6) == 0;
}
