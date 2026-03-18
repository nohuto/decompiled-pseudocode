/*
 * XREFs of ExpAcquireSvmAgentsLock @ 0x1406D13DC
 * Callers:
 *     ExpAllocateAsid @ 0x1406D143C (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x1406D16D4 (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x1406D2040 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x1406D2310 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x1406D23E0 (ExpSvmServicePageFault.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402B4630 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
    (PKSPIN_LOCK)&ExSaPageGroupDescriptorArrayLock.WaitBlock[0].Object,
    LockHandle);
  return CurrentIrql;
}
