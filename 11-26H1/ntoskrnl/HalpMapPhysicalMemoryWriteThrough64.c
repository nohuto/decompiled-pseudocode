/*
 * XREFs of HalpMapPhysicalMemoryWriteThrough64 @ 0x140580110
 * Callers:
 *     <none>
 * Callees:
 *     HalpMap @ 0x140345A2C (HalpMap.c)
 */

unsigned __int64 __fastcall HalpMapPhysicalMemoryWriteThrough64(__int64 a1, __int64 a2, char a3)
{
  return HalpMap(a1, a2, 0, a3, 4u, 0LL);
}
