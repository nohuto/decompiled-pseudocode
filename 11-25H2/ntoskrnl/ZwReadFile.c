/*
 * XREFs of ZwReadFile @ 0x14069B200
 * Callers:
 *     CmpDoFileRead @ 0x140478FE0 (CmpDoFileRead.c)
 *     SecureDump_LoadCertAndProvisionKey @ 0x14059E624 (SecureDump_LoadCertAndProvisionKey.c)
 *     RtlInitializeBootStatDataCache @ 0x1405DD500 (RtlInitializeBootStatDataCache.c)
 *     DifZwReadFileWrapper @ 0x14063ADD0 (DifZwReadFileWrapper.c)
 *     PopLoadFileInMemory @ 0x14073D3E4 (PopLoadFileInMemory.c)
 *     SshpSessionManagerOpenControlTrace @ 0x140757A40 (SshpSessionManagerOpenControlTrace.c)
 *     RtlCheckBootStatusIntegrity @ 0x140773934 (RtlCheckBootStatusIntegrity.c)
 *     RtlInitializeBootStatusDataBlackBox @ 0x140773B64 (RtlInitializeBootStatusDataBlackBox.c)
 *     CMFSystemThreadRoutine @ 0x1407B42D0 (CMFSystemThreadRoutine.c)
 *     EtwpRealtimeRestoreBuffer @ 0x140990A68 (EtwpRealtimeRestoreBuffer.c)
 *     EtwpUpdateFileHeader @ 0x140991CA0 (EtwpUpdateFileHeader.c)
 *     EtwpFinalizeHeader @ 0x140992E74 (EtwpFinalizeHeader.c)
 *     RtlpGetSetBootStatusData @ 0x140A1CCD4 (RtlpGetSetBootStatusData.c)
 *     EtwpRealtimeRestoreState @ 0x140AA9764 (EtwpRealtimeRestoreState.c)
 *     EmInitSystem @ 0x140C4F21C (EmInitSystem.c)
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
