/*
 * XREFs of RtlCopyToUserFromUser @ 0x140781DE8
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x140777C90 (MiFinalizeLagePageImageMapping.c)
 *     AslpFileQueryExportName @ 0x140895368 (AslpFileQueryExportName.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1408ECA40 (AlpcpGetDataFromUserVaSafe.c)
 *     SdbpReadMappedData @ 0x1409D4FE8 (SdbpReadMappedData.c)
 *     NtQueryInformationThread @ 0x140A28950 (NtQueryInformationThread.c)
 *     NtSetInformationProcess @ 0x140B781E0 (NtSetInformationProcess.c)
 *     RtlCopyToUserFromUser$thunk$6737528492940246313 @ 0x140C67040 (RtlCopyToUserFromUser$thunk$6737528492940246313.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 */

void *__fastcall RtlCopyToUserFromUser(void *a1, void *Src, size_t Size)
{
  ProbeForRead(Src, Size, 1u);
  ProbeForRead(a1, Size, 1u);
  return RtlCopyVolatileMemory(a1, Src, Size);
}
