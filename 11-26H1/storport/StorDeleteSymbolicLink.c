/*
 * XREFs of StorDeleteSymbolicLink @ 0x1400970DC
 * Callers:
 *     RaidAdapterDisableDeviceInterface @ 0x14004A524 (RaidAdapterDisableDeviceInterface.c)
 *     NvmeAdapterDisableDeviceInterface @ 0x1400D4E90 (NvmeAdapterDisableDeviceInterface.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400470E4 (RtlStringCchPrintfW.c)
 *     NvmeDeleteSymbolicLink @ 0x14008F8E8 (NvmeDeleteSymbolicLink.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorDeleteSymbolicLink(unsigned int a1, char a2, int *a3)
{
  int v3; // eax
  const wchar_t *v7; // r8
  const wchar_t *v8; // r8
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  wchar_t pszDest[64]; // [rsp+30h] [rbp-98h] BYREF

  v3 = *a3;
  DestinationString = 0LL;
  if ( v3 == 1314275652 )
  {
    if ( !*((_QWORD *)a3 + 76) )
      return NvmeDeleteSymbolicLink(a1);
  }
  else if ( v3 != 1094997074 )
  {
    return 3221225659LL;
  }
  v7 = L"\\Device\\NvmePort%d";
  if ( !a2 )
    v7 = L"\\Device\\ScsiPort%d";
  RtlStringCchPrintfW(pszDest, 0x40uLL, v7, a1, *(_QWORD *)&DestinationString.Length, DestinationString.Buffer);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  v8 = L"\\DosDevices\\NvmeAdapter%d";
  if ( !a2 )
    v8 = L"\\DosDevices\\Scsi%d:";
  RtlStringCchPrintfW(pszDest, 0x40uLL, v8, a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  return 0LL;
}
