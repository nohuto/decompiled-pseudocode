/*
 * XREFs of PnpSetRegistryDword @ 0x1407A42E4
 * Callers:
 *     IoReportDetectedDevice @ 0x14079E000 (IoReportDetectedDevice.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x140723FF0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PnpSetRegistryDword(HANDLE KeyHandle, const WCHAR *a2)
{
  int Data; // [rsp+30h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  Data = 1;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  return ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &Data, 4u);
}
