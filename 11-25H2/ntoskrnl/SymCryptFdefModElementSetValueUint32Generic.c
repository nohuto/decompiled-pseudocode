/*
 * XREFs of SymCryptFdefModElementSetValueUint32Generic @ 0x140533760
 * Callers:
 *     SymCryptModElementSetValueUint32 @ 0x140521594 (SymCryptModElementSetValueUint32.c)
 *     SymCryptFdefModInvGeneric @ 0x140533860 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x14051B4B4 (SymCryptWipe.c)
 */

__int64 __fastcall SymCryptFdefModElementSetValueUint32Generic(unsigned int a1, _DWORD *a2, unsigned int *a3)
{
  int v3; // edi
  unsigned int v7; // ecx

  v3 = a2[1];
  xHalTimerWatchdogStop();
  if ( a2[19] <= 0x20u )
  {
    v7 = a2[32];
    if ( a1 >= v7 )
      a1 %= v7;
  }
  *a3 = a1;
  return SymCryptWipe((__int64)(a3 + 1), (unsigned int)(v3 << 6) - 4LL);
}
