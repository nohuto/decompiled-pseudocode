/*
 * XREFs of FsRtlpSyncWithAckTimeout @ 0x1403FABC0
 * Callers:
 *     FsRtlpRequestExclusiveOplock @ 0x1403F8BE4 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpOplockCleanup @ 0x1403F959C (FsRtlpOplockCleanup.c)
 *     FsRtlUninitializeOplock @ 0x1403FAC10 (FsRtlUninitializeOplock.c)
 *     FsRtlpFreeRHOpContext @ 0x1403FB0A4 (FsRtlpFreeRHOpContext.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14052CC9C (FsRtlpCancelExclusiveIrp.c)
 *     FsRtlpAcknowledgeOplockBreak @ 0x1405B8984 (FsRtlpAcknowledgeOplockBreak.c)
 *     FsRtlpGrantAnyOplockFromExclusive @ 0x1405B99A8 (FsRtlpGrantAnyOplockFromExclusive.c)
 *     FsRtlpOpBatchBreakClosePending @ 0x14079171C (FsRtlpOpBatchBreakClosePending.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeCancelTimer @ 0x1403B74A0 (KeCancelTimer.c)
 *     ExFreeToNPagedLookasideList @ 0x1403BF960 (ExFreeToNPagedLookasideList.c)
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
