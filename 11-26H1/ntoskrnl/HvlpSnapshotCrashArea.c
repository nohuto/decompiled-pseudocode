/*
 * XREFs of HvlpSnapshotCrashArea @ 0x1405C3764
 * Callers:
 *     HvlCollectLivedump @ 0x1405C2B14 (HvlCollectLivedump.c)
 *     HvlCrashdumpCallbackRoutine @ 0x1405C2D00 (HvlCrashdumpCallbackRoutine.c)
 *     HvlSkCrashdumpCallbackRoutine @ 0x1405C2F30 (HvlSkCrashdumpCallbackRoutine.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 */

void *__fastcall HvlpSnapshotCrashArea()
{
  void *result; // rax

  if ( BYTE6(VslpReservedTransferLock.Queue) && VslpReservedTransferLock.WaitBlock[3].Thread )
  {
    if ( VslpReservedTransferLock.Teb )
      return memmove(
               VslpReservedTransferLock.Teb,
               VslpReservedTransferLock.WaitBlock[3].Thread,
               LODWORD(VslpReservedTransferLock.RelativeTimerBias));
  }
  return result;
}
