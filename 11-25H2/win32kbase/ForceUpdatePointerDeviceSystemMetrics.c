/*
 * XREFs of ForceUpdatePointerDeviceSystemMetrics @ 0x14015B890
 * Callers:
 *     ?PostInitialize@CHidInput@@EEAAJXZ @ 0x14018C0A0 (-PostInitialize@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     ?ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ @ 0x14015B8B8 (-ForceUpdatePointerDeviceSystemMetrics@CInputSystemMetrics@@QEBAXXZ.c)
 */

void __fastcall ForceUpdatePointerDeviceSystemMetrics(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  CInputSystemMetrics::ForceUpdatePointerDeviceSystemMetrics(*(CInputSystemMetrics **)(UserSessionState + 18952));
}
