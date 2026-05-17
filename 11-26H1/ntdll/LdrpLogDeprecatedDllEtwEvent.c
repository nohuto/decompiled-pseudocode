/*
 * XREFs of LdrpLogDeprecatedDllEtwEvent @ 0x1800DBE78
 * Callers:
 *     LdrpProcessWork @ 0x180087350 (LdrpProcessWork.c)
 * Callees:
 *     EtwpEventWriteFull @ 0x18000F380 (EtwpEventWriteFull.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     EtwEventRegister @ 0x180057A10 (EtwEventRegister.c)
 *     EtwNotificationUnregister @ 0x18006D0E0 (EtwNotificationUnregister.c)
 *     CompatCachepLookupCdb @ 0x1800DBFE0 (CompatCachepLookupCdb.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

wchar_t *__fastcall LdrpLogDeprecatedDllEtwEvent(unsigned __int16 *a1)
{
  unsigned __int64 v1; // rdx
  const void **v2; // rdi
  unsigned __int64 v3; // rax
  wchar_t *v5; // rbx
  wchar_t *result; // rax
  __int64 v7; // [rsp+50h] [rbp-28h] BYREF
  __int128 v8; // [rsp+58h] [rbp-20h] BYREF

  v1 = *a1;
  v2 = (const void **)(a1 + 4);
  v3 = a1[1];
  v7 = 0LL;
  v8 = 0LL;
  if ( v1 + 2 > v3 || (v5 = (wchar_t *)*v2, *((_WORD *)*v2 + (v1 >> 1))) )
  {
    result = (wchar_t *)RtlAllocateHeap_0();
    v5 = result;
    if ( !result )
      return result;
    memmove(result, *v2, *a1);
    v5[(unsigned __int64)*a1 >> 1] = 0;
  }
  result = (wchar_t *)CompatCachepLookupCdb(v5);
  if ( (_DWORD)result )
  {
    result = (wchar_t *)EtwEventRegister(&UserLoaderGuid, 0LL, 0LL, (unsigned __int64 *)&v7);
    if ( !(_DWORD)result )
    {
      *((_QWORD *)&v8 + 1) = (unsigned int)*a1 + 2;
      *(_QWORD *)&v8 = v5;
      EtwpEventWriteFull(v7, &DeprecatedDll, 0LL, 0, 0, 0LL, 0LL, 1, (__int64)&v8);
      result = (wchar_t *)EtwNotificationUnregister(v7, 0LL);
    }
    if ( v5 != *v2 )
      return (wchar_t *)RtlFreeHeap_0();
  }
  return result;
}
