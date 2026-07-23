/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x1407E2104
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x1409F99F8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveWnfCallback @ 0x140B4F200 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x140613CC8 (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceAdaptiveOverrideClear @ 0x1407D59A4 (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  __int64 v2; // rsi

  v2 = 3LL * a1;
  if ( byte_140F0C080[24 * a1] )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) = 0;
      if ( (unsigned int)Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline() )
        ExQueueWorkItem(&PopAdaptiveUpdateIdleContextWorkItem, DelayedWorkQueue);
    }
    byte_140F0C080[8 * v2] = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
