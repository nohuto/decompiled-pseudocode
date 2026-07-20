/*
 * XREFs of BasepGetFileRedirectionStatus @ 0x14001D58C
 * Callers:
 *     CreateFileInternal @ 0x14001C07C (CreateFileInternal.c)
 *     BasepGetDirectoryRedirectionStatus @ 0x14001D460 (BasepGetDirectoryRedirectionStatus.c)
 *     BasepOpenParentDirectoryNoRedirection @ 0x14001D7FC (BasepOpenParentDirectoryNoRedirection.c)
 * Callees:
 *     GetFinalPathNameByHandleW @ 0x14001ADC0 (GetFinalPathNameByHandleW.c)
 *     memset_0 @ 0x14001EFBF (memset_0.c)
 *     __security_check_cookie @ 0x14001EFE0 (__security_check_cookie.c)
 */

__int64 __fastcall BasepGetFileRedirectionStatus(__int64 a1, void *a2)
{
  wchar_t *p_pszDest; // rbx
  unsigned int v4; // r15d
  wchar_t *v5; // r14
  int v6; // esi
  __int64 result; // rax
  unsigned int FinalPathNameByHandleW; // eax
  int v9; // edi
  unsigned int v10; // ebx
  wchar_t *Heap; // rax
  unsigned int v12; // edi
  __int64 v13; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t *Str1; // [rsp+38h] [rbp-C8h]
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE FileInformation[128]; // [rsp+50h] [rbp-B0h] BYREF
  wchar_t pszDest; // [rsp+D0h] [rbp-30h] BYREF

  v13 = 0LL;
  p_pszDest = &pszDest;
  v4 = 0;
  Str1 = 0LL;
  v5 = 0LL;
  v6 = 0;
  result = RtlDosPathNameToNtPathName_U_WithStatus(a1, &v13, 0LL, 0LL);
  if ( (int)result < 0 )
    return result;
  if ( _wcsnicmp(Str1, L"\\??\\UNC\\", 8uLL) && _wcsnicmp(Str1, L"\\\\?\\UNC\\", 8uLL) )
  {
    v6 = 8;
  }
  else
  {
    IoStatusBlock = 0LL;
    memset_0(FileInformation, 0, 0x74uLL);
    if ( NtQueryInformationFile(a2, &IoStatusBlock, FileInformation, 0x74u, FileRemoteProtocolInformation) < 0
      || (FileInformation[16] & 1) == 0 )
    {
      v6 = 8;
    }
  }
  FinalPathNameByHandleW = GetFinalPathNameByHandleW(a2, 0LL, 0, v6);
  v9 = FinalPathNameByHandleW;
  if ( !FinalPathNameByHandleW )
    goto LABEL_9;
  if ( FinalPathNameByHandleW <= 0x104 )
  {
LABEL_13:
    v12 = GetFinalPathNameByHandleW(a2, p_pszDest, v9, v6);
    if ( v12 )
    {
      if ( v12 > 4 )
      {
        if ( !_wcsnicmp(p_pszDest, L"\\\\?\\", 4uLL) || !_wcsnicmp(p_pszDest, L"\\??\\", 4uLL) )
          v4 = 4;
        v10 = _wcsnicmp(Str1 + 4, &p_pszDest[v4], v12 - v4) != 0 ? 0xC000050B : 0;
      }
      else
      {
        v10 = -1073741767;
      }
    }
    else
    {
      v10 = -1073741801;
    }
    if ( v5 )
      RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v5);
    goto LABEL_23;
  }
  Heap = (wchar_t *)RtlAllocateHeap(
                      *(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL),
                      KernelBaseGlobalData,
                      2LL * FinalPathNameByHandleW);
  p_pszDest = Heap;
  if ( Heap )
  {
    v5 = Heap;
    goto LABEL_13;
  }
LABEL_9:
  v10 = -1073741801;
LABEL_23:
  if ( Str1 )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Str1);
  return v10;
}
