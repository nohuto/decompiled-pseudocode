/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x1402F9EB0
 * Callers:
 *     IopParseDevice @ 0x140930850 (IopParseDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeReleaseQueuedSpinLock @ 0x1402C4710 (KeReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockOwnerShip @ 0x1402FD690 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402FF500 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall IopVerifyDeviceObjectOnStack(__int64 a1, __int64 a2, volatile __int64 *a3)
{
  unsigned __int8 CurrentIrql; // di
  char v4; // bp
  __int64 v5; // rsi
  void *ArbitraryUserPointer; // rax
  __int64 v8; // rcx
  volatile signed __int64 **v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdx
  signed __int32 v13[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = 0;
  v4 = (char)a3;
  v5 = a2;
  if ( (_BYTE)a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    ArbitraryUserPointer = KeGetPcr()->NtTib.ArbitraryUserPointer;
    v8 = (__int64)ArbitraryUserPointer + 160;
    a3 = (volatile __int64 *)*((_QWORD *)ArbitraryUserPointer + 21);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || PopHibernateInProgress )
    {
      if ( _InterlockedExchange64(a3, v8) )
        KxWaitForLockOwnerShip(v8);
    }
    else
    {
      KiAcquireQueuedSpinLockInstrumented(v8, a3);
    }
  }
  do
  {
    if ( a1 == v5 )
    {
      if ( !v4 )
        return 1;
      v10 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 160);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !PopHibernateInProgress )
      {
        KiReleaseQueuedSpinLockInstrumented(v10, retaddr);
        goto LABEL_21;
      }
      _m_prefetchw(v10);
      v11 = (__int64)*v10;
      if ( !*v10 )
      {
        if ( v10 == (volatile signed __int64 **)_InterlockedCompareExchange64(v10[1], 0LL, (signed __int64)v10) )
        {
LABEL_21:
          if ( KiIrqlFlags )
            KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
          __writecr8(CurrentIrql);
          return 1;
        }
        v11 = KxWaitForLockChainValid(v10);
      }
      *v10 = 0LL;
      v12 = (__int64)v10[1];
      if ( (((unsigned __int8)v12 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v12)) & 4) != 0 )
      {
        _InterlockedOr(v13, 0);
        KiWakeAddressAll(v11 + 8, v12, a3);
      }
      goto LABEL_21;
    }
    a1 = *(_QWORD *)(a1 + 24);
  }
  while ( a1 );
  if ( v4 )
    KeReleaseQueuedSpinLock(0xAuLL, CurrentIrql);
  return 0;
}
