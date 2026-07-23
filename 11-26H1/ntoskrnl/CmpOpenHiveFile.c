/*
 * XREFs of CmpOpenHiveFile @ 0x1408BB784
 * Callers:
 *     CmpLoadHiveThread @ 0x140851860 (CmpLoadHiveThread.c)
 *     CmpMountPreloadedHives @ 0x1408525A8 (CmpMountPreloadedHives.c)
 *     CmLoadAppKey @ 0x1408B87F4 (CmLoadAppKey.c)
 *     CmpOpenHiveFiles @ 0x1408BB400 (CmpOpenHiveFiles.c)
 *     CmLoadKey @ 0x140ADEAD4 (CmLoadKey.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmSiCreateEvent @ 0x14049BBCC (CmSiCreateEvent.c)
 *     CmSiEventTupleCleanup @ 0x1404AE7AC (CmSiEventTupleCleanup.c)
 *     CmSiEventTupleInitialize @ 0x1404C1CA4 (CmSiEventTupleInitialize.c)
 *     CmSiWaitForSingleEvent @ 0x1404C9C58 (CmSiWaitForSingleEvent.c)
 *     CmSiBugCheck @ 0x140534D04 (CmSiBugCheck.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1407284A0 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ZwFsControlFile @ 0x1407286E0 (ZwFsControlFile.c)
 *     ZwQueryAttributesFile @ 0x140728760 (ZwQueryAttributesFile.c)
 *     ZwCreateFile @ 0x140728A60 (ZwCreateFile.c)
 *     CmpGetCompleteFileName @ 0x1408BBE90 (CmpGetCompleteFileName.c)
 *     CmpLogHiveFileInaccessible @ 0x1408BBF64 (CmpLogHiveFileInaccessible.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1408BC384 (CmpQueryFileSecurityDescriptor.c)
 *     CmpGetVolumeClusterSize @ 0x1408BCE30 (CmpGetVolumeClusterSize.c)
 *     CmpGetVolumeLogFileSizeCap @ 0x1408BD174 (CmpGetVolumeLogFileSizeCap.c)
 *     PsReferenceImpersonationTokenEx @ 0x1408BD210 (PsReferenceImpersonationTokenEx.c)
 *     PsImpersonateClient @ 0x140904330 (PsImpersonateClient.c)
 *     PsRevertToSelf @ 0x140AE5830 (PsRevertToSelf.c)
 */

__int64 __fastcall CmpOpenHiveFile(
        PCUNICODE_STRING Source,
        int a2,
        _QWORD *a3,
        int *a4,
        unsigned int a5,
        void *a6,
        __int64 a7,
        void *a8,
        __int64 a9,
        __int64 a10)
{
  ULONG ShareAccess; // r12d
  char v11; // r14
  PCUNICODE_STRING v13; // r15
  PACCESS_TOKEN v14; // r13
  __int64 v15; // rcx
  int v16; // eax
  NTSTATUS Status; // ebx
  int CompleteFileName; // eax
  ACCESS_MASK v19; // r13d
  ULONG CreateDisposition; // edi
  ULONG CreateOptions; // r15d
  _DWORD *v22; // rbx
  NTSTATUS v23; // eax
  int Information; // r15d
  __int64 v25; // r14
  int VolumeClusterSize; // eax
  HANDLE v27; // rax
  int v29; // r9d
  void *v30; // rax
  NTSTATUS v31; // eax
  NTSTATUS v32; // eax
  NTSTATUS v33; // eax
  NTSTATUS v34; // eax
  int AllocationSize; // [rsp+20h] [rbp-E0h]
  SECURITY_IMPERSONATION_LEVEL AllocationSizea; // [rsp+20h] [rbp-E0h]
  char v37; // [rsp+60h] [rbp-A0h]
  BOOLEAN EffectiveOnly; // [rsp+61h] [rbp-9Fh] BYREF
  BOOLEAN CopyOnOpen[6]; // [rsp+62h] [rbp-9Eh] BYREF
  HANDLE FileHandle; // [rsp+68h] [rbp-98h] BYREF
  ULONG FileAttributes; // [rsp+70h] [rbp-90h]
  PACCESS_TOKEN Handle; // [rsp+78h] [rbp-88h] BYREF
  PCUNICODE_STRING v43; // [rsp+80h] [rbp-80h]
  SECURITY_IMPERSONATION_LEVEL ImpersonationLevel; // [rsp+88h] [rbp-78h] BYREF
  PACCESS_TOKEN Token; // [rsp+90h] [rbp-70h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-68h] BYREF
  int InputBuffer; // [rsp+A8h] [rbp-58h] BYREF
  int v48; // [rsp+ACh] [rbp-54h]
  PETHREAD Thread; // [rsp+B0h] [rbp-50h]
  HANDLE Event[2]; // [rsp+B8h] [rbp-48h] BYREF
  UNICODE_STRING DestinationString; // [rsp+C8h] [rbp-38h] BYREF
  struct _IO_STATUS_BLOCK v52; // [rsp+D8h] [rbp-28h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v54; // [rsp+118h] [rbp+18h]
  __int64 v55; // [rsp+120h] [rbp+20h]
  _QWORD *v56; // [rsp+128h] [rbp+28h]
  int *v57; // [rsp+130h] [rbp+30h]
  struct _FILE_BASIC_INFORMATION FileInformation; // [rsp+138h] [rbp+38h] BYREF
  __m128i si128; // [rsp+160h] [rbp+60h] BYREF
  __m128i v60; // [rsp+170h] [rbp+70h]
  __int64 v61; // [rsp+180h] [rbp+80h]
  __int128 v62; // [rsp+188h] [rbp+88h] BYREF
  __int64 v63; // [rsp+198h] [rbp+98h]

  ShareAccess = 0;
  v11 = a5;
  Handle = a6;
  v13 = Source;
  v48 = a2;
  v14 = 0LL;
  v52.Pointer = a8;
  v54 = a7;
  v61 = 0LL;
  v63 = 0LL;
  ObjectAttributes.SecurityDescriptor = 0LL;
  LODWORD(ObjectAttributes.SecurityQualityOfService) = 0;
  v43 = Source;
  v55 = a9;
  ImpersonationLevel = SecurityImpersonation;
  v57 = a4;
  v56 = a3;
  si128 = 0LL;
  InputBuffer = 0;
  v60 = 0LL;
  CopyOnOpen[0] = 0;
  *(_OWORD *)Event = 0LL;
  Thread = 0LL;
  v62 = 0LL;
  EffectiveOnly = 0;
  IoStatusBlock = 0LL;
  *a3 = 0LL;
  memset(&ObjectAttributes, 0, 32);
  FileHandle = 0LL;
  v37 = 0;
  DestinationString = 0LL;
  Token = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  CmSiEventTupleInitialize(Event);
  v16 = CmSiCreateEvent(v15, Event);
  Status = v16;
  if ( v16 < 0 )
  {
    SetFailureLocation(a10, 0, 35, v16, 16);
    goto LABEL_35;
  }
  CompleteFileName = CmpGetCompleteFileName(v13);
  Status = CompleteFileName;
  if ( CompleteFileName < 0 )
  {
    SetFailureLocation(a10, 0, 35, CompleteFileName, 32);
    goto LABEL_35;
  }
  if ( (a5 & 0x20) != 0 )
  {
    v19 = 1;
    ShareAccess = ((a5 >> 7) & 1) == 0;
  }
  else
  {
    v19 = ((a5 & 8) == 0 ? 3 : 0) | 0x20000;
    if ( a2 )
      v19 = (a5 & 8) == 0 ? 3 : 0;
  }
  if ( a2 )
  {
    FileAttributes = 6;
    if ( (a5 & 0x20) != 0 )
      CreateDisposition = 1;
    else
      CreateDisposition = (a5 & 0x10) == 0 ? 3 : 0;
    CreateOptions = 32772;
  }
  else
  {
    FileAttributes = 128;
    if ( (a5 & 1) == 0 || (CreateDisposition = 3, (a5 & 0x20) != 0) )
      CreateDisposition = 1;
    CreateOptions = 49188;
  }
  if ( (a5 & 0x100) != 0 )
    CreateOptions = CreateOptions & 0xFFFEFFDF | 0x10000;
  v22 = Handle;
  if ( Handle )
  {
    Thread = KeGetCurrentThread();
    v30 = (void *)PsReferenceImpersonationTokenEx(
                    Thread,
                    1LL,
                    1953261124LL,
                    CopyOnOpen,
                    &EffectiveOnly,
                    &ImpersonationLevel,
                    0LL);
    AllocationSizea = v22[49];
    Token = v30;
    v31 = PsImpersonateClient(Thread, v22, 0, 0, AllocationSizea);
    Status = v31;
    if ( v31 < 0 )
    {
      SetFailureLocation(a10, 0, 35, v31, 48);
      v14 = Token;
      goto LABEL_34;
    }
    v11 = a5 | 0x40;
    v37 = 1;
  }
  ObjectAttributes.Attributes = 16 * (v11 & 0x40 | 0x24);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.SecurityDescriptor = v52.Pointer;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  ObjectAttributes.Length = 48;
  Status = ZwCreateFile(
             &FileHandle,
             v19,
             &ObjectAttributes,
             &IoStatusBlock,
             0LL,
             FileAttributes,
             ShareAccess,
             CreateDisposition,
             CreateOptions,
             0LL,
             0);
  if ( Status == -1073741790 )
  {
    SetFailureLocation(a10, 1, 35, -1073741790, 64);
    v52 = 0LL;
    FileHandle = 0LL;
    memset(&FileInformation, 0, sizeof(FileInformation));
    Handle = 0LL;
    v23 = ZwQueryAttributesFile(&ObjectAttributes, &FileInformation);
    Status = v23;
    if ( v23 >= 0 )
    {
      FileInformation.FileAttributes &= ~1u;
      v32 = ZwOpenFile(&Handle, 0x100u, &ObjectAttributes, &v52, 7u, 0x4000u);
      Status = v32;
      if ( v32 >= 0 )
      {
        v33 = ZwSetInformationFile(Handle, &v52, &FileInformation, 0x28u, FileBasicInformation);
        Status = v33;
        if ( v33 >= 0 )
        {
          ZwClose(Handle);
          Handle = 0LL;
          v34 = ZwCreateFile(
                  &FileHandle,
                  3u,
                  &ObjectAttributes,
                  &IoStatusBlock,
                  0LL,
                  FileAttributes,
                  0,
                  1u,
                  CreateOptions,
                  0LL,
                  0);
          Status = v34;
          if ( v34 >= 0 )
            Status = 0;
          else
            SetFailureLocation(a10, 0, 36, v34, 64);
        }
        else
        {
          SetFailureLocation(a10, 0, 36, v33, 48);
        }
      }
      else
      {
        SetFailureLocation(a10, 0, 36, v32, 32);
      }
    }
    else
    {
      SetFailureLocation(a10, 0, 36, v23, 16);
    }
    if ( Handle )
      ZwClose(Handle);
  }
  v14 = Token;
  if ( v37 )
  {
    if ( Token )
    {
      if ( PsImpersonateClient(Thread, Token, CopyOnOpen[0], EffectiveOnly, ImpersonationLevel) < 0 )
        CmSiBugCheck(0x26uLL, (ULONG_PTR)v14, 0LL, 0LL);
    }
    else
    {
      PsRevertToSelf();
    }
  }
  if ( Status < 0 )
  {
    CmpLogHiveFileInaccessible(&DestinationString, (unsigned int)Status, CreateOptions, ShareAccess);
    AllocationSize = 80;
LABEL_44:
    v29 = Status;
LABEL_45:
    SetFailureLocation(a10, 0, 35, v29, AllocationSize);
    goto LABEL_34;
  }
  Information = IoStatusBlock.Information;
  if ( (v11 & 0x28) == 0 )
  {
    LODWORD(v61) = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm_ffffffffffffffffffffffffffffffff);
    v60 = si128;
    ZwSetInformationFile(FileHandle, &IoStatusBlock, &si128, 0x28u, FileBasicInformation);
  }
  if ( (v11 & 0x22) == 2 )
  {
    Status = ZwFsControlFile(FileHandle, Event[0], 0LL, 0LL, &IoStatusBlock, 0x9004Fu, 0LL, 0, 0LL, 0);
    if ( Status == 259 )
    {
      CmSiWaitForSingleEvent((__int64)Event);
      Status = IoStatusBlock.Status;
    }
    if ( (int)(Status + 0x80000000) >= 0 && Status != -1073741808 )
    {
      AllocationSize = 96;
      goto LABEL_44;
    }
  }
  if ( ZwFsControlFile(FileHandle, Event[0], 0LL, 0LL, &IoStatusBlock, 0x9C040u, &InputBuffer, 4u, 0LL, 0) == 259 )
    CmSiWaitForSingleEvent((__int64)Event);
  if ( !v48 )
  {
    if ( Information != 2
      && ZwQueryInformationFile(FileHandle, &IoStatusBlock, &v62, 0x18u, FileStandardInformation) >= 0
      && !*((_QWORD *)&v62 + 1) )
    {
      Information = 2;
    }
    v25 = v54;
    if ( v54 )
    {
      VolumeClusterSize = CmpGetVolumeClusterSize(FileHandle);
      Status = VolumeClusterSize;
      if ( VolumeClusterSize < 0 )
      {
        AllocationSize = 112;
        goto LABEL_60;
      }
      *(_DWORD *)(v25 + 4) = CmpGetVolumeLogFileSizeCap(FileHandle);
    }
    if ( !v55 )
      goto LABEL_33;
    VolumeClusterSize = CmpQueryFileSecurityDescriptor(FileHandle);
    Status = VolumeClusterSize;
    if ( VolumeClusterSize >= 0 )
      goto LABEL_33;
    AllocationSize = 128;
LABEL_60:
    v29 = VolumeClusterSize;
    goto LABEL_45;
  }
LABEL_33:
  v27 = FileHandle;
  Status = 0;
  FileHandle = 0LL;
  *v56 = v27;
  *v57 = Information;
LABEL_34:
  v13 = v43;
LABEL_35:
  if ( DestinationString.Buffer && DestinationString.Buffer != v13->Buffer )
    CmSiFreeMemory((PPRIVILEGE_SET)DestinationString.Buffer);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
  CmSiEventTupleCleanup((__int64)Event);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)Status;
}
