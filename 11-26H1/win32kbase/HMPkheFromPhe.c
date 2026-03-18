/*
 * XREFs of HMPkheFromPhe @ 0x1400FCA10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HMPkheFromPhe(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  return *(_QWORD *)(UserSessionState + 19864)
       + 40LL * (unsigned int)((a1 - *(_QWORD *)(UserSessionState + 19920)) >> 5);
}
