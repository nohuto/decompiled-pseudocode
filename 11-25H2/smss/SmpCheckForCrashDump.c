/*
 * XREFs of SmpCheckForCrashDump @ 0x1400119EC
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpGetCrashParameters @ 0x14001227C (SmpGetCrashParameters.c)
 *     SmpGetDumpDestination @ 0x14001234C (SmpGetDumpDestination.c)
 *     SmpSavePageFile @ 0x140012E7C (SmpSavePageFile.c)
 *     __chkstk_0 @ 0x14001EF9B (__chkstk_0.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

char __fastcall SmpCheckForCrashDump(struct _UNICODE_STRING *a1)
{
  char v2; // bl
  void *FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v7[2]; // [rsp+70h] [rbp-90h] BYREF
  __int128 v8; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v9; // [rsp+90h] [rbp-70h] BYREF
  struct _UNICODE_STRING v10; // [rsp+A0h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v13; // [rsp+F0h] [rbp-10h] BYREF
  __int64 Data; // [rsp+F8h] [rbp-8h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+100h] [rbp+0h] BYREF
  _DWORD Buffer[1000]; // [rsp+110h] [rbp+10h] BYREF
  char v17; // [rsp+1160h] [rbp+1060h]

  memset_0(Buffer, 0, 0x2000uLL);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v7[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\CrashControl\\MachineCrash";
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  v10.Buffer = L"TempDestination";
  v7[0] = 10092696LL;
  v9.Buffer = L"DumpFile";
  *(_QWORD *)&v10.Length = 2097182LL;
  v13 = 0LL;
  *(_QWORD *)&v9.Length = 1179664LL;
  FileHandle = (void *)-1LL;
  IoStatusBlock = 0LL;
  KeyHandle = (void *)-1LL;
  UnicodeString = 0LL;
  v2 = 0;
  v8 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( NtOpenFile(&FileHandle, 0xC0150000, &ObjectAttributes, &IoStatusBlock, 3u, 0x68u) >= 0 )
  {
    if ( NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, 0x2000u, 0LL, 0LL) >= 0
      && Buffer[0] == 1162297680
      && Buffer[1] == 875976004 )
    {
      if ( (v17 & 4) != 0 )
      {
        *(_QWORD *)&ValueName.Length = 2228256LL;
        ValueName.Buffer = L"PagefileTooSmall";
        Data = MEMORY[0x7FFE0014];
        NtSetValueKey(SmpCrashDumpKey, &ValueName, 0, 0xBu, &Data, 8u);
      }
      if ( (int)SmpGetCrashParameters(&UnicodeString) >= 0
        && (int)SmpGetDumpDestination(Buffer, &UnicodeString, FileHandle, a1, &v8) >= 0
        && (int)SmpSavePageFile(FileHandle) >= 0 )
      {
        v2 = 1;
      }
    }
    NtClose(FileHandle);
    FileHandle = (void *)-1LL;
    if ( v2 )
    {
      ObjectAttributes.ObjectName = (PUNICODE_STRING)v7;
      ObjectAttributes.Length = 48;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      ObjectAttributes.Attributes = 64;
      if ( NtCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, 0LL, 1u, 0LL) >= 0 )
      {
        NtSetValueKey(KeyHandle, &v9, 0, 1u, (PVOID)(*((_QWORD *)&v8 + 1) + 8LL), (unsigned __int16)v8 - 6);
        NtSetValueKey(KeyHandle, &v10, 0, 4u, (char *)&v13 + 4, 4u);
        NtClose(KeyHandle);
        KeyHandle = (void *)-1LL;
      }
    }
  }
  else
  {
    v2 = 0;
  }
  if ( UnicodeString.Length )
    RtlFreeUnicodeString(&UnicodeString);
  return v2;
}
