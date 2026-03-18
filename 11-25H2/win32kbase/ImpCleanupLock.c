/*
 * XREFs of ImpCleanupLock @ 0x140152118
 * Callers:
 *     ImpInitializeWork @ 0x14013882C (ImpInitializeWork.c)
 *     ImpCleanupWork @ 0x14015208C (ImpCleanupWork.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x140088A44 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall ImpCleanupLock(PERESOURCE *a1)
{
  NTSTATUS v2; // edi

  if ( !*a1 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  v2 = ExDeleteResourceLite(*a1);
  if ( v2 >= 0 )
  {
    ExFreePoolWithTag(*a1, 0);
    *a1 = 0LL;
  }
  return (unsigned int)v2;
}
