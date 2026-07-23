/*
 * XREFs of MiSetLeafPfnBuddy @ 0x14045C350
 * Callers:
 *     MmCheckCachedPageStates @ 0x1402C8850 (MmCheckCachedPageStates.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiSetLeafPfnBuddy(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 result; // rax

  result = 0xFFFFF00000000001uLL;
  *a1 = (a2 >> 3) ^ (*a1 ^ (a2 >> 3)) & 0xFFFFF00000000001uLL;
  return result;
}
