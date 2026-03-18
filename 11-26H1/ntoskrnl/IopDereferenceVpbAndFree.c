/*
 * XREFs of IopDereferenceVpbAndFree @ 0x140469EB0
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 *     IoVerifyVolume @ 0x140B47540 (IoVerifyVolume.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
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
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
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
