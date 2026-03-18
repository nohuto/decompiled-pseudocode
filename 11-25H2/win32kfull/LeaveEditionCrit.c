/*
 * XREFs of LeaveEditionCrit @ 0x14018C880
 * Callers:
 *     NtUserMessageCall @ 0x14001B730 (NtUserMessageCall.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall LeaveEditionCrit(__int64 a1)
{
  return UserSessionSwitchLeaveCrit(a1);
}
