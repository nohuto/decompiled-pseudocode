/*
 * XREFs of FsRtlpOplockPerfMoveData @ 0x140791E08
 * Callers:
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B8BC0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpOplockPerfMoveData(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  if ( *(_DWORD *)(a1 + 8) )
  {
    *(_QWORD *)a2 = *(_QWORD *)a1;
    result = *(unsigned int *)(a1 + 8);
    *(_DWORD *)(a2 + 8) = result;
    *(_QWORD *)a1 = 0LL;
    *(_DWORD *)(a1 + 8) = 0;
  }
  return result;
}
