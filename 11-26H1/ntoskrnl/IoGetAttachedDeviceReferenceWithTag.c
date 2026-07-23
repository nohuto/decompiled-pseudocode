/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x14026F250
 * Callers:
 *     PopAllocateIrp @ 0x14026ED9C (PopAllocateIrp.c)
 *     IopEjectDevice @ 0x1407B5808 (IopEjectDevice.c)
 *     PipCallDriverAddDevice @ 0x140970138 (PipCallDriverAddDevice.c)
 *     IopSynchronousCall @ 0x1409B0720 (IopSynchronousCall.c)
 *     PnpQueryInterface @ 0x1409DB9B4 (PnpQueryInterface.c)
 *     PiControlGetDeviceStack @ 0x140A93A48 (PiControlGetDeviceStack.c)
 *     PnpAsynchronousCall @ 0x140AE1C5C (PnpAsynchronousCall.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140B0D9B8 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 *     PopFxRegisterDevice @ 0x140B52230 (PopFxRegisterDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

_QWORD *__fastcall IoGetAttachedDeviceReferenceWithTag(_QWORD *Object, ULONG Tag)
{
  _QWORD *v3; // rbx
  unsigned __int8 CurrentIrql; // di
  void *ArbitraryUserPointer; // rax
  __int64 v6; // rcx
  volatile __int64 *v7; // r8
  _QWORD *i; // rax

  v3 = Object;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Object) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Object, 2LL);
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v6 = (__int64)ArbitraryUserPointer + 160;
  v7 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    if ( _InterlockedExchange64(v7, v6) )
      KxWaitForLockOwnerShip(v6);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v6, v7);
  }
  for ( i = (_QWORD *)v3[3]; i; i = (_QWORD *)i[3] )
    v3 = i;
  ObfReferenceObjectWithTag(v3, Tag);
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
