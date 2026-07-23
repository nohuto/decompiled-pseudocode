/*
 * XREFs of PspApplyJobLimitsToProcess @ 0x140A94A08
 * Callers:
 *     PspApplyJobChainLimitsToProcess @ 0x140A94870 (PspApplyJobChainLimitsToProcess.c)
 *     PspSetJobLimitsProcessCallback @ 0x140A949B0 (PspSetJobLimitsProcessCallback.c)
 * Callees:
 *     KeSetQuantumProcess @ 0x1402028D4 (KeSetQuantumProcess.c)
 *     KeSetDisableQuantumProcess @ 0x140203380 (KeSetDisableQuantumProcess.c)
 *     PspSetProcessPriorityByClass @ 0x140518324 (PspSetProcessPriorityByClass.c)
 *     PspUpdatePebForAffinityChange @ 0x1409E5A34 (PspUpdatePebForAffinityChange.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x140A94B70 (PspUnlockJobMemoryLimitsShared.c)
 *     PspLockJobMemoryLimitsShared @ 0x140A94BE0 (PspLockJobMemoryLimitsShared.c)
 *     PspSetProcessAffinitySafe @ 0x140AFE330 (PspSetProcessAffinitySafe.c)
 */

void __fastcall PspApplyJobLimitsToProcess(struct _KPROCESS *a1, __int16 a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  unsigned __int64 v4; // rdi
  __int64 v6; // rax
  unsigned int v7; // esi
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = a1[1].Padding[3];
  LODWORD(v8) = 0;
  if ( (a2 & 0x20) == 0 && (*(_DWORD *)(v4 + 1056) & 0x20) != 0 )
  {
    HIBYTE(a1[1].KernelWaitTime) = *(_BYTE *)(v4 + 1100);
    PspSetProcessPriorityByClass(a1, BYTE2(a1[2].ContextSwitches) == 2);
  }
  if ( (a2 & 0x10) == 0
    && (*(_DWORD *)(v4 + 1056) & 0x10) != 0
    && (int)PspSetProcessAffinitySafe(a1, (__int64)&v8) >= 0
    && (_DWORD)v8 )
  {
    PspUpdatePebForAffinityChange((__int64)CurrentThread, (__int64)a1);
  }
  if ( (a2 & 0x100) == 0 )
  {
    PspLockJobMemoryLimitsShared(v4, CurrentThread);
    if ( (*(_DWORD *)(v4 + 1056) & 0x100) != 0 )
      v6 = *(_QWORD *)(v4 + 1016);
    else
      v6 = 0LL;
    *(_QWORD *)&a1[2].ProcessLock = v6;
    PspUnlockJobMemoryLimitsShared(v4, CurrentThread);
  }
  if ( (a2 & 0x80u) == 0 && HIBYTE(a1[1].KernelWaitTime) != 1 )
  {
    v7 = *(_DWORD *)(v4 + 1060);
    if ( v7 >= 0xA )
      v7 = *(_DWORD *)(v4 + 580);
    if ( PspUseJobSchedulingClasses )
      KeSetQuantumProcess((__int64)a1, *((_BYTE *)PspJobSchedulingClasses + v7));
    KeSetDisableQuantumProcess((__int64)a1, v7 == 9);
  }
}
