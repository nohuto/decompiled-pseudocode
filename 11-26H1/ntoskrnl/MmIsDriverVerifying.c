/*
 * XREFs of MmIsDriverVerifying @ 0x1403C18E0
 * Callers:
 *     VfDifCaptureDriverEntry @ 0x1403C1800 (VfDifCaptureDriverEntry.c)
 *     VfDifCaptureIoCallbacks @ 0x1403C186C (VfDifCaptureIoCallbacks.c)
 *     IopCompleteUnloadOrDelete @ 0x140426EA4 (IopCompleteUnloadOrDelete.c)
 *     IopXxxControlFile @ 0x140925E30 (IopXxxControlFile.c)
 *     IopReadFile @ 0x1409284FC (IopReadFile.c)
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IopQueryInformation @ 0x140933218 (IopQueryInformation.c)
 *     NtUnlockFile @ 0x1409810F0 (NtUnlockFile.c)
 *     IopWriteFile @ 0x140982A60 (IopWriteFile.c)
 *     IopGetBasicInformationFile @ 0x1409855F8 (IopGetBasicInformationFile.c)
 *     NtQueryInformationFile @ 0x140985BC0 (NtQueryInformationFile.c)
 *     IopCloseFile @ 0x140A285C0 (IopCloseFile.c)
 *     NtLockFile @ 0x140B720D0 (NtLockFile.c)
 *     VfGetPristineDispatchRoutine @ 0x140C31EA4 (VfGetPristineDispatchRoutine.c)
 *     VfGetPristineDriverInit @ 0x140C31EF4 (VfGetPristineDriverInit.c)
 *     IovUtilIsVerifiedDeviceStack @ 0x140C37040 (IovUtilIsVerifiedDeviceStack.c)
 *     VfDevObjPreAddDevice @ 0x140C4E034 (VfDevObjPreAddDevice.c)
 *     VfDevObjPostAddDevice @ 0x140C4E100 (VfDevObjPostAddDevice.c)
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
