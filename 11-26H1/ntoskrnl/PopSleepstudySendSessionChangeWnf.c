/*
 * XREFs of PopSleepstudySendSessionChangeWnf @ 0x140B13DBC
 * Callers:
 *     PopSleepstudySendSessionChangeEvent @ 0x140B13BF4 (PopSleepstudySendSessionChangeEvent.c)
 *     PopSleepstudyInitialize @ 0x140D0FD08 (PopSleepstudyInitialize.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwUpdateWnfStateData @ 0x14072BC00 (ZwUpdateWnfStateData.c)
 */

NTSTATUS __fastcall PopSleepstudySendSessionChangeWnf(__int64 a1, int a2, int a3)
{
  __int64 v4; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]

  v4 = a1;
  v5 = a2;
  v6 = a3;
  return ZwUpdateWnfStateData(&WNF_PO_SLEEPSTUDY_SESSION_CHANGE, &v4, 0x10u, 0LL, 0LL, 0, 0);
}
