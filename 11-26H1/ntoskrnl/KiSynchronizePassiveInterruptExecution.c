/*
 * XREFs of KiSynchronizePassiveInterruptExecution @ 0x140503D90
 * Callers:
 *     KeSynchronizeExecution @ 0x140330830 (KeSynchronizeExecution.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
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
