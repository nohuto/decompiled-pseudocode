/*
 * XREFs of NvmeDeleteSymbolicLink @ 0x14008F8E8
 * Callers:
 *     StorDeleteSymbolicLink @ 0x1400970DC (StorDeleteSymbolicLink.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400470E4 (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall NvmeDeleteSymbolicLink(unsigned int a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-49h] BYREF
  wchar_t pszDest[64]; // [rsp+30h] [rbp-39h] BYREF

  RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\NvmePort%d", a1, 0LL, 0LL);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\ScsiPort%d", a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\DosDevices\\NvmeAdapter%d", a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\DosDevices\\Scsi%d:", a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  return 0LL;
}
