/*
 * XREFs of KiAcquireSecondarySignalListLock @ 0x1405F32F8
 * Callers:
 *     KeDispatchSecondaryInterrupt @ 0x1404A8C20 (KeDispatchSecondaryInterrupt.c)
 *     KiProcessSecondarySignalList @ 0x1405F3350 (KiProcessSecondarySignalList.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
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
  KxAcquireSpinLock((PKSPIN_LOCK)&KiDpcCorralLock.WaitBlockFill11[64]);
}
