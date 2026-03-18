/*
 * XREFs of KiReleaseSecondarySignalListLock @ 0x1405F0AB8
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x1404AF590 (KeDispatchSecondaryInterrupt.c)
 *     KiProcessSecondarySignalList @ 0x1405F09E0 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxReleaseSpinLock @ 0x1402BDEF0 (KxReleaseSpinLock.c)
 */

void __fastcall KiReleaseSecondarySignalListLock(unsigned __int8 a1)
{
  unsigned __int64 v1; // rbx

  v1 = a1;
  KxReleaseSpinLock((PKSPIN_LOCK)&KiDpcCorralLock.Timer.TimerListEntry.Blink);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v1);
  __writecr8(v1);
}
