/*
 * XREFs of RtlSetSearchPathMode @ 0x1800E5ED0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

__int64 __fastcall RtlSetSearchPathMode(int a1, __int64 a2)
{
  int v3; // eax
  int v4; // esi
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // rdi

  if ( (a1 & 0xFFFE7FFE) != 0 )
    return 3221225485LL;
  v3 = a1 & 0x10000;
  if ( (a1 & 1) == 0 )
  {
    if ( v3 )
    {
      v4 = a1 & 0x8000;
      if ( (a1 & 0x8000) == 0 )
        goto LABEL_5;
    }
    return 3221225485LL;
  }
  if ( v3 )
    return 3221225485LL;
  v4 = a1 & 0x8000;
LABEL_5:
  RtlAcquireSRWLockExclusive(&qword_1801CB310, a2);
  if ( (RtlpSearchPathMode & 0x8000) == 0 || v4 )
  {
    RtlpSearchPathMode = a1;
    v5 = 0;
  }
  else
  {
    v5 = -1073741790;
  }
  RtlReleaseSRWLockExclusive(&qword_1801CB310);
  if ( v5 >= 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpCachedPathLock, v6);
    v7 = RtlpSearchPath;
    RtlpSearchPath = 0LL;
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
  }
  return (unsigned int)v5;
}
