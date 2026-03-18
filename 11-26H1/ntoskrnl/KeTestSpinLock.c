/*
 * XREFs of KeTestSpinLock @ 0x140449B50
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140449AC0 (EtwpLockUnlockBufferList.c)
 *     HalpDmaMarkHiberAdapter @ 0x14050C790 (HalpDmaMarkHiberAdapter.c)
 *     KiDecodeMcaFault @ 0x140540440 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x1405C5AD0 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x1406C7000 (EtwpBugCheckMultiPartCallback.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall KeTestSpinLock(PKSPIN_LOCK SpinLock)
{
  if ( !*SpinLock )
    return 1;
  _mm_pause();
  return 0;
}
