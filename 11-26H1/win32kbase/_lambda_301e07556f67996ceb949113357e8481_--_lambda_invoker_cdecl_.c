/*
 * XREFs of _lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_ @ 0x1401D78DC
 * Callers:
 *     InitCreateSharedSection @ 0x1402F4E7C (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_301e07556f67996ceb949113357e8481_::_lambda_invoker_cdecl_(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  __int64 result; // rax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  ObfDereferenceObject(*(PVOID *)(UserSessionState + 19872));
  result = W32GetUserSessionState(v5, v4, v6);
  *(_QWORD *)(result + 19872) = 0LL;
  return result;
}
