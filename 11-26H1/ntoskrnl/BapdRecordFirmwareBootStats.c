/*
 * XREFs of BapdRecordFirmwareBootStats @ 0x140C07A44
 * Callers:
 *     PopBootLoaderTraceProcess @ 0x1407CFAB0 (PopBootLoaderTraceProcess.c)
 *     IoInitSystemPreDrivers @ 0x140CBACA0 (IoInitSystemPreDrivers.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212E30 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     EtwWrite @ 0x140212EF0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     _tlgKeywordOn @ 0x14044F850 (_tlgKeywordOn.c)
 *     ExIsSoftBoot @ 0x14052A6C0 (ExIsSoftBoot.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     EtwSetInformation @ 0x1408287B0 (EtwSetInformation.c)
 *     EtwRegister @ 0x14093BDE0 (EtwRegister.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x14093BE80 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     EtwUnregister @ 0x140A84ED0 (EtwUnregister.c)
 *     BapdpWriteEventDataToRegistry @ 0x140C07D14 (BapdpWriteEventDataToRegistry.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E09130, 0LL, 0LL);
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
  v1 = qword_140E09150;
  qword_140E09150 = 0LL;
  dword_140E09130 = 0;
  return EtwUnregister(v1);
}
