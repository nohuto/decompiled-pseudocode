/*
 * XREFs of IopInterlockedDecrementUlong @ 0x14044ABE0
 * Callers:
 *     IopDecrementDeviceObjectRefCount @ 0x14044AAD0 (IopDecrementDeviceObjectRefCount.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1402B9F90 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall IopInterlockedDecrementUlong(__int64 a1, _DWORD *a2, __int64 a3)
{
  _DWORD *v3; // rdi
  unsigned __int8 CurrentIrql; // bl
  char *ArbitraryUserPointer; // rax
  __int64 v7; // rsi
  volatile __int64 *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  unsigned int v11; // edi

  v3 = a2;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a2) = 2;
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
  }
  ArbitraryUserPointer = (char *)KeGetPcr()->NtTib.ArbitraryUserPointer;
  v7 = 16 * a1;
  v8 = *(volatile __int64 **)&ArbitraryUserPointer[v7 + 8];
  v9 = (__int64)&ArbitraryUserPointer[v7];
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    v10 = _InterlockedExchange64(v8, v9);
    if ( v10 )
      KxWaitForLockOwnerShip(v9, v10, a3);
  }
  else
  {
    KiAcquireQueuedSpinLockInstrumented(v9, v8);
  }
  v11 = --*v3;
  KeReleaseInStackQueuedSpinLockFromDpcLevel((PKLOCK_QUEUE_HANDLE)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + v7));
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v11;
}
