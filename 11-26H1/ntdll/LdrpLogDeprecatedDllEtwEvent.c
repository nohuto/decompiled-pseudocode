/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800D8DE8
 * Callers:
 *     LdrpProcessWork @ 0x18007E6C0 (LdrpProcessWork.c)
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     EtwEventRegister @ 0x180041F90 (EtwEventRegister.c)
 *     EtwpEventWriteFull @ 0x18005AAB0 (EtwpEventWriteFull.c)
 *     EtwNotificationUnregister @ 0x18008D530 (EtwNotificationUnregister.c)
 *     CompatCachepLookupCdb @ 0x1800D8F50 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

int __fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdx
  const void **v2; // rdi
  unsigned __int64 v3; // rax
  wchar_t *v5; // rbx
  wchar_t *Heap_0; // rax
  ULONGLONG RegHandle; // [rsp+50h] [rbp-28h] BYREF
  __int128 v9; // [rsp+58h] [rbp-20h] BYREF

  v1 = *a1;
  v2 = (const void **)(a1 + 4);
  v3 = a1[1];
  RegHandle = 0LL;
  v9 = 0LL;
  if ( v1 + 2 > v3 || (v5 = (wchar_t *)*v2, *((_WORD *)*v2 + (v1 >> 1))) )
  {
    Heap_0 = (wchar_t *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1572864, v1 + 2);
    v5 = Heap_0;
    if ( !Heap_0 )
      return (int)Heap_0;
    memmove(Heap_0, *v2, *a1);
    v5[(unsigned __int64)*a1 >> 1] = 0;
  }
  LODWORD(Heap_0) = CompatCachepLookupCdb(v5);
  if ( (_DWORD)Heap_0 )
  {
    LODWORD(Heap_0) = EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, &RegHandle);
    if ( !(_DWORD)Heap_0 )
    {
      *((_QWORD *)&v9 + 1) = (unsigned int)*a1 + 2;
      *(_QWORD *)&v9 = v5;
      EtwpEventWriteFull(RegHandle, &DeprecatedDll, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)&v9);
      LODWORD(Heap_0) = EtwNotificationUnregister(RegHandle, 0LL);
    }
    if ( v5 != *v2 )
      LODWORD(Heap_0) = RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
  }
  return (int)Heap_0;
}
