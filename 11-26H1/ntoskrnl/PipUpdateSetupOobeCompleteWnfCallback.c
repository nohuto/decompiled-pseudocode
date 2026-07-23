/*
 * XREFs of PipUpdateSetupOobeCompleteWnfCallback @ 0x14079E9F0
 * Callers:
 *     <none>
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     ExQueryWnfStateData @ 0x1409C4360 (ExQueryWnfStateData.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

__int64 __fastcall PipUpdateSetupOobeCompleteWnfCallback(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  struct _WORK_QUEUE_ITEM *Pool2; // rax
  int v6; // [rsp+20h] [rbp-18h] BYREF
  _DWORD v7[5]; // [rsp+24h] [rbp-14h] BYREF
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  v7[0] = 0;
  v6 = 4;
  if ( (int)ExQueryWnfStateData(a1, &v8, v7, &v6) >= 0 && v6 == 4 )
  {
    if ( v7[0] )
    {
      PnpSetupOOBEInProgress = 0;
      Pool2 = (struct _WORK_QUEUE_ITEM *)ExAllocatePool2(0x40uLL);
      if ( Pool2 )
      {
        Pool2->Parameter = Pool2;
        Pool2->WorkerRoutine = PipOobeCompleteAsyncCallback;
        Pool2->List.Flink = 0LL;
        ExQueueWorkItem(Pool2, NormalWorkQueue);
      }
    }
  }
  return 0LL;
}
