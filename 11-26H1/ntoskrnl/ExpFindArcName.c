/*
 * XREFs of ExpFindArcName @ 0x14083B5E0
 * Callers:
 *     ExpCreateOutputARC @ 0x14083B318 (ExpCreateOutputARC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14053CB00 (wcscpy_s.c)
 *     wcsncat_s @ 0x14053CB90 (wcsncat_s.c)
 *     wcsncpy_s @ 0x14053CCA0 (wcsncpy_s.c)
 *     ZwClose @ 0x1407235D0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140723EF0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x140725DD0 (ZwQueryDirectoryObject.c)
 *     RtlEqualUnicodeString @ 0x14091F0E0 (RtlEqualUnicodeString.c)
 *     ExpTranslateSymbolicLink @ 0x140A95510 (ExpTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpFindArcName(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *Pool2; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rdi
  int DirectoryObject; // ebx
  wchar_t *v9; // rax
  wchar_t *v10; // rsi
  unsigned int v11; // r13d
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  unsigned int v18; // [rsp+100h] [rbp+77h]

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  String2 = 0LL;
  v2 = 0;
  Pool2 = (wchar_t *)ExAllocatePool2(0x40uLL);
  v4 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  wcscpy_s(Pool2, 9uLL, L"\\ArcName");
  RtlInitUnicodeString(&DestinationString, v4);
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenDirectoryObject(&DirectoryHandle, 1u, &ObjectAttributes);
  ExFreePoolWithTag(v4, 0);
  if ( v6 < 0 )
    return (unsigned int)v6;
  v7 = 0LL;
  RtlInitUnicodeString(&String2, L"SymbolicLink");
  while ( 1 )
  {
    DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v7);
    if ( DirectoryObject == -1073741789 )
    {
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = (UNICODE_STRING *)ExAllocatePool2(0x40uLL);
      if ( !v7 )
      {
        DirectoryObject = -1073741670;
        goto LABEL_26;
      }
      DirectoryObject = ZwQueryDirectoryObject((__int64)DirectoryHandle, (__int64)v7);
    }
    if ( DirectoryObject < 0 )
      break;
    if ( RtlEqualUnicodeString(v7 + 1, &String2, 0) )
    {
      v18 = v7->Length + 18;
      v9 = (wchar_t *)ExAllocatePool2(0x40uLL);
      v10 = v9;
      if ( !v9 )
      {
        DirectoryObject = -1073741670;
        goto LABEL_24;
      }
      v11 = v7->Length >> 1;
      wcscpy_s(v9, ((unsigned __int64)v18 >> 1) + 1, L"\\ArcName\\");
      wcsncat_s(v10, ((unsigned __int64)v18 >> 1) + 1, v7->Buffer, v11);
      v10[(unsigned __int64)v18 >> 1] = 0;
      DirectoryObject = ExpTranslateSymbolicLink(v10);
      if ( DirectoryObject < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        goto LABEL_24;
      }
      v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( v2 == 1 )
      {
        wcsncpy_s(v10, ((unsigned __int64)v18 >> 1) + 1, v7->Buffer, v11);
        v10[v11] = 0;
        *a2 = v10;
        goto LABEL_24;
      }
      ExFreePoolWithTag(v10, 0);
    }
  }
  if ( DirectoryObject == -2147483622 )
  {
    DirectoryObject = 0;
    if ( !v2 )
      DirectoryObject = -1073741766;
  }
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_26:
  ZwClose(DirectoryHandle);
  return (unsigned int)DirectoryObject;
}
