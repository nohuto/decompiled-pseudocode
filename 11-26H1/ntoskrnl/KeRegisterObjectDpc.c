/*
 * XREFs of KeRegisterObjectDpc @ 0x1405E7F4C
 * Callers:
 *     ExQueueDpcEventWait @ 0x1406D3C40 (ExQueueDpcEventWait.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiInsertQueueDpc @ 0x140307FF0 (KiInsertQueueDpc.c)
 *     KiWaitSatisfyOther @ 0x1403E2B14 (KiWaitSatisfyOther.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

char __fastcall KeRegisterObjectDpc(__int64 a1, ULONG_PTR a2, __int64 a3, char a4)
{
  unsigned __int8 CurrentIrql; // si
  __int64 v9; // rdx
  char v10; // bp
  __int64 *v11; // rcx

  *(_WORD *)(a3 + 16) = 1028;
  *(_QWORD *)(a3 + 24) = a2;
  *(_QWORD *)(a3 + 32) = a1;
  CurrentIrql = KeGetCurrentIrql();
  v9 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  v10 = 0;
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v9, a3);
  if ( *(int *)(a1 + 4) <= 0 || (KiWaitSatisfyOther(a1), v10 = 1, a4) )
  {
    v11 = *(__int64 **)(a1 + 16);
    if ( *v11 != a1 + 8 )
      __fastfail(3u);
    *(_QWORD *)a3 = a1 + 8;
    *(_QWORD *)(a3 + 8) = v11;
    *v11 = a3;
    *(_QWORD *)(a1 + 16) = a3;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  else
  {
    *(_BYTE *)(a3 + 17) = 5;
    KiInsertQueueDpc(a2, a1, a3, 0LL, 0);
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
  }
  return v10;
}
