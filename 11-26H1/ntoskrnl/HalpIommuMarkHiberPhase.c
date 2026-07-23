/*
 * XREFs of HalpIommuMarkHiberPhase @ 0x140C0E870
 * Callers:
 *     HaliLocateHiberRanges @ 0x140C0E620 (HaliLocateHiberRanges.c)
 * Callees:
 *     PoSetHiberRange @ 0x1404A93F0 (PoSetHiberRange.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall HalpIommuMarkHiberPhase(PVOID MemoryMap)
{
  ULONG_PTR *i; // rbx
  struct _KTHREAD *j; // rbx
  void *volatile *k; // rsi

  for ( i = (ULONG_PTR *)HalpIommuList; i != &HalpIommuList; i = (ULONG_PTR *)*i )
  {
    if ( i[40] )
      guard_dispatch_icall_no_overrides((__int64)MemoryMap, i[2]);
  }
  if ( MemoryMap )
  {
    PoSetHiberRange(MemoryMap, 2u, &IommuInterfaceStateChangeCallbackPushLock.StateSaveArea, 8uLL, 0x496C6148u);
    for ( j = (struct _KTHREAD *)IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
          j != (struct _KTHREAD *)&IommuInterfaceStateChangeCallbackPushLock.SchedulingGroup;
          j = *(struct _KTHREAD **)&j->Header.Lock )
    {
      PoSetHiberRange(MemoryMap, 2u, j, 0x40uLL, 0x496C6148u);
      for ( k = (void *volatile *)j->StackLimit; k != &j->StackLimit; k = (void *volatile *)*k )
        PoSetHiberRange(MemoryMap, 2u, (PVOID)k, 0x1058uLL, 0x496C6148u);
    }
  }
}
