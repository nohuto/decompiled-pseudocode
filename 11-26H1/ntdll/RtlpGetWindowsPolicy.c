/*
 * XREFs of RtlpGetWindowsPolicy @ 0x18014D064
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1800DAF20 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlInitUnicodeString @ 0x18004D1D0 (RtlInitUnicodeString.c)
 *     ZwQueryLicenseValue @ 0x180161A50 (ZwQueryLicenseValue.c)
 */

NTSTATUS __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, PULONG Type, PULONG ResultDataSize, _QWORD *a4)
{
  PVOID Heap_0; // rbx
  NTSTATUS result; // eax
  NTSTATUS v9; // edi
  _UNICODE_STRING ValueName; // [rsp+30h] [rbp-18h] BYREF

  Heap_0 = 0LL;
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
  else
  {
    if ( result != -1073741789 )
      goto LABEL_9;
    if ( !*ResultDataSize )
      return -1073741801;
  }
  Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, 8u, *ResultDataSize);
  if ( !Heap_0 )
    return -1073741801;
LABEL_9:
  result = ZwQueryLicenseValue(&ValueName, Type, Heap_0, *ResultDataSize, ResultDataSize);
  v9 = result;
  if ( result >= 0 )
  {
LABEL_13:
    *a4 = Heap_0;
    return result;
  }
  if ( Heap_0 )
  {
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
    return v9;
  }
  return result;
}
