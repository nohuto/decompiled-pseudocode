/*
 * XREFs of MiFreeUltraMdlContext @ 0x1404E15AC
 * Callers:
 *     MmMapMdl @ 0x1404E1360 (MmMapMdl.c)
 * Callees:
 *     RtlpInterlockedPushEntrySList @ 0x140730CD0 (RtlpInterlockedPushEntrySList.c)
 */

PSLIST_ENTRY __fastcall MiFreeUltraMdlContext(PSLIST_ENTRY ListEntry)
{
  struct _KPRCB *CurrentPrcb; // rax

  CurrentPrcb = KeGetCurrentPrcb();
  return RtlpInterlockedPushEntrySList(
           (PSLIST_HEADER)(qword_140E34BF0
                         + (((CurrentPrcb->NodeRelativeTopologyIndex[0] & 7)
                           + 8LL * CurrentPrcb->SchedulerSubNode->Affinity.Reserved[0]) << 6)),
           ListEntry);
}
