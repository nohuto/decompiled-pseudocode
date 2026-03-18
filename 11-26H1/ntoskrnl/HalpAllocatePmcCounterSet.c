/*
 * XREFs of HalpAllocatePmcCounterSet @ 0x14057FE20
 * Callers:
 *     <none>
 * Callees:
 *     HalpAllocatePmcCounterSetEx @ 0x140355F20 (HalpAllocatePmcCounterSetEx.c)
 */

__int64 __fastcall HalpAllocatePmcCounterSet(unsigned int a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  return HalpAllocatePmcCounterSetEx(a1, a2, a3, 0LL, a4, 0LL);
}
