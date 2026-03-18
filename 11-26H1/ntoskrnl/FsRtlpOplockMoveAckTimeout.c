/*
 * XREFs of FsRtlpOplockMoveAckTimeout @ 0x14078F0DC
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B7138 (FsRtlpGrantAnyOplockFromExclusive.c)
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
