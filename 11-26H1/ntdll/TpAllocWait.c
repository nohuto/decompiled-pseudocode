/*
 * XREFs of TpAllocWait @ 0x1800399E0
 * Callers:
 *     RtlRegisterWait @ 0x180039430 (RtlRegisterWait.c)
 *     EtwpRegisterTpNotificationOnce @ 0x18009052C (EtwpRegisterTpNotificationOnce.c)
 *     RtlpWnfRegisterTpNotification @ 0x180090B64 (RtlpWnfRegisterTpNotification.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180029A40 (RtlAcquireSRWLockExclusive.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     TppAdjustRunningThreadGoalWithLock @ 0x18002A1C8 (TppAdjustRunningThreadGoalWithLock.c)
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     TppWorkInitialize @ 0x180037E20 (TppWorkInitialize.c)
 *     TppCleanupGroupAddMember @ 0x180039110 (TppCleanupGroupAddMember.c)
 *     TppRaiseInvalidParameter @ 0x180088448 (TppRaiseInvalidParameter.c)
 *     NtClose @ 0x18015F020 (NtClose.c)
 *     NtCreateWaitCompletionPacket @ 0x180160870 (NtCreateWaitCompletionPacket.c)
 *     NtSetInformationWorkerFactory @ 0x180162470 (NtSetInformationWorkerFactory.c)
 */

NTSTATUS __cdecl TpAllocWait(
        PTP_WAIT *WaitReturn,
        PTP_WAIT_CALLBACK Callback,
        PVOID Context,
        PTP_CALLBACK_ENVIRON CallbackEnviron)
{
  int v5; // r15d
  _TP_WAIT *Heap_0; // rbx
  NTSTATUS WaitCompletionPacket; // esi
  unsigned int Flags; // r9d
  _TP_POOL *Pool; // rcx
  int v12; // eax
  __int64 v13; // r15
  unsigned __int8 *p_IdealProcessor; // r13
  unsigned __int8 Number; // cl
  int v16; // r12d
  unsigned __int16 Group; // r9
  int v18; // eax
  unsigned int i; // edx
  __int64 v20; // rax
  __int64 v21; // rax
  void *WaitPkt; // rcx
  void *WorkerFactory; // rcx
  unsigned __int16 v25; // [rsp+30h] [rbp-38h]
  void *retaddr; // [rsp+68h] [rbp+0h]
  int WorkerFactoryInformation; // [rsp+70h] [rbp+8h] BYREF

  v5 = (int)Context;
  if ( !WaitReturn
    || !Callback
    || CallbackEnviron && (CallbackEnviron->u.Flags & 0xFFFFFFFC) != 0
    || NtCurrentPeb()->Ldr->ShutdownInProgress )
  {
    TppRaiseInvalidParameter();
    return -1073741811;
  }
  else
  {
    Heap_0 = (_TP_WAIT *)RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, (TppHeapTag + 1835008) | 8, 0x1D8uLL);
    if ( !Heap_0 )
      return -1073741801;
    Heap_0->Timer.Work.CleanupGroupMember.AllocCaller.ReturnAddress = retaddr;
    WaitCompletionPacket = NtCreateWaitCompletionPacket(&Heap_0->WaitPkt, 1u, 0LL);
    if ( WaitCompletionPacket < 0
      || (!CallbackEnviron ? (Flags = 0) : (Flags = CallbackEnviron->u.Flags),
          WaitCompletionPacket = TppWorkInitialize(
                                   (__int64)Heap_0,
                                   v5,
                                   (int)CallbackEnviron,
                                   Flags,
                                   (__int64)&TppWaitpCleanupGroupMemberVFuncs,
                                   (__int64)&TppWaitpTaskVFuncs),
          WaitCompletionPacket < 0) )
    {
      WaitPkt = Heap_0->WaitPkt;
      if ( WaitPkt )
        NtClose(WaitPkt);
      RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, TppHeapTag + 1835008, Heap_0);
    }
    else
    {
      Pool = Heap_0->Timer.Work.CleanupGroupMember.Pool;
      v12 = _InterlockedExchangeAdd(&Pool->BindingCount, 1u);
      if ( v12 <= 0 && v12 + 1 > 0 )
      {
        WorkerFactory = Pool->WorkerFactory;
        WorkerFactoryInformation = 1;
        NtSetInformationWorkerFactory(WorkerFactory, WorkerFactoryBindingCount, &WorkerFactoryInformation, 4u);
      }
      Heap_0->Timer.Lock.Value = 0LL;
      Heap_0->Timer.WaitTimer = 1;
      if ( CallbackEnviron )
        Heap_0->Timer.Work.CleanupGroupMember.FinalizationCallback = CallbackEnviron->FinalizationCallback;
      if ( Heap_0->Timer.Work.CleanupGroupMember.CleanupGroup )
        TppCleanupGroupAddMember((__int64)Heap_0);
      v13 = (__int64)Heap_0->Timer.Work.CleanupGroupMember.Pool;
      Heap_0->Direct.Callback = (void (__fastcall *)(_TP_CALLBACK_INSTANCE *, _TP_DIRECT *, void *, _IO_STATUS_BLOCK *))TppWaitCompletion;
      WaitCompletionPacket = 0;
      p_IdealProcessor = &Heap_0->Direct.IdealProcessor;
      if ( v13 )
      {
        Number = NtCurrentTeb()->CurrentIdealProcessor.Number;
        v16 = TppNumberNodes;
        LOBYTE(WorkerFactoryInformation) = Number;
        Group = NtCurrentTeb()->CurrentIdealProcessor.Group;
        v18 = *(_DWORD *)(v13 + 440);
        v25 = Group;
        if ( !v18 )
          v18 = MEMORY[0x7FFE03C0];
        if ( *(_DWORD *)(v13 + 424) != v18 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(v13 + 72));
          TppAdjustRunningThreadGoalWithLock(v13);
          RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)(v13 + 72));
          Number = WorkerFactoryInformation;
          Group = v25;
        }
        for ( i = 0; i < TppNumberNodes; ++i )
        {
          v20 = *(_QWORD *)(v13 + 48);
          if ( *(_WORD *)(v20 + 16LL * (Group + TppMaximumGroups * i) + 8) == Group )
          {
            v21 = *(_QWORD *)(v20 + 16LL * (Group + TppMaximumGroups * i));
            if ( _bittest64(&v21, Number) )
            {
              v16 = i;
              break;
            }
          }
        }
        Heap_0->Direct.NumaNode = v16;
        if ( Heap_0 != (_TP_WAIT *)-460LL )
          *p_IdealProcessor = WorkerFactoryInformation;
      }
      else
      {
        Heap_0->Direct.NumaNode = 0;
        *p_IdealProcessor = 0;
      }
      Heap_0->Direct.Lock = 0LL;
      Heap_0->Direct.IoCompletionInformationList.Blink = &Heap_0->Direct.IoCompletionInformationList;
      Heap_0->Direct.IoCompletionInformationList.Flink = &Heap_0->Direct.IoCompletionInformationList;
      Heap_0->Direct.Task.Callbacks = (const _TP_TASK_CALLBACKS *)TppDirectTaskVFuncs;
      Heap_0->Direct.Task.NumaNode = Heap_0->Direct.NumaNode;
      Heap_0->Direct.Task.IdealProcessor = Heap_0->Direct.IdealProcessor;
      Heap_0->Timer.Work.CleanupGroupMember.Callback = Callback;
      *WaitReturn = Heap_0;
    }
    return WaitCompletionPacket;
  }
}
