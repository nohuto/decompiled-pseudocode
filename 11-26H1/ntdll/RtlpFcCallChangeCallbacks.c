/*
 * XREFs of RtlpFcCallChangeCallbacks @ 0x180014374
 * Callers:
 *     RtlpFcWnfCallback @ 0x180014340 (RtlpFcWnfCallback.c)
 * Callees:
 *     RtlAcquireSRWLockShared @ 0x18004C610 (RtlAcquireSRWLockShared.c)
 *     TpPostWork @ 0x180067FB0 (TpPostWork.c)
 */

__int64 __fastcall RtlpFcCallChangeCallbacks(__int64 a1)
{
  __int64 v1; // rsi
  _QWORD *v2; // rdi
  _QWORD *i; // rbx

  v1 = a1 + 256;
  v2 = (_QWORD *)(a1 + 264);
  RtlAcquireSRWLockShared(a1 + 256);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
    TpPostWork(i[5]);
  return RtlReleaseSRWLockShared(v1);
}
