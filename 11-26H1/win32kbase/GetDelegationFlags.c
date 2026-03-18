/*
 * XREFs of GetDelegationFlags @ 0x1401688B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetDelegationFlags(int a1, int a2, int a3)
{
  return *(unsigned int *)(*(_QWORD *)(W32GetUserSessionState(a1, a2, a3) + 19632) + 8LL);
}
