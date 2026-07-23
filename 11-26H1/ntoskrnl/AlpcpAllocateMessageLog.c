/*
 * XREFs of AlpcpAllocateMessageLog @ 0x140B156FC
 * Callers:
 *     AlpcpEnterAllocationEventMessageLog @ 0x140B155E0 (AlpcpEnterAllocationEventMessageLog.c)
 * Callees:
 *     <none>
 */

char *AlpcpAllocateMessageLog()
{
  char *result; // rax
  __int64 v1; // rcx
  __int64 v2; // rcx
  char **v3; // r8
  void **v4; // rcx
  void ****v5; // rdx
  void ***v6; // rcx
  void **v7; // r8
  void **QuantumTarget; // r8

  result = (char *)AlpcpMessageLogLock.InitialStack;
  if ( AlpcpMessageLogLock.InitialStack != &AlpcpMessageLogLock.InitialStack )
  {
    if ( *((struct _KTHREAD **)AlpcpMessageLogLock.InitialStack + 1) == (struct _KTHREAD *)&AlpcpMessageLogLock.InitialStack )
    {
      v1 = *(_QWORD *)AlpcpMessageLogLock.InitialStack;
      if ( *(void **)(*(_QWORD *)AlpcpMessageLogLock.InitialStack + 8LL) == AlpcpMessageLogLock.InitialStack )
      {
        AlpcpMessageLogLock.InitialStack = *(void **)AlpcpMessageLogLock.InitialStack;
        *(_QWORD *)(v1 + 8) = &AlpcpMessageLogLock.InitialStack;
        return result;
      }
    }
LABEL_6:
    __fastfail(3u);
  }
  result = (char *)AlpcpMessageLogLock.StackBase;
  if ( AlpcpMessageLogLock.StackBase == &AlpcpMessageLogLock.StackBase )
    return 0LL;
  if ( *((struct _KTHREAD **)AlpcpMessageLogLock.StackBase + 1) != (struct _KTHREAD *)&AlpcpMessageLogLock.StackBase )
    goto LABEL_6;
  v2 = *(_QWORD *)AlpcpMessageLogLock.StackBase;
  if ( *(void **)(*(_QWORD *)AlpcpMessageLogLock.StackBase + 8LL) != AlpcpMessageLogLock.StackBase )
    goto LABEL_6;
  AlpcpMessageLogLock.StackBase = *(void **)AlpcpMessageLogLock.StackBase;
  *(_QWORD *)(v2 + 8) = &AlpcpMessageLogLock.StackBase;
  *((_DWORD *)result + 11) = 0;
  v3 = (char **)*((_QWORD *)result + 2);
  if ( v3[1] != result + 16 )
    goto LABEL_6;
  v4 = (void **)*((_QWORD *)result + 3);
  if ( *v4 != result + 16 )
    goto LABEL_6;
  *v4 = v3;
  v5 = (void ****)(result + 48);
  v3[1] = (char *)v4;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 == (void ***)v5 )
      return result;
    if ( v6[1] != (void **)v5 )
      goto LABEL_6;
    v7 = *v6;
    if ( (*v6)[1] != v6 )
      goto LABEL_6;
    *v5 = (void ***)v7;
    v7[1] = v5;
    QuantumTarget = (void **)AlpcpMessageLogLock.QuantumTarget;
    if ( *(struct _KTHREAD **)AlpcpMessageLogLock.QuantumTarget != (struct _KTHREAD *)&AlpcpMessageLogLock.SListFaultAddress )
      goto LABEL_6;
    *v6 = &AlpcpMessageLogLock.SListFaultAddress;
    v6[1] = QuantumTarget;
    *QuantumTarget = v6;
    AlpcpMessageLogLock.QuantumTarget = (unsigned __int64)v6;
  }
}
