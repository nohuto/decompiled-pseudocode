/*
 * XREFs of sub_140087D78 @ 0x140087D78
 * Callers:
 *     sub_14004DAE8 @ 0x14004DAE8 (sub_14004DAE8.c)
 * Callees:
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_140087D78(PUNICODE_STRING DeviceName, unsigned int *a2)
{
  unsigned int v2; // ebx
  unsigned int v5; // edi
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SourceString[64]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR v11[64]; // [rsp+C0h] [rbp-40h] BYREF

  v2 = 0;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  while ( 1 )
  {
    sub_14003BCD4(
      SourceString,
      64LL,
      L"\\Device\\ScsiPort%d",
      v2,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      *(_QWORD *)&SymbolicLinkName.Length,
      SymbolicLinkName.Buffer);
    RtlInitUnicodeString(&DestinationString, SourceString);
    sub_14003BCD4(v11, 64LL, L"\\Device\\NvmePort%d", v2);
    RtlInitUnicodeString(&SymbolicLinkName, v11);
    v5 = IoCreateSymbolicLink(&DestinationString, DeviceName);
    if ( !v5 )
    {
      v5 = IoCreateSymbolicLink(&SymbolicLinkName, DeviceName);
      if ( !v5 )
        goto LABEL_8;
      IoDeleteSymbolicLink(&DestinationString);
    }
    if ( v5 != -1073741771 )
      return v5;
    if ( v2 == 0xFFFF )
      return (unsigned int)-1073741670;
    if ( ++v2 > 0xFFFF )
    {
LABEL_8:
      sub_14003BCD4(SourceString, 64LL, L"\\DosDevices\\Scsi%d:", v2);
      RtlInitUnicodeString(&DestinationString, SourceString);
      IoCreateSymbolicLink(&DestinationString, DeviceName);
      ConfigurationInformation = IoGetConfigurationInformation();
      ++ConfigurationInformation->ScsiPortCount;
      sub_14003BCD4(v11, 64LL, L"\\DosDevices\\NvmeAdapter%d", v2);
      RtlInitUnicodeString(&SymbolicLinkName, v11);
      IoCreateSymbolicLink(&SymbolicLinkName, DeviceName);
      *a2 = v2;
      return v5;
    }
  }
}
