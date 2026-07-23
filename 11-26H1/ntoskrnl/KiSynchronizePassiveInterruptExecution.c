/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x1404FD660
 * Callers:
 *     KeSynchronizeExecution @ 0x140332860 (KeSynchronizeExecution.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

char __fastcall KiSynchronizePassiveInterruptExecution(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(*(PVOID *)(a1 + 128), Executive, 0, 0, 0LL);
  LOBYTE(a3) = guard_dispatch_icall_no_overrides(a3, v6);
  KeSetEvent(*(PRKEVENT *)(a1 + 128), 0, 0);
  KeLeaveCriticalRegion();
  return a3;
}
