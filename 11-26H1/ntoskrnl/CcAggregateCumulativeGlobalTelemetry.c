/*
 * XREFs of CcAggregateCumulativeGlobalTelemetry @ 0x140B404D0
 * Callers:
 *     CcPostVolumeTelemetry @ 0x140495AE0 (CcPostVolumeTelemetry.c)
 * Callees:
 *     <none>
 */

__int64 CcAggregateCumulativeGlobalTelemetry()
{
  __int64 result; // rax

  EmpParseLock.WaitBlock[2].Thread = (struct _KTHREAD *)((char *)EmpParseLock.WaitBlock[2].Thread
                                                       + (unsigned __int64)EmpParseLock.Timer.Dpc);
  EmpParseLock.WaitBlock[2].Object = (char *)EmpParseLock.WaitBlock[2].Object + *(_QWORD *)&EmpParseLock.Timer.Processor;
  EmpParseLock.WaitBlock[2].SparePtr = (char *)EmpParseLock.WaitBlock[2].SparePtr
                                     + (unsigned __int64)EmpParseLock.WaitBlock[0].WaitListEntry.Flink;
  EmpParseLock.WaitBlock[3].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[3].WaitListEntry.Flink
                                                                       + (unsigned __int64)EmpParseLock.WaitBlock[0].WaitListEntry.Blink);
  EmpParseLock.WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.WaitBlock[3].WaitListEntry.Blink
                                                                       + *(_QWORD *)&EmpParseLock.WaitBlockFill11[16]);
  *(_QWORD *)&EmpParseLock.WaitBlockFill11[160] += EmpParseLock.WaitBlock[0].Thread;
  EmpParseLock.WaitBlock[3].Thread = (struct _KTHREAD *)((char *)EmpParseLock.WaitBlock[3].Thread
                                                       + (unsigned __int64)EmpParseLock.WaitBlock[0].Object);
  EmpParseLock.Spare18 += (unsigned __int64)EmpParseLock.WaitBlock[0].SparePtr;
  EmpParseLock.LastXStateSaveDebugInfo += (unsigned __int64)EmpParseLock.WaitBlock[1].WaitListEntry.Flink;
  *(_QWORD *)&EmpParseLock.ThreadFlags2 += EmpParseLock.WaitBlock[1].WaitListEntry.Blink;
  EmpParseLock.QueueListEntry.Flink = (struct _LIST_ENTRY *)((char *)EmpParseLock.QueueListEntry.Flink
                                                           + *(_QWORD *)&EmpParseLock.WaitBlockFill11[64]);
  EmpParseLock.QueueListEntry.Blink = (struct _LIST_ENTRY *)((char *)EmpParseLock.QueueListEntry.Blink
                                                           + (unsigned __int64)EmpParseLock.WaitBlock[1].Thread);
  *(_QWORD *)&EmpParseLock.NextProcessor += EmpParseLock.WaitBlock[1].Object;
  EmpParseLock.Process = (_KPROCESS *)((char *)EmpParseLock.Process
                                     + (unsigned __int64)EmpParseLock.WaitBlock[1].SparePtr);
  EmpParseLock.UserAffinity = (_KAFFINITY_EX *)((char *)EmpParseLock.UserAffinity
                                              + (unsigned __int64)EmpParseLock.WaitBlock[2].WaitListEntry.Flink);
  *(_QWORD *)&EmpParseLock.UserAffinityPrimaryGroup += EmpParseLock.WaitBlock[2].WaitListEntry.Blink;
  result = *(_QWORD *)&EmpParseLock.WaitBlockFill11[112];
  EmpParseLock.AffinityVersion += *(_QWORD *)&EmpParseLock.WaitBlockFill11[112];
  return result;
}
