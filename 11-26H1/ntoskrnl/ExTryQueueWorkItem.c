/*
 * XREFs of ExTryQueueWorkItem @ 0x140383E20
 * Callers:
 *     PopFxQueueWorkItem @ 0x1403966C0 (PopFxQueueWorkItem.c)
 *     PopPepProcessEvent @ 0x1403B9A00 (PopPepProcessEvent.c)
 *     PopPepRequestWork @ 0x1403BB1C8 (PopPepRequestWork.c)
 *     PopPepComponentSetLatency @ 0x1403BB494 (PopPepComponentSetLatency.c)
 *     PopFxRequestWorkerInternal @ 0x1403BBCF4 (PopFxRequestWorkerInternal.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeInsertPriQueue @ 0x140383270 (KeInsertPriQueue.c)
 *     Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline @ 0x140383FF4 (Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline.c)
 *     KeIsNodeInitialized @ 0x14038402C (KeIsNodeInitialized.c)
 *     ExpEnumerateNextActiveWorkSubQueue @ 0x140384058 (ExpEnumerateNextActiveWorkSubQueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

char __fastcall ExTryQueueWorkItem(_QWORD *BugCheckParameter2, __int64 a2)
{
  __int64 v3; // rcx
  char inserted; // r15
  __int64 v5; // r13
  ULONG_PTR v6; // r9
  unsigned int v7; // r12d
  unsigned __int8 CurrentIrql; // r14
  char IsNodeInitialized; // al
  __int64 v10; // rdx
  __int64 v11; // rdi
  volatile unsigned int WorkSubQueueIndex; // ebx
  _QWORD v14[3]; // [rsp+30h] [rbp-30h] BYREF
  int v15; // [rsp+48h] [rbp-18h]
  volatile unsigned int v16; // [rsp+4Ch] [rbp-14h]
  __int64 v17; // [rsp+50h] [rbp-10h]
  __int64 v18; // [rsp+90h] [rbp+30h] BYREF

  v3 = 0LL;
  v18 = 0LL;
  inserted = 0;
  v5 = *((_QWORD *)PspSystemPartition + 2);
  if ( *BugCheckParameter2 )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)BugCheckParameter2, (int)a2, 0LL);
  if ( (unsigned int)(a2 - 7) <= 0x18 || (int)a2 >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)BugCheckParameter2, (int)a2, 0LL);
  v6 = BugCheckParameter2[2];
  if ( v6 < 0xFFFF800000000000uLL )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)BugCheckParameter2, v6, 0LL);
  if ( (unsigned int)a2 >= 7 )
    v7 = a2 - 32;
  else
    v7 = ExpBuiltinPriorities[(int)a2];
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, a2);
  }
  IsNodeInitialized = KeIsNodeInitialized(KeGetCurrentPrcb()->SchedulerSubNode->Affinity.Reserved[0]);
  v11 = KeNodeBlock[v10] & -(__int64)(IsNodeInitialized != 0);
  WorkSubQueueIndex = KeGetCurrentPrcb()->WorkSubQueueIndex;
  Feature_WorkQueueShardingWithinNodes__private_IsEnabledNoReportingNoInline();
  v14[0] = v5;
  v15 = 0;
  v14[1] = 0LL;
  v17 = 0LL;
  v14[2] = v11;
  v16 = WorkSubQueueIndex;
  do
  {
    if ( (unsigned int)ExpEnumerateNextActiveWorkSubQueue(v14, &v18) )
      break;
    inserted = KeInsertPriQueue(v18, (__int64)BugCheckParameter2, v7, 0LL, 2);
  }
  while ( !inserted );
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return inserted;
}
