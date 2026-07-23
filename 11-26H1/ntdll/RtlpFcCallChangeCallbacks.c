/*
 * XREFs of RtlpFcCallChangeCallbacks @ 0x18005FAA4
 * Callers:
 *     RtlpFcWnfCallback @ 0x18005FA70 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 *     TpPostWork @ 0x180088400 (TpPostWork.c)
 */

void __fastcall RtlpFcCallChangeCallbacks(_RTL_SRWLOCK *a1)
{
  _RTL_SRWLOCK *v1; // rsi
  unsigned __int64 *v2; // rdi
  unsigned __int64 i; // rbx

  v1 = a1 + 32;
  v2 = (unsigned __int64 *)&a1[33];
  RtlAcquireSRWLockShared(a1 + 32);
  for ( i = *v2; (unsigned __int64 *)i != v2; i = *(_QWORD *)i )
    TpPostWork(*(PTP_WORK *)(i + 40));
  RtlReleaseSRWLockShared(v1);
}
