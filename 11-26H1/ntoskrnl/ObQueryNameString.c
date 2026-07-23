/*
 * XREFs of ObQueryNameString @ 0x140922620
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x14041D674 (SeSetLearningModeObjectInformation.c)
 *     IoDeleteDevice @ 0x140426AC0 (IoDeleteDevice.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x140446FF4 (IopAttachDeviceToDeviceStackSafe.c)
 *     IopGetFileVolumeNameInformation @ 0x1404D9D58 (IopGetFileVolumeNameInformation.c)
 *     IopCaptureObjectName @ 0x140C0B6B8 (IopCaptureObjectName.c)
 *     PopFlushVolumeWorker @ 0x140C0CC70 (PopFlushVolumeWorker.c)
 *     VfIrpLogRetrieveWmiData @ 0x140C4192C (VfIrpLogRetrieveWmiData.c)
 * Callees:
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 */

NTSTATUS __stdcall ObQueryNameString(
        PVOID Object,
        POBJECT_NAME_INFORMATION ObjectNameInfo,
        ULONG Length,
        PULONG ReturnLength)
{
  return ObQueryNameStringMode((_DWORD)Object, (_DWORD)ObjectNameInfo, Length, (_DWORD)ReturnLength, 0);
}
