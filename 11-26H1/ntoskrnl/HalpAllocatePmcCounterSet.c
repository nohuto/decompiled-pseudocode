/*
 * XREFs of HalpAllocatePmcCounterSet @ 0x140582340
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocatePmcCounterSetEx @ 0x140357CC0 (HalpAllocatePmcCounterSetEx.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSet(unsigned int a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  return HalpAllocatePmcCounterSetEx(a1, a2, a3, 0LL, a4, 0LL);
}
