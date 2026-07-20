/*
 * XREFs of InternalFindFirstFileExW @ 0x14001DE78
 * Callers:
 *     GetLongPathNameW @ 0x14001CCE0 (GetLongPathNameW.c)
 * Callees:
 *     BasepInitializeFindFileHandle @ 0x14001DCBC (BasepInitializeFindFileHandle.c)
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 *     memcpy_0 @ 0x14001EFA7 (memcpy_0.c)
 *     memmove_0 @ 0x14001EFB3 (memmove_0.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall InternalFindFirstFileExW(PCWSTR DosName, __int64 a2, __int64 a3)
{
  char v5; // r15
  ULONG v6; // ecx
  PWSTR Buffer; // r14
  ULONG IsDosDeviceName_U; // ebx
  char *v9; // rsi
  size_t v10; // r8
  __int64 result; // rax
  USHORT Length; // ax
  __int16 v13; // cx
  unsigned int v14; // edx
  char v15; // si
  NTSTATUS v16; // eax
  NTSTATUS v17; // ebx
  __int64 v18; // rcx
  unsigned int v19; // edx
  WCHAR *v20; // rcx
  int v21; // esi
  unsigned int v22; // eax
  bool v23; // cc
  unsigned __int64 v24; // rbx
  unsigned int v25; // eax
  unsigned __int64 v26; // rbx
  void *FileHandle; // [rsp+50h] [rbp-B0h] BYREF
  struct _UNICODE_STRING NtName; // [rsp+58h] [rbp-A8h] BYREF
  PCWSTR PartName[2]; // [rsp+68h] [rbp-98h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  struct _RTL_RELATIVE_NAME_U RelativeName; // [rsp+88h] [rbp-78h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+B8h] [rbp-48h] BYREF
  _BYTE v34[8]; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v35; // [rsp+F8h] [rbp-8h]
  __int64 v36; // [rsp+100h] [rbp+0h]
  __int64 v37; // [rsp+108h] [rbp+8h]
  int v38; // [rsp+118h] [rbp+18h]
  int v39; // [rsp+11Ch] [rbp+1Ch]
  int v40; // [rsp+128h] [rbp+28h]
  unsigned int v41; // [rsp+12Ch] [rbp+2Ch]
  int v42; // [rsp+130h] [rbp+30h]
  unsigned __int8 v43; // [rsp+134h] [rbp+34h]
  _BYTE v44[24]; // [rsp+136h] [rbp+36h] BYREF
  _BYTE Src[530]; // [rsp+14Eh] [rbp+4Eh] BYREF

  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_OWORD *)PartName = 0LL;
  NtName = 0LL;
  IoStatusBlock = 0LL;
  memset_0(v34, 0, 0x268uLL);
  memset(&RelativeName, 0, sizeof(RelativeName));
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, DosName);
  if ( !DestinationString.Length
    || (v5 = 1, DestinationString.Buffer[((unsigned __int64)DestinationString.Length >> 1) - 1] != 46) )
  {
    v5 = 0;
  }
  if ( !RtlDosPathNameToRelativeNtPathName_U(DosName, &NtName, &PartName[1], &RelativeName) )
  {
    v6 = 3;
LABEL_66:
    RtlSetLastWin32Error(v6);
    return -1LL;
  }
  Buffer = NtName.Buffer;
  IsDosDeviceName_U = RtlIsDosDeviceName_U(DestinationString.Buffer);
  if ( IsDosDeviceName_U )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    v9 = (char *)DestinationString.Buffer + ((unsigned __int64)IsDosDeviceName_U >> 16);
    memset_0((void *)(a3 + 4), 0, 0x24CuLL);
    v10 = 520LL;
    *(_DWORD *)a3 = 32;
    if ( (unsigned __int16)IsDosDeviceName_U < 0x208u )
      v10 = (unsigned __int16)IsDosDeviceName_U;
    memmove_0((void *)(a3 + 44), v9, v10);
    result = 1LL;
    *(_WORD *)(a3 + 562) = 0;
    return result;
  }
  Length = NtName.Length;
  if ( PartName[1] )
    v13 = NtName.Length + LOWORD(NtName.Buffer) - LOWORD(PartName[1]);
  else
    v13 = 0;
  LOWORD(PartName[0]) = v13;
  WORD1(PartName[0]) = v13;
  if ( !RelativeName.RelativeName.Length || RelativeName.RelativeName.Buffer == PartName[1] )
  {
    RelativeName.ContainingDirectory = 0LL;
    if ( PartName[1] )
    {
      Length = LOWORD(PartName[1]) - LOWORD(NtName.Buffer);
      goto LABEL_19;
    }
  }
  else if ( PartName[1] )
  {
    NtName.Buffer = RelativeName.RelativeName.Buffer;
    Length = LOWORD(PartName[1]) - LOWORD(RelativeName.RelativeName.Buffer);
LABEL_19:
    NtName.MaximumLength = Length;
    NtName.Length = Length;
  }
  v14 = Length >> 1;
  if ( v14 < 2 || NtName.Buffer[v14 - 2] == 58 || (v15 = 1, NtName.Buffer[v14 - 1] != 92) )
    v15 = 0;
  ObjectAttributes.RootDirectory = RelativeName.ContainingDirectory;
  ObjectAttributes.ObjectName = &NtName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v16 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  v17 = v16;
  if ( v15 && (v16 == -1073741811 || v16 == -1073741565) )
  {
    NtName.Length -= 2;
    v17 = NtOpenFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 7u, 0x4021u);
  }
  if ( v17 < 0 )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    v18 = 3221225530LL;
    if ( v17 == -1073741772 )
    {
LABEL_33:
      BaseSetLastNTError(v18);
      return -1LL;
    }
    if ( v17 == -1073741788 )
      v17 = -1073741766;
LABEL_32:
    v18 = (unsigned int)v17;
    goto LABEL_33;
  }
  if ( !LOWORD(PartName[0]) )
  {
    RtlReleaseRelativeName(&RelativeName);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
    NtClose(FileHandle);
    v6 = 2;
    goto LABEL_66;
  }
  if ( LOWORD(PartName[0]) == 6 && RtlCompareMemory(PartName[1], L"*.*", 6uLL) == 6 )
  {
    LOWORD(PartName[0]) = 2;
    goto LABEL_55;
  }
  v19 = 0;
  v20 = (WCHAR *)PartName[1];
  if ( ((__int64)PartName[0] & 0xFFFE) != 0 )
  {
    while ( 1 )
    {
      if ( v19 && *v20 == 46 && *(v20 - 1) == 42 )
        *(v20 - 1) = 60;
      if ( *v20 == 63 )
        break;
      if ( *v20 == 42 )
        goto LABEL_48;
LABEL_51:
      ++v19;
      ++v20;
      if ( v19 >= LOWORD(PartName[0]) >> 1 )
        goto LABEL_52;
    }
    *v20 = 62;
LABEL_48:
    if ( v19 && *(v20 - 1) == 46 )
      *(v20 - 1) = 34;
    goto LABEL_51;
  }
LABEL_52:
  if ( v5 && *(v20 - 1) == 42 )
    *(v20 - 1) = 60;
LABEL_55:
  v17 = NtQueryDirectoryFileEx(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, v34, 616, 3, 2, PartName);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Buffer);
  if ( v17 < 0 )
  {
    NtClose(FileHandle);
    goto LABEL_32;
  }
  v21 = v40;
  *(_QWORD *)(a3 + 4) = v35;
  *(_QWORD *)(a3 + 12) = v36;
  *(_QWORD *)(a3 + 20) = v37;
  *(_DWORD *)(a3 + 28) = v39;
  *(_DWORD *)(a3 + 32) = v38;
  v22 = v41;
  v23 = v41 <= 0x206;
  *(_DWORD *)a3 = v21;
  if ( !v23 )
    v22 = 518;
  v24 = v22;
  memcpy_0((void *)(a3 + 44), Src, v22);
  v23 = v43 <= 0x1Au;
  *(_WORD *)(a3 + 2 * (v24 >> 1) + 44) = 0;
  if ( !v23 || (v25 = (char)v43, (unsigned int)(char)v43 >= 0x18) )
    v25 = 24;
  v26 = v25;
  memcpy_0((void *)(a3 + 564), v44, v25);
  *(_WORD *)(a3 + 2 * (v26 >> 1) + 564) = 0;
  if ( (v21 & 0x400) != 0 )
    *(_DWORD *)(a3 + 36) = v42;
  result = (__int64)BasepInitializeFindFileHandle((struct _RTL_CRITICAL_SECTION_DEBUG *)FileHandle);
  if ( !result )
  {
    NtClose(FileHandle);
    v6 = 8;
    goto LABEL_66;
  }
  return result;
}
