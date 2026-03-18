/*
 * XREFs of ACPIEcStartDeviceCompletion @ 0x14005FF80
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 */

void __fastcall ACPIEcStartDeviceCompletion(__int64 a1, IRP *a2, int a3)
{
  struct _WORK_QUEUE_ITEM *v4; // rcx
  char v5; // di
  char v6; // bp
  char v7; // si
  unsigned int MinorFunction; // r14d
  int v9; // eax
  _LIST_ENTRY *v10; // rax
  const char *v11; // rcx
  const char *v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rax

  v4 = (struct _WORK_QUEUE_ITEM *)(a1 + 32);
  v5 = 0;
  v6 = a3;
  v7 = (char)a2;
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  a2->IoStatus.Status = a3;
  if ( a3 < 0 || (v9 = *(_DWORD *)(a1 + 368), v9 == 2) || v9 == 3 )
  {
    IofCompleteRequest(a2, 0);
    v11 = byte_140075A82;
    v12 = byte_140075A82;
    if ( a1 )
    {
      v13 = *(_QWORD *)(a1 + 8);
      v5 = a1;
      if ( (v13 & 0x200000000000LL) != 0 )
      {
        v11 = *(const char **)(a1 + 608);
        if ( (v13 & 0x400000000000LL) != 0 )
          v12 = *(const char **)(a1 + 616);
      }
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v14 = MinorFunction;
      if ( MinorFunction >= 0x1A )
        v14 = 26LL;
      WPP_RECORDER_SF_qsLqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        5u,
        0xAu,
        (__int64)&WPP_6947a9d768c13ba63b6caf26f9195928_Traceguids,
        v7,
        ACPIDispatchPnpTableNames[v14],
        v6,
        v5,
        v11,
        v12);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 368) = 2;
    v4->WorkerRoutine = (void (__fastcall *)(void *))ACPIEcStartDeviceWorker;
    v4->Parameter = v4;
    v4->List.Flink = 0LL;
    v10 = *(_LIST_ENTRY **)(a1 + 768);
    v4[1].List.Blink = (_LIST_ENTRY *)a2;
    v4[1].List.Flink = v10;
    ExQueueWorkItem(v4, DelayedWorkQueue);
  }
}
