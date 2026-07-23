/*
 * XREFs of HalpStartPccCommand @ 0x14078A034
 * Callers:
 *     HalpChannelPowerRequest @ 0x140789D80 (HalpChannelPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     HalpUpdateCoolingPacket @ 0x1405A3720 (HalpUpdateCoolingPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HalpAcquirePccInterface @ 0x140789C74 (HalpAcquirePccInterface.c)
 */

__int64 HalpStartPccCommand()
{
  __int64 v0; // rdx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-98h] BYREF
  _BYTE v3[136]; // [rsp+30h] [rbp-88h] BYREF

  DestinationString = 0LL;
  memset_0(v3, 0, 0x80uLL);
  RtlInitUnicodeString(&DestinationString, L"\\DosDevices\\ACPI_ROOT_OBJECT");
  if ( !HalpUpdateCoolingPacket(0LL) )
  {
    if ( (int)HalpAcquirePccInterface(*(_BYTE *)(HalpAcpiMpst + 36), &DestinationString, v3) < 0 )
      return 3221225488LL;
    HalpUpdateCoolingPacket((__int64)v3);
  }
  if ( qword_140F87B20 )
    return guard_dispatch_icall_no_overrides(*((__int64 *)&xmmword_140F87AD0 + 1), v0);
  return 3221225488LL;
}
