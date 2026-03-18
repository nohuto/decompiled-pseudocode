/*
 * XREFs of SymCryptFdefModSquareGeneric @ 0x1405702A0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x140568BF0 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawSquare @ 0x14056902C (SymCryptFdefRawSquare.c)
 */

void __fastcall SymCryptFdefModSquareGeneric(__int64 a1, __int64 a2, void *a3, void *a4)
{
  unsigned int v4; // esi

  v4 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawSquare(a2, v4, (__int64)a4);
  SymCryptFdefRawDivMod(a4, 2 * v4, (_DWORD *)(a1 + 64), 0LL, a3, (_QWORD *)a4 + 16 * v4);
}
