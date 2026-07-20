/*
 * XREFs of SmpCreateWorkingSetSwapPagingFile @ 0x1400103C0
 * Callers:
 *     SmpCreatePagingFiles @ 0x14000FD28 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     RtlStringCbPrintfW @ 0x140004B90 (RtlStringCbPrintfW.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpUpdatePagingFileSizes @ 0x14000D860 (SmpUpdatePagingFileSizes.c)
 *     SmpCheckHybridPriority @ 0x14000EEBC (SmpCheckHybridPriority.c)
 *     SmpParseSwapOrPageFileArguments @ 0x140011204 (SmpParseSwapOrPageFileArguments.c)
 *     SmpTrimPagingFileExtents @ 0x1400114AC (SmpTrimPagingFileExtents.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall SmpCreateWorkingSetSwapPagingFile(__int64 *a1)
{
  int v2; // ebx
  int v3; // edx
  WCHAR v4; // cx
  WCHAR v5; // ax
  __int64 *v6; // rcx
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r10
  unsigned __int64 v11; // r9
  ULONG v12; // ebx
  NTSTATUS v13; // eax
  int v15; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG v17[2]; // [rsp+40h] [rbp-C8h] BYREF
  union _LARGE_INTEGER v18; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v19; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING FileName_8; // [rsp+78h] [rbp-90h] BYREF
  union _LARGE_INTEGER MaxiumSize; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER InitialSize; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING v26; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+0h] BYREF
  __int128 KeyValueInformation; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v32[8]; // [rsp+128h] [rbp+20h] BYREF
  unsigned int v33; // [rsp+130h] [rbp+28h]
  int v34; // [rsp+134h] [rbp+2Ch] BYREF
  wchar_t pszDest[264]; // [rsp+338h] [rbp+230h] BYREF

  *(_QWORD *)&ValueName.Length = 2097182LL;
  Value = 0;
  v17[0] = 0;
  InitialSize.QuadPart = 0LL;
  ValueName.Buffer = L"SwapfileControl";
  MaxiumSize.QuadPart = 0LL;
  v26.Buffer = L"SwapFile";
  FileHandle = 0LL;
  *(_QWORD *)&v26.Length = 1179664LL;
  DestinationString = 0LL;
  v15 = 0;
  FileName_8 = 0LL;
  v17[1] = 0;
  memset(&ObjectAttributes, 0, 44);
  ResultLength[0] = 0;
  DWORD1(v19) = 0;
  IoStatusBlock = 0LL;
  ResultLength[1] = 0;
  UnicodeString = 0LL;
  KeyValueInformation = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( !SmpClientSku )
  {
    v2 = -1073741637;
    goto LABEL_45;
  }
  if ( NtQueryValueKey(
         SmpMmKey,
         &ValueName,
         KeyValuePartialInformationAlign64,
         &KeyValueInformation,
         0x10u,
         ResultLength) >= 0
    && (_DWORD)KeyValueInformation == 4
    && *(_QWORD *)((char *)&KeyValueInformation + 4) == 4LL )
  {
LABEL_6:
    v2 = -1073741710;
    goto LABEL_45;
  }
  if ( NtQueryValueKey(SmpMmKey, &v26, KeyValuePartialInformation, v32, 0x210u, &ResultLength[1]) < 0 || v33 > 0x204 )
  {
    if ( !SmpMaxSwapFileSize )
      goto LABEL_6;
    if ( SmpOsVolumeDescriptor )
    {
      v2 = RtlStringCbPrintfW(
             pszDest,
             0x208uLL,
             L"\\??\\%c:\\%s",
             *(unsigned __int16 *)(SmpOsVolumeDescriptor + 28),
             L"swapfile.sys");
      if ( v2 >= 0 )
      {
        RtlInitUnicodeString(&FileName_8, pszDest);
        v7 = SmpOsVolumeDescriptor;
        v8 = SmpMaxSwapFileSize;
        v9 = (-(__int64)((*(_DWORD *)(SmpOsVolumeDescriptor + 16) & 0x20) != 0) & 0xFFFFFFFFF1000000uLL) + 0x10000000;
        v18.QuadPart = v9;
        v10 = v9;
        if ( SmpMaxSwapFileSize == -1 )
        {
          v8 = (unsigned __int64)(3 * SmpMemorySize) >> 1;
          v11 = v8;
        }
        else
        {
          v11 = SmpMaxSwapFileSize;
          if ( v9 >= SmpMaxSwapFileSize )
          {
            v9 = SmpMaxSwapFileSize;
            v18.QuadPart = SmpMaxSwapFileSize;
            v10 = SmpMaxSwapFileSize;
          }
        }
        if ( v11 >= *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL )
        {
          v8 = *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL;
          v11 = v8;
        }
        if ( v11 <= v10 )
          v8 = v9;
        *(_QWORD *)&v19 = v8;
LABEL_35:
        SmpUpdatePagingFileSizes((__int64 *)&v18, (unsigned __int64 *)&v19);
        ObjectAttributes.ObjectName = &FileName_8;
        ObjectAttributes.Length = 48;
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( NtOpenFile(&FileHandle, 0xC0100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x28u) >= 0 )
        {
          SmpTrimPagingFileExtents(FileHandle, &FileName_8);
          NtClose(FileHandle);
        }
        v12 = 0x80000000;
        if ( (*(_BYTE *)(v7 + 16) & 8) != 0
          && SmpCheckHybridPriority(*(_DWORD *)(v7 + 20), &v15, (int *)&v17[1]) >= 0
          && v17[1]
          && (v15 & 0xFFFFFFF0) == 0 )
        {
          v12 = (v15 | 0xFFFFFFE0) << 26;
        }
        InitialSize = v18;
        MaxiumSize.QuadPart = v19;
        v13 = NtCreatePagingFile(&FileName_8, &InitialSize, &MaxiumSize, v12);
        v2 = v13;
        if ( v13 < 0 )
        {
          SmpLogFailure((__int64)"SmpCreateWorkingSetSwapPagingFile", 1994, v13);
        }
        else
        {
          SmpWsSwapPagefileCreated = 1;
          *a1 = v7;
        }
      }
    }
    else
    {
      v2 = -1073741275;
    }
  }
  else
  {
    LOWORD(v19) = v33;
    WORD1(v19) = v33;
    *((_QWORD *)&v19 + 1) = &v34;
    v2 = SmpParseCommandLine(&v19, 0LL, &DestinationString, 0LL, &UnicodeString);
    if ( v2 >= 0 )
    {
      FileName_8 = DestinationString;
      v2 = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, v17);
      RtlFreeUnicodeString(&UnicodeString);
      if ( v2 >= 0 )
      {
        if ( !Value || !v17[0] )
          goto LABEL_6;
        v3 = 0;
        v18.QuadPart = (unsigned __int64)Value << 20;
        v4 = 63;
        *(_QWORD *)&v19 = (unsigned __int64)v17[0] << 20;
        if ( FileName_8.Length )
        {
          do
          {
            if ( FileName_8.Buffer[v3] == 58 )
              break;
            v4 = FileName_8.Buffer[v3++];
          }
          while ( FileName_8.Length != v3 );
          if ( FileName_8.Length != v3 )
          {
            v5 = RtlUpcaseUnicodeChar(v4);
            v6 = (__int64 *)SmpVolumeDescriptorList;
            while ( v6 != &SmpVolumeDescriptorList )
            {
              v7 = (__int64)v6;
              v6 = (__int64 *)*v6;
              if ( *(_WORD *)(v7 + 28) == v5 )
                goto LABEL_35;
            }
          }
        }
        v2 = -1073741772;
      }
    }
  }
LABEL_45:
  RtlFreeUnicodeString(&DestinationString);
  return (unsigned int)v2;
}
