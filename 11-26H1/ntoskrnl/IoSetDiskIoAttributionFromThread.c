/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x14026C270
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026AA34 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026ACAC (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026AF60 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14026D9C4 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404AD760 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x1404DF300 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1409837C4 (IopSynchronousServiceTail.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopSetDiskIoAttributionExtension @ 0x1402692E4 (IopSetDiskIoAttributionExtension.c)
 *     ExReleaseSpinLockShared @ 0x14026C450 (ExReleaseSpinLockShared.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14026E310 (IopSetDiskIoAttributionFromProcess.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027BDE0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402CFF90 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036C5E8 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall IoSetDiskIoAttributionFromThread(__int64 a1, struct _KTHREAD *a2)
{
  _QWORD *Object; // rsi
  int v4; // edi
  _KPROCESS *Process; // rbx
  __int64 v7; // rbp
  int v8; // ebx
  KIRQL v10; // al
  unsigned __int64 UserWaitTime; // rbx
  unsigned __int64 v12; // r15
  KIRQL v13; // al
  KIRQL v14; // bp
  void *retaddr; // [rsp+38h] [rbp+0h]

  Object = a2[1].WaitBlock[1].Object;
  v4 = 0;
  if ( !Object )
    goto LABEL_25;
  if ( a2 == KeGetCurrentThread() )
    goto LABEL_22;
  v13 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument);
  Object = a2[1].WaitBlock[1].Object;
  v14 = v13;
  if ( Object )
  {
    ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
    v4 = 1;
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.FirstArgument, v14);
  if ( Object )
  {
LABEL_22:
    Process = (_KPROCESS *)Object[68];
  }
  else
  {
LABEL_25:
    if ( a2 == KeGetCurrentThread()
      && a2->ApcState.Process != a2->Process
      && (int)IopSetDiskIoAttributionFromProcess(a1) >= 0 )
    {
LABEL_26:
      v8 = 0;
      goto LABEL_7;
    }
    Process = a2->Process;
  }
  v7 = 0LL;
  if ( !Process[3].UserWaitTime )
  {
    v8 = -1073741275;
    goto LABEL_7;
  }
  v10 = ExAcquireSpinLockShared(&IopDiskIoAttributionLock);
  UserWaitTime = Process[3].UserWaitTime;
  v12 = v10;
  if ( UserWaitTime )
    v7 = *(_QWORD *)(UserWaitTime + 24);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _InterlockedAnd(&IopDiskIoAttributionLock, 0xBFFFFFFF);
    _InterlockedDecrement(&IopDiskIoAttributionLock);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&IopDiskIoAttributionLock, retaddr);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v12);
  __writecr8(v12);
  if ( !UserWaitTime )
  {
    v8 = -1073741275;
    goto LABEL_7;
  }
  v8 = IopSetDiskIoAttributionExtension(a1, v7, (__int64)KeGetCurrentThread(), 0);
  if ( v8 >= 0 )
    goto LABEL_26;
LABEL_7:
  if ( v4 )
    ObDereferenceObjectDeferDeleteWithTag(Object, 0x746C6644u);
  return (unsigned int)v8;
}
