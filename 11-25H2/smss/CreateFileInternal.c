/*
 * XREFs of CreateFileInternal @ 0x14001C07C
 * Callers:
 *     CreateFile2 @ 0x14001C020 (CreateFile2.c)
 *     CreateFileW @ 0x14001CA20 (CreateFileW.c)
 * Callees:
 *     Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline @ 0x14001B4B4 (Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline.c)
 *     BasepGetDirectoryRedirectionStatus @ 0x14001D460 (BasepGetDirectoryRedirectionStatus.c)
 *     BasepGetFileRedirectionStatus @ 0x14001D58C (BasepGetFileRedirectionStatus.c)
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D7FC (BasepOpenParentDirectoryNoRedirection.c)
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x140020010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CreateFileInternal(const WCHAR *a1, ACCESS_MASK a2, ULONG a3, int a4, __int64 a5, char a6)
{
  unsigned int v7; // edi
  int v8; // esi
  int v9; // r14d
  char v10; // r12
  ULONG v11; // ecx
  __int64 v13; // rcx
  NTSTATUS inited; // eax
  HANDLE ContainingDirectory; // rax
  int v16; // edx
  int v17; // r8d
  int v18; // r14d
  unsigned int v19; // ecx
  __int64 v20; // rcx
  PVOID EaBuffer; // r14
  char *v22; // rcx
  ULONG v23; // r15d
  NTSTATUS v24; // eax
  const WCHAR *Information; // rcx
  ULONG v26; // edx
  ULONG v27; // eax
  NTSTATUS v28; // ebx
  PVOID v29; // rdi
  ULONG v30; // ecx
  ACCESS_MASK v31; // r15d
  ULONG v32; // edi
  void (__fastcall *v33)(ULONG *); // rax
  ULONG EaLength; // r15d
  ULONG v35; // esi
  ULONG v36; // ecx
  int v37; // eax
  ULONG v38; // ecx
  ULONG CreateOptions; // [rsp+60h] [rbp-A0h] BYREF
  ULONG CreateDisposition; // [rsp+64h] [rbp-9Ch]
  ACCESS_MASK DesiredAccess; // [rsp+68h] [rbp-98h]
  void *FileHandle; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+78h] [rbp-88h]
  int v44; // [rsp+7Ch] [rbp-84h]
  int v45; // [rsp+80h] [rbp-80h] BYREF
  PVOID BaseAddress; // [rsp+88h] [rbp-78h]
  ULONG ShareAccess; // [rsp+90h] [rbp-70h]
  PCWSTR SourceString; // [rsp+98h] [rbp-68h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-60h] BYREF
  ULONG FileInformation; // [rsp+B0h] [rbp-50h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+C8h] [rbp-38h] BYREF
  HANDLE Handle; // [rsp+D0h] [rbp-30h]
  _RTL_RELATIVE_NAME_U RelativeName; // [rsp+D8h] [rbp-28h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v56; // [rsp+128h] [rbp+28h] BYREF
  int v57; // [rsp+130h] [rbp+30h]
  int v58; // [rsp+1A8h] [rbp+A8h]

  v56 = 0LL;
  v57 = 0;
  SourceString = a1;
  ShareAccess = a3;
  DesiredAccess = a2;
  CreateOptions = 0;
  v52 = 0LL;
  FileInformation = 0;
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
LABEL_21:
      v13 = 3221225485LL;
LABEL_22:
      BaseSetLastNTError(v13);
      return -1LL;
    }
    v7 = *(_DWORD *)(a5 + 8);
    v8 = *(_DWORD *)(a5 + 4);
    v9 = *(_DWORD *)(a5 + 12);
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v9 = 0;
  }
  if ( (a6 & 3) != 0 )
    v10 = 0;
  else
    v10 = BYTE2(v7) & 1;
  if ( (unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline()
    && v10
    && (!DesiredAccess || (ShareAccess & 4) != 0) )
  {
    v11 = 160;
LABEL_13:
    RtlSetLastWin32Error(v11);
    return -1LL;
  }
  switch ( a4 )
  {
    case 1:
      CreateDisposition = 2;
      break;
    case 2:
      CreateDisposition = 5;
      break;
    case 3:
      CreateDisposition = 1;
      break;
    case 4:
      CreateDisposition = 3;
      break;
    case 5:
      CreateDisposition = 1;
      if ( (DesiredAccess & 0x40000000) == 0 )
        goto LABEL_21;
      break;
    default:
      goto LABEL_21;
  }
  inited = RtlInitUnicodeStringEx(&DestinationString, SourceString);
  if ( inited < 0 )
  {
LABEL_28:
    v13 = (unsigned int)inited;
    goto LABEL_22;
  }
  if ( DestinationString.Length <= 1u
    || (v44 = 1, SourceString[((unsigned __int64)DestinationString.Length >> 1) - 1] != 92) )
  {
    v44 = 0;
  }
  CreateOptions = 0;
  inited = RtlDosPathNameToRelativeNtPathName_U_WithStatus(SourceString, &DestinationString, 0LL, &RelativeName);
  if ( inited < 0 )
  {
    if ( inited != -1073741801 && inited != -1073741670 )
    {
      v11 = 3;
      goto LABEL_13;
    }
    goto LABEL_28;
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
  v16 = (v7 >> 6) & 0x800;
  ObjectAttributes.Length = 48;
  ObjectAttributes.SecurityDescriptor = 0LL;
  v17 = v7 & 0x1000000;
  v43 = v7 & 0x1000000;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Attributes = v16 | ((v7 & 0x1000000) == 0 ? 0x40 : 0);
  if ( (v9 & 0x100000) != 0 )
  {
    v18 = v9 & 0xF0000;
    LOBYTE(v57) = (v18 & 0x40000) != 0;
    v19 = v18 & 0xFFFBFFFF;
    if ( (v18 & 0x40000) == 0 )
      v19 = v18;
    if ( (v19 & 0x80000) != 0 )
    {
      BYTE1(v57) = 1;
      v19 &= ~0x80000u;
    }
    else
    {
      BYTE1(v57) = 0;
    }
    HIDWORD(v56) = HIWORD(v19);
  }
  else
  {
    LOWORD(v57) = 257;
    HIDWORD(v56) = 2;
  }
  LODWORD(v56) = 12;
  ObjectAttributes.SecurityQualityOfService = &v56;
  if ( a5
    && (v20 = *(_QWORD *)(a5 + 16)) != 0
    && (ObjectAttributes.SecurityDescriptor = *(PVOID *)(v20 + 8), *(_DWORD *)(v20 + 16)) )
  {
    LODWORD(SourceString) = 0;
    EaBuffer = 0LL;
    ObjectAttributes.Attributes = v16 | (v17 != 0 ? 2 : 66);
  }
  else
  {
    LODWORD(SourceString) = 0;
    EaBuffer = 0LL;
    if ( !a5 )
      goto LABEL_62;
  }
  v22 = *(char **)(a5 + 24);
  if ( (unsigned __int64)(v22 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( NtQueryInformationFile(v22, &IoStatusBlock, &FileInformation, 4u, FileEaInformation) >= 0 )
    {
      v23 = FileInformation;
      if ( FileInformation )
      {
        while ( 1 )
        {
          v23 *= 2;
          EaBuffer = RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v23);
          if ( !EaBuffer )
            break;
          v24 = NtQueryEaFile(*(HANDLE *)(a5 + 24), &IoStatusBlock, EaBuffer, v23, 0, 0LL, 0, 0LL, 1u);
          v45 = v24;
          if ( v24 >= 0 )
          {
            Information = (const WCHAR *)IoStatusBlock.Information;
          }
          else
          {
            RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
            v24 = v45;
            Information = 0LL;
            EaBuffer = 0LL;
            IoStatusBlock.Information = 0LL;
          }
          SourceString = Information;
          if ( v24 != -2147483643 && v24 != -1073741789 )
            goto LABEL_61;
        }
        if ( !(unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline() )
        {
          RtlReleaseRelativeName(&RelativeName);
          RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
          v13 = 3221225495LL;
          goto LABEL_22;
        }
        v28 = -1073741801;
        goto LABEL_67;
      }
    }
LABEL_61:
    v17 = v43;
  }
LABEL_62:
  v26 = CreateOptions | ((v7 & 0x2000000) != 0 ? 0x4000 : 0) | ~(v7 >> 25) & 0x20 | ((int)v7 >> 31) & 2 | (v7 >> 26) & 8 | ((v7 & 0x40000 | ((v7 & 0x800000 | ((v7 & 0x10000000 | (v7 >> 8) & 0x80000) >> 12)) >> 3)) >> 2);
  CreateOptions = v26;
  if ( (HIWORD(KeGetPcr()->NtTib.Self[109].StackLimit) & 0x800) != 0 )
  {
    v26 |= 0x40000u;
    v27 = v26;
    CreateOptions = v26;
  }
  else
  {
    v27 = CreateOptions;
  }
  v31 = DesiredAccess;
  v43 = v7 & 0x4000000;
  if ( (v7 & 0x4000000) != 0 )
  {
    v27 = v26 | 0x1000;
    CreateOptions = v26 | 0x1000;
    v31 = DesiredAccess | 0x10000;
    v26 |= 0x1000u;
  }
  if ( (v7 & 0x200000) != 0 )
  {
    v27 = v26 | 0x200000;
    CreateOptions = v26 | 0x200000;
    v26 |= 0x200000u;
  }
  if ( (v7 & 0x100000) != 0 )
  {
    v27 = v26 | 0x400000;
    CreateOptions = v26 | 0x400000;
    v26 |= 0x400000u;
  }
  if ( (v7 & 0x2000000) == 0 )
  {
    v27 = v26 | 0x40;
    CreateOptions = v26 | 0x40;
LABEL_85:
    v32 = CreateDisposition;
    goto LABEL_86;
  }
  if ( (v8 & 0x10) == 0 )
    goto LABEL_85;
  v32 = CreateDisposition;
  if ( v17 && CreateDisposition == 2 )
  {
    v27 |= 1u;
    CreateOptions = v27;
  }
LABEL_86:
  v58 = a6 & 2;
  if ( v58 )
  {
    CreateOptions = v27 | 0x20000;
  }
  else
  {
    v33 = (void (__fastcall *)(ULONG *))SbSelectProcedure(2880154539LL, 1LL, "kLsE", 1LL);
    if ( v33 )
      v33(&CreateOptions);
  }
  if ( (unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline()
    && v10
    && ((unsigned int)(a4 - 1) <= 1 || a4 == 4) )
  {
    v28 = BasepOpenParentDirectoryNoRedirection(&DestinationString);
    if ( v28 < 0 )
      goto LABEL_67;
  }
  DesiredAccess = v31 | 0x100080;
  EaLength = (unsigned int)SourceString;
  v35 = v8 & 0x5AFFA7;
  v28 = NtCreateFile(
          &FileHandle,
          DesiredAccess,
          &ObjectAttributes,
          &IoStatusBlock,
          0LL,
          v35,
          ShareAccess,
          v32,
          CreateOptions,
          EaBuffer,
          (ULONG)SourceString);
  if ( v28 == -1073741790 && !v58 && (CreateOptions & 0x20000) != 0 && (ShareAccess & 1) == 0 )
  {
    CreateOptions &= ~0x20000u;
    v28 = NtCreateFile(
            &FileHandle,
            DesiredAccess,
            &ObjectAttributes,
            &IoStatusBlock,
            0LL,
            v35,
            ShareAccess,
            v32,
            CreateOptions,
            EaBuffer,
            EaLength);
  }
  if ( !(unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline() )
  {
    RtlReleaseRelativeName(&RelativeName);
    v29 = BaseAddress;
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, BaseAddress);
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
    if ( v28 < 0 )
    {
      BaseSetLastNTError((unsigned int)v28);
      if ( v28 == -1073741771 )
      {
        v11 = 80;
      }
      else
      {
        if ( v28 != -1073741638 )
          return -1LL;
        v11 = 3;
        if ( !v44 )
          v11 = 5;
      }
      goto LABEL_13;
    }
    if ( a4 == 2 && IoStatusBlock.Information == 3 || a4 == 4 && IoStatusBlock.Information == 1 )
      v36 = 183;
    else
      v36 = 0;
    RtlSetLastWin32Error(v36);
    goto LABEL_129;
  }
  if ( v28 < 0 )
  {
LABEL_119:
    FileHandle = (void *)-1LL;
LABEL_67:
    v29 = BaseAddress;
    goto LABEL_68;
  }
  if ( v10 )
  {
    v37 = (CreateOptions & 1) != 0
        ? BasepGetDirectoryRedirectionStatus(DestinationString.Buffer)
        : BasepGetFileRedirectionStatus(DestinationString.Buffer, FileHandle);
    v28 = v37;
    if ( v37 < 0 )
    {
      if ( v43 )
      {
        v45 = 8;
        NtSetInformationFile(FileHandle, &IoStatusBlock, &v45, 4u, (FILE_INFORMATION_CLASS)64);
      }
      NtClose(FileHandle);
      goto LABEL_119;
    }
  }
  v29 = BaseAddress;
LABEL_129:
  if ( a4 == 5 )
  {
    v52 = 0LL;
    v28 = NtSetInformationFile(FileHandle, &IoStatusBlock, &v52, 8u, FileAllocationInformation);
    if ( v28 < 0 )
    {
      if ( (unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline() )
      {
        NtClose(FileHandle);
        FileHandle = (void *)-1LL;
        goto LABEL_68;
      }
      BaseSetLastNTError((unsigned int)v28);
      NtClose(FileHandle);
      FileHandle = (void *)-1LL;
    }
  }
  if ( (unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( a4 == 2 && IoStatusBlock.Information == 3 || a4 == 4 && IoStatusBlock.Information == 1 )
      v38 = 183;
    else
      v38 = 0;
    RtlSetLastWin32Error(v38);
  }
LABEL_68:
  if ( !(unsigned int)Feature_Servicing_CD_PathRedirectionAPI_2503__private_IsEnabledDeviceUsageNoInline() )
    return (__int64)FileHandle;
  if ( Handle != (HANDLE)-1LL )
    NtClose(Handle);
  RtlReleaseRelativeName(&RelativeName);
  RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v29);
  if ( EaBuffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, EaBuffer);
  if ( v28 >= 0 )
    return (__int64)FileHandle;
  BaseSetLastNTError((unsigned int)v28);
  if ( v28 == -1073741771 )
  {
    v30 = 80;
LABEL_145:
    RtlSetLastWin32Error(v30);
    return (__int64)FileHandle;
  }
  if ( v28 == -1073741638 )
  {
    v30 = 3;
    if ( !v44 )
      v30 = 5;
    goto LABEL_145;
  }
  return (__int64)FileHandle;
}
