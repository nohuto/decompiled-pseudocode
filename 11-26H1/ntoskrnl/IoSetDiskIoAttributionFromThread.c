/*
 * XREFs of IoSetDiskIoAttributionFromThread @ 0x14026CD00
 * Callers:
 *     MiSynchronousPageWrite @ 0x14026B4C4 (MiSynchronousPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x14026B73C (MiIssueSynchronousFlush.c)
 *     IoSynchronousPageWriteEx @ 0x14026B9F0 (IoSynchronousPageWriteEx.c)
 *     IoAsynchronousPageWrite @ 0x14026E454 (IoAsynchronousPageWrite.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1404B4190 (IopBuildAsynchronousFsdRequest.c)
 *     IoSetIoAttributionIrp @ 0x1404E5D60 (IoSetIoAttributionIrp.c)
 *     IopSynchronousServiceTail @ 0x1409B2704 (IopSynchronousServiceTail.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     IopSetDiskIoAttributionExtension @ 0x140269D74 (IopSetDiskIoAttributionExtension.c)
 *     ExReleaseSpinLockShared @ 0x14026CEE0 (ExReleaseSpinLockShared.c)
 *     IopSetDiskIoAttributionFromProcess @ 0x14026EDA0 (IopSetDiskIoAttributionFromProcess.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14027C870 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     ExAcquireSpinLockShared @ 0x1402EDF10 (ExAcquireSpinLockShared.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14036A848 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
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
  v13 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.CurrentRunTime);
  Object = a2[1].WaitBlock[1].Object;
  v14 = v13;
  if ( Object )
  {
    ObfReferenceObjectWithTag(a2[1].WaitBlock[1].Object, 0x746C6644u);
    v4 = 1;
  }
  ExReleaseSpinLockShared((PEX_SPIN_LOCK)&PsAltSystemCallRegistrationLock.CurrentRunTime, v14);
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
  v10 = ExAcquireSpinLockShared((PEX_SPIN_LOCK)&IopSessionNotificationLock.TrapFrame + 1);
  UserWaitTime = Process[3].UserWaitTime;
  v12 = v10;
  if ( UserWaitTime )
    v7 = *(_QWORD *)(UserWaitTime + 24);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _InterlockedAnd((_DWORD *)&IopSessionNotificationLock.TrapFrame + 1, 0xBFFFFFFF);
    _InterlockedDecrement((_DWORD *)&IopSessionNotificationLock.TrapFrame + 1);
  }
  else
  {
    ExpReleaseSpinLockSharedFromDpcLevelInstrumented((char *)&IopSessionNotificationLock.TrapFrame + 4, retaddr);
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
