/*
 * XREFs of SmpCreateVolumeDescriptor @ 0x14000FF10
 * Callers:
 *     SmpCreateVolumeDescriptors @ 0x140010258 (SmpCreateVolumeDescriptors.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmLogFailureInt @ 0x140007A08 (SmLogFailureInt.c)
 *     SmpLogFailure @ 0x14000D404 (SmpLogFailure.c)
 *     SmpIsVhdVolume @ 0x14000D89C (SmpIsVhdVolume.c)
 *     RtlQueryVolumeDiskSpeedPolicy @ 0x14000DFF4 (RtlQueryVolumeDiskSpeedPolicy.c)
 *     SmpIsVolumeOnSCMDevice @ 0x14000E1EC (SmpIsVolumeOnSCMDevice.c)
 *     SmpGetVolumeDiskNumber @ 0x14000E3B8 (SmpGetVolumeDiskNumber.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

int __fastcall SmpCreateVolumeDescriptor(unsigned __int16 a1, struct _UNICODE_STRING *a2, struct _UNICODE_STRING *a3)
{
  __int64 v3; // rsi
  NTSTATUS v6; // eax
  int v7; // edx
  __int64 *v8; // rax
  __int64 Buffer; // r8
  char *Heap; // rax
  __int64 v11; // rbx
  bool v12; // zf
  _DWORD *v13; // rdi
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 *v18; // rdx
  void *FileHandle; // [rsp+30h] [rbp-49h] BYREF
  int v21; // [rsp+38h] [rbp-41h] BYREF
  int v22; // [rsp+3Ch] [rbp-3Dh] BYREF
  __int64 FsInformation; // [rsp+40h] [rbp-39h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-31h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-29h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-19h] BYREF
  __int128 v27; // [rsp+90h] [rbp+17h] BYREF
  __int64 v28; // [rsp+A0h] [rbp+27h]

  v3 = a1;
  Handle = 0LL;
  FileHandle = 0LL;
  FsInformation = 0LL;
  v28 = 0LL;
  v22 = 0;
  v21 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  ObjectAttributes.ObjectName = a3;
  v27 = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  v6 = NtOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 7u, 0x20u);
  if ( v6 < 0 )
  {
    v7 = 1324;
LABEL_3:
    LODWORD(v8) = (unsigned int)SmLogFailureInt((__int64)"SmpCreateVolumeDescriptor", v7, v3, 0LL, v6);
    goto LABEL_36;
  }
  v6 = NtQueryVolumeInformationFile(FileHandle, &IoStatusBlock, &FsInformation, 8u, FileFsDeviceInformation);
  if ( v6 < 0 )
  {
    v7 = 1341;
    goto LABEL_3;
  }
  if ( (FsInformation & 0x1700000000LL) == 0 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 64;
    ObjectAttributes.ObjectName = a2;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = NtOpenFile(&Handle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 7u, 0x21u);
    if ( v6 < 0 )
    {
      v7 = 1379;
      goto LABEL_3;
    }
    v6 = NtQueryVolumeInformationFile(Handle, &IoStatusBlock, &v27, 0x18u, FileFsSizeInformation);
    if ( v6 < 0 )
    {
      v7 = 1396;
      goto LABEL_3;
    }
    Heap = (char *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 8u, 0x30uLL);
    v11 = (__int64)Heap;
    if ( !Heap )
    {
      LODWORD(v8) = (unsigned int)SmpLogFailure((__int64)"SmpCreateVolumeDescriptor", 1411, -1073741670);
      goto LABEL_36;
    }
    v12 = (_WORD)v3 == (unsigned __int16)SmpOsVolumeLetter;
    v13 = Heap + 16;
    *((_WORD *)Heap + 14) = v3;
    *((_DWORD *)Heap + 6) = HIDWORD(FsInformation);
    if ( v12 )
    {
      *v13 |= 1u;
      SmpOsVolumeDescriptor = (__int64)Heap;
    }
    if ( RtlQueryVolumeDiskSpeedPolicy(FileHandle, &v21) >= 0 && v21 >= 20 )
      *v13 |= 4u;
    if ( SmpIsVolumeOnSCMDevice(FileHandle) )
      *v13 |= 0x40u;
    v14 = *((_QWORD *)&v27 + 1) * (unsigned int)v28 * (unsigned __int64)HIDWORD(v28);
    *(_QWORD *)(v11 + 32) = v14;
    v15 = v14 - 0x2000000;
    *(_QWORD *)(v11 + 40) = v27 * (unsigned int)v28 * (unsigned __int64)HIDWORD(v28);
    if ( v14 <= 0x2000000 )
      v15 = 0LL;
    *(_QWORD *)(v11 + 32) = v15;
    if ( SmpIsVhdVolume(FileHandle) )
      *(_DWORD *)(v11 + 16) = *v13 | 2;
    if ( SmpGetVolumeDiskNumber(FileHandle, &v22) >= 0 )
    {
      v16 = v22;
      *(_DWORD *)(v11 + 16) |= 8u;
      *(_DWORD *)(v11 + 20) = v16;
    }
    v8 = &SmpVolumeDescriptorList;
    if ( (*(_BYTE *)(v11 + 16) & 1) != 0 )
    {
      v17 = SmpVolumeDescriptorList;
      if ( *(__int64 **)(SmpVolumeDescriptorList + 8) == &SmpVolumeDescriptorList )
      {
        *(_QWORD *)v11 = SmpVolumeDescriptorList;
        *(_QWORD *)(v11 + 8) = &SmpVolumeDescriptorList;
        *(_QWORD *)(v17 + 8) = v11;
        SmpVolumeDescriptorList = v11;
        goto LABEL_36;
      }
    }
    else
    {
      v18 = (__int64 *)qword_140031BA8;
      if ( *(__int64 **)qword_140031BA8 == &SmpVolumeDescriptorList )
      {
        *(_QWORD *)v11 = &SmpVolumeDescriptorList;
        *(_QWORD *)(v11 + 8) = v18;
        *v18 = v11;
        qword_140031BA8 = v11;
        goto LABEL_36;
      }
    }
    __fastfail(3u);
  }
  if ( a3 )
    Buffer = (__int64)a3->Buffer;
  else
    Buffer = 0LL;
  LODWORD(v8) = SmpLogFailureString((__int64)"SmpCreateVolumeDescriptor", 0x54Bu, Buffer, v6);
LABEL_36:
  if ( FileHandle )
    LODWORD(v8) = NtClose(FileHandle);
  if ( Handle )
    LODWORD(v8) = NtClose(Handle);
  return (int)v8;
}
