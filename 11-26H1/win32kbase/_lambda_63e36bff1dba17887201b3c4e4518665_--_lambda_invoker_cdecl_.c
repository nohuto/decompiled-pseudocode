/*
 * XREFs of _lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_ @ 0x1401D7924
 * Callers:
 *     InitCreateSharedSection @ 0x1402F4E7C (InitCreateSharedSection.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall lambda_63e36bff1dba17887201b3c4e4518665_::_lambda_invoker_cdecl_(int a1, int a2, int a3)
{
  __int64 UserSessionState; // rbx
  NTSTATUS result; // eax

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  result = MmUnmapViewInSessionSpace(*(PVOID *)(UserSessionState + 19888));
  *(_QWORD *)(UserSessionState + 19888) = 0LL;
  return result;
}
