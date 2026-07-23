/*
 * XREFs of ZwReadFile @ 0x140728080
 * Callers:
 *     CmpDoFileRead @ 0x14048E1D4 (CmpDoFileRead.c)
 *     DifZwReadFileWrapper @ 0x1404BA200 (DifZwReadFileWrapper.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x1405D9128 (SecureDump_LoadCertAndProvisionKey.c)
 *     RtlInitializeBootStatDataCache @ 0x14061CE34 (RtlInitializeBootStatDataCache.c)
 *     PopLoadFileInMemory @ 0x1407CBD28 (PopLoadFileInMemory.c)
 *     SshpSessionManagerOpenControlTrace @ 0x1407E959C (SshpSessionManagerOpenControlTrace.c)
 *     RtlCheckBootStatusIntegrity @ 0x14080B218 (RtlCheckBootStatusIntegrity.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x14080B464 (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x140849290 (CMFSystemThreadRoutine.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140A14F98 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140A15D84 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140ABCAB0 (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140ACDD60 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140B561BC (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140D0DE84 (EmInitSystem.c)
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
  return KiServiceInternal(FileHandle);
}
