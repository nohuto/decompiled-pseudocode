/*
 * XREFs of DbgLoadUserImageSymbols @ 0x140617FA0
 * Callers:
 *     MiLoadUserSymbols @ 0x140B5385C (MiLoadUserSymbols.c)
 * Callees:
 *     DebugService2 @ 0x140534980 (DebugService2.c)
 */

__int64 DbgLoadUserImageSymbols()
{
  return DebugService2();
}
