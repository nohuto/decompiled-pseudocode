/*
 * XREFs of IvtInvalidateScalableModeContextEntry @ 0x1405A7308
 * Callers:
 *     IvtUpdateScalableModeContextEntry @ 0x140500478 (IvtUpdateScalableModeContextEntry.c)
 * Callees:
 *     IvtInvalidateContextEntry @ 0x1405A7278 (IvtInvalidateContextEntry.c)
 *     IvtInvalidateScalableModePasidCache @ 0x1405A7368 (IvtInvalidateScalableModePasidCache.c)
 */

__int64 __fastcall IvtInvalidateScalableModeContextEntry(__int64 a1, _DWORD *a2, int a3, __int64 a4, char a5)
{
  int v7; // esi

  v7 = a1;
  IvtInvalidateContextEntry(a1, a2, a3, a4, 0);
  return IvtInvalidateScalableModePasidCache(v7, *a2, a3, -1, 1, 1, a5);
}
