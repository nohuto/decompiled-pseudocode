/*
 * XREFs of BasepOpenParentDirectoryNoRedirection @ 0x14001D7FC
 * Callers:
 *     CreateFileInternal @ 0x14001C07C (CreateFileInternal.c)
 * Callees:
 *     CreateFile2 @ 0x14001C020 (CreateFile2.c)
 *     BasepGetFileRedirectionStatus @ 0x14001D58C (BasepGetFileRedirectionStatus.c)
 *     RtlStringCbCopyUnicodeString @ 0x14001D9AC (RtlStringCbCopyUnicodeString.c)
 *     BaseSetLastNTError @ 0x14001EE28 (BaseSetLastNTError.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall BasepOpenParentDirectoryNoRedirection(PCUNICODE_STRING SourceString, _QWORD *a2)
{
  wchar_t *p_pszDest; // rdi
  wchar_t *v5; // rbp
  int FileRedirectionStatus; // ebx
  wchar_t *Heap; // rax
  NTSTATUS v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int16 i; // cx
  void *File2; // rax
  void *v14; // rsi
  _OWORD v16[2]; // [rsp+30h] [rbp-268h] BYREF
  wchar_t pszDest; // [rsp+50h] [rbp-248h] BYREF

  p_pszDest = &pszDest;
  v5 = 0LL;
  memset(v16, 0, sizeof(v16));
  if ( !SourceString->Length )
    return (unsigned int)-1073741811;
  if ( (SourceString->Length & 0xFFFEu) > 0x208 )
  {
    Heap = (wchar_t *)RtlAllocateHeap(
                        *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                        KernelBaseGlobalData,
                        SourceString->Length + 2LL);
    p_pszDest = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v5 = Heap;
  }
  v8 = RtlStringCbCopyUnicodeString(p_pszDest, SourceString->Length + 2LL, SourceString);
  FileRedirectionStatus = v8;
  if ( v8 < 0 )
  {
    v11 = (unsigned int)v8;
LABEL_9:
    BaseSetLastNTError(v11);
    goto LABEL_21;
  }
  for ( i = (SourceString->Length >> 1) - 1; p_pszDest[i] == 92; --i )
    ;
  if ( i )
  {
    while ( p_pszDest[i] != 92 )
      --i;
    p_pszDest[i + 1] = 0;
    LODWORD(v16[0]) = 32;
    DWORD2(v16[0]) = 0x2000000;
    File2 = (void *)CreateFile2((int)p_pszDest, 0xFFFFLL, v9, v10, (__int64)v16);
    v14 = File2;
    if ( File2 == (void *)-1LL )
      goto LABEL_21;
    FileRedirectionStatus = BasepGetFileRedirectionStatus((__int64)p_pszDest, File2);
    if ( FileRedirectionStatus < 0 )
    {
      NtClose(v14);
      v11 = (unsigned int)FileRedirectionStatus;
      goto LABEL_9;
    }
    *a2 = v14;
  }
  else
  {
    FileRedirectionStatus = -1073741811;
  }
LABEL_21:
  if ( v5 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
  return (unsigned int)FileRedirectionStatus;
}
