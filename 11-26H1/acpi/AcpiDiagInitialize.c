/*
 * XREFs of AcpiDiagInitialize @ 0x1400D8B98
 * Callers:
 *     DriverEntry @ 0x1400D8CB0 (DriverEntry.c)
 * Callees:
 *     AcpiDiagRequeueThermalPollingTimer @ 0x14002BBDC (AcpiDiagRequeueThermalPollingTimer.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1400AA4A4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     OSReadRegValue @ 0x1400C8470 (OSReadRegValue.c)
 *     OSOpenHandle @ 0x1400C8D44 (OSOpenHandle.c)
 *     OSCloseHandle @ 0x1400D1E58 (OSCloseHandle.c)
 */

__int64 AcpiDiagInitialize()
{
  unsigned int v0; // ebx
  int v1; // edi
  unsigned int v3; // [rsp+30h] [rbp+8h] BYREF
  void *v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 v5; // [rsp+40h] [rbp+18h] BYREF

  v0 = 0;
  v4 = 0LL;
  KeInitializeTimer2(&WPP_MAIN_CB.DeviceQueue, AcpiDiagThermalPollingTimerRoutine, 0LL, 8LL);
  EtwRegister(
    &ACPI_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagTraceControlCallback,
    0LL,
    (PREGHANDLE)&WPP_MAIN_CB.Queue.Wcb.NumberOfMapRegisters);
  EtwRegister(
    &THERMAL_POLLING_ETW_PROVIDER,
    (PETWENABLECALLBACK)AcpiDiagThermalPollingTraceControlCallback,
    0LL,
    (PREGHANDLE)&WPP_MAIN_CB.Queue.Wcb.DeviceObject);
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((char *)&dword_14008C310);
  v1 = OSOpenHandle("\\Registry\\Machine\\System\\CurrentControlSet\\Services\\ACPI\\Parameters", 0LL, (__int64)&v4);
  if ( v1 >= 0 )
  {
    v5 = 0LL;
    v3 = 4;
    v1 = OSReadRegValue("TemperatureTelemetryInterval", v4, &v5, &v3);
    if ( v1 >= 0 && v3 == 4 )
    {
      WPP_MAIN_CB.Queue.Wcb.DeviceRoutine = (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))(10000000 * v5);
      if ( 10000000 * v5 > 0 )
      {
        LOBYTE(WPP_MAIN_CB.Queue.Wcb.DeviceContext) = 1;
        AcpiDiagRequeueThermalPollingTimer();
      }
    }
    OSCloseHandle(v4);
  }
  if ( v1 >= 0 )
    return (unsigned int)v1;
  return v0;
}
