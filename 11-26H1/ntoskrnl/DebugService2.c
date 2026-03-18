/*
 * XREFs of DebugService2 @ 0x140534980
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404DF5BC (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x1404DF6D0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1404FDB4C (DbgUnLoadImageSymbols.c)
 *     DbgCommandString @ 0x140617E90 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x140617FA0 (DbgLoadUserImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
