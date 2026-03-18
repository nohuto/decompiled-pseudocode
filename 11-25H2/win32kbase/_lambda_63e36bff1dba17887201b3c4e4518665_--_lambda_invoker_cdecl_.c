/*
 * XREFs of _lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_ @ 0x1401B53BC
 * Callers:
 *     InitCreateSharedSection @ 0x1402EA988 (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rbx
  NTSTATUS result; // eax

  UserSessionState = W32GetUserSessionState(a1, a2);
  result = MmUnmapViewInSessionSpace(*(PVOID *)(UserSessionState + 19856));
  *(_QWORD *)(UserSessionState + 19856) = 0LL;
  return result;
}
