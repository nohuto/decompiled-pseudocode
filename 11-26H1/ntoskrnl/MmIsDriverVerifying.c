/*
 * XREFs of MmIsDriverVerifying @ 0x1403B79E0
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403B7900 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403B796C (VfDifCaptureIoCallbacks.c)
 *     IopCompleteUnloadOrDelete @ 0x140437F84 (IopCompleteUnloadOrDelete.c)
 *     IopXxxControlFile @ 0x1408F5EA0 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1408F856C (IopReadFile.c)
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IopQueryInformation @ 0x140903288 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1409B0030 (NtUnlockFile.c)
 *     IopWriteFile @ 0x1409B19A0 (IopWriteFile.c)
 *     IopGetBasicInformationFile @ 0x1409B4538 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x1409B4B00 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140A1EFA0 (IopCloseFile.c)
 *     NtLockFile @ 0x140B6ECE0 (NtLockFile.c)
 *     VfGetPristineDispatchRoutine @ 0x140C2BE94 (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140C2BEE4 (VfGetPristineDriverInit.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C31030 (IovUtilIsVerifiedDeviceStack.c)
 *     VfDevObjPreAddDevice @ 0x140C48024 (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140C480F0 (VfDevObjPostAddDevice.c)
 * Callees:
 *     <none>
 */

LOGICAL __stdcall MmIsDriverVerifying(struct _DRIVER_OBJECT *DriverObject)
{
  LOGICAL result; // eax
  _DWORD *DriverSection; // rcx

  result = 0;
  if ( (_DWORD)VfRuleClasses )
  {
    DriverSection = DriverObject->DriverSection;
    if ( DriverSection )
      return (DriverSection[26] >> 25) & 1;
  }
  return result;
}
