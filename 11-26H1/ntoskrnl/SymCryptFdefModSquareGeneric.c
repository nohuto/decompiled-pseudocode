/*
 * XREFs of SymCryptFdefModSquareGeneric @ 0x14056F480
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x140567DD0 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawSquare @ 0x14056820C (SymCryptFdefRawSquare.c)
 */

void __fastcall SymCryptFdefModSquareGeneric(__int64 a1, __int64 a2, void *a3, void *a4)
{
  unsigned int v4; // esi

  v4 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawSquare(a2, v4, (__int64)a4);
  SymCryptFdefRawDivMod(a4, 2 * v4, (_DWORD *)(a1 + 64), 0LL, a3, (_QWORD *)a4 + 16 * v4);
}
