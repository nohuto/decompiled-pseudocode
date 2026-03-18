/*
 * XREFs of UserLogError @ 0x1400B06D0
 * Callers:
 *     RIMApiSetValidateDeviceSignature @ 0x1400B25A8 (RIMApiSetValidateDeviceSignature.c)
 *     UserPowerInfoCallout @ 0x1401B1014 (UserPowerInfoCallout.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1401D5400 (RIMFreeSpecificDevOnCreateFailure.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1401E5C14 (rimFindMonitorForDigitizerWithQDCData.c)
 * Callees:
 *     <none>
 */

void __fastcall UserLogError(int a1)
{
  _DWORD *ErrorLogEntry; // rax

  ErrorLogEntry = IoAllocateErrorLogEntry(gpWin32kDriverObject, 0x30u);
  if ( ErrorLogEntry )
  {
    ErrorLogEntry[3] = a1;
    IoWriteErrorLogEntry(ErrorLogEntry);
  }
}
