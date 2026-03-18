/*
 * XREFs of UnlockUpdatesForDwm @ 0x1401FBEC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall UnlockUpdatesForDwm(int a1, int a2, int a3)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2, a3);
  *(_DWORD *)(result + 70556) = 0;
  return result;
}
