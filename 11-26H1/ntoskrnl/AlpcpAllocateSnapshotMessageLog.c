/*
 * XREFs of AlpcpAllocateSnapshotMessageLog @ 0x1407C1C00
 * Callers:
 *     AlpcpUnlockMessage @ 0x1409C07A0 (AlpcpUnlockMessage.c)
 * Callees:
 *     <none>
 */

void *AlpcpAllocateSnapshotMessageLog()
{
  void *volatile result; // rax
  struct _LIST_ENTRY *Blink; // rax
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v3; // rdx
  struct _LIST_ENTRY *v4; // rcx
  struct _LIST_ENTRY *v5; // rdx
  void *volatile **v6; // rcx
  struct _LIST_ENTRY *v7; // r8
  void *volatile *StackBase; // r8
  struct _LIST_ENTRY *InitialStack; // rcx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = AlpcpMessageLogLock.StackLimit;
    if ( AlpcpMessageLogLock.StackLimit != &AlpcpMessageLogLock.StackLimit )
      break;
    Blink = AlpcpMessageLogLock.Header.WaitListHead.Blink;
    if ( (struct _LIST_ENTRY **)AlpcpMessageLogLock.Header.WaitListHead.Blink == &AlpcpMessageLogLock.Header.WaitListHead.Blink )
      return 0LL;
    if ( (struct _LIST_ENTRY **)AlpcpMessageLogLock.Header.WaitListHead.Blink->Blink != &AlpcpMessageLogLock.Header.WaitListHead.Blink )
      goto LABEL_19;
    Flink = AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink;
    if ( AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink->Blink != AlpcpMessageLogLock.Header.WaitListHead.Blink )
      goto LABEL_19;
    AlpcpMessageLogLock.Header.WaitListHead.Blink = AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink;
    Flink->Blink = (struct _LIST_ENTRY *)&AlpcpMessageLogLock.Header.WaitListHead.Blink;
    HIDWORD(Blink[2].Blink) = 0;
    v3 = Blink[1].Flink;
    if ( v3->Blink != &Blink[1] )
      goto LABEL_19;
    v4 = Blink[1].Blink;
    if ( v4->Flink != &Blink[1] )
      goto LABEL_19;
    v4->Flink = v3;
    v3->Blink = v4;
    v5 = Blink + 3;
    while ( 1 )
    {
      v6 = (void *volatile **)v5->Flink;
      if ( v5->Flink == v5 )
        break;
      if ( v6[1] != (void *volatile *)v5 )
        goto LABEL_19;
      v7 = (struct _LIST_ENTRY *)*v6;
      if ( *((void *volatile ***)*v6 + 1) != v6 )
        goto LABEL_19;
      v5->Flink = v7;
      v7->Blink = v5;
      StackBase = (void *volatile *)AlpcpMessageLogLock.StackBase;
      if ( *(struct _KTHREAD **)AlpcpMessageLogLock.StackBase != (struct _KTHREAD *)&AlpcpMessageLogLock.StackLimit )
        goto LABEL_19;
      *v6 = &AlpcpMessageLogLock.StackLimit;
      v6[1] = StackBase;
      *StackBase = v6;
      AlpcpMessageLogLock.StackBase = v6;
    }
    InitialStack = (struct _LIST_ENTRY *)AlpcpMessageLogLock.InitialStack;
    if ( *(struct _KTHREAD **)AlpcpMessageLogLock.InitialStack != (struct _KTHREAD *)&AlpcpMessageLogLock.QuantumTarget )
      goto LABEL_19;
    Blink->Flink = (struct _LIST_ENTRY *)&AlpcpMessageLogLock.QuantumTarget;
    Blink->Blink = InitialStack;
    InitialStack->Flink = Blink;
    AlpcpMessageLogLock.InitialStack = Blink;
  }
  if ( *((struct _KTHREAD **)AlpcpMessageLogLock.StackLimit + 1) != (struct _KTHREAD *)&AlpcpMessageLogLock.StackLimit
    || (v10 = *(_QWORD *)AlpcpMessageLogLock.StackLimit,
        *(void *volatile *)(*(_QWORD *)AlpcpMessageLogLock.StackLimit + 8LL) != AlpcpMessageLogLock.StackLimit) )
  {
LABEL_19:
    __fastfail(3u);
  }
  AlpcpMessageLogLock.StackLimit = *(void *volatile *)AlpcpMessageLogLock.StackLimit;
  *(_QWORD *)(v10 + 8) = &AlpcpMessageLogLock.StackLimit;
  return result;
}
