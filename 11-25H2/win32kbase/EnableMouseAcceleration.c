/*
 * XREFs of EnableMouseAcceleration @ 0x14014C990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EnableMouseAcceleration(__int64 a1, __int64 a2)
{
  char v2; // bl
  __int64 result; // rax

  v2 = a1;
  result = W32GetUserSessionState(a1, a2);
  *(_BYTE *)(*(_QWORD *)(result + 16368) + 112LL) = v2;
  return result;
}
