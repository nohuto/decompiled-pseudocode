/*
 * XREFs of GetPowerTransitionsState @ 0x140195140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_OWORD *__fastcall GetPowerTransitionsState(_OWORD *a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  _OWORD *result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  if ( !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(UserSessionState + 42352)) )
    __int2c();
  result = (_OWORD *)W32GetUserSessionState(v5, v4);
  *a1 = result[172];
  a1[1] = result[173];
  a1[2] = result[174];
  a1[3] = result[175];
  return result;
}
