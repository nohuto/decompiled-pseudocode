/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x1405F0988
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x1404AF590 (KeDispatchSecondaryInterrupt.c)
 *     KiProcessSecondarySignalList @ 0x1405F09E0 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x14032F2C0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KiAcquireSecondarySignalListLock(unsigned __int8 *a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 12 )
    __writecr8(0xCuLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12);
  *a1 = CurrentIrql;
  KxAcquireSpinLock((PKSPIN_LOCK)&KiDpcCorralLock.Timer.TimerListEntry.Blink);
}
