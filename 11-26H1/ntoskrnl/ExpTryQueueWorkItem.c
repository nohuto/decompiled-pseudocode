/*
 * XREFs of ExpTryQueueWorkItem @ 0x1402020DC
 * Callers:
 *     IoTryQueueWorkItem @ 0x1405CE2C0 (IoTryQueueWorkItem.c)
 * Callees:
 *     ExpValidateWorkItem @ 0x14020402C (ExpValidateWorkItem.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x140384058 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     ExpTypeToPriority @ 0x140384F80 (ExpTypeToPriority.c)
 *     ExpWorkQueueHealthMetricsEnabled @ 0x14052236C (ExpWorkQueueHealthMetricsEnabled.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExpWorkQueueUpdateHealthMetricsOnRemove @ 0x1406D4EC4 (ExpWorkQueueUpdateHealthMetricsOnRemove.c)
 */

char __fastcall ExpTryQueueWorkItem(__int64 a1, ULONG_PTR a2, unsigned int a3, unsigned int a4)
{
  char inserted; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r13
  unsigned __int8 CurrentIrql; // si
  char IsNodeInitialized; // al
  __int64 v13; // rdx
  __int64 v14; // rdi
  volatile unsigned int WorkSubQueueIndex; // ebx
  char v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rbx
  __int64 v19; // r8
  __int64 v21; // [rsp+30h] [rbp-30h] BYREF
  __int64 v22; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v23; // [rsp+40h] [rbp-20h]
  int v24; // [rsp+44h] [rbp-1Ch]
  __int64 v25; // [rsp+48h] [rbp-18h]
  int v26; // [rsp+50h] [rbp-10h]
  volatile unsigned int v27; // [rsp+54h] [rbp-Ch]
  __int64 v28; // [rsp+58h] [rbp-8h]

  v21 = 0LL;
  inserted = 0;
  ExpValidateWorkItem(a2);
  v10 = (int)ExpTypeToPriority(a3);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v8) = 2;
    LOBYTE(v9) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v9, v8);
  }
  IsNodeInitialized = KeIsNodeInitialized(KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
  v14 = KeNodeBlock[v13] & -(__int64)(IsNodeInitialized != 0);
  WorkSubQueueIndex = KeGetCurrentPrcb()->WorkSubQueueIndex;
  v16 = ExpWorkQueueHealthMetricsEnabled(a1, a4);
  v25 = v14;
  v22 = a1;
  v23 = a4;
  v24 = 0;
  v28 = 0LL;
  v26 = 0;
  v27 = WorkSubQueueIndex;
  while ( !(unsigned int)ExpEnumerateNextActiveWorkSubQueue(&v22, &v21) )
  {
    v18 = v21;
    if ( v16 )
      _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(v21 + 744) + 8 * v10 + 16));
    inserted = KeInsertPriQueue(v18, a2, v10, 0, 2);
    if ( inserted )
      break;
    if ( v16 )
    {
      LOBYTE(v19) = 1;
      ExpWorkQueueUpdateHealthMetricsOnRemove(v18, a2, v19);
    }
  }
  if ( KiIrqlFlags )
  {
    LOBYTE(v17) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v17);
  }
  __writecr8(CurrentIrql);
  return inserted;
}
