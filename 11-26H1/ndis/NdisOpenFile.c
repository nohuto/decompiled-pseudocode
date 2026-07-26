/*
 * XREFs of NdisOpenFile @ 0x1400D9B70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_Z @ 0x140056EF0 (WPP_RECORDER_SF_Z.c)
 *     WPP_RECORDER_SF_D @ 0x140057DA0 (WPP_RECORDER_SF_D_ea_140057DA0.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 */

void __stdcall NdisOpenFile(
        PNDIS_STATUS Status,
        PNDIS_HANDLE FileHandle,
        PUINT FileLength,
        PNDIS_STRING FileName,
        NDIS_PHYSICAL_ADDRESS HighestAcceptableAddress)
{
  PNDIS_HANDLE v7; // r12
  unsigned __int16 v9; // ax
  __int64 Pool2; // rax
  NTSTATUS v11; // edi
  NTSTATUS v12; // eax
  __int64 v13; // r14
  void *v14; // rax
  int v15; // edx
  void *v16; // rsi
  NTSTATUS v17; // r15d
  _QWORD *v18; // rax
  _BYTE *v19; // rdi
  ULONG FileAttributes[2]; // [rsp+28h] [rbp-A9h]
  HANDLE FileHandlea; // [rsp+60h] [rbp-71h] BYREF
  _UNICODE_STRING Destination; // [rsp+68h] [rbp-69h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+78h] [rbp-59h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-49h] BYREF
  __int128 FileInformation; // [rsp+B8h] [rbp-19h] BYREF
  __int64 v26; // [rsp+C8h] [rbp-9h]

  FileHandlea = 0LL;
  v26 = 0LL;
  v7 = FileHandle;
  IoStatusBlock = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  Destination = 0LL;
  FileInformation = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(FileHandle) = 4;
    WPP_RECORDER_SF_(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)FileHandle,
      1,
      10,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
  }
  v9 = FileName->MaximumLength + 60;
  if ( v9 < 0x3Cu )
  {
    *Status = -2147483643;
    Destination.MaximumLength = -1;
    goto LABEL_32;
  }
  Destination.MaximumLength = FileName->MaximumLength + 60;
  Pool2 = ExAllocatePool2(66LL, v9, 1852195918LL);
  Destination.Buffer = (wchar_t *)Pool2;
  if ( !Pool2 )
  {
    *Status = -1073741670;
    goto LABEL_32;
  }
  Destination.Length = 58;
  *(_OWORD *)Pool2 = *(_OWORD *)L"\\SystemRoot\\system32\\drivers\\";
  *(_OWORD *)(Pool2 + 16) = *(_OWORD *)L"oot\\system32\\drivers\\";
  *(_OWORD *)(Pool2 + 32) = *(_OWORD *)L"em32\\drivers\\";
  *(_QWORD *)(Pool2 + 48) = *(_QWORD *)L"vers\\";
  *(_DWORD *)(Pool2 + 56) = *(_DWORD *)L"\\";
  RtlAppendUnicodeStringToString(&Destination, FileName);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Z(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0xBu,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      &Destination.Length);
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &Destination;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v11 = ZwCreateFile(&FileHandlea, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 1u, 1u, 0x20u, 0LL, 0);
  ExFreePoolWithTag(Destination.Buffer, 0);
  if ( v11 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v11;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xCu,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    *Status = -1073676261;
    goto LABEL_32;
  }
  v12 = ZwQueryInformationFile(FileHandlea, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v12 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v12;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xDu,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
LABEL_15:
    ZwClose(FileHandlea);
    *Status = -1073676260;
    goto LABEL_32;
  }
  v13 = DWORD2(FileInformation);
  if ( !DWORD2(FileInformation) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = DWORD2(FileInformation);
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0xEu,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    goto LABEL_15;
  }
  v14 = (void *)ExAllocatePool2(66LL, DWORD2(FileInformation), 1768309838LL);
  v16 = v14;
  if ( !v14 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v15,
        1,
        15,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids);
    }
    goto LABEL_15;
  }
  v17 = ZwReadFile(FileHandlea, 0LL, 0LL, 0LL, &IoStatusBlock, v14, v13, 0LL, 0LL);
  ZwClose(FileHandlea);
  if ( v17 >= 0 && IoStatusBlock.Information == v13 )
  {
    v18 = (_QWORD *)ExAllocatePool2(64LL, 24LL, 1684423758LL);
    v19 = v18;
    if ( v18 )
    {
      *v18 = v16;
      KeInitializeSpinLock(v18 + 1);
      *v7 = v19;
      *FileLength = v13;
      *Status = 0;
      v19[16] = 0;
    }
    else
    {
      *Status = -1073741670;
      ExFreePoolWithTag(v16, 0);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      FileAttributes[0] = v17;
      WPP_RECORDER_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        0x10u,
        (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
        *(_QWORD *)FileAttributes);
    }
    *Status = -1073676260;
    ExFreePoolWithTag(v16, 0);
  }
LABEL_32:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    FileAttributes[0] = *Status;
    WPP_RECORDER_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x11u,
      (struct _GUID *)&WPP_cdc05a73e2a7317b4d5b1bd183068846_Traceguids,
      *(_QWORD *)FileAttributes);
  }
}
