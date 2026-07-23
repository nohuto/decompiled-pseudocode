/*
 * XREFs of SecureDump_LoadCertAndProvisionKey @ 0x1405D9128
 * Callers:
 *     SecureDump_ProvisionCrashDumpKey @ 0x1405D9700 (SecureDump_ProvisionCrashDumpKey.c)
 * Callees:
 *     SecureDump_ConvertBinaryToHexString @ 0x1405D8800 (SecureDump_ConvertBinaryToHexString.c)
 *     SecureDump_LogErrorEvent @ 0x1405D947C (SecureDump_LogErrorEvent.c)
 *     SecureDump_ValidateAmeCertChain @ 0x1405D9C14 (SecureDump_ValidateAmeCertChain.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x140728080 (ZwReadFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1407281E0 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x140728620 (ZwOpenFile.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_LoadCertAndProvisionKey(UNICODE_STRING *a1, _QWORD *a2, int *a3, _QWORD *a4, __int64 a5)
{
  void *v5; // rdi
  __int64 v6; // rsi
  void *v7; // r14
  int v9; // ebx
  __int64 v10; // rcx
  ULONG Length; // r15d
  __int64 v12; // r12
  void *Pool2; // r13
  __int64 v14; // rax
  int v15; // r9d
  __int64 v16; // rax
  _DWORD *v17; // rcx
  _DWORD *v18; // [rsp+50h] [rbp-91h] BYREF
  HANDLE FileHandle; // [rsp+58h] [rbp-89h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-81h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+70h] [rbp-71h] BYREF
  _QWORD *v22; // [rsp+78h] [rbp-69h]
  int *v23; // [rsp+80h] [rbp-61h]
  _QWORD *v24; // [rsp+88h] [rbp-59h]
  __int64 v25; // [rsp+90h] [rbp-51h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+98h] [rbp-49h] BYREF
  __int128 FileInformation; // [rsp+C8h] [rbp-19h] BYREF
  __int64 v28; // [rsp+D8h] [rbp-9h]

  v23 = a3;
  v5 = 0LL;
  v22 = a2;
  v24 = a4;
  FileHandle = (HANDLE)-1LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  v6 = 0LL;
  v7 = 0LL;
  v25 = a5;
  ByteOffset.QuadPart = 0LL;
  v18 = 0LL;
  v28 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !a4 )
    return 3221225714LL;
  if ( !a5 )
    return 3221225715LL;
  ObjectAttributes.ObjectName = a1;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenFile(&FileHandle, 0x120089u, &ObjectAttributes, &IoStatusBlock, 1u, 0x60u);
  if ( v9 < 0 )
  {
    v10 = 5LL;
LABEL_36:
    SecureDump_LogErrorEvent(v10);
    goto LABEL_37;
  }
  v9 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  if ( v9 < 0 || IoStatusBlock.Status < 0 )
    goto LABEL_37;
  Length = DWORD2(FileInformation);
  v12 = DWORD2(FileInformation);
  if ( DWORD2(FileInformation) != *((_QWORD *)&FileInformation + 1) )
  {
    v9 = -1073741670;
LABEL_35:
    v10 = 7LL;
    goto LABEL_36;
  }
  if ( (unsigned int)(DWORD2(FileInformation) - 1) > 0x3FFF )
  {
    v9 = -1073741701;
    goto LABEL_35;
  }
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( Pool2 )
  {
    v9 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Length, &ByteOffset, 0LL);
    if ( v9 < 0 || IoStatusBlock.Status < 0 )
      goto LABEL_33;
    if ( IoStatusBlock.Information == v12 )
    {
      v14 = ExAllocatePool2(0x40uLL);
      v6 = v14;
      if ( v14 )
      {
        v9 = SecureDump_ValidateAmeCertChain(Pool2, Length, &v18, v14);
        if ( v9 < 0 )
        {
          SecureDump_LogErrorEvent(6LL);
          v5 = v18;
          goto LABEL_33;
        }
        v5 = v18;
        if ( !v18 )
        {
          v9 = -1073741823;
          goto LABEL_33;
        }
        v15 = v18[3] + 24 + v18[2];
        *v22 = v18;
        v5 = 0LL;
        *v23 = v15;
        LODWORD(v18) = 4 * *(unsigned __int8 *)(v6 + 4) + 2;
        v16 = ExAllocatePool2(0x40uLL);
        v7 = (void *)v16;
        if ( v16 )
        {
          v9 = SecureDump_ConvertBinaryToHexString((char *)(v6 + 5), *(unsigned __int8 *)(v6 + 4), v16, &v18);
          if ( v9 >= 0 )
          {
            v17 = (_DWORD *)v25;
            *v24 = v7;
            v7 = 0LL;
            v9 = 0;
            *v17 = (_DWORD)v18;
          }
          goto LABEL_33;
        }
      }
      v9 = -1073741670;
    }
    else
    {
      v9 = -1073741701;
    }
LABEL_33:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_37;
  }
  v9 = -1073741670;
LABEL_37:
  if ( FileHandle != (HANDLE)-1LL )
    ZwClose(FileHandle);
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  if ( v6 )
    ExFreePoolWithTag((PVOID)v6, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v9;
}
