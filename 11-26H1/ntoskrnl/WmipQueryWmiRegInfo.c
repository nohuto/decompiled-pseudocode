/*
 * XREFs of WmipQueryWmiRegInfo @ 0x140824510
 * Callers:
 *     IoWMISystemControl @ 0x140AC4764 (IoWMISystemControl.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipQueryWmiRegInfo(__int64 a1, __int64 a2, UNICODE_STRING *a3, void ***a4)
{
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &EtwpSecurityLock.SchedulerSharedSystemSlot;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
