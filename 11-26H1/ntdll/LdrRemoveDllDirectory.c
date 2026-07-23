/*
 * XREFs of LdrRemoveDllDirectory @ 0x18010CE40
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

NTSTATUS __cdecl LdrRemoveDllDirectory(DLL_DIRECTORY_COOKIE Cookie)
{
  _QWORD *v3; // rdx
  DLL_DIRECTORY_COOKIE *v4; // rax
  _QWORD *v5; // rbx

  if ( (LdrpPolicyBits & 4) == 0 )
    return -1073741811;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock);
  v3 = *(_QWORD **)Cookie;
  if ( *(DLL_DIRECTORY_COOKIE *)(*(_QWORD *)Cookie + 8LL) != Cookie
    || (v4 = (DLL_DIRECTORY_COOKIE *)*((_QWORD *)Cookie + 1), *v4 != Cookie) )
  {
    __fastfail(3u);
  }
  *v4 = v3;
  v3[1] = v4;
  word_1801C4818 += -2 - *((_WORD *)Cookie + 8);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v5 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v5 )
  {
    if ( v5[10]-- != 1LL )
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v5 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
  RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Cookie);
  return 0;
}
