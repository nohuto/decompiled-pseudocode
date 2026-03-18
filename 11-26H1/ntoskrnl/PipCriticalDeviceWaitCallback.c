/*
 * XREFs of PipCriticalDeviceWaitCallback @ 0x140CC1740
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x14051055C (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall PipCriticalDeviceWaitCallback(__int64 a1, const char *a2, UNICODE_STRING *a3)
{
  NTSTATUS v4; // ebx
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  char pszDest[256]; // [rsp+90h] [rbp-70h] BYREF

  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a2 )
  {
    v4 = RtlStringCchPrintfA(pszDest, 0x100uLL, "\\ArcName\\%s", a2);
    if ( v4 >= 0 )
    {
      RtlInitAnsiString(&DestinationString, pszDest);
      v4 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
      if ( v4 >= 0 )
      {
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 576;
        ObjectAttributes.ObjectName = a3;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        v4 = ZwOpenFile(&FileHandle, 0x80u, &ObjectAttributes, &IoStatusBlock, 0, 0x40u);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v4;
}
