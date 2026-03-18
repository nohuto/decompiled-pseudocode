/*
 * XREFs of SymCryptFdefModSubGeneric @ 0x1405343F0
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawAdd @ 0x14052CB7C (SymCryptFdefRawAdd.c)
 *     SymCryptFdefRawSub @ 0x14052D054 (SymCryptFdefRawSub.c)
 *     SymCryptFdefMaskedCopy @ 0x140534D54 (SymCryptFdefMaskedCopy.c)
 */

__int64 __fastcall SymCryptFdefModSubGeneric(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawSub(a2, a3, a4, v5);
  SymCryptFdefRawAdd(a4, a1 + 128, a5, v5);
  return SymCryptFdefMaskedCopy(a5, a4, v5);
}
