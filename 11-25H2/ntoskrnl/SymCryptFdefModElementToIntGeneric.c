/*
 * XREFs of SymCryptFdefModElementToIntGeneric @ 0x1405337E4
 * Callers:
 *     SymCryptModElementToInt @ 0x140521604 (SymCryptModElementToInt.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 */

void __fastcall SymCryptFdefModElementToIntGeneric(__int64 a1, const void *a2, __int64 a3)
{
  memmove((void *)(a3 + 32), a2, (unsigned int)(*(_DWORD *)(a1 + 4) << 6));
  SymCryptWipe(
    a3 + 32 + 4LL * (unsigned int)(16 * *(_DWORD *)(a1 + 4)),
    (unsigned int)((*(_DWORD *)(a3 + 4) - *(_DWORD *)(a1 + 4)) << 6));
  xHalTimerWatchdogStop();
}
