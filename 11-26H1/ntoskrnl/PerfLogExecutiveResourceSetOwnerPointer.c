/*
 * XREFs of PerfLogExecutiveResourceSetOwnerPointer @ 0x1406CAF5C
 * Callers:
 *     ExpSetResourceOwnerPointerEx @ 0x14042DC6C (ExpSetResourceOwnerPointerEx.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x14048FC20 (EtwpGetTrackingLockSlotForThread.c)
 */

struct _KTHREAD *__fastcall PerfLogExecutiveResourceSetOwnerPointer(int a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  struct _KTHREAD *result; // rax
  _QWORD v6[2]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v7[3]; // [rsp+40h] [rbp-30h] BYREF
  int v8; // [rsp+58h] [rbp-18h]
  unsigned int CurrentRunTime; // [rsp+5Ch] [rbp-14h]
  __int64 v10; // [rsp+60h] [rbp-10h]
  int v11; // [rsp+68h] [rbp-8h]
  int v12; // [rsp+6Ch] [rbp-4h]

  CurrentPrcb = KeGetCurrentPrcb();
  v6[1] = 48LL;
  ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsCount;
  v11 = a1;
  v10 = a2;
  memset(v7, 0, sizeof(v7));
  v8 = 0;
  v12 = 0;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v6[0] = v7;
  EtwTraceKernelEvent((int)v6, 1, 0x20020000u, 1323, 23074818);
  result = KeGetCurrentThread();
  if ( result[1].WaitBlock[0].Object )
  {
    result = (struct _KTHREAD *)EtwpGetTrackingLockSlotForThread(a2, a1 & 0xFFFF0000);
    if ( result )
    {
      if ( LODWORD(result->QuantumTarget) )
      {
        ++CurrentPrcb->SynchCounters.ExEtwSynchTrackingNotificationsAccountedCount;
        result->Header.WaitListHead.Blink = 0LL;
        *(void **)((char *)&result->SListFaultAddress + 4) = 0LL;
        HIDWORD(result->QuantumTarget) = 0;
        *(_QWORD *)&result->Header.Lock = 0LL;
        result->Header.WaitListHead.Flink = 0LL;
        LODWORD(result->SListFaultAddress) = 0;
        HIDWORD(result->InitialStack) = 0;
      }
      else
      {
        HIDWORD(result->SListFaultAddress) = 0;
      }
    }
  }
  return result;
}
