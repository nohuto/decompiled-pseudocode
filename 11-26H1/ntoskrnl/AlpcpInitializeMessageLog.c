/*
 * XREFs of AlpcpInitializeMessageLog @ 0x1407C4D74
 * Callers:
 *     AlpcpInitSystem @ 0x1407C3E88 (AlpcpInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeMessageLog(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  struct _LIST_ENTRY *Pool2; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rax
  void ***v13; // rcx
  _QWORD *StackLimit; // rax
  __int64 v15; // rax
  void **QuantumTarget; // rcx
  void ***v17; // rax

  v2 = 0;
  *(_QWORD *)&AlpcpMessageLogLock.Header.Lock = 0LL;
  AlpcpMessageLogLock.ThreadLock = (unsigned __int64)&AlpcpMessageLogLock.StackBase;
  AlpcpMessageLogLock.StackBase = &AlpcpMessageLogLock.StackBase;
  AlpcpMessageLogLock.StackLimit = &AlpcpMessageLogLock.InitialStack;
  AlpcpMessageLogLock.InitialStack = &AlpcpMessageLogLock.InitialStack;
  AlpcpMessageLogLock.QuantumTarget = (unsigned __int64)&AlpcpMessageLogLock.SListFaultAddress;
  AlpcpMessageLogLock.SListFaultAddress = &AlpcpMessageLogLock.SListFaultAddress;
  if ( a1 && a2 )
  {
    Pool2 = (struct _LIST_ENTRY *)ExAllocatePool2(0x100uLL);
    AlpcpMessageLogLock.Header.WaitListHead.Flink = Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v7 = 1024LL;
    do
    {
      Pool2->Blink = Pool2;
      Pool2->Flink = Pool2;
      ++Pool2;
      --v7;
    }
    while ( v7 );
    v8 = ExAllocatePool2(0x100uLL);
    if ( !v8 )
    {
      Flink = AlpcpMessageLogLock.Header.WaitListHead.Flink;
LABEL_9:
      ExFreePoolWithTag(Flink, 0);
      return 3221225626LL;
    }
    v10 = ExAllocatePool2(0x100uLL);
    if ( !v10 )
    {
      ExFreePoolWithTag(AlpcpMessageLogLock.Header.WaitListHead.Flink, 0);
      Flink = (struct _LIST_ENTRY *)v8;
      goto LABEL_9;
    }
    v11 = 0;
    if ( a1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (void ***)((v12 << 6) + v8);
        v13[7] = (void **)(v13 + 6);
        v13[6] = (void **)(v13 + 6);
        StackLimit = AlpcpMessageLogLock.StackLimit;
        if ( *(struct _KTHREAD **)AlpcpMessageLogLock.StackLimit != (struct _KTHREAD *)&AlpcpMessageLogLock.InitialStack )
          break;
        v13[1] = (void **)AlpcpMessageLogLock.StackLimit;
        ++v11;
        *v13 = &AlpcpMessageLogLock.InitialStack;
        *StackLimit = v13;
        v12 = v11;
        AlpcpMessageLogLock.StackLimit = v13;
        if ( v11 >= a1 )
          goto LABEL_16;
      }
LABEL_21:
      __fastfail(3u);
    }
LABEL_16:
    if ( a2 )
    {
      v15 = 0LL;
      while ( 1 )
      {
        QuantumTarget = (void **)AlpcpMessageLogLock.QuantumTarget;
        v17 = (void ***)(v10 + 120 * v15);
        if ( *(struct _KTHREAD **)AlpcpMessageLogLock.QuantumTarget != (struct _KTHREAD *)&AlpcpMessageLogLock.SListFaultAddress )
          break;
        *v17 = &AlpcpMessageLogLock.SListFaultAddress;
        ++v2;
        v17[1] = QuantumTarget;
        *QuantumTarget = v17;
        AlpcpMessageLogLock.QuantumTarget = (unsigned __int64)v17;
        v15 = v2;
        if ( v2 >= a2 )
          return 0LL;
      }
      goto LABEL_21;
    }
  }
  return 0LL;
}
