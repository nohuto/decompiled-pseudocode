/*
 * XREFs of WheapInitializeWorkQueue @ 0x1406DC0F0
 * Callers:
 *     WheaInitialize @ 0x140CEDE58 (WheaInitialize.c)
 * Callees:
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

LONG (__fastcall *WheapInitializeWorkQueue())(__int64 a1, __int64 a2)
{
  LONG (__fastcall *result)(__int64, __int64); // rax

  memset_0(&WheapConfigTableLock.QuantumTarget, 0, 0x88uLL);
  WheapConfigTableLock.InitialStack = &WheapConfigTableLock.QuantumTarget;
  WheapConfigTableLock.QuantumTarget = (unsigned __int64)&WheapConfigTableLock.QuantumTarget;
  WheapConfigTableLock.KernelStack = WheapWorkQueueDpcRoutine;
  WheapConfigTableLock.TrapFrame = (_KTRAP_FRAME *)WheapWorkQueueWorkerRoutine;
  result = WheapProcessWorkQueueItem;
  WheapConfigTableLock.ApcState.ApcListHead[0].Blink = (struct _LIST_ENTRY *)WheapProcessWorkQueueItem;
  WheapConfigTableLock.StackLimit = 0LL;
  LODWORD(WheapConfigTableLock.ThreadLock) = 275;
  WheapConfigTableLock.StateSaveArea = (_XSAVE_FORMAT *)&WheapConfigTableLock.QuantumTarget;
  *($C9C4F79064DE35237E3F199A7D1BD3E1 *)((char *)&WheapConfigTableLock.116 + 4) = 0LL;
  *(_QWORD *)&WheapConfigTableLock.CurrentRunTime = 0LL;
  WheapConfigTableLock.ApcState.ApcListHead[0].Flink = (struct _LIST_ENTRY *)&WheapConfigTableLock.QuantumTarget;
  *(_QWORD *)&WheapConfigTableLock.SystemCallNumber = 0LL;
  return result;
}
