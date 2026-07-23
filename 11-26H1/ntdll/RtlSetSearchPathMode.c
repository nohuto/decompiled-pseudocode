/*
 * XREFs of RtlSetSearchPathMode @ 0x1800E40E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 */

NTSTATUS __cdecl RtlSetSearchPathMode(ULONG Flags)
{
  ULONG v2; // eax
  ULONG v3; // esi
  NTSTATUS v4; // esi
  _QWORD *v5; // rdi

  if ( (Flags & 0xFFFE7FFE) != 0 )
    return -1073741811;
  v2 = Flags & 0x10000;
  if ( (Flags & 1) == 0 )
  {
    if ( v2 )
    {
      v3 = Flags & 0x8000;
      if ( (Flags & 0x8000) == 0 )
        goto LABEL_5;
    }
    return -1073741811;
  }
  if ( v2 )
    return -1073741811;
  v3 = Flags & 0x8000;
LABEL_5:
  RtlAcquireSRWLockExclusive(&stru_1801CA360);
  if ( (RtlpSearchPathMode & 0x8000) == 0 || v3 )
  {
    RtlpSearchPathMode = Flags;
    v4 = 0;
  }
  else
  {
    v4 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&stru_1801CA360);
  if ( v4 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock);
    v5 = (_QWORD *)RtlpSearchPath;
    RtlpSearchPath = 0LL;
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
  }
  return v4;
}
