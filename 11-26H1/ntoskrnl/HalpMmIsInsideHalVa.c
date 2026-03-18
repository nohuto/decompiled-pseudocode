/*
 * XREFs of HalpMmIsInsideHalVa @ 0x14057DF48
 * Callers:
 *     ExtEnvFreeMemory @ 0x140597DF0 (ExtEnvFreeMemory.c)
 *     ExtEnvFreePhysicalMemory @ 0x140597E30 (ExtEnvFreePhysicalMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HalpMmIsInsideHalVa(unsigned __int64 a1, bool *a2)
{
  bool v2; // al

  v2 = 0;
  if ( !HalpOriginalHeapStart || !HalpOriginalHeapEnd )
    return 3221225473LL;
  if ( a1 >= HalpOriginalHeapStart )
    v2 = a1 <= HalpOriginalHeapEnd;
  *a2 = v2;
  return 0LL;
}
