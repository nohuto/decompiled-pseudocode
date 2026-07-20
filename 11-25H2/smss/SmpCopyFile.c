/*
 * XREFs of SmpCopyFile @ 0x140011D40
 * Callers:
 *     SmpSavePageFile @ 0x140012E7C (SmpSavePageFile.c)
 * Callees:
 *     _tlgWriteTransfer_EtwEventWriteTransfer @ 0x140001008 (_tlgWriteTransfer_EtwEventWriteTransfer.c)
 *     SmpQueryFileSize @ 0x140012754 (SmpQueryFileSize.c)
 *     SmpSetDumpSecurityAndAttributes @ 0x14001300C (SmpSetDumpSecurityAndAttributes.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpCopyFile(HANDLE FileHandle, struct _UNICODE_STRING *a2, union _LARGE_INTEGER a3)
{
  ULONG v6; // r14d
  int v7; // r15d
  union _LARGE_INTEGER v8; // rdi
  NTSTATUS v9; // ebx
  int v10; // eax
  HANDLE v11; // rcx
  NTSTATUS v12; // eax
  __int64 v13; // r8
  __int64 v14; // r9
  union _LARGE_INTEGER v16; // rsi
  char v17[8]; // [rsp+60h] [rbp-A0h] BYREF
  union _LARGE_INTEGER FileInformation; // [rsp+68h] [rbp-98h] BYREF
  HANDLE FileHandlea; // [rsp+70h] [rbp-90h] BYREF
  PVOID BaseAddress; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-80h] BYREF
  union _LARGE_INTEGER ByteOffset; // [rsp+90h] [rbp-70h] BYREF
  ULONG_PTR RegionSize; // [rsp+98h] [rbp-68h] BYREF
  union _LARGE_INTEGER v24; // [rsp+A0h] [rbp-60h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-58h] BYREF
  char v26[32]; // [rsp+E0h] [rbp-20h] BYREF
  union _LARGE_INTEGER *p_FileInformation; // [rsp+100h] [rbp+0h]
  __int64 v28; // [rsp+108h] [rbp+8h]
  union _LARGE_INTEGER *v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+118h] [rbp+18h]

  ByteOffset.QuadPart = 0LL;
  v17[0] = 0;
  v6 = 0x100000;
  FileHandlea = 0LL;
  BaseAddress = 0LL;
  FileInformation.QuadPart = 0LL;
  RegionSize = 0x100000LL;
  v7 = 1;
  v8.QuadPart = 0LL;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  v9 = NtAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, 0LL, &RegionSize, 0x3000u, 4u);
  if ( v9 >= 0 )
  {
    if ( a3.QuadPart )
    {
      v8 = a3;
    }
    else
    {
      v10 = SmpQueryFileSize(FileHandle, &FileInformation);
      v8 = FileInformation;
      v9 = v10;
      if ( v10 < 0 )
        goto LABEL_7;
    }
    if ( v8.QuadPart )
    {
      ObjectAttributes.ObjectName = a2;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 64;
      if ( v8.QuadPart % (unsigned __int64)(unsigned int)dword_140032B28 )
        v7 = dword_140032B28;
      ObjectAttributes.RootDirectory = 0LL;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      v9 = NtCreateFile(&FileHandlea, 0xC0150000, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 0, 0, 0x68u, 0LL, 0);
      if ( v9 >= 0 )
      {
        v9 = SmpSetDumpSecurityAndAttributes(FileHandlea);
        if ( v9 >= 0 )
        {
          for ( v16.QuadPart = 0LL; v16.QuadPart < (unsigned __int64)v8.QuadPart; v16.QuadPart += v6 )
          {
            ByteOffset = v16;
            v9 = NtReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v6, &ByteOffset, 0LL);
            if ( v9 < 0 )
              break;
            if ( IoStatusBlock.Information != v6 )
            {
              if ( (unsigned __int64)v6 <= v8.QuadPart - v16.QuadPart
                || IoStatusBlock.Information != v8.QuadPart - v16.QuadPart )
              {
                goto LABEL_33;
              }
              v6 = -v7 & (v7 + v8.LowPart - v16.LowPart - 1);
            }
            v9 = NtWriteFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, BaseAddress, v6, &ByteOffset, 0LL);
            if ( v9 < 0 )
              break;
            if ( IoStatusBlock.Information != v6 )
            {
LABEL_33:
              v9 = -1073741823;
              break;
            }
          }
        }
      }
    }
    else
    {
      v9 = -1073741672;
    }
  }
LABEL_7:
  v11 = FileHandlea;
  if ( FileHandlea )
  {
    if ( v9 < 0
      || v8.QuadPart
      && v7 != 1
      && (FileInformation = v8,
          v12 = NtSetInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 8u, FileEndOfFileInformation),
          v11 = FileHandlea,
          v9 = v12,
          v12 < 0) )
    {
      v17[0] = 1;
      NtSetInformationFile(v11, &IoStatusBlock, v17, 1u, FileDispositionInformation);
      if ( (unsigned int)dword_140030E48 > 5 )
      {
        FileInformation.LowPart = v9;
        v28 = 4LL;
        p_FileInformation = &FileInformation;
        v24 = v8;
        v29 = &v24;
        v30 = 8LL;
        tlgWriteTransfer_EtwEventWriteTransfer(4LL, byte_14002BF99, v13, v14, 4, (__int64)v26);
      }
      v11 = FileHandlea;
    }
    NtClose(v11);
  }
  if ( BaseAddress )
  {
    RegionSize = 0LL;
    NtFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
  }
  return (unsigned int)v9;
}
