/*
 * XREFs of TpAllocTimer @ 0x180039180
 * Callers:
 *     RtlCreateTimer @ 0x180087900 (RtlCreateTimer.c)
 *     RtlpInitializeWnf @ 0x180090A74 (RtlpInitializeWnf.c)
 * Callees:
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpAllocTimer(
        PTP_TIMER *Timer,
        PTP_TIMER_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // ebp
  _TP_TIMER *Heap_0; // rbx
  unsigned int Flags; // r9d
  NTSTATUS result; // eax
  _TP_POOL *Pool; // rcx
  int v12; // eax
  void *WorkerFactory; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+50h] [rbp+8h] BYREF

  v5 = (int)Context;
  if ( !Timer
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap_0 = (_TP_TIMER *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 0x100000) | 8, 0x168uLL);
    if ( Heap_0 )
    {
      Heap_0->Work.CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
      if ( CallbackEnviron )
        Flags = CallbackEnviron->u.Flags;
      else
        Flags = 0;
      result = TppWorkInitialize(
                 (__int64)Heap_0,
                 v5,
                 (int)CallbackEnviron,
                 Flags,
                 (__int64)&TppTimerpCleanupGroupMemberVFuncs,
                 (__int64)&TppTimerpTaskVFuncs);
      if ( result >= 0 )
      {
        Pool = Heap_0->Work.CleanupGroupMember.Pool;
        v12 = _InterlockedExchangeAdd(&Pool->BindingCount, 1u);
        if ( v12 <= 0 && v12 + 1 > 0 )
        {
          WorkerFactory = Pool->WorkerFactory;
          WorkerFactoryInformation = 1;
          NtSetInformationWorkerFactory(WorkerFactory, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
        }
        Heap_0->Lock.Value = 0LL;
        Heap_0->WaitTimer = 0;
        if ( CallbackEnviron )
          Heap_0->Work.CleanupGroupMember.FinalizationCallback = CallbackEnviron->FinalizationCallback;
        if ( Heap_0->Work.CleanupGroupMember.CleanupGroup )
          TppCleanupGroupAddMember((__int64)Heap_0);
        Heap_0->Work.CleanupGroupMember.Callback = Callback;
        result = 0;
        *Timer = Heap_0;
      }
    }
    else
    {
      return -1073741801;
    }
  }
  return result;
}
