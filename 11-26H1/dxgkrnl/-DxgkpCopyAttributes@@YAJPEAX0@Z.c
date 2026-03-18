/*
 * XREFs of ?DxgkpCopyAttributes@@YAJPEAX0@Z @ 0x1401D63F8
 * Callers:
 *     ?DxgkpCopyFile@@YAJPEBG0@Z @ 0x1401D653C (-DxgkpCopyFile@@YAJPEBG0@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

__int64 __fastcall DxgkpCopyAttributes(void *a1, void *a2)
{
  NTSTATUS v3; // eax
  __int64 v4; // rdi
  const wchar_t *v5; // r9
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  _OWORD FileInformation[2]; // [rsp+60h] [rbp-38h] BYREF
  __int64 v10; // [rsp+80h] [rbp-18h]

  memset(FileInformation, 0, sizeof(FileInformation));
  v10 = 0LL;
  IoStatusBlock = 0LL;
  v3 = ZwQueryInformationFile(a1, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  v4 = v3;
  if ( v3 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v5 = L"Failed ZwQueryInformationFile for source in DxgkpCopyAttributes: 0x%I64x";
    WdLogGlobalForLineNumber = 392;
LABEL_5:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v5, v4, 0LL, 0LL, 0LL, 0LL);
    return (unsigned int)v4;
  }
  v6 = ZwSetInformationFile(a2, &IoStatusBlock, FileInformation, 0x28u, FileBasicInformation);
  v4 = v6;
  if ( v6 < 0 )
  {
    WdLogSingleEntry1(2LL);
    v5 = L"Failed ZwQueryInformationFile for dest in DxgkpCopyAttributes: 0x%I64x";
    WdLogGlobalForLineNumber = 405;
    goto LABEL_5;
  }
  return (unsigned int)v4;
}
