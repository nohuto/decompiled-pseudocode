/*
 * XREFs of AlpcpInitializeMessageLog @ 0x1407C1D14
 * Callers:
 *     AlpcpInitSystem @ 0x1407C1414 (AlpcpInitSystem.c)
 * Callees:
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall AlpcpInitializeMessageLog(unsigned __int64 a1, unsigned __int64 a2)
{
  unsigned int v2; // ebx
  _QWORD *Pool2; // rax
  __int64 v7; // rcx
  __int64 v8; // rbp
  void *ThreadLock; // rcx
  __int64 v10; // r8
  unsigned int v11; // edx
  __int64 v12; // rax
  unsigned __int64 **v13; // rcx
  _QWORD *InitialStack; // rax
  __int64 v15; // rax
  void *volatile *StackBase; // rcx
  void *volatile **v17; // rax

  v2 = 0;
  *(_QWORD *)&AlpcpMessageLogLock.Header.Lock = 0LL;
  AlpcpMessageLogLock.SListFaultAddress = &AlpcpMessageLogLock.Header.WaitListHead.Blink;
  AlpcpMessageLogLock.Header.WaitListHead.Blink = (struct _LIST_ENTRY *)&AlpcpMessageLogLock.Header.WaitListHead.Blink;
  AlpcpMessageLogLock.InitialStack = &AlpcpMessageLogLock.QuantumTarget;
  AlpcpMessageLogLock.QuantumTarget = (unsigned __int64)&AlpcpMessageLogLock.QuantumTarget;
  AlpcpMessageLogLock.StackBase = (void *)&AlpcpMessageLogLock.StackLimit;
  AlpcpMessageLogLock.StackLimit = (void *volatile)&AlpcpMessageLogLock.StackLimit;
  if ( a1 && a2 )
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    AlpcpMessageLogLock.ThreadLock = (unsigned __int64)Pool2;
    if ( !Pool2 )
      return 3221225626LL;
    v7 = 1024LL;
    do
    {
      Pool2[1] = Pool2;
      *Pool2 = Pool2;
      Pool2 += 2;
      --v7;
    }
    while ( v7 );
    v8 = ExAllocatePool2(0x100uLL);
    if ( !v8 )
    {
      ThreadLock = (void *)AlpcpMessageLogLock.ThreadLock;
LABEL_9:
      ExFreePoolWithTag(ThreadLock, 0);
      return 3221225626LL;
    }
    v10 = ExAllocatePool2(0x100uLL);
    if ( !v10 )
    {
      ExFreePoolWithTag((PVOID)AlpcpMessageLogLock.ThreadLock, 0);
      ThreadLock = (void *)v8;
      goto LABEL_9;
    }
    v11 = 0;
    if ( a1 )
    {
      v12 = 0LL;
      while ( 1 )
      {
        v13 = (unsigned __int64 **)((v12 << 6) + v8);
        v13[7] = (unsigned __int64 *)(v13 + 6);
        v13[6] = (unsigned __int64 *)(v13 + 6);
        InitialStack = AlpcpMessageLogLock.InitialStack;
        if ( *(struct _KTHREAD **)AlpcpMessageLogLock.InitialStack != (struct _KTHREAD *)&AlpcpMessageLogLock.QuantumTarget )
          break;
        v13[1] = (unsigned __int64 *)AlpcpMessageLogLock.InitialStack;
        ++v11;
        *v13 = &AlpcpMessageLogLock.QuantumTarget;
        *InitialStack = v13;
        v12 = v11;
        AlpcpMessageLogLock.InitialStack = v13;
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
        StackBase = (void *volatile *)AlpcpMessageLogLock.StackBase;
        v17 = (void *volatile **)(v10 + 120 * v15);
        if ( *(struct _KTHREAD **)AlpcpMessageLogLock.StackBase != (struct _KTHREAD *)&AlpcpMessageLogLock.StackLimit )
          break;
        *v17 = &AlpcpMessageLogLock.StackLimit;
        ++v2;
        v17[1] = StackBase;
        *StackBase = v17;
        AlpcpMessageLogLock.StackBase = v17;
        v15 = v2;
        if ( v2 >= a2 )
          return 0LL;
      }
      goto LABEL_21;
    }
  }
  return 0LL;
}
