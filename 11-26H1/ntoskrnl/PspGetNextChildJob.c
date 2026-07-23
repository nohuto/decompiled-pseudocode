/*
 * XREFs of PspGetNextChildJob @ 0x140A00044
 * Callers:
 *     PspEnumJobsAndProcessesInJobHierarchy @ 0x1409FFC10 (PspEnumJobsAndProcessesInJobHierarchy.c)
 * Callees:
 *     ObReferenceObjectSafeWithTag @ 0x140259C30 (ObReferenceObjectSafeWithTag.c)
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     ExAcquireFastResourceShared @ 0x140276050 (ExAcquireFastResourceShared.c)
 *     KiCheckForKernelApcDelivery @ 0x14027D0F0 (KiCheckForKernelApcDelivery.c)
 *     ExInitializeFastOwnerEntry @ 0x14042FF20 (ExInitializeFastOwnerEntry.c)
 *     ExReleaseFastResourceShared @ 0x14047F770 (ExReleaseFastResourceShared.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

_QWORD *__fastcall PspGetNextChildJob(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  _QWORD *v5; // rbp
  ULONG_PTR v6; // r12
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD **v9; // r14
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  $241382875694CED3D471BC5892DE3337 *v13; // rcx
  ULONG_PTR v15[10]; // [rsp+20h] [rbp-78h] BYREF

  memset_0(v15, 0, 0x48uLL);
  CurrentThread = KeGetCurrentThread();
  v5 = 0LL;
  ExInitializeFastOwnerEntry((__int64)v15);
  if ( CurrentThread )
    --CurrentThread->SpecialApcDisable;
  v6 = a1 + 56;
  ExAcquireFastResourceShared((__int64 *)(a1 + 56), (ULONG_PTR)v15, 1);
  v9 = (_QWORD **)(a1 + 1288);
  if ( a2 )
    v10 = (_QWORD *)a2[159];
  else
    v10 = *v9;
  while ( v10 != v9 )
  {
    if ( ObReferenceObjectSafeWithTag((__int64)(v10 - 159), 0x6E457350u) )
    {
      v5 = v10 - 159;
      break;
    }
    v10 = (_QWORD *)*v10;
  }
  ExReleaseFastResourceShared(v6, (ULONG_PTR)v15, v7, v8);
  if ( CurrentThread )
  {
    if ( CurrentThread->SpecialApcDisable++ == -1 )
    {
      v13 = &CurrentThread->152;
      if ( ($241382875694CED3D471BC5892DE3337 *)v13->ApcState.ApcListHead[0].Flink != v13 )
        KiCheckForKernelApcDelivery((__int64)v13, v11);
    }
  }
  if ( a2 )
    ObfDereferenceObjectWithTag(a2, 0x6E457350u);
  return v5;
}
