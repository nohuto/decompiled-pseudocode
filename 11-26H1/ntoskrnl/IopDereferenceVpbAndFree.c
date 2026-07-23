/*
 * XREFs of IopDereferenceVpbAndFree @ 0x140463630
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140B49570 (IoVerifyVolume.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x140304C50 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall IopDereferenceVpbAndFree(__int64 a1, __int64 a2, __int64 a3)
{
  void *v4; // rsi
  unsigned __int8 CurrentIrql; // bl
  void *ArbitraryUserPointer; // rax
  __int64 v7; // rcx
  volatile __int64 *v8; // rdx
  __int64 v9; // rax
  bool v10; // zf

  v4 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
  v7 = (__int64)ArbitraryUserPointer + 144;
  v8 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 19);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
  {
    v9 = _InterlockedExchange64(v8, v7);
    if ( v9 )
      KxWaitForLockOwnerShip(v7, v9, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v7, v8);
  }
  v10 = (*(_DWORD *)(a1 + 28))-- == 1;
  if ( v10 && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 56LL) != a1 && (*(_BYTE *)(a1 + 4) & 4) == 0 )
    v4 = (void *)a1;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)KeGetPcr()->NtTib.ArbitraryUserPointer + 6);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  if ( v4 )
    ExFreePoolWithTag(v4, 0);
}
