/*
 * XREFs of GetInputHapticSettings @ 0x1401DF4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GetInputHapticSettings(__int64 a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  __int64 v5; // xmm1_8
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  *(_OWORD *)a1 = *(_OWORD *)(UserSessionState + 18568);
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(UserSessionState + 18584);
  *(_OWORD *)(a1 + 32) = *(_OWORD *)(UserSessionState + 18600);
  v5 = *(_QWORD *)(UserSessionState + 18616);
  result = 1LL;
  *(_QWORD *)(a1 + 48) = v5;
  return result;
}
