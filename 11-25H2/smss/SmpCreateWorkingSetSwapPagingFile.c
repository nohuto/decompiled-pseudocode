/*
 * XREFs of SmpCreateWorkingSetSwapPagingFile @ 0x14001078C
 * Callers:
 *     SmpCreatePagingFiles @ 0x1400100F4 (SmpCreatePagingFiles.c)
 * Callees:
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpUpdatePagingFileSizes @ 0x14000DBB0 (SmpUpdatePagingFileSizes.c)
 *     SmpCheckHybridPriority @ 0x14000F27C (SmpCheckHybridPriority.c)
 *     SmpParseSwapOrPageFileArguments @ 0x1400115CC (SmpParseSwapOrPageFileArguments.c)
 *     SmpTrimPagingFileExtents @ 0x14001187C (SmpTrimPagingFileExtents.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
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
  __int64 v11; // r11
  unsigned __int64 v12; // r9
  ULONG v13; // ebx
  NTSTATUS v14; // eax
  int v16; // [rsp+38h] [rbp-D0h] BYREF
  ULONG Value; // [rsp+3Ch] [rbp-CCh] BYREF
  ULONG v18[2]; // [rsp+40h] [rbp-C8h] BYREF
  union _LARGE_INTEGER v19; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v20; // [rsp+50h] [rbp-B8h] BYREF
  ULONG ResultLength[2]; // [rsp+60h] [rbp-A8h] BYREF
  void *FileHandle; // [rsp+68h] [rbp-A0h] BYREF
  struct _UNICODE_STRING FileName_8; // [rsp+78h] [rbp-90h] BYREF
  union _LARGE_INTEGER MaxiumSize; // [rsp+88h] [rbp-80h] BYREF
  union _LARGE_INTEGER InitialSize; // [rsp+90h] [rbp-78h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-70h] BYREF
  struct _UNICODE_STRING v27; // [rsp+A8h] [rbp-60h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+C8h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+D8h] [rbp-30h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+108h] [rbp+0h] BYREF
  __int128 KeyValueInformation; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v33[8]; // [rsp+128h] [rbp+20h] BYREF
  unsigned int v34; // [rsp+130h] [rbp+28h]
  int v35; // [rsp+134h] [rbp+2Ch] BYREF
  wchar_t pszDest[264]; // [rsp+338h] [rbp+230h] BYREF

  *(_QWORD *)&ValueName.Length = 2097182LL;
  Value = 0;
  v18[0] = 0;
  InitialSize.QuadPart = 0LL;
  ValueName.Buffer = L"SwapfileControl";
  MaxiumSize.QuadPart = 0LL;
  v27.Buffer = L"SwapFile";
  FileHandle = 0LL;
  *(_QWORD *)&v27.Length = 1179664LL;
  DestinationString = 0LL;
  v16 = 0;
  FileName_8 = 0LL;
  v18[1] = 0;
  memset(&ObjectAttributes, 0, 44);
  ResultLength[0] = 0;
  DWORD1(v20) = 0;
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
  if ( NtQueryValueKey(SmpMmKey, &v27, KeyValuePartialInformation, v33, 0x210u, &ResultLength[1]) < 0 || v34 > 0x204 )
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
        v19.QuadPart = v9;
        v10 = v9;
        v11 = v9;
        if ( SmpMaxSwapFileSize == -1 )
        {
          v8 = (unsigned __int64)(3 * SmpMemorySize) >> 1;
          v12 = v8;
        }
        else
        {
          v12 = SmpMaxSwapFileSize;
          if ( v9 >= SmpMaxSwapFileSize )
          {
            v9 = SmpMaxSwapFileSize;
            v19.QuadPart = SmpMaxSwapFileSize;
            v10 = SmpMaxSwapFileSize;
            v11 = SmpMaxSwapFileSize;
          }
        }
        if ( v12 >= *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL )
        {
          v8 = *(_QWORD *)(SmpOsVolumeDescriptor + 40) / 0xAuLL;
          v12 = v8;
          v10 = v11;
        }
        if ( v12 <= v10 )
          v8 = v9;
        *(_QWORD *)&v20 = v8;
LABEL_35:
        SmpUpdatePagingFileSizes((__int64 *)&v19, (unsigned __int64 *)&v20);
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
        v13 = 0x80000000;
        if ( (*(_BYTE *)(v7 + 16) & 8) != 0
          && SmpCheckHybridPriority(*(_DWORD *)(v7 + 20), &v16, (int *)&v18[1]) >= 0
          && v18[1]
          && (v16 & 0xFFFFFFF0) == 0 )
        {
          v13 = (v16 | 0xFFFFFFE0) << 26;
        }
        InitialSize = v19;
        MaxiumSize.QuadPart = v20;
        v14 = NtCreatePagingFile(&FileName_8, &InitialSize, &MaxiumSize, v13);
        v2 = v14;
        if ( v14 < 0 )
        {
          SmpLogFailure((__int64)"SmpCreateWorkingSetSwapPagingFile", 1994, v14);
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
    LOWORD(v20) = v34;
    WORD1(v20) = v34;
    *((_QWORD *)&v20 + 1) = &v35;
    v2 = SmpParseCommandLine(&v20, 0LL, &DestinationString, 0LL, &UnicodeString);
    if ( v2 >= 0 )
    {
      FileName_8 = DestinationString;
      v2 = SmpParseSwapOrPageFileArguments(&UnicodeString, &Value, v18);
      RtlFreeUnicodeString(&UnicodeString);
      if ( v2 >= 0 )
      {
        if ( !Value || !v18[0] )
          goto LABEL_6;
        v3 = 0;
        v19.QuadPart = (unsigned __int64)Value << 20;
        v4 = 63;
        *(_QWORD *)&v20 = (unsigned __int64)v18[0] << 20;
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
