/*
 * XREFs of SepAuditFailedRaisedIrql @ 0x140533030
 * Callers:
 *     SepAdtLogAuditRecord @ 0x1402153F8 (SepAdtLogAuditRecord.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     SepAuditFailed @ 0x14092FD10 (SepAuditFailed.c)
 */

void __fastcall SepAuditFailedRaisedIrql(__int64 a1)
{
  if ( BYTE4(RtlpBootStatHandleLock.QueuedScb) )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      SepRmCapTableLock.SListFaultAddress = 0LL;
      SepRmCapTableLock.InitialStack = SepAuditFailed;
      SepRmCapTableLock.StackLimit = (void *volatile)(int)a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&SepRmCapTableLock.SListFaultAddress, HyperCriticalWorkQueue);
    }
    else
    {
      SepAuditFailed(a1);
    }
  }
}
