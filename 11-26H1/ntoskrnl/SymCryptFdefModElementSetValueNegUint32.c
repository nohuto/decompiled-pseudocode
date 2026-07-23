/*
 * XREFs of SymCryptFdefModElementSetValueNegUint32 @ 0x14056E8A4
 * Callers:
 *     SymCryptModElementSetValueNegUint32 @ 0x14055EB8C (SymCryptModElementSetValueNegUint32.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1405588E8 (SymCryptWipe.c)
 *     SymCryptFdefRawSubUint32 @ 0x140568278 (SymCryptFdefRawSubUint32.c)
 *     _guard_dispatch_icall_nop @ 0x140727520 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SymCryptFdefModElementSetValueNegUint32(
        unsigned int a1,
        _DWORD *a2,
        _DWORD *a3,
        __int64 a4,
        __int64 a5)
{
  int v5; // edi
  unsigned int v10; // ecx

  v5 = a2[1];
  xHalTimerWatchdogStop();
  if ( a2[19] <= 0x20u )
  {
    v10 = a2[32];
    if ( a1 >= v10 )
      a1 %= v10;
  }
  if ( a1 )
    SymCryptFdefRawSubUint32((__int64)(a2 + 32), a1, a3, v5);
  else
    SymCryptWipe((__int64)a3, (unsigned int)(v5 << 6));
  return (*(__int64 (__fastcall **)(_DWORD *, _DWORD *, __int64, __int64))((char *)off_140005E60
                                                                         + (*a2 & (unsigned int)g_SymCryptModFnsMask)))(
           a2,
           a3,
           a4,
           a5);
}
