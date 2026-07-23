/*
 * XREFs of MiFreeUltraMdlContext @ 0x1404DAC8C
 * Callers:
 *     MmMapMdl @ 0x1404DAA40 (MmMapMdl.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x1407358A0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiFreeUltraMdlContext(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  return RtlpInterlockedPushEntrySList(
           (PSLIST_HEADER)(qword_140E34D70
                         + (((CurrentPrcb->NodeRelativeTopologyIndex[0] & 7)
                           + 8LL * CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]) << 6)),
           ListEntry);
}
