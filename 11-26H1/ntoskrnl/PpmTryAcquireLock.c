/*
 * XREFs of PpmTryAcquireLock @ 0x1404C8FF4
 * Callers:
 *     PoLatencySensitivityHint @ 0x140530410 (PoLatencySensitivityHint.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     ?KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z @ 0x14037B2F0 (-KiClearSystemPriority@@YAXPEAU_KTHREAD@@PEAJ@Z.c)
 *     ?KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z @ 0x140395420 (-KiSetSystemPriorityThread@@YAXPEAU_KTHREAD@@JK@Z.c)
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
  v3 = KeWaitForSingleObject(stru_140F10070.Padding, Executive, 0, 0, &Timeout);
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
    stru_140F10070.SchedulerAssistLastYieldBoostTime = (__int64)v4;
  }
  return v2;
}
