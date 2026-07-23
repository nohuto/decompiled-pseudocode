/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x140C0DC54
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x1407D2B50 (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x140CC0D18 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212FD0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x140447980 (_tlgKeywordOn.c)
 *     ExIsSoftBoot @ 0x14052CBE0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwSetInformation @ 0x14082E9F0 (EtwSetInformation.c)
 *     EtwRegister @ 0x140917980 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140917A20 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwUnregister @ 0x1409BE550 (EtwUnregister.c)
 *     BapdpWriteEventDataToRegistry @ 0x140C0DF24 (BapdpWriteEventDataToRegistry.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS BapdRecordFirmwareBootStats()
{
  REGHANDLE v0; // rbx
  REGHANDLE v1; // rcx
  ULONGLONG RegHandle; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD Data[5]; // [rsp+48h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B0h] [rbp-58h] BYREF

  v0 = 0LL;
  RegHandle = 0LL;
  DestinationString = 0LL;
  memset(Data, 0, sizeof(Data));
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09128, 0LL, 0LL);
  if ( !ExIsSoftBoot() && EtwRegister(&BOOTENV_ETW_PROVIDER, 0LL, 0LL, &RegHandle) >= 0 )
  {
    v0 = RegHandle;
    EtwSetInformation(
      RegHandle,
      EventProviderSetTraits,
      &`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits,
      (unsigned __int16)`EnableManifestedProviderForMicrosoftTelemetry'::`2'::Traits);
    guard_dispatch_icall_no_overrides(34LL, 0LL);
  }
  RtlInitUnicodeString(&DestinationString, L"FwPOSTTime");
  BapdpWriteEventDataToRegistry(Data);
  if ( v0 )
    EtwUnregister(v0);
  v1 = qword_140E09148;
  qword_140E09148 = 0LL;
  dword_140E09128 = 0;
  return EtwUnregister(v1);
}
