/*
 * XREFs of ExpAcquireSvmAgentsLock @ 0x1406D540C
 * Callers:
 *     ExpAllocateAsid @ 0x1406D546C (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x1406D5704 (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x1406D6070 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x1406D6340 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x1406D6410 (ExpSvmServicePageFault.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402FF300 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall ExpAcquireSvmAgentsLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( KeGetCurrentIrql() < 0xFu )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 15 )
      __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(
    (PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].WaitListEntry.Blink,
    LockHandle);
  return CurrentIrql;
}
