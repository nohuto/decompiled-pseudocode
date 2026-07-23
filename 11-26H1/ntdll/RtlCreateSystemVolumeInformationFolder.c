/*
 * XREFs of RtlCreateSystemVolumeInformationFolder @ 0x1800C5290
 * Callers:
 *     <none>
 * Callees:
 *     RtlpSysVolFree @ 0x180001CD0 (RtlpSysVolFree.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1800C4F18 (RtlpSysVolCheckOwnerAndSecurity.c)
 *     RtlpSysVolAllocate @ 0x1800C554C (RtlpSysVolAllocate.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1800C556C (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolTakeOwnership @ 0x1800C56D8 (RtlpSysVolTakeOwnership.c)
 *     wcslen @ 0x18012D850 (wcslen.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     ZwCreateFile @ 0x18015F8E0 (ZwCreateFile.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

__int64 __fastcall RtlCreateSystemVolumeInformationFolder(unsigned __int16 *a1)
{
  size_t v2; // rax
  unsigned __int16 v3; // bx
  unsigned __int16 v4; // dx
  __int16 v5; // si
  void *v6; // rax
  unsigned int v7; // eax
  int v8; // ebx
  PVOID v9; // rdi
  PVOID v10; // rcx
  _WORD v12[2]; // [rsp+60h] [rbp-19h] BYREF
  int v13; // [rsp+64h] [rbp-15h]
  PVOID BaseAddress; // [rsp+68h] [rbp-11h]
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp+7h] BYREF
  HANDLE FileHandle; // [rsp+E0h] [rbp+67h] BYREF
  PVOID v18; // [rsp+E8h] [rbp+6Fh] BYREF
  PVOID v19; // [rsp+F0h] [rbp+77h] BYREF

  v13 = 0;
  v19 = 0LL;
  v18 = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v2 = wcslen(L"System Volume Information");
  v3 = 2 * v2;
  if ( 2 * v2 >= 0xFFFE )
    v3 = -4;
  v4 = v3 + *a1;
  v12[0] = v4;
  if ( v4 < *a1 || v4 < v3 )
    return 3221225485LL;
  v5 = *(_WORD *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1) - 2);
  if ( v5 != 92 )
    v4 += 2;
  v12[0] = v4;
  v12[1] = v4 + 2;
  v6 = (void *)RtlpSysVolAllocate((unsigned __int16)(v4 + 2));
  BaseAddress = v6;
  if ( !v6 )
    return 3221225626LL;
  memmove(v6, *((const void **)a1 + 1), *a1);
  v7 = *a1;
  v12[0] = *a1;
  if ( v5 != 92 )
  {
    *((_WORD *)BaseAddress + ((unsigned __int64)v7 >> 1)) = 92;
    LOWORD(v7) = v12[0] + 2;
    v12[0] += 2;
  }
  memmove((char *)BaseAddress + (unsigned __int16)v7, L"System Volume Information", v3);
  v12[0] += v3;
  *((_WORD *)BaseAddress + ((unsigned __int64)v12[0] >> 1)) = 0;
  v8 = RtlpSysVolCreateSecurityDescriptor(&v19, &v18);
  if ( v8 < 0 )
  {
    v10 = BaseAddress;
  }
  else
  {
    v9 = v19;
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v12;
    ObjectAttributes.SecurityDescriptor = v19;
    ObjectAttributes.SecurityQualityOfService = 0LL;
    if ( ZwCreateFile(&FileHandle, 0x10000u, &ObjectAttributes, &IoStatusBlock, 0LL, 0, 7u, 1u, 0x201060u, 0LL, 0) >= 0 )
      NtClose(FileHandle);
    v8 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    if ( v8 < 0 )
    {
      RtlpSysVolTakeOwnership(v12);
      v8 = ZwCreateFile(&FileHandle, 0x1E0000u, &ObjectAttributes, &IoStatusBlock, 0LL, 6u, 7u, 3u, 0x21u, 0LL, 0);
    }
    RtlpSysVolFree(BaseAddress);
    if ( v8 < 0 )
    {
      RtlpSysVolFree(v18);
      v10 = v9;
    }
    else
    {
      RtlpSysVolFree(v9);
      v8 = RtlpSysVolCheckOwnerAndSecurity(FileHandle, (__int64)v18);
      NtClose(FileHandle);
      v10 = v18;
    }
  }
  RtlpSysVolFree(v10);
  return (unsigned int)v8;
}
