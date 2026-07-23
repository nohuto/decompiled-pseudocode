/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x14052250C
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x140332658 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1405F94E0 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1402480D0 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeSetClockInterval @ 0x14040CD44 (KeSetClockInterval.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x140523094 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiResetClockInterval @ 0x1405F0FDC (KiResetClockInterval.c)
 */

__int64 __fastcall KiSetVirtualHeteroClockIntervalRequest(__int64 a1)
{
  char v1; // di
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  v1 = a1;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql != 15 )
    __writecr8(0xFuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 15LL);
  }
  if ( v1 )
  {
    if ( byte_140E0B030 )
      KiResetClockInterval(&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_140E0B030 && KiQosHysteresisTimerPeriod )
  {
    KeSetClockInterval();
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
