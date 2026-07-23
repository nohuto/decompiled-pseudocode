/*
 * XREFs of AlpcpAllocateSnapshotMessageLog @ 0x1407C4C60
 * Callers:
 *     AlpcpUnlockMessage @ 0x140991780 (AlpcpUnlockMessage.c)
 * Callees:
 *     <none>
 */

void *AlpcpAllocateSnapshotMessageLog()
{
  void *result; // rax
  char *StackBase; // rax
  __int64 v2; // rcx
  char **v3; // rdx
  void **v4; // rcx
  void ****v5; // rdx
  void ***v6; // rcx
  void **v7; // r8
  void **QuantumTarget; // r8
  _QWORD *StackLimit; // rcx
  __int64 v10; // rcx

  while ( 1 )
  {
    result = AlpcpMessageLogLock.SListFaultAddress;
    if ( AlpcpMessageLogLock.SListFaultAddress != &AlpcpMessageLogLock.SListFaultAddress )
      break;
    StackBase = (char *)AlpcpMessageLogLock.StackBase;
    if ( AlpcpMessageLogLock.StackBase == &AlpcpMessageLogLock.StackBase )
      return 0LL;
    if ( *((struct _KTHREAD **)AlpcpMessageLogLock.StackBase + 1) != (struct _KTHREAD *)&AlpcpMessageLogLock.StackBase )
      goto LABEL_19;
    v2 = *(_QWORD *)AlpcpMessageLogLock.StackBase;
    if ( *(void **)(*(_QWORD *)AlpcpMessageLogLock.StackBase + 8LL) != AlpcpMessageLogLock.StackBase )
      goto LABEL_19;
    AlpcpMessageLogLock.StackBase = *(void **)AlpcpMessageLogLock.StackBase;
    *(_QWORD *)(v2 + 8) = &AlpcpMessageLogLock.StackBase;
    *((_DWORD *)StackBase + 11) = 0;
    v3 = (char **)*((_QWORD *)StackBase + 2);
    if ( v3[1] != StackBase + 16 )
      goto LABEL_19;
    v4 = (void **)*((_QWORD *)StackBase + 3);
    if ( *v4 != StackBase + 16 )
      goto LABEL_19;
    *v4 = v3;
    v3[1] = (char *)v4;
    v5 = (void ****)(StackBase + 48);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (void ***)v5 )
        break;
      if ( v6[1] != (void **)v5 )
        goto LABEL_19;
      v7 = *v6;
      if ( (*v6)[1] != v6 )
        goto LABEL_19;
      *v5 = (void ***)v7;
      v7[1] = v5;
      QuantumTarget = (void **)AlpcpMessageLogLock.QuantumTarget;
      if ( *(struct _KTHREAD **)AlpcpMessageLogLock.QuantumTarget != (struct _KTHREAD *)&AlpcpMessageLogLock.SListFaultAddress )
        goto LABEL_19;
      *v6 = &AlpcpMessageLogLock.SListFaultAddress;
      v6[1] = QuantumTarget;
      *QuantumTarget = v6;
      AlpcpMessageLogLock.QuantumTarget = (unsigned __int64)v6;
    }
    StackLimit = AlpcpMessageLogLock.StackLimit;
    if ( *(struct _KTHREAD **)AlpcpMessageLogLock.StackLimit != (struct _KTHREAD *)&AlpcpMessageLogLock.InitialStack )
      goto LABEL_19;
    *(_QWORD *)StackBase = &AlpcpMessageLogLock.InitialStack;
    *((_QWORD *)StackBase + 1) = StackLimit;
    *StackLimit = StackBase;
    AlpcpMessageLogLock.StackLimit = StackBase;
  }
  if ( *((struct _KTHREAD **)AlpcpMessageLogLock.SListFaultAddress + 1) != (struct _KTHREAD *)&AlpcpMessageLogLock.SListFaultAddress
    || (v10 = *(_QWORD *)AlpcpMessageLogLock.SListFaultAddress,
        *(void **)(*(_QWORD *)AlpcpMessageLogLock.SListFaultAddress + 8LL) != AlpcpMessageLogLock.SListFaultAddress) )
  {
LABEL_19:
    __fastfail(3u);
  }
  AlpcpMessageLogLock.SListFaultAddress = *(void **)AlpcpMessageLogLock.SListFaultAddress;
  *(_QWORD *)(v10 + 8) = &AlpcpMessageLogLock.SListFaultAddress;
  return result;
}
