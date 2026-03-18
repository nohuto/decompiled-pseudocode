/*
 * XREFs of ACPIRootWorker @ 0x1400C90E0
 * Callers:
 *     <none>
 * Callees:
 *     OSWriteRegValue @ 0x1400C9238 (OSWriteRegValue.c)
 *     OSCreateHandle @ 0x1400C9370 (OSCreateHandle.c)
 */

int __fastcall ACPIRootWorker(__int64 a1, char a2)
{
  int result; // eax
  int v4; // ebx
  int Data; // [rsp+50h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+58h] [rbp+28h]

  Data = 0;
  KeyHandle = 0LL;
  result = OSCreateHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters");
  if ( result >= 0 )
  {
    if ( (a2 & 1) != 0 )
      OSWriteRegValue("AMLIMaxCTObjs", 0LL, &Data, 4u);
    v4 = OSCreateHandle("WakeUp");
    result = ZwClose(0LL);
    if ( v4 >= 0 )
    {
      if ( (a2 & 2) != 0 )
        OSWriteRegValue("FixedEventMask", KeyHandle, (char *)AcpiInformation + 114, 2u);
      if ( (a2 & 4) != 0 )
        OSWriteRegValue("FixedEventStatus", KeyHandle, (char *)AcpiInformation + 116, 2u);
      if ( (a2 & 8) != 0 )
        OSWriteRegValue("GenericEventMask", KeyHandle, GpeSavedWakeMask, *((unsigned __int16 *)AcpiInformation + 51));
      if ( (a2 & 0x10) != 0 )
        OSWriteRegValue(
          "GenericEventStatus",
          KeyHandle,
          GpeSavedWakeStatus,
          *((unsigned __int16 *)AcpiInformation + 51));
      return ZwClose(KeyHandle);
    }
  }
  return result;
}
