/*
 * XREFs of SymCryptFdefModElementGetValue @ 0x14053349C
 * Callers:
 *     SymCryptModElementGetValue @ 0x14052146C (SymCryptModElementGetValue.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140494A10 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawGetValue @ 0x140534D6C (SymCryptFdefRawGetValue.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall SymCryptFdefModElementGetValue(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v10; // eax

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  v10 = guard_dispatch_icall_no_overrides(a1, a2);
  return SymCryptFdefRawGetValue(v10, v5, a3, a4, a5);
}
