/*
 * XREFs of PpmTryAcquireLock @ 0x1404C2A18
 * Callers:
 *     PoLatencySensitivityHint @ 0x140532910 (PoLatencySensitivityHint.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x14030E7A0 (KeLeaveCriticalRegion.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037D0A0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x1403971A0 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
 */

char __fastcall PpmTryAcquireLock(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  char v2; // bl
  NTSTATUS v3; // eax
  struct _KTHREAD *v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER Timeout; // [rsp+48h] [rbp+10h] BYREF

  v6 = a1;
  CurrentThread = KeGetCurrentThread();
  v2 = 0;
  --CurrentThread->KernelApcDisable;
  Timeout.QuadPart = 0LL;
  KiSetSystemPriorityThread((ULONG_PTR)KeGetCurrentThread(), 22);
  v3 = KeWaitForSingleObject((PVOID)&PpmIdlePolicyLock.CycleTime, Executive, 0, 0, &Timeout);
  v4 = KeGetCurrentThread();
  if ( v3 )
  {
    LODWORD(v6) = 22;
    KiClearSystemPriority((ULONG_PTR)v4, (int *)&v6);
    KeLeaveCriticalRegion();
  }
  else
  {
    v2 = 1;
    PpmIdlePolicyLock.ThreadLock = (unsigned __int64)v4;
  }
  return v2;
}
