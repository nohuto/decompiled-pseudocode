/*
 * XREFs of MiGetUltraMdlContext @ 0x1404DACD8
 * Callers:
 *     MmMapMdl @ 0x1404DAA40 (MmMapMdl.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14021C410 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14024B630 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402C0AE0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x1402C0B20 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCreateUltraThreadContextHelper @ 0x1402D4790 (MiCreateUltraThreadContextHelper.c)
 *     MiInitializePageColorBase @ 0x140371BD0 (MiInitializePageColorBase.c)
 *     ExAllocatePoolMm @ 0x14039A310 (ExAllocatePoolMm.c)
 *     MiDeleteUltraMapContext @ 0x14045E5A0 (MiDeleteUltraMapContext.c)
 *     RtlpInterlockedPopEntrySList @ 0x140735860 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY MiGetUltraMdlContext()
{
  struct _KPRCB *CurrentPrcb; // rcx
  _KSCHEDULER_SUBNODE *SchedulerSubNode; // rax
  unsigned int v2; // ebx
  int v3; // ebp
  unsigned __int64 v4; // rdi
  unsigned int i; // esi
  PSLIST_ENTRY result; // rax
  void *PoolMm; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v9; // r9
  int v10; // esi
  KIRQL v11; // di
  __int128 v12; // [rsp+20h] [rbp-18h] BYREF

  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0LL;
  SchedulerSubNode = CurrentPrcb->SchedulerSubNode;
  v2 = CurrentPrcb->NodeRelativeTopologyIndex[0];
  v3 = SchedulerSubNode->Affinity.Reserved[0];
  v4 = qword_140E34D70 + ((unsigned __int64)SchedulerSubNode->Affinity.Reserved[0] << 9);
  for ( i = 0; i < 8; ++i )
  {
    v2 &= 7u;
    result = RtlpInterlockedPopEntrySList((PSLIST_HEADER)(v4 + ((unsigned __int64)v2 << 6)));
    if ( result )
      return result;
    LOBYTE(v2) = v2 + 1;
  }
  if ( (unsigned int)dword_140E34D68 >= 0x80 )
    return 0LL;
  PoolMm = (void *)ExAllocatePoolMm(
                     64LL,
                     0x28uLL,
                     1834314061,
                     KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0] | 0x80000000);
  if ( !PoolMm )
    return 0LL;
  MiInitializePageColorBase(0LL, 3, v3 + 1, (__int64)&v12);
  CurrentIrql = KeGetCurrentIrql();
  v9 = 4LL;
  if ( CurrentIrql != 2 )
    v9 = 0LL;
  if ( !(unsigned int)MiCreateUltraThreadContextHelper((__int64)PoolMm + 8, 3u, (__int64)&v12, v9) )
  {
    ExFreePoolWithTag(PoolMm, 0);
    return 0LL;
  }
  v10 = 0;
  if ( CurrentIrql == 2 )
  {
    v11 = 17;
    ExAcquireSpinLockExclusiveAtDpcLevel(&dword_140E34D28);
  }
  else
  {
    v11 = ExAcquireSpinLockExclusive(&dword_140E34D28);
  }
  if ( (unsigned int)dword_140E34D68 >= 0x80 )
    v10 = 1;
  else
    ++dword_140E34D68;
  if ( v11 == 17 )
    ExReleaseSpinLockExclusiveFromDpcLevel(&dword_140E34D28);
  else
    ExReleaseSpinLockExclusive(&dword_140E34D28, v11);
  if ( v10 )
  {
    MiDeleteUltraMapContext((__int64)PoolMm + 8, 3uLL);
    ExFreePoolWithTag(PoolMm, 0);
    return 0LL;
  }
  return (PSLIST_ENTRY)PoolMm;
}
