/*
 * XREFs of IopVerifyDeviceObjectOnStack @ 0x1403EB2A0
 * Callers:
 *     IopParseDevice @ 0x1409008C0 (IopParseDevice.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KxWaitForLockOwnerShip @ 0x1402B29C0 (KxWaitForLockOwnerShip.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1402B4830 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KxWaitForLockChainValid @ 0x1402BA360 (KxWaitForLockChainValid.c)
 *     KiWakeAddressAll @ 0x1402BA5A8 (KiWakeAddressAll.c)
 *     KeReleaseQueuedSpinLock @ 0x1402E2650 (KeReleaseQueuedSpinLock.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x1403EB6FC (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
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
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) == 0 || LODWORD(stru_140F11D08.WaitStatus) )
    {
      a2 = _InterlockedExchange64(a3, v8);
      if ( a2 )
        KxWaitForLockOwnerShip(v8, a2, (__int64)a3);
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
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 && !LODWORD(stru_140F11D08.WaitStatus) )
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
        v11 = KxWaitForLockChainValid((__int64 *)v10, a2, (__int64)a3);
      }
      *v10 = 0LL;
      v12 = (__int64)v10[1];
      if ( (((unsigned __int8)v12 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v11 + 8), v12)) & 4) != 0 )
      {
        _InterlockedOr(v13, 0);
        KiWakeAddressAll();
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
