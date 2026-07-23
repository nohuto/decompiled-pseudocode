/*
 * XREFs of SiOpenArcNameObject @ 0x14089BEFC
 * Callers:
 *     SiGetBiosSystemDisk @ 0x14089BB3C (SiGetBiosSystemDisk.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwOpenSymbolicLinkObject @ 0x14072A6E0 (ZwOpenSymbolicLinkObject.c)
 */

__int64 __fastcall SiOpenArcNameObject(PCWSTR SourceString, HANDLE *a2)
{
  NTSTATUS v3; // eax
  unsigned int v4; // ecx
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-30h] BYREF
  HANDLE LinkHandle; // [rsp+80h] [rbp+20h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  LinkHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v3 = ZwOpenSymbolicLinkObject(&LinkHandle, 0x20001u, &ObjectAttributes);
  v4 = v3;
  if ( v3 >= 0 )
  {
    *a2 = LinkHandle;
  }
  else if ( v3 != -1073741801 && v3 != -1073741670 )
  {
    return (unsigned int)-1073740718;
  }
  return v4;
}
