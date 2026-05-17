/*
 * XREFs of RtlpGetWindowsPolicy @ 0x18014D1B4
 * Callers:
 *     RtlpMuiRegLoadLicInformation @ 0x1800DDFB0 (RtlpMuiRegLoadLicInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180001AA0 (RtlInitUnicodeString.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     ZwQueryLicenseValue @ 0x180161B50 (ZwQueryLicenseValue.c)
 */

__int64 __fastcall RtlpGetWindowsPolicy(PCWSTR SourceString, __int64 a2, _DWORD *a3, __int64 *a4)
{
  __int64 Heap_0; // rbx
  __int64 result; // rax
  unsigned int v9; // edi
  UNICODE_STRING v10; // [rsp+30h] [rbp-18h] BYREF

  Heap_0 = 0LL;
  v10 = 0LL;
  if ( !a2 || !a3 || !a4 || !SourceString )
    return 3221225485LL;
  RtlInitUnicodeString(&v10, SourceString);
  result = ZwQueryLicenseValue(&v10, a2, 0LL, 0LL, a3);
  if ( (int)result >= 0 )
  {
    if ( !*a3 )
      goto LABEL_13;
  }
  else
  {
    if ( (_DWORD)result != -1073741789 )
      goto LABEL_9;
    if ( !*a3 )
      return 3221225495LL;
  }
  Heap_0 = RtlAllocateHeap_0();
  if ( !Heap_0 )
    return 3221225495LL;
LABEL_9:
  result = ZwQueryLicenseValue(&v10, a2, Heap_0, (unsigned int)*a3, a3);
  v9 = result;
  if ( (int)result >= 0 )
  {
LABEL_13:
    *a4 = Heap_0;
    return result;
  }
  if ( Heap_0 )
  {
    RtlFreeHeap_0();
    return v9;
  }
  return result;
}
