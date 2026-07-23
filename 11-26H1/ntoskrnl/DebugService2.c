/*
 * XREFs of DebugService2 @ 0x140536E00
 * Callers:
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404D8C9C (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgLoadImageSymbols @ 0x1404D8DB0 (DbgLoadImageSymbols.c)
 *     DbgUnLoadImageSymbols @ 0x1404F708C (DbgUnLoadImageSymbols.c)
 *     DbgCommandString @ 0x14061AEE0 (DbgCommandString.c)
 *     DbgLoadUserImageSymbols @ 0x14061AFF0 (DbgLoadUserImageSymbols.c)
 * Callees:
 *     <none>
 */

__int64 DebugService2()
{
  __asm { int     2Dh; Windows NT - debugging services: eax = type }
  __debugbreak();
  return DebugService2AfterInt3();
}
