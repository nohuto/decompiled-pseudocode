/*
 * XREFs of KeTestSpinLock @ 0x140441C80
 * Callers:
 *     EtwpLockUnlockBufferList @ 0x140441BF0 (EtwpLockUnlockBufferList.c)
 *     HalpDmaMarkHiberAdapter @ 0x140506200 (HalpDmaMarkHiberAdapter.c)
 *     KiDecodeMcaFault @ 0x1405428C0 (KiDecodeMcaFault.c)
 *     BvgaAcquireLock @ 0x1405C8340 (BvgaAcquireLock.c)
 *     EtwpBugCheckMultiPartCallback @ 0x1406CAD00 (EtwpBugCheckMultiPartCallback.c)
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
