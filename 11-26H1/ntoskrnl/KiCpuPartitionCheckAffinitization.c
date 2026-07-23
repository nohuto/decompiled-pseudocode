/*
 * XREFs of KiCpuPartitionCheckAffinitization @ 0x1405F6B2C
 * Callers:
 *     KeStartThread @ 0x140201AAC (KeStartThread.c)
 *     KiSetLegacyAffinityThread @ 0x14025BD0C (KiSetLegacyAffinityThread.c)
 *     KeSetUserGroupAffinityThread @ 0x1402F56D4 (KeSetUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x14037BF70 (KeSetSystemGroupAffinityThread.c)
 *     HalpTimerStallExecutionProcessor @ 0x14037D7D0 (HalpTimerStallExecutionProcessor.c)
 *     KeStallExecutionProcessor @ 0x14037DCA0 (KeStallExecutionProcessor.c)
 *     KeSetUserAffinityThread @ 0x1403F0B04 (KeSetUserAffinityThread.c)
 *     KeSetAffinityProcess @ 0x140505754 (KeSetAffinityProcess.c)
 *     KeSetSystemMultipleGroupAffinityThread @ 0x140509604 (KeSetSystemMultipleGroupAffinityThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ?RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x140253210 (-RtlpCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     ?RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z @ 0x140253CAC (-RtlpAndAffinityExNoResult@@YAKPEAU_KAFFINITY_EX@@0@Z.c)
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x1402D2610 (ExAcquireRundownProtection_0.c)
 *     KxReleaseSpinLock @ 0x140308BB0 (KxReleaseSpinLock.c)
 *     ExSaDecodeHandle @ 0x14030C290 (ExSaDecodeHandle.c)
 *     KxAcquireSpinLock @ 0x1403312F0 (KxAcquireSpinLock.c)
 *     KeQueryCpuSetsProcess @ 0x14045BE9C (KeQueryCpuSetsProcess.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceCpuPartitionAffinityViolation @ 0x1406C825C (EtwTraceCpuPartitionAffinityViolation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall KiCpuPartitionCheckAffinitization(__int64 a1, int a2, struct _KAFFINITY_EX *a3, unsigned __int8 a4)
{
  __int64 v4; // rbx
  unsigned __int8 v5; // r12
  unsigned __int8 CurrentIrql; // si
  struct _KAFFINITY_EX **v9; // r13
  struct _KAFFINITY_EX *v10; // rdi
  __int64 v11; // rbx
  struct _KAFFINITY_EX *v12; // r12
  unsigned __int16 v13; // cx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 result; // rax

  v4 = (unsigned __int16)KiMaximumGroups;
  v5 = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  if ( ExAcquireRundownProtection_0(&KiCpuPartitionLogPerProcessorBufferRundown) )
  {
    if ( KiCpuPartitionLogPerProcessorBuffer == -1 )
    {
LABEL_19:
      ExReleaseRundownProtection_0(&KiCpuPartitionLogPerProcessorBufferRundown);
      goto LABEL_20;
    }
    v9 = (struct _KAFFINITY_EX **)ExSaDecodeHandle(KiCpuPartitionLogPerProcessorBuffer);
    v10 = *v9;
    v10->Reserved = 0;
    v10->Count = 1;
    v10->Size = v4;
    memset_0(&v10->8, 0, 8 * v4);
    if ( *(_QWORD *)(a1 + 432) == a1 + 432 )
    {
      KxAcquireSpinLock((PKSPIN_LOCK)(KiSystemCpuPartition + 8));
      v11 = KiSystemCpuPartition;
      RtlpCopyAffinityEx(v10, v10->Size, *(struct _KAFFINITY_EX **)KiSystemCpuPartition);
      KxReleaseSpinLock((PKSPIN_LOCK)(v11 + 8));
      goto LABEL_17;
    }
    v12 = v9[1];
    memset_0(v12, 0, 8 * v4);
    KeQueryCpuSetsProcess(a1, (__int64)v12, v4, 1u);
    v13 = 0;
    if ( !(_WORD)v4 )
    {
LABEL_16:
      v5 = a4;
LABEL_17:
      if ( !(unsigned int)RtlpAndAffinityExNoResult(v10, a3) )
        EtwTraceCpuPartitionAffinityViolation(v5, a1, a2, (_DWORD)a3, (__int64)v9);
      goto LABEL_19;
    }
    v14 = 0LL;
    while ( 1 )
    {
      v15 = *(_QWORD *)((char *)&v12->Count + v14 * 8);
      if ( v10->Count > v13 )
        goto LABEL_14;
      if ( v10->Size > v13 )
        break;
LABEL_15:
      ++v13;
      ++v14;
      if ( v13 >= (unsigned __int16)v4 )
        goto LABEL_16;
    }
    v10->Count = v13 + 1;
LABEL_14:
    v10->Bitmap[v14] |= v15;
    goto LABEL_15;
  }
LABEL_20:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
