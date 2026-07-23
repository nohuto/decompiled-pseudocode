/*
 * XREFs of KiDpcWatchdogCounterReset @ 0x140473AC0
 * Callers:
 *     KeAccumulateTicks @ 0x140221310 (KeAccumulateTicks.c)
 *     KiDpcWatchdog @ 0x1405FD800 (KiDpcWatchdog.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     EtwTraceCumulativeDpcSoftTimeout @ 0x1406C8494 (EtwTraceCumulativeDpcSoftTimeout.c)
 */

__int64 __fastcall KiDpcWatchdogCounterReset(__int64 a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // di
  int v3; // r9d
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 13 )
    __writecr8(0xDuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 13LL);
  }
  v3 = *(_DWORD *)(v1 + 14552);
  if ( v3 && *(_DWORD *)(v1 + 33708) >= v3 )
    EtwTraceCumulativeDpcSoftTimeout(*(_QWORD *)(v1 + 8), v1);
  *(_DWORD *)(v1 + 33708) = 0;
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
