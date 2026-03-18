/*
 * XREFs of PopDiagTraceGracefulShutdown @ 0x140BFDB68
 * Callers:
 *     PopGracefulShutdown @ 0x140BF9180 (PopGracefulShutdown.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C6954 (PopDiagTraceEventNoPayload.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407E4088 (SshSessionManagerTraceSystemStop.c)
 *     PopCurrentPowerState @ 0x140AB1350 (PopCurrentPowerState.c)
 */

__int64 PopDiagTraceGracefulShutdown()
{
  __int64 v0; // rdx
  __int64 v1; // r8
  struct _KLOCK_ENTRIES *v2; // r9
  __int128 v4; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0LL;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  PopCurrentPowerState(&v4, v0, v1, v2);
  return SshSessionManagerTraceSystemStop(
           SHIDWORD(v4),
           SDWORD2(v4),
           PopLidOpened != 0,
           PopConsoleExternalDisplayConnected != 0);
}
