/*
 * XREFs of ExpFindArcName @ 0x140841820
 * Callers:
 *     ExpCreateOutputARC @ 0x140841558 (ExpCreateOutputARC.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     wcscpy_s @ 0x14053EF80 (wcscpy_s.c)
 *     wcsncat_s @ 0x14053F010 (wcsncat_s.c)
 *     wcsncpy_s @ 0x14053F120 (wcsncpy_s.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenDirectoryObject @ 0x140728AC0 (ZwOpenDirectoryObject.c)
 *     ZwQueryDirectoryObject @ 0x14072A9A0 (ZwQueryDirectoryObject.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExpTranslateSymbolicLink @ 0x140A2DD60 (ExpTranslateSymbolicLink.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpFindArcName(const UNICODE_STRING *a1, wchar_t **a2)
{
  BOOLEAN v2; // r12
  wchar_t *Pool2; // rax
  WCHAR *v4; // rbx
  NTSTATUS v6; // edi
  UNICODE_STRING *v7; // rdi
  ULONG v8; // r14d
  BOOLEAN RestartScan; // r15
  NTSTATUS v10; // ebx
  wchar_t *v11; // rax
  wchar_t *v12; // rsi
  unsigned int v13; // r13d
  HANDLE DirectoryHandle; // [rsp+40h] [rbp-49h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-41h] BYREF
  UNICODE_STRING String2; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  ULONG Length; // [rsp+100h] [rbp+77h] BYREF
  ULONG Context; // [rsp+108h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  DestinationString = 0LL;
  DirectoryHandle = 0LL;
  Length = 0;
  Context = 0;
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
  v8 = 0;
  RestartScan = 1;
  RtlInitUnicodeString(&String2, L"SymbolicLink");
  while ( 1 )
  {
    v10 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &Length);
    if ( v10 == -1073741789 )
    {
      v8 = Length;
      if ( v7 )
        ExFreePoolWithTag(v7, 0);
      v7 = (UNICODE_STRING *)ExAllocatePool2(0x40uLL);
      if ( !v7 )
      {
        v10 = -1073741670;
        goto LABEL_26;
      }
      v10 = ZwQueryDirectoryObject(DirectoryHandle, v7, v8, 1u, RestartScan, &Context, &Length);
    }
    RestartScan = 0;
    if ( v10 < 0 )
      break;
    if ( RtlEqualUnicodeString(v7 + 1, &String2, 0) )
    {
      Length = v7->Length + 18;
      v11 = (wchar_t *)ExAllocatePool2(0x40uLL);
      v12 = v11;
      if ( !v11 )
      {
        v10 = -1073741670;
        goto LABEL_24;
      }
      v13 = v7->Length >> 1;
      wcscpy_s(v11, ((unsigned __int64)Length >> 1) + 1, L"\\ArcName\\");
      wcsncat_s(v12, ((unsigned __int64)Length >> 1) + 1, v7->Buffer, v13);
      v12[(unsigned __int64)Length >> 1] = 0;
      v10 = ExpTranslateSymbolicLink(v12);
      if ( v10 < 0 )
      {
        ExFreePoolWithTag(v12, 0);
        goto LABEL_24;
      }
      v2 = RtlEqualUnicodeString(&DestinationString, a1, 1u);
      ExFreePoolWithTag(DestinationString.Buffer, 0);
      if ( v2 == 1 )
      {
        wcsncpy_s(v12, ((unsigned __int64)Length >> 1) + 1, v7->Buffer, v13);
        v12[v13] = 0;
        *a2 = v12;
        goto LABEL_24;
      }
      ExFreePoolWithTag(v12, 0);
    }
  }
  if ( v10 == -2147483622 )
  {
    v10 = 0;
    if ( !v2 )
      v10 = -1073741766;
  }
LABEL_24:
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
LABEL_26:
  ZwClose(DirectoryHandle);
  return (unsigned int)v10;
}
