/*
 * XREFs of WheaAttemptPhysicalPageOffline @ 0x1408480E0
 * Callers:
 *     HalpMemoryErrorDeferredHandler @ 0x14058F0C8 (HalpMemoryErrorDeferredHandler.c)
 *     HalpPmemErrorDeferredHandler @ 0x14058F2A8 (HalpPmemErrorDeferredHandler.c)
 *     KiAltContextProcessMcheckAltReturn @ 0x1405FCB30 (KiAltContextProcessMcheckAltReturn.c)
 *     KiMcheckAlternateReturn @ 0x1405FCD70 (KiMcheckAlternateReturn.c)
 *     WheapExecuteRowFailureCheck @ 0x140849DB0 (WheapExecuteRowFailureCheck.c)
 *     WheapPfaMemoryCheck @ 0x14084A0EC (WheapPfaMemoryCheck.c)
 *     WheapPredictiveFailureAnalysis @ 0x140AC88D8 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140278560 (KeWaitForSingleObject.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     KeInitializeEvent @ 0x140466F30 (KeInitializeEvent.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1408487D0 (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptPhysicalPageOffline(__int64 a1, char a2, char a3, char a4, __int64 a5)
{
  unsigned __int64 v7; // rcx
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+40h] [rbp-11h] BYREF
  _QWORD v10[2]; // [rsp+60h] [rbp+Fh] BYREF
  char v11; // [rsp+70h] [rbp+1Fh]
  char v12; // [rsp+71h] [rbp+20h]
  __int16 v13; // [rsp+72h] [rbp+21h]
  __int128 v14; // [rsp+74h] [rbp+23h] BYREF
  __int64 Event_12; // [rsp+84h] [rbp+33h]
  int Event_20; // [rsp+8Ch] [rbp+3Bh]
  __int64 v17; // [rsp+90h] [rbp+3Fh]

  WorkItem.List.Blink = 0LL;
  v7 = (unsigned __int64)(unsigned int)a1 << 12;
  if ( KeGetCurrentThread()->PreviousMode != 1 || a4 )
    return WheapAttemptPhysicalPageOffline(v7, a1, 0, a2, a3, 0, a4, a5);
  v10[0] = v7;
  v10[1] = a1;
  v12 = a3;
  v14 = 0LL;
  v17 = a5;
  Event_12 = 0LL;
  Event_20 = 0;
  v11 = a2;
  v13 = 0;
  KeInitializeEvent((PRKEVENT)((char *)&v14 + 4), NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v10;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject((char *)&v14 + 4, Executive, 0, 0, 0LL);
  return (unsigned int)v14;
}
