/*
 * XREFs of IoReleaseCancelSpinLock @ 0x1403EB1E0
 * Callers:
 *     <none>
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __stdcall IoReleaseCancelSpinLock(KIRQL Irql)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  volatile signed __int64 **v3; // rbx
  unsigned __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 112);
  v4 = Irql;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
  {
    _m_prefetchw(v3);
    v5 = (__int64)*v3;
    if ( !*v3 )
    {
      if ( v3 == (volatile signed __int64 **)_InterlockedCompareExchange64(v3[1], 0LL, (signed __int64)v3) )
        goto LABEL_7;
      v5 = KxWaitForLockChainValid((__int64 *)v3, v1, v2);
    }
    *v3 = 0LL;
    v6 = (__int64)v3[1];
    if ( (((unsigned __int8)v6 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v5 + 8), v6)) & 4) != 0 )
    {
      _InterlockedOr(v7, 0);
      KiWakeAddressAll();
    }
  }
  else
  {
    KiReleaseQueuedSpinLockInstrumented(v3, retaddr);
  }
LABEL_7:
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v4);
  __writecr8(v4);
}
