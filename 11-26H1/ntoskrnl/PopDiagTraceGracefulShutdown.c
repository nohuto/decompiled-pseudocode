/*
 * XREFs of PopDiagTraceGracefulShutdown @ 0x140C03B68
 * Callers:
 *     PopGracefulShutdown @ 0x140BFF180 (PopGracefulShutdown.c)
 * Callees:
 *     PopDiagTraceEventNoPayload @ 0x1404C0304 (PopDiagTraceEventNoPayload.c)
 *     Feature_NU4MP__private_IsEnabledDeviceUsageNoInline @ 0x140602F80 (Feature_NU4MP__private_IsEnabledDeviceUsageNoInline.c)
 *     SshSessionManagerTraceSystemStop @ 0x1407E94B8 (SshSessionManagerTraceSystemStop.c)
 *     PopCurrentPowerState @ 0x140AAF340 (PopCurrentPowerState.c)
 */

__int64 PopDiagTraceGracefulShutdown()
{
  char v0; // bl
  __int64 v1; // rdx
  __int64 v2; // r8
  struct _KLOCK_ENTRIES *v3; // r9
  char v4; // si
  char v5; // di
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v7 = 0LL;
  v0 = 0;
  PopDiagTraceEventNoPayload(&POP_ETW_EVENT_GRACEFULSHUTDOWN_START);
  PopCurrentPowerState(&v7, v1, v2, v3);
  v4 = PopLidOpened != 0;
  v5 = PopConsoleExternalDisplayConnected != 0;
  if ( (unsigned int)Feature_NU4MP__private_IsEnabledDeviceUsageNoInline() )
  {
    if ( v5 )
    {
      v0 = PopUsb4DisplayPresent != 0 ? 3 : 1;
    }
    else if ( PopUsb4DisplayPresent )
    {
      v5 = 1;
      v0 = 2;
    }
  }
  return SshSessionManagerTraceSystemStop(SHIDWORD(v7), SDWORD2(v7), v4, v5, v0);
}
