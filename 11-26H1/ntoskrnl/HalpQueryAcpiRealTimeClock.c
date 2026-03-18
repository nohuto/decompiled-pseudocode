/*
 * XREFs of HalpQueryAcpiRealTimeClock @ 0x140B26A10
 * Callers:
 *     HalQueryRealTimeClock @ 0x140451480 (HalQueryRealTimeClock.c)
 *     HalpUtcTimeToAcpiRealTime @ 0x140B268C4 (HalpUtcTimeToAcpiRealTime.c)
 * Callees:
 *     EtwEventEnabled @ 0x140212D90 (EtwEventEnabled.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     ObfDereferenceObject @ 0x140265140 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x1402655A0 (IofCallDriver.c)
 *     IoBuildDeviceIoControlRequest @ 0x14026B150 (IoBuildDeviceIoControlRequest.c)
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     HalpGetDynamicDevicePointer @ 0x140B26B48 (HalpGetDynamicDevicePointer.c)
 */

__int64 __fastcall HalpQueryAcpiRealTimeClock(PVOID OutputBuffer)
{
  int DynamicDevicePointer; // eax
  IRP *v4; // rax
  NTSTATUS Status; // [rsp+50h] [rbp+7h] BYREF
  PVOID Object; // [rsp+58h] [rbp+Fh] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp+17h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp+2Fh] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp+3Fh] BYREF

  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  Object = 0LL;
  DynamicDevicePointer = HalpGetDynamicDevicePointer(OutputBuffer, &Object);
  Status = DynamicDevicePointer;
  if ( DynamicDevicePointer == -1073741275 )
  {
    Status = -1073741822;
  }
  else if ( DynamicDevicePointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v4 = IoBuildDeviceIoControlRequest(
           0x294210u,
           (PDEVICE_OBJECT)Object,
           0LL,
           0,
           OutputBuffer,
           0x10u,
           0,
           &Event,
           &IoStatusBlock);
    if ( v4 )
    {
      Status = IofCallDriver((PDEVICE_OBJECT)Object, v4);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( Object )
  {
    ObfDereferenceObject(Object);
    if ( Status < 0
      && HalpDiagnosticEventsRegistered
      && EtwEventEnabled(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TAD_QUERY_FAILURE) )
    {
      UserData.Ptr = (ULONGLONG)&Status;
      *(_QWORD *)&UserData.Size = 4LL;
      EtwWrite(HalpDiagnosticEventHandle, &HAL_ETW_EVENT_TAD_QUERY_FAILURE, 0LL, 1u, &UserData);
    }
  }
  return (unsigned int)Status;
}
