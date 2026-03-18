/*
 * XREFs of ImpCleanupLock @ 0x1400BD1D4
 * Callers:
 *     ImpCleanupWork @ 0x1400BDA18 (ImpCleanupWork.c)
 *     ImpInitializeWork @ 0x1400BE40C (ImpInitializeWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1400BF80C (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ImpCleanupLock(PERESOURCE *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v4; // edi

  if ( !*a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v4 = ExDeleteResourceLite(*a1);
  if ( v4 >= 0 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v4;
}
