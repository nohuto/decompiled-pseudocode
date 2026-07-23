/*
 * XREFs of HalpMapEarlyPages @ 0x1405800E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapEarlyPages(__int64 a1, __int64 a2, unsigned int a3)
{
  return HalpMap(a1, a2, 1u, 0, a3, 0LL);
}
