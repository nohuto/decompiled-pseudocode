/*
 * XREFs of StorCreateSymbolicLink @ 0x140096CB4
 * Callers:
 *     RaidAdapterCompleteInitialization @ 0x140060120 (RaidAdapterCompleteInitialization.c)
 *     NvmeAdapterCompleteInitialization @ 0x1400D3950 (NvmeAdapterCompleteInitialization.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1400470E4 (RtlStringCchPrintfW.c)
 *     NvmeCreateSymbolicLink @ 0x14008F714 (NvmeCreateSymbolicLink.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorCreateSymbolicLink(PUNICODE_STRING DeviceName, char a2, unsigned int *a3, int *a4)
{
  int v4; // eax
  unsigned int v5; // edi
  unsigned int i; // ebx
  NTSTATUS v11; // eax
  struct _UNICODE_STRING *p_DestinationString; // rcx
  const wchar_t *v13; // r8
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t pszDest[64]; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t SourceString[64]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *a4;
  v5 = 0;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  if ( v4 == 1314275652 )
  {
    if ( !*((_QWORD *)a4 + 76) )
      return NvmeCreateSymbolicLink(DeviceName, a3);
  }
  else if ( v4 != 1094997074 )
  {
    return 3221225659LL;
  }
  for ( i = 0; i <= 0xFFFF; ++i )
  {
    RtlStringCchPrintfW(
      pszDest,
      0x40uLL,
      L"\\Device\\ScsiPort%d",
      i,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      *(_QWORD *)&SymbolicLinkName.Length,
      SymbolicLinkName.Buffer);
    RtlInitUnicodeString(&DestinationString, pszDest);
    RtlStringCchPrintfW(SourceString, 0x40uLL, L"\\Device\\NvmePort%d", i);
    RtlInitUnicodeString(&SymbolicLinkName, SourceString);
    v5 = IoCreateSymbolicLink(&DestinationString, DeviceName);
    if ( !v5 )
    {
      v11 = IoCreateSymbolicLink(&SymbolicLinkName, DeviceName);
      p_DestinationString = &DestinationString;
      v5 = v11;
      if ( !v11 )
      {
        if ( !a2 )
          p_DestinationString = &SymbolicLinkName;
        IoDeleteSymbolicLink(p_DestinationString);
        break;
      }
      IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v5 != -1073741771 )
      return v5;
    if ( i == 0xFFFF )
      return (unsigned int)-1073741670;
  }
  v13 = L"\\DosDevices\\NvmeAdapter%d";
  if ( !a2 )
    v13 = L"\\DosDevices\\Scsi%d:";
  RtlStringCchPrintfW(
    pszDest,
    0x40uLL,
    v13,
    i,
    *(_QWORD *)&DestinationString.Length,
    DestinationString.Buffer,
    *(_QWORD *)&SymbolicLinkName.Length,
    SymbolicLinkName.Buffer);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoCreateSymbolicLink(&DestinationString, DeviceName);
  if ( !a2 )
  {
    ConfigurationInformation = IoGetConfigurationInformation();
    ++ConfigurationInformation->ScsiPortCount;
  }
  *a3 = i;
  return v5;
}
