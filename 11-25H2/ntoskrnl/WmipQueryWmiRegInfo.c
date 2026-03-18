/*
 * XREFs of WmipQueryWmiRegInfo @ 0x140796EA0
 * Callers:
 *     IoWMISystemControl @ 0x140A3CC04 (IoWMISystemControl.c)
 * Callees:
 *     RtlInitAnsiString @ 0x14046B2E0 (RtlInitAnsiString.c)
 *     RtlAnsiStringToUnicodeString @ 0x1408E5A80 (RtlAnsiStringToUnicodeString.c)
 */

NTSTATUS __fastcall WmipQueryWmiRegInfo(__int64 a1, __int64 a2, UNICODE_STRING *a3, _QWORD *a4)
{
  STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *a4 = &WmipRegistryPath;
  DestinationString = 0LL;
  RtlInitAnsiString(&DestinationString, "SMBiosData");
  return RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
}
