/*
 * XREFs of AlpcpAllocateMessageLog @ 0x140B13C3C
 * Callers:
 *     AlpcpEnterAllocationEventMessageLog @ 0x140B13B20 (AlpcpEnterAllocationEventMessageLog.c)
 * Callees:
 *     <none>
 */

unsigned __int64 AlpcpAllocateMessageLog()
{
  unsigned __int64 result; // rax
  __int64 v1; // rcx
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rcx
  void *volatile ***v5; // rdx
  void *volatile **v6; // rcx
  void *volatile **v7; // r8
  void *volatile *StackBase; // r8

  result = AlpcpMessageLogLock.QuantumTarget;
  if ( (unsigned __int64 *)AlpcpMessageLogLock.QuantumTarget != &AlpcpMessageLogLock.QuantumTarget )
  {
    if ( *(struct _KTHREAD **)(AlpcpMessageLogLock.QuantumTarget + 8) == (struct _KTHREAD *)&AlpcpMessageLogLock.QuantumTarget )
    {
      v1 = *(_QWORD *)AlpcpMessageLogLock.QuantumTarget;
      if ( *(_QWORD *)(*(_QWORD *)AlpcpMessageLogLock.QuantumTarget + 8LL) == AlpcpMessageLogLock.QuantumTarget )
      {
        AlpcpMessageLogLock.QuantumTarget = *(_QWORD *)AlpcpMessageLogLock.QuantumTarget;
        *(_QWORD *)(v1 + 8) = &AlpcpMessageLogLock.QuantumTarget;
        return result;
      }
    }
LABEL_6:
    __fastfail(3u);
  }
  result = (unsigned __int64)AlpcpMessageLogLock.Header.WaitListHead.Blink;
  if ( (struct _LIST_ENTRY **)AlpcpMessageLogLock.Header.WaitListHead.Blink == &AlpcpMessageLogLock.Header.WaitListHead.Blink )
    return 0LL;
  if ( (struct _LIST_ENTRY **)AlpcpMessageLogLock.Header.WaitListHead.Blink->Blink != &AlpcpMessageLogLock.Header.WaitListHead.Blink )
    goto LABEL_6;
  Flink = AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink;
  if ( AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink->Blink != AlpcpMessageLogLock.Header.WaitListHead.Blink )
    goto LABEL_6;
  AlpcpMessageLogLock.Header.WaitListHead.Blink = AlpcpMessageLogLock.Header.WaitListHead.Blink->Flink;
  Flink->Blink = (struct _LIST_ENTRY *)&AlpcpMessageLogLock.Header.WaitListHead.Blink;
  *(_DWORD *)(result + 44) = 0;
  v3 = *(_QWORD *)(result + 16);
  if ( *(_QWORD *)(v3 + 8) != result + 16 )
    goto LABEL_6;
  v4 = *(_QWORD **)(result + 24);
  if ( *v4 != result + 16 )
    goto LABEL_6;
  *v4 = v3;
  v5 = (void *volatile ***)(result + 48);
  *(_QWORD *)(v3 + 8) = v4;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (void *volatile **)v5 )
      return result;
    if ( v6[1] != (void *volatile *)v5 )
      goto LABEL_6;
    v7 = (void *volatile **)*v6;
    if ( *((void *volatile ***)*v6 + 1) != v6 )
      goto LABEL_6;
    *v5 = v7;
    v7[1] = (void *volatile *)v5;
    StackBase = (void *volatile *)AlpcpMessageLogLock.StackBase;
    if ( *(struct _KTHREAD **)AlpcpMessageLogLock.StackBase != (struct _KTHREAD *)&AlpcpMessageLogLock.StackLimit )
      goto LABEL_6;
    *v6 = &AlpcpMessageLogLock.StackLimit;
    v6[1] = StackBase;
    *StackBase = v6;
    AlpcpMessageLogLock.StackBase = v6;
  }
}
