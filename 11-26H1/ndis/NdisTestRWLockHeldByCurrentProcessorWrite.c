/*
 * XREFs of NdisTestRWLockHeldByCurrentProcessorWrite @ 0x1400C5E60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall NdisTestRWLockHeldByCurrentProcessorWrite(__int64 a1)
{
  char v1; // bl

  v1 = 0;
  if ( *(struct _KTHREAD **)(a1 + 24) == KeGetCurrentThread() )
    return KeTestSpinLock((PKSPIN_LOCK)(a1 + 16)) == 0;
  return v1;
}
