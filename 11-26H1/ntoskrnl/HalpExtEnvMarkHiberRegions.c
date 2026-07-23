/*
 * XREFs of HalpExtEnvMarkHiberRegions @ 0x14050ED24
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C0E620 (HaliLocateHiberRanges.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x140309520 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140331330 (KeAcquireSpinLockRaiseToDpc.c)
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 */

void __fastcall HalpExtEnvMarkHiberRegions(PVOID MemoryMap)
{
  struct _LIST_ENTRY *i; // rbx
  KIRQL v3; // al
  struct _KTHREAD *Thread; // rbx
  KIRQL v5; // si

  if ( MemoryMap )
  {
    v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr);
    Thread = IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].Thread;
    v5 = v3;
    while ( Thread != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[72] )
    {
      PoSetHiberRange(MemoryMap, 2u, &Thread->Header.WaitListHead.Blink, 8uLL, 0x496C6148u);
      Thread = *(struct _KTHREAD **)&Thread->Header.Lock;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)&IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].SparePtr, v5);
  }
  else
  {
    for ( i = IommuInterfaceStateChangeCallbackPushLock.WaitBlock[1].WaitListEntry.Blink;
          i != (struct _LIST_ENTRY *)&IommuInterfaceStateChangeCallbackPushLock.WaitBlockFill11[56];
          i = i->Flink )
    {
      PoSetHiberRange(0LL, 0x10000u, i[1].Flink, (ULONG_PTR)i[2].Blink, 0x496C6148u);
    }
  }
}
