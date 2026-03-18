/*
 * XREFs of RtlpGetWindowsPolicy @ 0x1408A776C
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x14071FC10 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x140726010 (ZwQueryLicenseValue.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  void *Pool2; // rbx
  __int64 result; // rax
  unsigned int v9; // edi
  UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  Pool2 = 0LL;
  v10 = 0LL;
  if ( !a2 || !a3 || !a4 || !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&v10, SourceString);
  result = ZwQueryLicenseValue((__int64)&v10, a2);
  if ( (int)result >= 0 )
  {
    if ( !*a3 )
      goto LABEL_13;
  }
  else if ( (_DWORD)result != -1073741789 )
  {
    goto LABEL_9;
  }
  if ( !*a3 )
    return 3221225495LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return 3221225495LL;
LABEL_9:
  result = ZwQueryLicenseValue((__int64)&v10, a2);
  v9 = result;
  if ( (int)result >= 0 )
  {
LABEL_13:
    *a4 = Pool2;
    return result;
  }
  if ( Pool2 )
  {
    ExFreePoolWithTag(Pool2, 0);
    return v9;
  }
  return result;
}
