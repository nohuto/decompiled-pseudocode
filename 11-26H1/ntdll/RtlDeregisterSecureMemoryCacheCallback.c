/*
 * XREFs of RtlDeregisterSecureMemoryCacheCallback @ 0x180146CA0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 */

char __fastcall RtlDeregisterSecureMemoryCacheCallback(void *a1, __int64 a2)
{
  _UNKNOWN **i; // rbx
  _QWORD *v5; // rdx
  void **v6; // rax

  RtlAcquireSRWLockExclusive(&RtlpSecMemLock, a2);
  for ( i = (_UNKNOWN **)RtlpSecMemListHead; ; i = (_UNKNOWN **)*i )
  {
    if ( i == &RtlpSecMemListHead )
    {
      RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
      return 0;
    }
    if ( i[3] == a1 )
      break;
  }
  if ( (*((_DWORD *)i + 4))-- == 1 )
  {
    v5 = *i;
    if ( *((_UNKNOWN ***)*i + 1) != i || (v6 = (void **)i[1], *v6 != i) )
      __fastfail(3u);
    *v6 = v5;
    v5[1] = v6;
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
    RtlFreeHeap_0();
  }
  else
  {
    RtlReleaseSRWLockExclusive(&RtlpSecMemLock);
  }
  return 1;
}
