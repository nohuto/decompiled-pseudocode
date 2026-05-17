/*
 * XREFs of RtlpTpIoDllUnloaded @ 0x1800B81F4
 * Callers:
 *     RtlpTpIoDllNotification @ 0x1800B7630 (RtlpTpIoDllNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 *     RtlpTpIoDllProcessUnloads @ 0x1800B8268 (RtlpTpIoDllProcessUnloads.c)
 */

struct _TEB *__fastcall RtlpTpIoDllUnloaded(__int64 a1, __int64 a2)
{
  __int64 i; // rcx
  unsigned __int64 *v4; // rdx
  unsigned __int64 v5; // r8
  bool v6; // cf
  struct _TEB *result; // rax

  if ( (*(_BYTE *)a1 & 1) == 0 )
  {
    RtlAcquireSRWLockExclusive(&RtlpTpIoTreeLock, a2);
    for ( i = RtlpTpIoTree; i; i = *(_QWORD *)((v6 ? 8 : 0) + i + 8) )
    {
      v4 = (unsigned __int64 *)(i - 96);
      v5 = *(_QWORD *)(a1 + 24);
      v6 = *(_QWORD *)(i - 96) < v5;
      if ( *(_QWORD *)(i - 96) >= v5 )
      {
        if ( *v4 < v5 + *(unsigned int *)(a1 + 32) )
        {
          RtlpTpIoDllProcessUnloads(a1);
          return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
        }
        v6 = *v4 < v5;
      }
    }
    return RtlReleaseSRWLockExclusive(&RtlpTpIoTreeLock);
  }
  return result;
}
