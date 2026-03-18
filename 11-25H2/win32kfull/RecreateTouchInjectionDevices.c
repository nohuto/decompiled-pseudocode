/*
 * XREFs of RecreateTouchInjectionDevices @ 0x140223790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RecreateTouchInjectionDevices(__int64 a1, __int64 a2)
{
  *(_DWORD *)(W32GetUserSessionState(a1, a2) + 19272) = 1;
  return 1LL;
}
