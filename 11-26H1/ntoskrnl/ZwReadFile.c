/*
 * XREFs of ZwReadFile @ 0x1407234B0
 * Callers:
 *     CmpDoFileRead @ 0x140494684 (CmpDoFileRead.c)
 *     DifZwReadFileWrapper @ 0x1404C09B0 (DifZwReadFileWrapper.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405D6938 (SecureDump_LoadCertAndProvisionKey.c)
 *     RtlInitializeBootStatDataCache @ 0x140619DE4 (RtlInitializeBootStatDataCache.c)
 *     PopLoadFileInMemory @ 0x1407C8C88 (PopLoadFileInMemory.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E4148 (SshpSessionManagerOpenControlTrace.c)
 *     RtlCheckBootStatusIntegrity @ 0x140805778 (RtlCheckBootStatusIntegrity.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x1408059C4 (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x140843E00 (CMFSystemThreadRoutine.c)
 *     EtwpUpdateFileHeader @ 0x140A16280 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140A16B3C (EtwpRealtimeRestoreBuffer.c)
 *     EtwpFinalizeHeader @ 0x140A16CB0 (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140ACBB20 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140B5391C (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140D07BB4 (EmInitSystem.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwReadFile(
        HANDLE FileHandle,
        HANDLE Event,
        PIO_APC_ROUTINE ApcRoutine,
        PVOID ApcContext,
        PIO_STATUS_BLOCK IoStatusBlock,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER ByteOffset,
        PULONG Key)
{
  _disable();
  __readeflags();
  return KiServiceInternal(FileHandle, Event, ApcRoutine);
}
