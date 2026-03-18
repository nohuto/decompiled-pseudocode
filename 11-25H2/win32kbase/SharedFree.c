/*
 * XREFs of SharedFree @ 0x14014E360
 * Callers:
 *     HMFreeObject @ 0x1400F67F0 (HMFreeObject.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall SharedFree(PVOID BaseAddress, __int64 a2)
{
  __int64 UserSessionState; // rax

  UserSessionState = W32GetUserSessionState(BaseAddress, a2);
  return RtlFreeHeap(*(PVOID *)(UserSessionState + 19864), 0, BaseAddress);
}
