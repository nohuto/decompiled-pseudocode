/*
 * XREFs of IoGetAttachedDeviceReferenceWithTag @ 0x14026FCE0
 * Callers:
 *     PopAllocateIrp @ 0x14026F82C (PopAllocateIrp.c)
 *     IopEjectDevice @ 0x1407B27A8 (IopEjectDevice.c)
 *     IopSynchronousCall @ 0x14090E5F0 (IopSynchronousCall.c)
 *     PipCallDriverAddDevice @ 0x1409156CC (PipCallDriverAddDevice.c)
 *     PiControlGetDeviceStack @ 0x140A8ED78 (PiControlGetDeviceStack.c)
 *     PnpQueryInterface @ 0x140AA8480 (PnpQueryInterface.c)
 *     PnpAsynchronousCall @ 0x140AE4154 (PnpAsynchronousCall.c)
 *     PopDirectedDripsIsPnpSoftwareDeviceNode @ 0x140B0BFC4 (PopDirectedDripsIsPnpSoftwareDeviceNode.c)
 *     PopFxRegisterDevice @ 0x140B4F9A0 (PopFxRegisterDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
