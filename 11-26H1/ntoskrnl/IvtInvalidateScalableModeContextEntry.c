/*
 * XREFs of IvtInvalidateScalableModeContextEntry @ 0x1405A9B18
 * Callers:
 *     IvtUpdateScalableModeContextEntry @ 0x1404F9C68 (IvtUpdateScalableModeContextEntry.c)
 * Callees:
 *     IvtInvalidateContextEntry @ 0x1405A9A88 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x1405A9B78 (IvtInvalidateScalableModePasidCache.c)
 */

__int64 __fastcall IvtInvalidateScalableModeContextEntry(__int64 a1, _DWORD *a2, int a3, __int64 a4, char a5)
{
  int v7; // esi

  v7 = a1;
  IvtInvalidateContextEntry(a1, a2, a3, a4, 0);
  return IvtInvalidateScalableModePasidCache(v7, *a2, a3, -1, 1, 1, a5);
}
