/*
 * XREFs of HalpStartPccCommand @ 0x140787504
 * Callers:
 *     HalpChannelPowerRequest @ 0x140787250 (HalpChannelPowerRequest.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     HalpUpdateCoolingPacket @ 0x1405A0F10 (HalpUpdateCoolingPacket.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     HalpAcquirePccInterface @ 0x140787144 (HalpAcquirePccInterface.c)
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
  if ( qword_140F87720 )
    return guard_dispatch_icall_no_overrides(*((__int64 *)&xmmword_140F876D0 + 1), v0);
  return 3221225488LL;
}
