/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x18011E5CC
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x1800989AC (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlpSignalSystemDirsModification(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  bool v3; // zf
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 result; // rax

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, a2);
  v2 = RtlpDllSearchPath;
  RtlpDllSearchPath = 0LL;
  if ( v2 )
  {
    v3 = (*(_QWORD *)(v2 + 80))-- == 1LL;
    if ( !v3 )
      v2 = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  v4 = RtlpExeSearchPath;
  RtlpExeSearchPath = 0LL;
  if ( v4 )
  {
    v3 = (*(_QWORD *)(v4 + 80))-- == 1LL;
    if ( !v3 )
      v4 = 0LL;
  }
  else
  {
    v4 = 0LL;
  }
  v5 = RtlpSearchPath;
  RtlpSearchPath = 0LL;
  if ( v5 )
  {
    v3 = (*(_QWORD *)(v5 + 80))-- == 1LL;
    if ( !v3 )
      v5 = 0LL;
  }
  else
  {
    v5 = 0LL;
  }
  result = (__int64)RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v2 )
    result = RtlFreeHeap_0();
  if ( v4 )
    result = RtlFreeHeap_0();
  if ( v5 )
    return RtlFreeHeap_0();
  return result;
}
