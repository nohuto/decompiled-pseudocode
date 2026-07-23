/*
 * XREFs of KiReleaseSecondarySignalListLock @ 0x1405F3428
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x1404A8C20 (KeDispatchSecondaryInterrupt.c)
 *     KiProcessSecondarySignalList @ 0x1405F3350 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 */

void __fastcall KiReleaseSecondarySignalListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlockFill11[64]);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  __writecr8(v1);
}
