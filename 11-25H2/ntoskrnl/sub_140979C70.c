/*
 * XREFs of sub_140979C70 @ 0x140979C70
 * Callers:
 *     sub_1409797D8 @ 0x1409797D8 (sub_1409797D8.c)
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140979C70(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, int a7)
{
  return a7 ^ (unsigned int)(*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)));
}
