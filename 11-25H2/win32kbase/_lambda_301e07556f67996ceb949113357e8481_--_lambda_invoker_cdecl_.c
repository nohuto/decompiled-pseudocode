/*
 * XREFs of _lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_ @ 0x1401B5378
 * Callers:
 *     InitCreateSharedSection @ 0x1402EA988 (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  ObfDereferenceObject(*(PVOID *)(UserSessionState + 19840));
  result = W32GetUserSessionState(v4, v3);
  *(_QWORD *)(result + 19840) = 0LL;
  return result;
}
