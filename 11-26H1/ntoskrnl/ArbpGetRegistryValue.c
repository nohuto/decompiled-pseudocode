/*
 * XREFs of ArbpGetRegistryValue @ 0x140789E88
 * Callers:
 *     ArbAddInaccessibleAllocationRange @ 0x140787A8C (ArbAddInaccessibleAllocationRange.c)
 *     ArbBuildAssignmentOrdering @ 0x14078816C (ArbBuildAssignmentOrdering.c)
 *     ArbRegReadMmConfigRanges @ 0x140789500 (ArbRegReadMmConfigRanges.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140430A40 (RtlInitUnicodeString.c)
 *     ZwQueryValueKey @ 0x1407236D0 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ArbpGetRegistryValue(HANDLE KeyHandle, const WCHAR *a2, _QWORD *a3)
{
  NTSTATUS v5; // eax
  void *Pool2; // rax
  void *v8; // rbx
  NTSTATUS v9; // edi
  UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF
  ULONG ResultLength; // [rsp+68h] [rbp+20h] BYREF

  ResultLength = 0;
  ValueName = 0LL;
  RtlInitUnicodeString(&ValueName, a2);
  v5 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformationAlign64, 0LL, 0, &ResultLength);
  if ( v5 != -2147483643 && v5 != -1073741789 )
    return 3221225473LL;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v8 = Pool2;
  if ( !Pool2 )
    return 3221225626LL;
  v9 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValueFullInformationAlign64, Pool2, ResultLength, &ResultLength);
  if ( v9 >= 0 )
  {
    *a3 = v8;
    return 0LL;
  }
  else
  {
    ExFreePoolWithTag(v8, 0);
    return (unsigned int)v9;
  }
}
