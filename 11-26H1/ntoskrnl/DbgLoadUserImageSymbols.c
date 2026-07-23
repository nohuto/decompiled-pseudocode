/*
 * XREFs of DbgLoadUserImageSymbols @ 0x14061AFF0
 * Callers:
 *     MiLoadUserSymbols @ 0x140B560FC (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140536E00 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
