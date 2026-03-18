/*
 * XREFs of SharedFree @ 0x14018CFA0
 * Callers:
 *     HMFreeObject @ 0x1401187F0 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress, int a2, int a3)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState((_DWORD)BaseAddress, a2, a3);
  return RtlFreeHeap(*(PVOID *)(UserSessionState + 19896), 0, BaseAddress);
}
