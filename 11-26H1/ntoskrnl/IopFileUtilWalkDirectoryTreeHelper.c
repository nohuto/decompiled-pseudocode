/*
 * XREFs of IopFileUtilWalkDirectoryTreeHelper @ 0x1407B771C
 * Callers:
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x1407B7520 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x140CCDB5C (IopFileUtilWalkDirectoryTreeTopDown.c)
 * Callees:
 *     RtlCopyUnicodeString @ 0x14040DFC0 (RtlCopyUnicodeString.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     RtlAppendUnicodeToString @ 0x14041FEE0 (RtlAppendUnicodeToString.c)
 *     RtlAppendUnicodeStringToString @ 0x14041FFA0 (RtlAppendUnicodeStringToString.c)
 *     _wcsicmp @ 0x1405389F0 (_wcsicmp.c)
 *     ZwWaitForSingleObject @ 0x140728040 (ZwWaitForSingleObject.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwQueryDirectoryFile @ 0x140728660 (ZwQueryDirectoryFile.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall IopFileUtilWalkDirectoryTreeHelper(
        UNICODE_STRING *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        unsigned int *FileInformation,
        __int16 a6,
        __int64 a7)
{
  char v7; // r12
  UNICODE_STRING *v8; // rsi
  char v9; // di
  int Status; // ebx
  unsigned int *v11; // rdi
  NTSTATUS v12; // eax
  unsigned __int64 v13; // rax
  __int64 Pool2; // rax
  _QWORD *v15; // rsi
  UNICODE_STRING *v16; // r13
  __int16 v17; // ax
  char v18; // r14
  _QWORD *v19; // rax
  __int64 v20; // rax
  BOOLEAN v22; // [rsp+58h] [rbp-71h]
  HANDLE FileHandle; // [rsp+68h] [rbp-61h] BYREF
  __int64 v24; // [rsp+70h] [rbp-59h]
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-51h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+88h] [rbp-41h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-31h] BYREF
  __int16 v29; // [rsp+140h] [rbp+77h]

  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  v7 = a2;
  v8 = a1;
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v9 = 1;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  Status = ZwOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 1u, ~(a2 << 17) & 0x200000 | 0x4001);
  if ( Status < 0 )
    return (unsigned int)Status;
LABEL_2:
  v22 = v9;
  v11 = FileInformation;
  v12 = ZwQueryDirectoryFile(
          FileHandle,
          0LL,
          0LL,
          0LL,
          &IoStatusBlock,
          FileInformation,
          0x3FEu,
          FileBothDirectoryInformation,
          0,
          0LL,
          v22);
  Status = v12;
  if ( v12 < 0 )
    goto LABEL_27;
  if ( v12 == 259 )
  {
    ZwWaitForSingleObject(FileHandle, 1u, 0LL);
    Status = IoStatusBlock.Status;
    if ( IoStatusBlock.Status < 0 )
      goto LABEL_27;
  }
  while ( 1 )
  {
    v13 = (unsigned __int64)v11[15] >> 1;
    v29 = *((_WORD *)v11 + v13 + 47);
    *((_WORD *)v11 + v13 + 47) = 0;
    RtlInitUnicodeString(&DestinationString, (PCWSTR)v11 + 47);
    v24 = (unsigned __int16)(v8->Length + DestinationString.Length + 2);
    Pool2 = ExAllocatePool2(0x100uLL);
    v15 = (_QWORD *)Pool2;
    if ( !Pool2 )
      break;
    v16 = (UNICODE_STRING *)(Pool2 + 16);
    *(_WORD *)(Pool2 + 16) = 0;
    v17 = v24;
    v15[3] = v15 + 4;
    *((_WORD *)v15 + 9) = v17;
    RtlCopyUnicodeString(v16, a1);
    RtlAppendUnicodeToString(v16, L"\\");
    RtlAppendUnicodeStringToString(v16, &DestinationString);
    if ( (v11[14] & 0x10) == 0 )
    {
      if ( (v7 & 1) != 0 )
        Status = guard_dispatch_icall_no_overrides((__int64)v16, (__int64)&DestinationString);
LABEL_20:
      ExFreePoolWithTag(v15, 0);
      goto LABEL_21;
    }
    if ( !wcsicmp((const wchar_t *)v11 + 47, L".") || (v18 = 0, !wcsicmp((const wchar_t *)v11 + 47, L"..")) )
      v18 = 1;
    if ( (v7 & 2) != 0 )
    {
      if ( (v7 & 4) != 0 && v18 )
        goto LABEL_20;
      Status = guard_dispatch_icall_no_overrides((__int64)v16, (__int64)&DestinationString);
    }
    if ( v18 || (v7 & 8) == 0 )
      goto LABEL_20;
    v19 = *(_QWORD **)(a7 + 8);
    if ( *v19 != a7 )
      __fastfail(3u);
    *v15 = a7;
    v15[1] = v19;
    *v19 = v15;
    *(_QWORD *)(a7 + 8) = v15;
LABEL_21:
    if ( Status < 0 )
      goto LABEL_27;
    v8 = a1;
    *((_WORD *)v11 + ((unsigned __int64)v11[15] >> 1) + 47) = v29;
    v20 = *v11;
    if ( !(_DWORD)v20 )
    {
      v9 = 0;
      goto LABEL_2;
    }
    v11 = (unsigned int *)((char *)v11 + v20);
  }
  Status = -1073741670;
LABEL_27:
  ZwClose(FileHandle);
  if ( Status == -2147483642 )
    return 0;
  return (unsigned int)Status;
}
