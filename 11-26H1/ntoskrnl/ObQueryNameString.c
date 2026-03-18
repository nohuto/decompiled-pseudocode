/*
 * XREFs of ObQueryNameString @ 0x1409FDA20
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140430644 (SeSetLearningModeObjectInformation.c)
 *     IoDeleteDevice @ 0x140437BA0 (IoDeleteDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x14044EEC4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x1404E0678 (IopGetFileVolumeNameInformation.c)
 *     IopCaptureObjectName @ 0x140C054A8 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140C06A60 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140C3B91C (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x1409FDA40 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
