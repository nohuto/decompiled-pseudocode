/*
 * XREFs of BiCreatePartitionDevice @ 0x140897EAC
 * Callers:
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C (BiConvertNtDeviceToBootEnvironment.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     _wcsnicmp @ 0x140538B30 (_wcsnicmp.c)
 *     wcschr @ 0x14053A3E0 (wcschr.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     BiCreateFileDeviceElement @ 0x140897D04 (BiCreateFileDeviceElement.c)
 *     BiCreateVhdRamdiskBootDevice @ 0x1408982DC (BiCreateVhdRamdiskBootDevice.c)
 *     BiGetPhysicalDriveName @ 0x140898CE0 (BiGetPhysicalDriveName.c)
 *     BiLogMessage @ 0x1409A58EC (BiLogMessage.c)
 *     BiGetDriveLayoutInformation @ 0x140B151FC (BiGetDriveLayoutInformation.c)
 *     BiGetPartitionVhdFilePath @ 0x140B1E440 (BiGetPartitionVhdFilePath.c)
 *     BiGetPartitionInformation @ 0x140B3CC28 (BiGetPartitionInformation.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x140B5E48C (BiConvertNtDeviceToBootEnvironment.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiCreatePartitionDevice(PCWSTR SourceString, int a2, _QWORD *a3, _DWORD *a4)
{
  PVOID v5; // r12
  WCHAR *v6; // rsi
  int v7; // r14d
  PVOID v8; // r15
  int PhysicalDriveName; // eax
  NTSTATUS DriveLayoutInformation; // ebx
  char *v11; // rdi
  const wchar_t *PartitionVhdFilePath; // rax
  wchar_t *v13; // rax
  wchar_t *v14; // rbx
  __int64 v15; // rax
  PVOID v16; // r8
  int v17; // eax
  __int128 v18; // xmm0
  __int128 v19; // xmm6
  unsigned int v20; // r13d
  _OWORD *Pool2; // rax
  _OWORD *v22; // r14
  size_t v23; // r8
  __int128 v24; // xmm1
  int v25; // eax
  __int128 v26; // xmm0
  _DWORD *v27; // rcx
  char v29; // [rsp+38h] [rbp-D0h]
  unsigned int v30; // [rsp+3Ch] [rbp-CCh] BYREF
  size_t Size; // [rsp+40h] [rbp-C8h]
  PVOID v32; // [rsp+48h] [rbp-C0h]
  void *Src; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v34; // [rsp+58h] [rbp-B0h]
  PVOID v35; // [rsp+60h] [rbp-A8h] BYREF
  PVOID P; // [rsp+68h] [rbp-A0h] BYREF
  HANDLE FileHandle; // [rsp+70h] [rbp-98h] BYREF
  _QWORD *v38; // [rsp+78h] [rbp-90h]
  _DWORD *v39; // [rsp+80h] [rbp-88h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  __int128 v41; // [rsp+B8h] [rbp-50h] BYREF
  __int128 v42; // [rsp+C8h] [rbp-40h]
  __m256i v43; // [rsp+D8h] [rbp-30h]
  __int64 v44; // [rsp+F8h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+108h] [rbp+0h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+118h] [rbp+10h] BYREF
  int v47; // [rsp+128h] [rbp+20h] BYREF
  __int64 v48; // [rsp+130h] [rbp+28h]
  __int128 v49; // [rsp+158h] [rbp+50h]

  v38 = a3;
  LODWORD(v34) = a2;
  v39 = a4;
  memset(&ObjectAttributes, 0, 44);
  IoStatusBlock = 0LL;
  memset_0(&v47, 0, 0x90uLL);
  v32 = 0LL;
  FileHandle = 0LL;
  DestinationString = 0LL;
  Src = 0LL;
  v5 = 0LL;
  P = 0LL;
  v6 = 0LL;
  LODWORD(Size) = 0;
  v7 = 0;
  v30 = 0;
  v8 = 0LL;
  v35 = 0LL;
  v29 = 0;
  memset_0(&v41, 0, 0x48uLL);
  if ( (int)BiGetDriveLayoutInformation(SourceString) < 0 )
  {
    PhysicalDriveName = BiGetPhysicalDriveName(SourceString, &v35);
    v8 = v35;
    DriveLayoutInformation = PhysicalDriveName;
    if ( PhysicalDriveName < 0 )
      goto LABEL_41;
    DriveLayoutInformation = BiGetDriveLayoutInformation((PCWSTR)v35);
    if ( DriveLayoutInformation < 0 )
      goto LABEL_41;
  }
  v11 = (char *)v32;
  if ( (v34 & 0x40) == 0 )
  {
    PartitionVhdFilePath = (const wchar_t *)BiGetPartitionVhdFilePath(SourceString);
    v6 = (WCHAR *)PartitionVhdFilePath;
    if ( PartitionVhdFilePath )
    {
      if ( !wcsnicmp(PartitionVhdFilePath, L"\\Device\\HarddiskVolume", 0x16uLL) )
      {
        v13 = wcschr(v6 + 22, 0x5Cu);
        v14 = v13;
        if ( v13 )
        {
          *v13 = 0;
          v15 = BiGetPartitionVhdFilePath(v6);
          *v14 = 92;
          if ( v15 )
          {
            BiLogMessage(3LL, L"BiCreatePartitionDevice: NestedVhd detected %ws", v15);
            ExFreePoolWithTag(v16, 0x4B444342u);
          }
        }
      }
      if ( wcsnicmp(v6, L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}", 0x35uLL) )
      {
        v17 = BiCreateFileDeviceElement(v6, &P, &v30);
        v5 = P;
        DriveLayoutInformation = v17;
        if ( v17 < 0 )
          goto LABEL_39;
        DriveLayoutInformation = BiConvertNtDeviceToBootEnvironment(P, v30, 64LL, &Src);
        if ( DriveLayoutInformation < 0 )
          goto LABEL_39;
      }
      else
      {
        DriveLayoutInformation = BiCreateVhdRamdiskBootDevice(v6, &Src);
        if ( DriveLayoutInformation < 0 )
          goto LABEL_41;
        v29 = 1;
      }
      v43.m256i_i32[0] = 6;
      v7 = *((_DWORD *)Src + 2);
      LODWORD(Size) = v7;
    }
  }
  if ( *(_DWORD *)v11 )
  {
    if ( *(_DWORD *)v11 != 1 )
    {
LABEL_38:
      DriveLayoutInformation = -1073741811;
      goto LABEL_39;
    }
    v18 = *(_OWORD *)(v11 + 8);
    v43.m256i_i32[1] = 0;
    *(_OWORD *)&v43.m256i_u64[1] = v18;
  }
  else
  {
    v43.m256i_i32[2] = *((_DWORD *)v11 + 2);
    v43.m256i_i32[1] = 1;
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DriveLayoutInformation = ZwOpenFile(&FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
  if ( DriveLayoutInformation >= 0 )
  {
    DriveLayoutInformation = BiGetPartitionInformation(FileHandle, *(_DWORD *)v11);
    if ( DriveLayoutInformation >= 0 )
    {
      if ( !v47 )
      {
        *(_QWORD *)&v42 = v48;
        v19 = v42;
        goto LABEL_27;
      }
      if ( v47 == 1 )
      {
        v19 = v49;
LABEL_27:
        v20 = v7 + 56;
        Pool2 = (_OWORD *)ExAllocatePool2(0x102uLL);
        v22 = Pool2;
        if ( Pool2 )
        {
          v23 = 72LL;
          if ( v20 > 0x48 )
            v23 = v20;
          memset_0(Pool2, 0, v23);
          v24 = *(_OWORD *)&v43.m256i_u64[2];
          v25 = 72;
          LODWORD(v41) = 6;
          if ( v20 > 0x48 )
            v25 = v20;
          DWORD2(v41) = v25;
          *v22 = v41;
          v26 = *(_OWORD *)v43.m256i_i8;
          v22[1] = v19;
          v22[2] = v26;
          *(_QWORD *)&v26 = v44;
          v22[3] = v24;
          *((_QWORD *)v22 + 8) = v26;
          if ( v6 )
            memmove((char *)v22 + 56, Src, (unsigned int)Size);
          if ( v29 )
            *((_DWORD *)v22 + 1) |= 8u;
          v27 = v39;
          *v38 = v22;
          *v27 = *((_DWORD *)v11 + 1);
        }
        else
        {
          DriveLayoutInformation = -1073741670;
        }
        goto LABEL_39;
      }
      goto LABEL_38;
    }
  }
LABEL_39:
  if ( v5 )
    ExFreePoolWithTag(v5, 0x4B444342u);
LABEL_41:
  if ( Src )
    ExFreePoolWithTag(Src, 0x4B444342u);
  if ( v6 )
    ExFreePoolWithTag(v6, 0x4B444342u);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x4B444342u);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)DriveLayoutInformation;
}
