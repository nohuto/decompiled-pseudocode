/*
 * XREFs of ExpQueueWorkItem @ 0x140383B24
 * Callers:
 *     ExQueueWorkItemExFromIo @ 0x140203194 (ExQueueWorkItemExFromIo.c)
 *     ExQueueWorkItemToPrivatePool @ 0x140203F38 (ExQueueWorkItemToPrivatePool.c)
 *     ExQueueWorkItemEx @ 0x140203FD0 (ExQueueWorkItemEx.c)
 *     ExQueueWorkItemFromIo @ 0x140383910 (ExQueueWorkItemFromIo.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExQueueWorkItemToPartition @ 0x140384E80 (ExQueueWorkItemToPartition.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ExpPartitionCreateThreadIfNecessary @ 0x1402C1160 (ExpPartitionCreateThreadIfNecessary.c)
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline @ 0x140383FF4 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline.c)
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     MmGetNextNode @ 0x140456D80 (MmGetNextNode.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall ExpQueueWorkItem(__int64 a1, __int64 a2, int a3, unsigned int a4, int a5)
{
  int *v5; // r10
  char v7; // r15
  __int64 v8; // r12
  __int64 v10; // rsi
  unsigned __int8 CurrentIrql; // r14
  __int64 v12; // rdx
  int *v13; // r8
  unsigned int WorkSubQueueIndex; // r9d
  int v15; // r11d
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // edi
  PVOID *v20; // rsi
  __int64 v21; // r9
  unsigned int NextNode; // edx
  unsigned __int16 v24; // dx
  int v25; // ecx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int64 v29; // [rsp+44h] [rbp-1Ch] BYREF
  _DWORD v30[5]; // [rsp+4Ch] [rbp-14h]

  LODWORD(v5) = 0;
  v7 = 0;
  v8 = a3;
  v10 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
    LODWORD(v5) = 0;
  }
  v12 = KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0];
  if ( a4 >= (unsigned __int16)KeNumberNodes || a4 == (_DWORD)v12 )
  {
    v13 = (int *)KeNodeBlock[v12];
    if ( !v13 || v13 == &dword_140F26D28 )
      v13 = 0LL;
    WorkSubQueueIndex = KeGetCurrentPrcb()->WorkSubQueueIndex;
  }
  else
  {
    if ( (unsigned __int8)KeIsNodeInitialized((unsigned __int16)a4) )
      v13 = (int *)KeNodeBlock[(unsigned __int16)a4];
    else
      v13 = v5;
    WorkSubQueueIndex = v13[31];
    v13[31] = (WorkSubQueueIndex + 1) % v13[30];
  }
  v15 = a5;
  v16 = 0LL;
  HIDWORD(v29) = 0;
  *(_QWORD *)&v30[1] = 0LL;
  v30[0] = WorkSubQueueIndex;
  v28 = v10;
  while ( !v16 )
  {
    if ( (unsigned int)v5 >= v13[30] )
    {
      NextNode = MmGetNextNode(*(unsigned __int16 *)v13, (char *)&v29 + 4);
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_18;
      if ( (unsigned __int8)KeIsNodeInitialized((unsigned __int16)NextNode) )
        v13 = (int *)KeNodeBlock[v24];
      else
        v13 = 0LL;
      WorkSubQueueIndex = v13[31];
      v15 = a5;
      v10 = v28;
      LODWORD(v5) = 0;
      v13[31] = (WorkSubQueueIndex + 1) % v13[30];
    }
    if ( v13 )
    {
      v17 = *(unsigned __int16 *)v13;
      if ( *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 8 * v17) + 264LL) >= 2uLL )
      {
        v18 = *(_QWORD *)(*(_QWORD *)(v10 + 8)
                        + 8LL
                        * (WorkSubQueueIndex
                         + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72] * (v15 + 8 * (_DWORD)v17)));
        if ( (v18 & 1) == 0 )
        {
          if ( v18 )
          {
            v25 = *(_DWORD *)(v18 + 712) & 0x3FFF;
            if ( (*(_DWORD *)(v18 + 712) & 0x4000) != 0 )
              --v25;
            if ( v25 >= (2 * *(_DWORD *)(v18 + 716)) >> 1 )
            {
              v16 = 0LL;
              v26 = *(_QWORD *)(v10 + 8);
              v27 = WorkSubQueueIndex
                  + *(_DWORD *)&ExSaPageGroupDescriptorArrayLock.WaitBlockFill11[72]
                  * (v15 + 8 * *(unsigned __int16 *)v13);
              if ( (*(_QWORD *)(v26 + 8 * v27) & 1) == 0 )
                v16 = *(_QWORD *)(v26 + 8 * v27);
            }
          }
        }
      }
    }
    LODWORD(v5) = (_DWORD)v5 + 1;
    WorkSubQueueIndex = (WorkSubQueueIndex + 1) % v13[30];
    v30[0] = WorkSubQueueIndex;
    v30[1] = (_DWORD)v5;
  }
  v19 = *(_DWORD *)(v16 + 724);
  v20 = *(PVOID **)(v16 + 688);
  if ( (unsigned int)Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline()
    && *v20 == PspSystemPartition
    && v19 == 1 )
  {
    _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v16 + 744) + 8 * v8 + 16));
  }
  KeInsertPriQueue(v16, a2, (unsigned int)v8, v21, 0);
  ExpPartitionCreateThreadIfNecessary(*(_QWORD *)(v16 + 688), *(unsigned __int16 **)(v16 + 696), (_DWORD *)v16);
  v7 = 1;
LABEL_18:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v7;
}
