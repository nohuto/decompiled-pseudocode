/*
 * XREFs of HalpPmTimerQueryCounterMemory @ 0x140598700
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpPmTimerQueryCounterMemory(__int64 a1)
{
  return **(unsigned int **)(a1 + 8);
}
