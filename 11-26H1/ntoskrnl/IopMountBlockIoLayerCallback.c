/*
 * XREFs of IopMountBlockIoLayerCallback @ 0x140CBDAD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitAnsiString @ 0x14046C9A0 (RtlInitAnsiString.c)
 *     RtlStringCchPrintfA @ 0x14051055C (RtlStringCchPrintfA.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenFile @ 0x140723A50 (ZwOpenFile.c)
 *     RtlDuplicateUnicodeString @ 0x14091E750 (RtlDuplicateUnicodeString.c)
 *     RtlAnsiStringToUnicodeString @ 0x14096BA30 (RtlAnsiStringToUnicodeString.c)
 */

__int64 __fastcall IopMountBlockIoLayerCallback(__int64 a1, _QWORD *a2, UNICODE_STRING *a3)
{
  NTSTATUS v5; // ebx
  __int64 v6; // rcx
  unsigned __int8 *v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  int v10; // eax
  UNICODE_STRING *v11; // r8
  HANDLE FileHandle; // [rsp+30h] [rbp-D0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+38h] [rbp-C8h] BYREF
  STRING DestinationString; // [rsp+68h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-88h] BYREF
  char pszDest[128]; // [rsp+90h] [rbp-70h] BYREF

  FileHandle = 0LL;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, 44);
  if ( a2 )
  {
    RtlStringCchPrintfA(pszDest, 0x80uLL, "\\ArcName\\%s", *(const char **)(*a2 + 8LL));
    RtlInitAnsiString(&DestinationString, pszDest);
    v5 = RtlAnsiStringToUnicodeString(a3, &DestinationString, 1u);
    if ( v5 >= 0 )
    {
      v6 = a2[1];
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = a3;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( v6 )
      {
        v7 = *(unsigned __int8 **)(v6 + 8);
        v8 = *(_QWORD *)(*a2 + 8LL) - (_QWORD)v7;
        do
        {
          v9 = v7[v8];
          v10 = *v7 - v9;
          if ( v10 )
            break;
          ++v7;
        }
        while ( v9 );
        if ( !v10 )
          goto LABEL_10;
      }
      v5 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 3u, 0x40u);
      if ( v5 >= 0 )
      {
LABEL_10:
        v11 = (UNICODE_STRING *)a2[2];
        if ( v11 )
          v5 = RtlDuplicateUnicodeString(0, a3, v11);
      }
    }
    if ( FileHandle )
      ZwClose(FileHandle);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}
