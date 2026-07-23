/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x140A98FD0
 * Callers:
 *     DifRtlCreateSystemVolumeInformationFolderWrapper @ 0x140699140 (DifRtlCreateSystemVolumeInformationFolderWrapper.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1407775A0 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x14080BCAC (RtlpSysVolTakeOwnership.c)
 *     NtClose @ 0x140929EC0 (NtClose.c)
 *     IopCreateFile @ 0x140984B18 (IopCreateFile.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x140A992E0 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall RtlCreateSystemVolumeInformationFolder(PCUNICODE_STRING VolumeRootPath)
{
  unsigned int v2; // eax
  size_t v3; // rdi
  unsigned __int16 v4; // dx
  wchar_t v5; // si
  void *Pool2; // rax
  unsigned int v8; // eax
  NTSTATUS v9; // ebx
  PVOID v10; // rcx
  PVOID v11; // rdi
  SIZE_T Length; // [rsp+50h] [rbp-59h]
  SIZE_T Lengtha; // [rsp+50h] [rbp-59h]
  SIZE_T Lengthb; // [rsp+50h] [rbp-59h]
  _WORD v15[2]; // [rsp+80h] [rbp-29h] BYREF
  int v16; // [rsp+84h] [rbp-25h]
  PVOID P; // [rsp+88h] [rbp-21h]
  UNICODE_STRING DestinationString; // [rsp+90h] [rbp-19h] BYREF
  int v19[4]; // [rsp+A0h] [rbp-9h] BYREF
  int v20[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int64 v21; // [rsp+B8h] [rbp+Fh]
  _WORD *v22; // [rsp+C0h] [rbp+17h]
  int v23; // [rsp+C8h] [rbp+1Fh]
  int v24; // [rsp+CCh] [rbp+23h]
  PVOID v25; // [rsp+D0h] [rbp+27h]
  __int64 v26; // [rsp+D8h] [rbp+2Fh]
  HANDLE Handle; // [rsp+110h] [rbp+67h] BYREF
  PVOID v28; // [rsp+118h] [rbp+6Fh] BYREF
  PVOID v29; // [rsp+120h] [rbp+77h] BYREF

  v16 = 0;
  v29 = 0LL;
  v28 = 0LL;
  DestinationString = 0LL;
  v20[1] = 0;
  v24 = 0;
  Handle = 0LL;
  *(_OWORD *)v19 = 0LL;
  RtlInitUnicodeString(&DestinationString, L"System Volume Information");
  v2 = VolumeRootPath->Length;
  v3 = DestinationString.Length;
  v4 = DestinationString.Length + v2;
  v15[0] = DestinationString.Length + v2;
  if ( (unsigned __int16)(DestinationString.Length + v2) < (unsigned __int16)v2 || v4 < DestinationString.Length )
    return -1073741811;
  v5 = VolumeRootPath->Buffer[((unsigned __int64)v2 >> 1) - 1];
  if ( v5 != 92 )
    v4 += 2;
  v15[0] = v4;
  v15[1] = v4 + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  P = Pool2;
  if ( !Pool2 )
    return -1073741670;
  memmove(Pool2, VolumeRootPath->Buffer, VolumeRootPath->Length);
  v8 = VolumeRootPath->Length;
  v15[0] = VolumeRootPath->Length;
  if ( v5 != 92 )
  {
    *((_WORD *)P + ((unsigned __int64)v8 >> 1)) = 92;
    LOWORD(v8) = v15[0] + 2;
    v15[0] += 2;
  }
  memmove((char *)P + (unsigned __int16)v8, DestinationString.Buffer, v3);
  v15[0] += v3;
  *((_WORD *)P + ((unsigned __int64)v15[0] >> 1)) = 0;
  v9 = RtlpSysVolCreateSecurityDescriptor(&v29, (ACL **)&v28);
  if ( v9 >= 0 )
  {
    v11 = v29;
    v20[0] = 48;
    LODWORD(Length) = 0;
    v21 = 0LL;
    v23 = 576;
    v22 = v15;
    v25 = v29;
    v26 = 0LL;
    if ( (int)IopCreateFile(
                &Handle,
                0x10000,
                (__int64)v20,
                (unsigned int *)v19,
                0LL,
                0,
                7,
                1u,
                2101344,
                0LL,
                Length,
                0,
                0LL,
                0,
                32,
                0LL) >= 0 )
      NtClose(Handle);
    LODWORD(Lengtha) = 0;
    v9 = IopCreateFile(
           &Handle,
           1966080,
           (__int64)v20,
           (unsigned int *)v19,
           0LL,
           6,
           7,
           3u,
           33,
           0LL,
           Lengtha,
           0,
           0LL,
           0,
           32,
           0LL);
    if ( v9 < 0 )
    {
      RtlpSysVolTakeOwnership((__int64)v15);
      LODWORD(Lengthb) = 0;
      v9 = IopCreateFile(
             &Handle,
             1966080,
             (__int64)v20,
             (unsigned int *)v19,
             0LL,
             6,
             7,
             3u,
             33,
             0LL,
             Lengthb,
             0,
             0LL,
             0,
             32,
             0LL);
    }
    ExFreePoolWithTag(P, 0);
    if ( v9 >= 0 )
    {
      ExFreePoolWithTag(v11, 0);
      v9 = RtlpSysVolCheckOwnerAndSecurity(Handle, (PACL)v28);
      NtClose(Handle);
      v10 = v28;
    }
    else
    {
      ExFreePoolWithTag(v28, 0);
      v10 = v11;
    }
  }
  else
  {
    v10 = P;
  }
  ExFreePoolWithTag(v10, 0);
  return v9;
}
