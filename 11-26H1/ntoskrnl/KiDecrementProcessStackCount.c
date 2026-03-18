/*
 * XREFs of KiDecrementProcessStackCount @ 0x1404108F0
 * Callers:
 *     KiSuspendThread @ 0x14020909C (KiSuspendThread.c)
 *     KiCommitThreadWait @ 0x1402229B0 (KiCommitThreadWait.c)
 *     KiOutSwapKernelStacks @ 0x1404102F4 (KiOutSwapKernelStacks.c)
 *     KeDeleteThread @ 0x1404106F4 (KeDeleteThread.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiAcquireKobjectLockSafe @ 0x140277760 (KiAcquireKobjectLockSafe.c)
 *     KeSetEvent @ 0x1402DE9C0 (KeSetEvent.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiDecrementProcessStackCount(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // ett
  _QWORD *v8; // rbx
  void *SListFaultAddress; // rax
  void *v10; // rcx

  result = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 264), 0xFFFFFFF8) & 0xFFFFFFF8;
  if ( (_DWORD)result == 8 )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql != 2 )
      __writecr8(2uLL);
    if ( KiIrqlFlags )
    {
      LOBYTE(a2) = 2;
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, a2);
    }
    KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, a2, a3);
    v6 = *(_DWORD *)(a1 + 264);
    if ( (v6 & 7) == 0 && *(_QWORD *)(a1 + 48) != a1 + 48 )
    {
      while ( v6 < 8 )
      {
        v7 = v6;
        v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 264), v6 & 0xFFFFFFF8 | 3, v6);
        if ( v7 == v6 )
        {
          _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
          v8 = (_QWORD *)(a1 + 120);
          _m_prefetchw(&KiSupervisorXStateFeaturesLock.SListFaultAddress);
          SListFaultAddress = KiSupervisorXStateFeaturesLock.SListFaultAddress;
          do
          {
            *v8 = SListFaultAddress;
            v10 = SListFaultAddress;
            SListFaultAddress = (void *)_InterlockedCompareExchange64(
                                          (volatile signed __int64 *)&KiSupervisorXStateFeaturesLock.SListFaultAddress,
                                          (signed __int64)v8,
                                          (signed __int64)SListFaultAddress);
          }
          while ( SListFaultAddress != v10 );
          if ( !SListFaultAddress )
            KeSetEvent((PRKEVENT)&KiSupervisorXStateFeaturesLock.StackLimit, 10, 0);
          goto LABEL_14;
        }
      }
    }
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_14:
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}
