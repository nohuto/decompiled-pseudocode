/*
 * XREFs of PspCallJobHierarchyCallbacks @ 0x1409FFE88
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PspUnlockJobExclusive @ 0x1409FF694 (PspUnlockJobExclusive.c)
 *     PspLockJobExclusive @ 0x140A00154 (PspLockJobExclusive.c)
 */

__int64 __fastcall PspCallJobHierarchyCallbacks(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v7; // r15
  __int64 v10; // r8
  __int64 v11; // r9
  struct _KTHREAD *CurrentThread; // rdi
  unsigned int v13; // ebx
  int v14; // esi
  _QWORD *i; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  ULONG_PTR v20[10]; // [rsp+20h] [rbp-78h] BYREF

  v7 = a3;
  memset_0(v20, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v13 = 0;
  v14 = 0;
  if ( !a2 && !a4 )
    goto LABEL_17;
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
    {
      PspLockJobExclusive(a1, CurrentThread);
    }
    else
    {
      ExInitializeFastOwnerEntry((__int64)v20);
      if ( CurrentThread )
        --CurrentThread->SpecialApcDisable;
      ExAcquireFastResourceShared((__int64 *)(a1 + 56), (ULONG_PTR)v20, 1);
    }
  }
  if ( !a2 || (v14 = guard_dispatch_icall_no_overrides(a1, a5), v14 >= 0) )
  {
    if ( a4 )
    {
      for ( i = *(_QWORD **)(a1 + 40); i != (_QWORD *)(a1 + 40); i = (_QWORD *)*i )
      {
        v14 = guard_dispatch_icall_no_overrides((__int64)(i - 107), a5);
        if ( v14 < 0 )
          break;
      }
      v7 = a3;
    }
  }
  if ( (a6 & 1) == 0 )
  {
    if ( (a6 & 4) != 0 )
    {
      PspUnlockJobExclusive(a1, (__int64)CurrentThread, v10, v11);
    }
    else
    {
      ExReleaseFastResourceShared(a1 + 56, (ULONG_PTR)v20, v10, v11);
      if ( CurrentThread )
      {
        if ( CurrentThread->SpecialApcDisable++ == -1
          && ($241382875694CED3D471BC5892DE3337 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
        {
          KiCheckForKernelApcDelivery(v18, v17);
        }
      }
    }
  }
  if ( v14 < 0 )
  {
    if ( v14 != -1073741536 )
      return (unsigned int)v14;
    return v13;
  }
  else
  {
LABEL_17:
    if ( v7 )
      return (unsigned int)guard_dispatch_icall_no_overrides(a1, a5);
  }
  return (unsigned int)v14;
}
