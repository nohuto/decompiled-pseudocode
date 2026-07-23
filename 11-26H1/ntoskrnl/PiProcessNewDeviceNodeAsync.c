/*
 * XREFs of PiProcessNewDeviceNodeAsync @ 0x1409D92F8
 * Callers:
 *     PipProcessDevNodeTree @ 0x1409AE99C (PipProcessDevNodeTree.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x1404C445C (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PipSetDevNodeState @ 0x1404CC0D0 (PipSetDevNodeState.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1409B03D4 (PnpDeviceCompletionRequestCreate.c)
 *     PiProcessNewDeviceNode @ 0x1409D9370 (PiProcessNewDeviceNode.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PiProcessNewDeviceNodeAsync(ULONG_PTR a1, int a2)
{
  unsigned int v3; // esi
  bool v4; // bp
  __int64 i; // rdx
  __int64 Pool2; // rax
  struct _WORK_QUEUE_ITEM *v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rcx

  v3 = 259;
  if ( InitSafeBootMode )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  v4 = a2 == 0;
  if ( (PnpAsyncOptions & 4) == 0 || a2 )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  for ( i = *(_QWORD *)(a1 + 32); i; i = *(_QWORD *)(i + 24) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 8) + 16LL) & 0x1000) == 0 )
      return (unsigned int)PiProcessNewDeviceNode(a1);
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v8 = (struct _WORK_QUEUE_ITEM *)Pool2;
  if ( !Pool2 )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  v9 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, 772, Pool2);
  if ( v9 )
  {
    v8->Parameter = v9;
    v8->WorkerRoutine = (void (__fastcall *)(void *))PiProcessNewDeviceNodeWorker;
    v8->List.Flink = 0LL;
    PipSetDevNodeState(a1, 770);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v10, v9);
    ExQueueWorkItem(v8, DelayedWorkQueue);
  }
  else
  {
    v4 = 0;
    ExFreePoolWithTag(v8, 0);
  }
  if ( !v4 )
    return (unsigned int)PiProcessNewDeviceNode(a1);
  return v3;
}
