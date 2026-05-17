/*
 * XREFs of LdrRemoveDllDirectory @ 0x18010D2F0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall LdrRemoveDllDirectory(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rdx
  __int64 **v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rbx

  if ( (LdrpPolicyBits & 4) == 0 )
    return 3221225485LL;
  RtlAcquireSRWLockExclusive(&LdrpDllDirectoryLock, a2);
  v4 = (__int64 *)*a1;
  if ( *(__int64 **)(*a1 + 8) != a1 || (v5 = (__int64 **)a1[1], *v5 != a1) )
    __fastfail(3u);
  *v5 = v4;
  v4[1] = (__int64)v5;
  word_1801C5818 += -2 - *((_WORD *)a1 + 8);
  RtlReleaseSRWLockExclusive(&LdrpDllDirectoryLock);
  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v6);
  v7 = RtlpDllSearchPathWithOptions;
  RtlpDllSearchPathWithOptions = 0LL;
  if ( v7 )
  {
    if ( (*(_QWORD *)(v7 + 80))-- != 1LL )
      v7 = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v7 )
    RtlFreeHeap_0();
  RtlFreeHeap_0();
  return 0LL;
}
