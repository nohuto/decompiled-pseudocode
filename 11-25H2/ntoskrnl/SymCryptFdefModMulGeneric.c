/*
 * XREFs of SymCryptFdefModMulGeneric @ 0x140533D40
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x14052CBC8 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawMul @ 0x14052CEB4 (SymCryptFdefRawMul.c)
 */

void __fastcall SymCryptFdefModMulGeneric(__int64 a1, int a2, int a3, void *a4, char *Src)
{
  int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawMul(a2, v5, a3, v5, (__int64)Src);
  SymCryptFdefRawDivMod(Src, 2 * v5, (_DWORD *)(a1 + 64), 0LL, a4, &Src[v5 << 7]);
}
