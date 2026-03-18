/*
 * XREFs of EnableMouseAcceleration @ 0x1401893D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnableMouseAcceleration(int a1, int a2, int a3)
{
  char v3; // bl
  __int64 result; // rax

  v3 = a1;
  result = W32GetUserSessionState(a1, a2, a3);
  *(_BYTE *)(*(_QWORD *)(result + 16360) + 112LL) = v3;
  return result;
}
