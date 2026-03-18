/*
 * XREFs of ?AddPowerStateLogEntry@@YAXW4_POWER_STATE_LOG_ENTRY_TYPE@@K@Z @ 0x140111C50
 * Callers:
 *     UserPowerStateCallout @ 0x1401118A8 (UserPowerStateCallout.c)
 *     ?xxxUserPowerStateCalloutWorker@@YAJXZ @ 0x1401132A0 (-xxxUserPowerStateCalloutWorker@@YAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddPowerStateLogEntry(int a1, int a2, int a3)
{
  __int64 UserSessionState; // r9
  char v6; // r8
  __int64 result; // rax
  __int64 v8; // r8

  UserSessionState = W32GetUserSessionState(a1, a2, a3);
  v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(UserSessionState + 616), 1u);
  result = MEMORY[0xFFFFF78000000008];
  v8 = 2 * ((v6 & 0x7F) + 16LL);
  *(_DWORD *)(UserSessionState + 8 * v8 + 376) = a1;
  *(_QWORD *)(UserSessionState + 8 * v8 + 368) = result;
  *(_DWORD *)(UserSessionState + 8 * v8 + 380) = a2;
  return result;
}
