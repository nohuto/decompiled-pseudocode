/*
 * XREFs of SymCryptFdefModElementGetValue @ 0x14056E6AC
 * Callers:
 *     SymCryptModElementGetValue @ 0x14055EA84 (SymCryptModElementGetValue.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1404CB9A0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawGetValue @ 0x14056FF94 (SymCryptFdefRawGetValue.c)
 *     _guard_dispatch_icall_nop @ 0x140727520 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall SymCryptFdefModElementGetValue(
        _DWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        __int64 a7)
{
  int v7; // esi
  int v12; // eax

  v7 = a1[1];
  xHalTimerWatchdogStop();
  v12 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140005E68
                                                                       + (*a1 & (unsigned int)g_SymCryptModFnsMask)))(
          a1,
          a2,
          a6,
          a7);
  return SymCryptFdefRawGetValue(v12, v7, a3, a4, a5);
}
