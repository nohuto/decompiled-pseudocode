/*
 * XREFs of CreateFileInternal @ 0x14001BD6C
 * Callers:
 *     CreateFile2 @ 0x14001BD10 (CreateFile2.c)
 *     CreateFileW @ 0x14001C57C (CreateFileW.c)
 * Callees:
 *     BasepGetDirectoryRedirectionStatus @ 0x14001CD48 (BasepGetDirectoryRedirectionStatus.c)
 *     BasepGetFileRedirectionStatus @ 0x14001CE74 (BasepGetFileRedirectionStatus.c)
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D0E8 (BasepOpenParentDirectoryNoRedirection.c)
 *     BaseSetLastNTError @ 0x14001E6D0 (BaseSetLastNTError.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x14001F010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateFileInternal(PCWSTR SourceString, int a2, ULONG a3, int a4, __int64 a5, char a6)
{
  ULONG EaLength; // r12d
  char v8; // al
  int v9; // r13d
  int v10; // edi
  unsigned int v11; // esi
  ULONG v13; // r15d
  NTSTATUS inited; // eax
  HANDLE ContainingDirectory; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // edi
  unsigned int v19; // ecx
  __int64 v20; // rcx
  void *EaBuffer; // rdi
  void *v22; // rcx
  ULONG v23; // r14d
  PVOID Heap; // rax
  NTSTATUS v25; // r13d
  ULONG v26; // edx
  int v27; // r14d
  NTSTATUS v28; // ebx
  void (__fastcall *v29)(ULONG *); // rax
  int v30; // esi
  ACCESS_MASK v31; // r13d
  ULONG v32; // edx
  int v33; // eax
  ULONG v34; // ecx
  ULONG v35; // ecx
  bool v36; // [rsp+60h] [rbp-A0h]
  ULONG CreateOptions; // [rsp+64h] [rbp-9Ch] BYREF
  void *FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  int v40; // [rsp+74h] [rbp-8Ch]
  ULONG ShareAccess; // [rsp+78h] [rbp-88h]
  int v42; // [rsp+7Ch] [rbp-84h] BYREF
  ULONG FileInformation; // [rsp+80h] [rbp-80h] BYREF
  int v44; // [rsp+84h] [rbp-7Ch]
  int v45; // [rsp+88h] [rbp-78h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-70h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v48; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+C0h] [rbp-40h] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp-10h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v53; // [rsp+118h] [rbp+18h] BYREF
  int v54; // [rsp+120h] [rbp+20h]
  int v55; // [rsp+198h] [rbp+98h]

  EaLength = 0;
  v44 = a4;
  v42 = a2;
  CreateOptions = 0;
  v48 = 0LL;
  v8 = a3;
  ShareAccess = a3;
  v9 = a2;
  FileInformation = 0;
  v53 = 0LL;
  v54 = 0;
  FileHandle = (void *)-1LL;
  Handle = (HANDLE)-1LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  memset(&RelativeName, 0, sizeof(RelativeName));
  if ( a5 )
  {
    if ( *(_DWORD *)a5 < 0x20u )
    {
LABEL_18:
      BaseSetLastNTError(3221225485LL);
      return -1LL;
    }
    v10 = *(_DWORD *)(a5 + 12);
    v11 = *(_DWORD *)(a5 + 8);
    FileAttributes = *(_DWORD *)(a5 + 4);
    v8 = a3;
  }
  else
  {
    v11 = 0;
    FileAttributes = 0;
    v10 = 0;
  }
  if ( (a6 & 3) != 0 )
  {
    v36 = 0;
  }
  else
  {
    v36 = (v11 & 0x10000) != 0;
    if ( (v11 & 0x10000) != 0 )
    {
      if ( !a2 || (v36 = (v11 & 0x10000) != 0, (v8 & 4) != 0) )
      {
        RtlSetLastWin32Error(0xA0u);
        return -1LL;
      }
    }
  }
  switch ( a4 )
  {
    case 1:
      v13 = 2;
      break;
    case 2:
      v13 = 5;
      break;
    case 3:
      v13 = 1;
      break;
    case 4:
      v13 = 3;
      break;
    case 5:
      v13 = 1;
      if ( (a2 & 0x40000000) == 0 )
        goto LABEL_18;
      break;
    default:
      goto LABEL_18;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited < 0 )
    goto LABEL_24;
  if ( DestinationString.Length <= 1u
    || (v45 = 1, SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92) )
  {
    v45 = 0;
  }
  CreateOptions = 0;
  inited = RtlDosPathNameToRelativeNtPathName_U_WithStatus(SourceString, &DestinationString, 0LL, &RelativeName);
  if ( inited < 0 )
  {
    if ( inited != -1073741801 && inited != -1073741670 )
    {
      RtlSetLastWin32Error(3u);
      return -1LL;
    }
LABEL_24:
    BaseSetLastNTError((unsigned int)inited);
    return -1LL;
  }
  BaseAddress = DestinationString.Buffer;
  if ( RelativeName.RelativeName.Length )
  {
    ContainingDirectory = RelativeName.ContainingDirectory;
    DestinationString = RelativeName.RelativeName;
  }
  else
  {
    ContainingDirectory = 0LL;
    RelativeName.ContainingDirectory = 0LL;
  }
  ObjectAttributes.RootDirectory = ContainingDirectory;
  v16 = (v11 >> 6) & 0x800;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = v11 & 0x1000000;
  v40 = v11 & 0x1000000;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = v16 | ((v11 & 0x1000000) == 0 ? 0x40 : 0);
  if ( (v10 & 0x100000) != 0 )
  {
    v18 = v10 & 0xF0000;
    LOBYTE(v54) = (v18 & 0x40000) != 0;
    v19 = v18 & 0xFFFBFFFF;
    if ( (v18 & 0x40000) == 0 )
      v19 = v18;
    if ( (v19 & 0x80000) != 0 )
    {
      BYTE1(v54) = 1;
      v19 &= ~0x80000u;
    }
    else
    {
      BYTE1(v54) = 0;
    }
    HIDWORD(v53) = HIWORD(v19);
  }
  else
  {
    LOWORD(v54) = 257;
    HIDWORD(v53) = 2;
  }
  LODWORD(v53) = 12;
  ObjectAttributes.SecurityQualityOfService = &v53;
  if ( a5
    && (v20 = *(_QWORD *)(a5 + 16)) != 0
    && (ObjectAttributes.SecurityDescriptor = *(PVOID *)(v20 + 8), *(_DWORD *)(v20 + 16)) )
  {
    EaBuffer = 0LL;
    ObjectAttributes.Attributes = v16 | (v17 != 0 ? 2 : 66);
  }
  else
  {
    EaBuffer = 0LL;
    if ( !a5 )
      goto LABEL_61;
  }
  v22 = *(void **)(a5 + 24);
  if ( !v22 || v22 == (void *)-1LL )
  {
LABEL_61:
    v26 = CreateOptions | ((v11 & 0x2000000) != 0 ? 0x4000 : 0) | ~(v11 >> 25) & 0x20 | ((int)v11 >> 31) & 2 | ((v11 & 0x40000 | ((v11 & 0x800000 | ((v11 & 0x10000000 | ((v11 & 0x8000000 | (v11 >> 1) & 0x10000000) >> 8)) >> 12)) >> 3)) >> 2);
    CreateOptions = v26;
    if ( (HIWORD(KeGetPcr()->NtTib.Self[109].StackLimit) & 0x800) != 0 )
    {
      v26 |= 0x40000u;
      CreateOptions = v26;
    }
    v27 = v11 & 0x4000000;
    if ( (v11 & 0x4000000) != 0 )
    {
      v26 |= 0x1000u;
      CreateOptions = v26;
      v9 |= 0x10000u;
    }
    if ( (v11 & 0x200000) != 0 )
    {
      v26 |= 0x200000u;
      CreateOptions = v26;
    }
    if ( (v11 & 0x100000) != 0 )
    {
      v26 |= 0x400000u;
      CreateOptions = v26;
    }
    if ( (v11 & 0x2000000) != 0 )
    {
      if ( (FileAttributes & 0x10) != 0 && v17 && v13 == 2 )
        CreateOptions |= 1u;
    }
    else
    {
      CreateOptions = v26 | 0x40;
    }
    v55 = a6 & 2;
    if ( v55 )
    {
      CreateOptions |= 0x20000u;
    }
    else
    {
      v29 = (void (__fastcall *)(ULONG *))SbSelectProcedure(2880154539LL, 1LL, "kLsE", 1LL);
      if ( v29 )
        v29(&CreateOptions);
    }
    v30 = v44;
    if ( v36 && ((v44 - 1) & 0xFFFFFFFC) == 0 && v44 != 3 )
    {
      v28 = BasepOpenParentDirectoryNoRedirection(&DestinationString);
      if ( v28 < 0 )
        goto LABEL_102;
    }
    v31 = v9 | 0x100080;
    FileAttributes &= 0x5AFFA7u;
    v28 = NtCreateFile(
            &FileHandle,
            v31,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            FileAttributes,
            ShareAccess,
            v13,
            CreateOptions,
            EaBuffer,
            EaLength);
    if ( v28 == -1073741790 )
    {
      if ( v55 )
        goto LABEL_89;
      v32 = CreateOptions;
      if ( (ShareAccess & 1) != 0 || (CreateOptions & 0x20000) == 0 )
        goto LABEL_89;
      CreateOptions &= ~0x20000u;
      v28 = NtCreateFile(
              &FileHandle,
              v31,
              &ObjectAttributes,
              &IoStatusBlock,
              0LL,
              FileAttributes,
              ShareAccess,
              v13,
              v32 & 0xFFFDFFFF,
              EaBuffer,
              EaLength);
    }
    if ( v28 < 0 )
    {
LABEL_89:
      FileHandle = (void *)-1LL;
      goto LABEL_102;
    }
    if ( v36 )
    {
      v33 = (CreateOptions & 1) != 0
          ? BasepGetDirectoryRedirectionStatus(DestinationString.Buffer)
          : BasepGetFileRedirectionStatus(DestinationString.Buffer, FileHandle);
      v28 = v33;
      if ( v33 < 0 )
      {
        if ( v27 )
        {
          v42 = 8;
          NtSetInformationFile(FileHandle, &IoStatusBlock, &v42, 4u, (FILE_INFORMATION_CLASS)64);
        }
        goto LABEL_97;
      }
    }
    if ( v30 == 5 )
    {
      v48 = 0LL;
      v28 = NtSetInformationFile(FileHandle, &IoStatusBlock, &v48, 8u, FileAllocationInformation);
      if ( v28 < 0 )
      {
LABEL_97:
        NtClose(FileHandle);
        goto LABEL_89;
      }
    }
    else if ( v30 == 2 && IoStatusBlock.Information == 3 || v30 == 4 && IoStatusBlock.Information == 1 )
    {
      v34 = 183;
      goto LABEL_101;
    }
    v34 = 0;
LABEL_101:
    RtlSetLastWin32Error(v34);
LABEL_102:
    if ( Handle != (HANDLE)-1LL )
      NtClose(Handle);
    goto LABEL_104;
  }
  if ( NtQueryInformationFile(v22, &IoStatusBlock, &FileInformation, 4u, FileEaInformation) < 0
    || (v23 = FileInformation) == 0 )
  {
LABEL_60:
    v17 = v40;
    goto LABEL_61;
  }
  while ( 1 )
  {
    v23 *= 2;
    Heap = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v23);
    EaBuffer = Heap;
    if ( !Heap )
      break;
    v25 = NtQueryEaFile(*(HANDLE *)(a5 + 24), &IoStatusBlock, Heap, v23, 0, 0LL, 0, 0LL, 1u);
    if ( v25 >= 0 )
    {
      EaLength = IoStatusBlock.Information;
    }
    else
    {
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
      EaBuffer = 0LL;
      EaLength = 0;
      IoStatusBlock.Information = 0LL;
    }
    if ( v25 != -2147483643 && v25 != -1073741789 )
    {
      v9 = v42;
      goto LABEL_60;
    }
  }
  v28 = -1073741801;
LABEL_104:
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
  if ( EaBuffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
  if ( v28 >= 0 )
    return (__int64)FileHandle;
  BaseSetLastNTError((unsigned int)v28);
  if ( v28 == -1073741771 )
  {
    v35 = 80;
LABEL_117:
    RtlSetLastWin32Error(v35);
    return (__int64)FileHandle;
  }
  if ( v28 == -1073741638 )
  {
    v35 = 3;
    if ( !v45 )
      v35 = 5;
    goto LABEL_117;
  }
  return (__int64)FileHandle;
}
