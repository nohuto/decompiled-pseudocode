/*
 * XREFs of RtlpCSparseBitmapLock @ 0x1800E8170
 * Callers:
 *     RtlLockHeapManagerForCloning @ 0x180144290 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180036B90 (RtlAcquireSRWLockShared.c)
 */

void __fastcall RtlpCSparseBitmapLock(_RTL_SRWLOCK *a1, int a2, __int64 a3)
{
  _RTL_SRWLOCK *v5; // rcx

  v5 = a1 + 3;
  if ( a2 == 1 )
    RtlAcquireSRWLockExclusive(v5);
  else
    RtlAcquireSRWLockShared(v5);
  *(_QWORD *)(a3 + 8) = a1;
  *(_BYTE *)(a3 + 4) = -1;
  *(_DWORD *)a3 = a2;
}
