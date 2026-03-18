/*
 * XREFs of W32SetCurrentWin32kFastMutex @ 0x1401AC790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall W32SetCurrentWin32kFastMutex(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = W32GetUserSessionState(a1, a2);
  *(_QWORD *)(result + 42536) = a1;
  return result;
}
