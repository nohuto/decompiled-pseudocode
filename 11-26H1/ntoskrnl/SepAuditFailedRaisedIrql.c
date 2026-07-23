/*
 * XREFs of SepAuditFailedRaisedIrql @ 0x1405354B0
 * Callers:
 *     SepAdtLogAuditRecord @ 0x140215728 (SepAdtLogAuditRecord.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     SepAuditFailed @ 0x14090B840 (SepAuditFailed.c)
 */

void __fastcall SepAuditFailedRaisedIrql(__int64 a1)
{
  if ( *((_BYTE *)&RtlpBootStatHandleLock.ReservedPreviousReadyTimeValue + 5) )
  {
    if ( KeGetCurrentIrql() >= 2u )
    {
      *(_QWORD *)&SepRmCapTableLock.NextProcessor = 0LL;
      SepRmCapTableLock.UserAffinity = (_KAFFINITY_EX *)SepAuditFailed;
      *(_QWORD *)&SepRmCapTableLock.UserAffinityPrimaryGroup = (int)a1;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)&SepRmCapTableLock.536, HyperCriticalWorkQueue);
    }
    else
    {
      SepAuditFailed(a1);
    }
  }
}
