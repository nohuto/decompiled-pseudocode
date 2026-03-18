/*
 * XREFs of RtlpHpLargeLockAcquire @ 0x140354858
 * Callers:
 *     RtlpHpLargeAlloc @ 0x140351D9C (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeFree @ 0x1403546B4 (RtlpHpLargeFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14027E170 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLargeLockAcquire(_DWORD *a1, __int64 a2, __int64 a3, struct _KLOCK_ENTRIES *a4)
{
  return RtlpHpAcquireLockExclusive(a1 + 16, *a1 & 1, a3, a4);
}
