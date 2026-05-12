/*
 * XREFs of RaidXrbSetCompletionRoutine @ 0x14004A41C
 * Callers:
 *     RaidAdapterDiagnosticIoctl @ 0x14018470C (RaidAdapterDiagnosticIoctl.c)
 *     RaidAdapterGetMiniportDumpInfo @ 0x1401855B0 (RaidAdapterGetMiniportDumpInfo.c)
 *     StorSendMFNDCommand @ 0x140194890 (StorSendMFNDCommand.c)
 *     RaUnitStorageDataSetManagementIoctl @ 0x1401B407C (RaUnitStorageDataSetManagementIoctl.c)
 *     StorGetNVMeIdentifyInfo @ 0x1401B6194 (StorGetNVMeIdentifyInfo.c)
 *     RaidAdapterFreeMiniportDumpInfo @ 0x1401B816C (RaidAdapterFreeMiniportDumpInfo.c)
 *     RaWmiPassToMiniPort @ 0x1401B8A40 (RaWmiPassToMiniPort.c)
 * Callees:
 *     <none>
 */

void __fastcall RaidXrbSetCompletionRoutine(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 656) = a2;
}
