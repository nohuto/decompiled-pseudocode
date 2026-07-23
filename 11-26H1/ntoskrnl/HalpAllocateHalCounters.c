/*
 * XREFs of HalpAllocateHalCounters @ 0x14057CB90
 * Callers:
 *     EmonAllocateCounter @ 0x140597438 (EmonAllocateCounter.c)
 *     EmonMarkCountersReserved @ 0x140598200 (EmonMarkCountersReserved.c)
 *     Amd64AllocateCounter @ 0x1405A5A1C (Amd64AllocateCounter.c)
 * Callees:
 *     <none>
 */

__int64 HalpAllocateHalCounters()
{
  struct _KPRCB *CurrentPrcb; // rcx

  CurrentPrcb = KeGetCurrentPrcb();
  if ( (_InterlockedExchangeAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[3], 2u) & 1) == 0 )
    return 0LL;
  _InterlockedAdd((volatile signed __int32 *)&CurrentPrcb->HalReserved[3], 0xFFFFFFFE);
  return 3221225473LL;
}
