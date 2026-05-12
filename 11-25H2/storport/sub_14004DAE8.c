/*
 * XREFs of sub_14004DAE8 @ 0x14004DAE8
 * Callers:
 *     DoScreenSave @ 0x14003A05C (DoScreenSave.c)
 *     sub_1400CB254 @ 0x1400CB254 (sub_1400CB254.c)
 * Callees:
 *     sub_14003BCD4 @ 0x14003BCD4 (sub_14003BCD4.c)
 *     sub_140087D78 @ 0x140087D78 (sub_140087D78.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_14004DAE8(PUNICODE_STRING DeviceName, char a2, unsigned int *a3, int *a4)
{
  int v4; // eax
  unsigned int v9; // ebx
  unsigned int v10; // edi
  NTSTATUS v11; // eax
  struct _UNICODE_STRING *p_DestinationString; // rcx
  const wchar_t *v13; // r8
  PCONFIGURATION_INFORMATION ConfigurationInformation; // rax
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  struct _UNICODE_STRING SymbolicLinkName; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR SourceString[64]; // [rsp+40h] [rbp-C0h] BYREF
  WCHAR v18[64]; // [rsp+C0h] [rbp-40h] BYREF

  v4 = *a4;
  DestinationString = 0LL;
  SymbolicLinkName = 0LL;
  if ( v4 == 1314275652 )
  {
    if ( !*((_QWORD *)a4 + 74) )
      return sub_140087D78(DeviceName);
  }
  else if ( v4 != 1094997074 )
  {
    return 3221225659LL;
  }
  v9 = 0;
  while ( 1 )
  {
    sub_14003BCD4(
      SourceString,
      64LL,
      L"\\Device\\ScsiPort%d",
      v9,
      *(_QWORD *)&DestinationString.Length,
      DestinationString.Buffer,
      *(_QWORD *)&SymbolicLinkName.Length,
      SymbolicLinkName.Buffer);
    RtlInitUnicodeString(&DestinationString, SourceString);
    sub_14003BCD4(v18, 64LL, L"\\Device\\NvmePort%d", v9);
    RtlInitUnicodeString(&SymbolicLinkName, v18);
    v10 = IoCreateSymbolicLink(&DestinationString, DeviceName);
    if ( !v10 )
      break;
LABEL_10:
    if ( v10 != -1073741771 )
      return v10;
    if ( v9 == 0xFFFF )
      return (unsigned int)-1073741670;
    if ( ++v9 > 0xFFFF )
      goto LABEL_17;
  }
  v11 = IoCreateSymbolicLink(&SymbolicLinkName, DeviceName);
  p_DestinationString = &DestinationString;
  v10 = v11;
  if ( v11 )
  {
    IoDeleteSymbolicLink(&DestinationString);
    goto LABEL_10;
  }
  if ( !a2 )
    p_DestinationString = &SymbolicLinkName;
  IoDeleteSymbolicLink(p_DestinationString);
LABEL_17:
  v13 = L"\\DosDevices\\NvmeAdapter%d";
  if ( !a2 )
    v13 = L"\\DosDevices\\Scsi%d:";
  sub_14003BCD4(SourceString, 64LL, v13, v9);
  RtlInitUnicodeString(&DestinationString, SourceString);
  IoCreateSymbolicLink(&DestinationString, DeviceName);
  if ( !a2 )
  {
    ConfigurationInformation = IoGetConfigurationInformation();
    ++ConfigurationInformation->ScsiPortCount;
  }
  *a3 = v9;
  return v10;
}
