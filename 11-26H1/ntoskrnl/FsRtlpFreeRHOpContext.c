/*
 * XREFs of FsRtlpFreeRHOpContext @ 0x1403FE8B4
 * Callers:
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1403F81F0 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsRtlCheckOplockEx2 @ 0x1403FB980 (FsRtlCheckOplockEx2.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1405B6350 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     FsRtlpOplockFsctrlInternal @ 0x140AA2BF0 (FsRtlpOplockFsctrlInternal.c)
 * Callees:
 *     FsRtlpSyncWithAckTimeout @ 0x1403FE3D0 (FsRtlpSyncWithAckTimeout.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void __fastcall FsRtlpFreeRHOpContext(PVOID *P, char a2)
{
  if ( a2 )
    FsRtlpSyncWithAckTimeout(P + 11);
  ExFreePoolWithTag(P, 0);
}
