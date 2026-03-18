/*
 * XREFs of LeaveDitCompositionInputSinkQueryCrit_ @ 0x1401FE6A4
 * Callers:
 *     NtUserCompositionInputSinkLuidFromPoint @ 0x1401CA6D0 (NtUserCompositionInputSinkLuidFromPoint.c)
 *     NtUserCompositionInputSinkViewInstanceIdFromPoint @ 0x140222650 (NtUserCompositionInputSinkViewInstanceIdFromPoint.c)
 * Callees:
 *     <none>
 */

void __fastcall LeaveDitCompositionInputSinkQueryCrit_(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(a1, a2);
  ExReleaseResourceAndLeaveCriticalRegion(*(PERESOURCE *)(UserSessionState + 18792));
}
