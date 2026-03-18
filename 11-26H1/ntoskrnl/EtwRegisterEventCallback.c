/*
 * XREFs of EtwRegisterEventCallback @ 0x14082C950
 * Callers:
 *     <none>
 * Callees:
 *     PsGetCurrentServerSiloGlobals @ 0x1402150C0 (PsGetCurrentServerSiloGlobals.c)
 *     KeLeaveCriticalRegion @ 0x1402C3AE0 (KeLeaveCriticalRegion.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14091EFC0 (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpReleaseLoggerContext @ 0x14093D918 (EtwpReleaseLoggerContext.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwRegisterEventCallback(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // ebx
  __int64 v5; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  unsigned int v7; // r9d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v9; // rdi
  _QWORD *Pool2; // rax

  v4 = 0;
  Flink = PsGetCurrentServerSiloGlobals()[52].Flink;
  if ( !v5 || v5 != *(_QWORD *)&stru_140FC01F0.PriorityFloorSummary )
    return 3221225506LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v9 = EtwpAcquireLoggerContextByLoggerId(Flink, v7, 0LL);
  if ( v9 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
    if ( Pool2 )
    {
      Pool2[1] = a3;
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v9 + 1552), (signed __int64)Pool2, 0LL) )
      {
        v4 = -1073741811;
        ExFreePoolWithTag(Pool2, 0);
      }
    }
    else
    {
      v4 = -1073741670;
    }
    EtwpReleaseLoggerContext(v9, 0LL);
  }
  else
  {
    v4 = -1073741162;
  }
  KeLeaveCriticalRegion();
  return v4;
}
