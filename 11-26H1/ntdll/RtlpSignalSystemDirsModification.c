/*
 * XREFs of RtlpSignalSystemDirsModification @ 0x18011E37C
 * Callers:
 *     LdrpInitializePerUserWindowsDirectory @ 0x180097AD8 (LdrpInitializePerUserWindowsDirectory.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

void RtlpSignalSystemDirsModification()
{
  _QWORD *v0; // rbx
  bool v1; // zf
  _QWORD *v2; // rdi
  _QWORD *v3; // rsi

  RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
  v0 = RtlpDllSearchPath;
  RtlpDllSearchPath = 0LL;
  if ( v0 )
  {
    v1 = v0[10]-- == 1LL;
    if ( !v1 )
      v0 = 0LL;
  }
  else
  {
    v0 = 0LL;
  }
  v2 = (_QWORD *)RtlpExeSearchPath;
  RtlpExeSearchPath = 0LL;
  if ( v2 )
  {
    v1 = v2[10]-- == 1LL;
    if ( !v1 )
      v2 = 0LL;
  }
  else
  {
    v2 = 0LL;
  }
  v3 = (_QWORD *)RtlpSearchPath;
  RtlpSearchPath = 0LL;
  if ( v3 )
  {
    v1 = v3[10]-- == 1LL;
    if ( !v1 )
      v3 = 0LL;
  }
  else
  {
    v3 = 0LL;
  }
  RtlReleaseSRWLockExclusive(&RtlpCachedPathLock);
  if ( v0 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v0);
  if ( v2 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v2);
  if ( v3 )
    RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v3);
}
