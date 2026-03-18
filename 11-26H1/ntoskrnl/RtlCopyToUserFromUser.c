/*
 * XREFs of RtlCopyToUserFromUser @ 0x14077F2E8
 * Callers:
 *     MiFinalizeLagePageImageMapping @ 0x140774C90 (MiFinalizeLagePageImageMapping.c)
 *     AslpFileQueryExportName @ 0x14088EF6C (AslpFileQueryExportName.c)
 *     AlpcpGetDataFromUserVaSafe @ 0x1408E6480 (AlpcpGetDataFromUserVaSafe.c)
 *     SdbpReadMappedData @ 0x1409E85D8 (SdbpReadMappedData.c)
 *     NtQueryInformationThread @ 0x140A1F330 (NtQueryInformationThread.c)
 *     NtSetInformationProcess @ 0x140B72B10 (NtSetInformationProcess.c)
 *     RtlCopyToUserFromUser$thunk$6737528492940246313 @ 0x140C61040 (RtlCopyToUserFromUser$thunk$6737528492940246313.c)
 * Callees:
 *     RtlCopyVolatileMemory @ 0x140733080 (RtlCopyVolatileMemory.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 */

void *__fastcall RtlCopyToUserFromUser(void *a1, void *Src, size_t Size)
{
  ProbeForRead(Src, Size, 1u);
  ProbeForRead(a1, Size, 1u);
  return RtlCopyVolatileMemory(a1, Src, Size);
}
