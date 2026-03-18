/*
 * XREFs of W32SetCurrentWin32kFastMutex @ 0x1401CEC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32SetCurrentWin32kFastMutex(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2, a3);
  *(_QWORD *)(result + 42560) = a1;
  return result;
}
