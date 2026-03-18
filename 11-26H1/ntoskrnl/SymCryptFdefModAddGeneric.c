/*
 * XREFs of SymCryptFdefModAddGeneric @ 0x14056F1C0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404D1DF0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawAdd @ 0x140568BA4 (SymCryptFdefRawAdd.c)
 *     SymCryptFdefRawSub @ 0x140569080 (SymCryptFdefRawSub.c)
 *     SymCryptFdefMaskedCopy @ 0x140570D9C (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModAddGeneric(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawAdd(a2, a3, a4, v5);
  SymCryptFdefRawSub(a4, a1 + 128, a5, v5);
  return SymCryptFdefMaskedCopy(a5, a4, v5);
}
