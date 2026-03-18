/*
 * XREFs of KiSetVirtualHeteroClockIntervalRequest @ 0x14051FE68
 * Callers:
 *     KeUpdatePendingQosRequest @ 0x140330628 (KeUpdatePendingQosRequest.c)
 *     KiSetVirtualHeteroClockIntervalRequestDpcRoutine @ 0x1405F6B20 (KiSetVirtualHeteroClockIntervalRequestDpcRoutine.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x140246770 (KiLowerIrqlProcessIrqlFlags.c)
 *     KeSetClockInterval @ 0x14041880C (KeSetClockInterval.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1405209F0 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiResetClockInterval @ 0x1405EE66C (KiResetClockInterval.c)
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
    if ( byte_140E0AE10 )
      KiResetClockInterval(&KiVirtualHeteroClockRequest);
  }
  else if ( !byte_140E0AE10 && KiQosHysteresisTimerPeriod )
  {
    KeSetClockInterval();
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
