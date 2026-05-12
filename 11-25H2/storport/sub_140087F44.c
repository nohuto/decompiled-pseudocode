/*
 * XREFs of sub_140087F44 @ 0x140087F44
 * Callers:
 *     sub_14004DCE0 @ 0x14004DCE0 (sub_14004DCE0.c)
 * Callees:
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140087F44(unsigned int a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  WCHAR SourceString[64]; // [rsp+30h] [rbp-39h] BYREF

  sub_14003BCD4(SourceString, 64LL, L"\\Device\\NvmePort%d", a1, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  sub_14003BCD4(SourceString, 64LL, L"\\Device\\ScsiPort%d", a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  sub_14003BCD4(SourceString, 64LL, L"\\DosDevices\\NvmeAdapter%d", a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  sub_14003BCD4(SourceString, 64LL, L"\\DosDevices\\Scsi%d:", a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoDeleteSymbolicLink(&DestinationString);
  return 0LL;
}
