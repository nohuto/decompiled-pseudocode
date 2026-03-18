/*
 * XREFs of ExpReleaseSvmAgentsLock @ 0x1406D19E4
 * Callers:
 *     ExpAllocateAsid @ 0x1406D143C (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x1406D16D4 (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x1406D2040 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x1406D2310 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x1406D23E0 (ExpSvmServicePageFault.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
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
