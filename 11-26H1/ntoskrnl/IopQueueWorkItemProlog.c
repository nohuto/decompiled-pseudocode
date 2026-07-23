/*
 * XREFs of IopQueueWorkItemProlog @ 0x140202FE0
 * Callers:
 *     IoQueueWorkItemToNode @ 0x140202F90 (IoQueueWorkItemToNode.c)
 *     IoTryQueueWorkItem @ 0x1405CE2C0 (IoTryQueueWorkItem.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall IopQueueWorkItemProlog(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  int v8; // r12d
  struct _KTHREAD *CurrentThread; // r15
  PVOID Object; // r14
  __int64 result; // rax
  KIRQL v12; // al
  KIRQL v13; // r13
  struct _LIST_ENTRY *Flink; // rcx

  if ( (IopFunctionPointerMask & 4) != 0 && (IopIrpExtensionStatus & 1) != 0 && KeGetCurrentIrql() < 2u )
  {
    Flink = KeGetCurrentThread()[1].WaitBlock[1].WaitListEntry.Flink;
    if ( Flink )
      *(struct _LIST_ENTRY *)(a1 + 68) = *Flink;
    else
      *(_OWORD *)(a1 + 68) = 0LL;
  }
  else
  {
    *(_OWORD *)(a1 + 68) = 0LL;
  }
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) == 0 )
  {
    v8 = 0;
    CurrentThread = KeGetCurrentThread();
    Object = CurrentThread[1].WaitBlock[1].Object;
    if ( Object && CurrentThread != KeGetCurrentThread() )
    {
      v12 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument);
      Object = CurrentThread[1].WaitBlock[1].Object;
      v13 = v12;
      if ( Object )
      {
        ObfReferenceObjectWithTag(CurrentThread[1].WaitBlock[1].Object, 0x746C6644u);
        v8 = 1;
      }
      ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument, v13);
    }
    *(_QWORD *)(a1 + 56) = Object;
    if ( Object )
    {
      if ( !v8 )
        ObfReferenceObjectWithTag(Object, 0x746C6644u);
    }
    else if ( KeGetCurrentThread()->ApcState.Process[1].Padding[3]
           || BYTE4(stru_140F12EA0.SystemAffinityTokenListHead.Next) )
    {
      ObfReferenceObjectWithTag(CurrentThread, 0x746C6644u);
      *(_QWORD *)(a1 + 56) = CurrentThread;
    }
  }
  ObfReferenceObjectWithTag(*(PVOID *)(a1 + 40), 0x746C6644u);
  *(_QWORD *)(a1 + 32) = a3;
  *(_QWORD *)(a1 + 48) = a4;
  *(_QWORD *)(a1 + 88) = MEMORY[0xFFFFF78000000008];
  result = a1;
  *(_DWORD *)(a1 + 84) = a2;
  return result;
}
