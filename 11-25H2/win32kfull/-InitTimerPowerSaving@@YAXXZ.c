/*
 * XREFs of ?InitTimerPowerSaving@@YAXXZ @ 0x140222D8C
 * Callers:
 *     RawInputThread @ 0x140238B50 (RawInputThread.c)
 * Callees:
 *     <none>
 */

void __fastcall InitTimerPowerSaving(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveElapse", 43200000LL, UserSessionState + 62684);
  v5 = W32GetUserSessionState(v4, v3);
  FastGetProfileDword(0LL, 2LL, L"RITdemonTimerPowerSaveCoalescing", 43200000LL, v5 + 62688);
}
