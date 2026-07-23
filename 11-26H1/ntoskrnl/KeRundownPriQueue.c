/*
 * XREFs of KeRundownPriQueue @ 0x1405FC0A8
 * Callers:
 *     ExpWorkQueueDestroy @ 0x140846120 (ExpWorkQueueDestroy.c)
 * Callees:
 *     KiExitDispatcher @ 0x140248580 (KiExitDispatcher.c)
 *     KiAcquireKobjectLockSafe @ 0x140276CD0 (KiAcquireKobjectLockSafe.c)
 *     KiAcquireReleaseObjectRundownLockExclusive @ 0x1403E078C (KiAcquireReleaseObjectRundownLockExclusive.c)
 *     KeRundownQueueCommon @ 0x1403E0A74 (KeRundownQueueCommon.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall KeRundownPriQueue(unsigned __int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx
  int v6; // [rsp+20h] [rbp-18h]

  CurrentIrql = KeGetCurrentIrql();
  v5 = 2LL;
  if ( CurrentIrql != 2 )
    __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  KiAcquireKobjectLockSafe((volatile signed __int32 *)a1, v5, a3);
  LOBYTE(v6) = 1;
  KeRundownQueueCommon(a1, (volatile signed __int32 **)(a1 + 672), a1 + 536, 0x20u, v6);
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  KiAcquireReleaseObjectRundownLockExclusive(a1);
  KiExitDispatcher((__int64)KeGetCurrentPrcb(), 0LL, 1u, 0, CurrentIrql);
}
