/*
 * XREFs of HvlpSnapshotCrashArea @ 0x1405C0EF4
 * Callers:
 *     HvlCollectLivedump @ 0x1405C02A4 (HvlCollectLivedump.c)
 *     HvlCrashdumpCallbackRoutine @ 0x1405C0490 (HvlCrashdumpCallbackRoutine.c)
 *     HvlSkCrashdumpCallbackRoutine @ 0x1405C06C0 (HvlSkCrashdumpCallbackRoutine.c)
 * Callees:
 *     memmove @ 0x14073D480 (memmove.c)
 */

void *__fastcall HvlpSnapshotCrashArea()
{
  void *result; // rax

  if ( VslpReservedTransferLock.ApcStateFill[37] && VslpReservedTransferLock.WaitBlock[2].Thread )
  {
    if ( *(_QWORD *)&VslpReservedTransferLock.ApcStateFill[40] )
      return memmove(
               *(void **)&VslpReservedTransferLock.ApcStateFill[40],
               VslpReservedTransferLock.WaitBlock[2].Thread,
               LODWORD(VslpReservedTransferLock.WaitStatus));
  }
  return result;
}
