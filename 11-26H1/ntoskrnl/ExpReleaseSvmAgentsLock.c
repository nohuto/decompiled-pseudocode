/*
 * XREFs of ExpReleaseSvmAgentsLock @ 0x1406D5A14
 * Callers:
 *     ExpAllocateAsid @ 0x1406D546C (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x1406D5704 (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x1406D6070 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x1406D6340 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x1406D6410 (ExpSvmServicePageFault.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 */

void __fastcall ExpReleaseSvmAgentsLock(struct _KLOCK_QUEUE_HANDLE *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  if ( (_BYTE)v2 != 15 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    __writecr8(v2);
  }
}
