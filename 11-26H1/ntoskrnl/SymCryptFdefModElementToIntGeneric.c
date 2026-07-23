/*
 * XREFs of SymCryptFdefModElementToIntGeneric @ 0x14056E9F0
 * Callers:
 *     SymCryptModElementToInt @ 0x14055EC1C (SymCryptModElementToInt.c)
 *     SymCryptFdefModInvGeneric @ 0x14056EA70 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     memmove @ 0x140742080 (memmove.c)
 */

void __fastcall SymCryptFdefModElementToIntGeneric(__int64 a1, const void *a2, __int64 a3)
{
  memmove((void *)(a3 + 32), a2, (unsigned int)(*(_DWORD *)(a1 + 4) << 6));
  SymCryptWipe(
    a3 + 32 + 4LL * (unsigned int)(16 * *(_DWORD *)(a1 + 4)),
    (unsigned int)((*(_DWORD *)(a3 + 4) - *(_DWORD *)(a1 + 4)) << 6));
  xHalTimerWatchdogStop();
}
