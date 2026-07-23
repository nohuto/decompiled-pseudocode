/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1402F9DF0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1402FA03C (KiReleaseQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x140305020 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x140305268 (KiWakeAddressAll.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  __int64 v1; // r8
  volatile signed __int64 **v2; // rbx
  unsigned __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rdx
  signed __int32 v6[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  v3 = Irql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || PopHibernateInProgress )
  {
    _m_prefetchw(v2);
    v4 = (__int64)*v2;
    if ( !*v2 )
    {
      if ( v2 == (volatile signed __int64 **)_InterlockedCompareExchange64(v2[1], 0LL, (signed __int64)v2) )
        goto LABEL_7;
      v4 = KxWaitForLockChainValid(v2);
    }
    *v2 = 0LL;
    v5 = (__int64)v2[1];
    if ( (((unsigned __int8)v5 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v4 + 8), v5)) & 4) != 0 )
    {
      _InterlockedOr(v6, 0);
      KiWakeAddressAll(v4 + 8, v5, v1);
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v2, retaddr);
  }
LABEL_7:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  __writecr8(v3);
}
