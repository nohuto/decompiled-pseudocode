/*
 * XREFs of BasepOpenParentDirectoryNoRedirection @ 0x14001D0E8
 * Callers:
 *     CreateFileInternal @ 0x14001BD6C (CreateFileInternal.c)
 * Callees:
 *     CreateFile2 @ 0x14001BD10 (CreateFile2.c)
 *     BasepGetFileRedirectionStatus @ 0x14001CE74 (BasepGetFileRedirectionStatus.c)
 *     RtlStringCbCopyUnicodeString @ 0x14001D298 (RtlStringCbCopyUnicodeString.c)
 *     BaseSetLastNTError @ 0x14001E6D0 (BaseSetLastNTError.c)
 *     __security_check_cookie @ 0x14001E860 (__security_check_cookie.c)
 */

__int64 __fastcall BasepOpenParentDirectoryNoRedirection(PCUNICODE_STRING SourceString, _QWORD *a2)
{
  wchar_t *p_pszDest; // rdi
  wchar_t *v5; // rbp
  int FileRedirectionStatus; // ebx
  SIZE_T v7; // r8
  wchar_t *Heap; // rax
  NTSTATUS v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 i; // rcx
  void *File2; // rax
  void *v18; // rsi
  _OWORD v20[2]; // [rsp+30h] [rbp-268h] BYREF
  wchar_t pszDest; // [rsp+50h] [rbp-248h] BYREF

  p_pszDest = &pszDest;
  v5 = 0LL;
  memset(v20, 0, sizeof(v20));
  if ( !SourceString->Length )
    return (unsigned int)-1073741811;
  v7 = SourceString->Length + 2LL;
  if ( v7 > 0x20A )
  {
    Heap = (wchar_t *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), KernelBaseGlobalData, v7);
    p_pszDest = Heap;
    if ( !Heap )
      return (unsigned int)-1073741801;
    v5 = Heap;
  }
  v9 = RtlStringCbCopyUnicodeString(p_pszDest, SourceString->Length + 2LL, SourceString);
  FileRedirectionStatus = v9;
  if ( v9 < 0 )
  {
    v13 = (unsigned int)v9;
LABEL_9:
    BaseSetLastNTError(v13);
    goto LABEL_24;
  }
  LODWORD(v14) = SourceString->Length >> 1;
  v15 = (unsigned int)v14;
  do
  {
    v14 = (unsigned int)(v14 - 1);
    --v15;
  }
  while ( v15 >= 0 && p_pszDest[v15] == 92 );
  if ( (int)v14 <= 0 )
    goto LABEL_14;
  for ( i = (int)v14; i >= 0; --i )
  {
    if ( p_pszDest[i] == 92 )
      break;
    v14 = (unsigned int)(v14 - 1);
  }
  if ( (int)v14 >= 0 && p_pszDest[v14] == 92 )
  {
    p_pszDest[v14 + 1] = 0;
    LODWORD(v20[0]) = 32;
    DWORD2(v20[0]) = 0x2000000;
    File2 = (void *)CreateFile2(p_pszDest, v10, v11, v12, (__int64)v20);
    v18 = File2;
    if ( File2 != (void *)-1LL )
    {
      FileRedirectionStatus = BasepGetFileRedirectionStatus((__int64)p_pszDest, File2);
      if ( FileRedirectionStatus < 0 )
      {
        NtClose(v18);
        v13 = (unsigned int)FileRedirectionStatus;
        goto LABEL_9;
      }
      *a2 = v18;
    }
  }
  else
  {
LABEL_14:
    FileRedirectionStatus = -1073741811;
  }
LABEL_24:
  if ( v5 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
  return (unsigned int)FileRedirectionStatus;
}
