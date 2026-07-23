/*
 * XREFs of RtlpGetWindowsPolicy @ 0x1408ADBDC
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x140724830 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14041DA70 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x14072ABE0 (ZwQueryLicenseValue.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  void *Pool2; // rbx
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  Pool2 = 0LL;
  ValueName = 0LL;
  if ( !Type || !ResultDataSize || !a4 || !SourceString )
    return -1073741811;
  RtlInitUnicodeString(&ValueName, SourceString);
  result = ZwQueryLicenseValue(&ValueName, Type, 0LL, 0, ResultDataSize);
  if ( result >= 0 )
  {
    if ( !*ResultDataSize )
      goto LABEL_13;
  }
  else if ( result != -1073741789 )
  {
    goto LABEL_9;
  }
  if ( !*ResultDataSize )
    return -1073741801;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  if ( !Pool2 )
    return -1073741801;
LABEL_9:
  result = ZwQueryLicenseValue(&ValueName, Type, Pool2, *ResultDataSize, ResultDataSize);
  v9 = result;
  if ( result >= 0 )
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
