/*
 * XREFs of FsRtlpSyncWithAckTimeout @ 0x1403FE3D0
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1403FC3F4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403FCDAC (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FE420 (FsRtlUninitializeOplock.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FE8B4 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpRequestShareableOplock @ 0x1403FEDE8 (FsRtlpRequestShareableOplock.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052A77C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B6114 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B7138 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14078EBEC (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer @ 0x1403AD790 (KeCancelTimer.c)
 *     ExFreeToNPagedLookasideList @ 0x1403B5A60 (ExFreeToNPagedLookasideList.c)
 */

void __fastcall FsRtlpSyncWithAckTimeout(PVOID *a1)
{
  struct _KTIMER *v2; // rcx
  BOOLEAN v3; // al

  v2 = (struct _KTIMER *)*a1;
  if ( v2 )
  {
    if ( !BYTE4(v2[2].Dpc) || (v3 = KeCancelTimer(v2), v2 = (struct _KTIMER *)*a1, v3) )
    {
      ObfDereferenceObjectWithTag(v2[2].TimerListEntry.Blink, 0x746C6644u);
      ExFreeToNPagedLookasideList(&g_OplockAckTimeoutLookaside, *a1);
    }
    else
    {
      BYTE5(v2[2].Dpc) = 1;
    }
    *a1 = 0LL;
  }
}
