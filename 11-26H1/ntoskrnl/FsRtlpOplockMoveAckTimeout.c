/*
 * XREFs of FsRtlpOplockMoveAckTimeout @ 0x140791C0C
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpOplockMoveAckTimeout(__int64 *a1, _QWORD *a2)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a2 = result;
    *a1 = 0LL;
  }
  return result;
}
