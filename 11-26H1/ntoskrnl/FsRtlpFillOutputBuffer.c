/*
 * XREFs of FsRtlpFillOutputBuffer @ 0x140ADD764
 * Callers:
 *     FsRtlpRemoveAndCompleteReadOnlyIrp @ 0x1403F7FB8 (FsRtlpRemoveAndCompleteReadOnlyIrp.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F81F0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlpOplockBreakByCacheFlags @ 0x1403F8A0C (FsRtlpOplockBreakByCacheFlags.c)
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B7138 (FsRtlpGrantAnyOplockFromExclusive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FsRtlpFillOutputBuffer(__int64 a1, int a2, int a3, int a4, int a5, unsigned __int16 a6)
{
  __int64 v6; // r10
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 24);
  *(_WORD *)(v6 + 22) = 0;
  *(_DWORD *)(v6 + 16) = a5;
  result = a6;
  *(_WORD *)(v6 + 20) = a6;
  *(_DWORD *)v6 = 1572865;
  *(_DWORD *)(v6 + 4) = a2;
  *(_DWORD *)(v6 + 8) = a3;
  *(_DWORD *)(v6 + 12) = a4;
  *(_QWORD *)(a1 + 56) = 24LL;
  return result;
}
