/*
 * XREFs of TppPoolRemoveWorker @ 0x1800E62E8
 * Callers:
 *     TppWorkerThread @ 0x18003E5E0 (TppWorkerThread.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18003F4D0 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18003FAA0 (RtlReleaseSRWLockExclusive.c)
 */

struct _TEB *__fastcall TppPoolRemoveWorker(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rcx
  _QWORD *v4; // rax

  RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1[6] + 72LL), a2);
  v3 = a1[2];
  v4 = (_QWORD *)a1[3];
  if ( *(_QWORD **)(v3 + 8) != a1 + 2 || (_QWORD *)*v4 != a1 + 2 )
    __fastfail(3u);
  *v4 = v3;
  *(_QWORD *)(v3 + 8) = v4;
  return RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1[6] + 72LL));
}
