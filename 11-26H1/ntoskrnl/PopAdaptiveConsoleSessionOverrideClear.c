/*
 * XREFs of PopAdaptiveConsoleSessionOverrideClear @ 0x1407DDAD4
 * Callers:
 *     PopAdaptiveGetConsoleSessionState @ 0x140A3DFD8 (PopAdaptiveGetConsoleSessionState.c)
 *     PopAdaptiveWnfCallback @ 0x140B4D470 (PopAdaptiveWnfCallback.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline @ 0x140610A0C (Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline.c)
 *     PopDiagTraceAdaptiveOverrideClear @ 0x1407D2938 (PopDiagTraceAdaptiveOverrideClear.c)
 */

void __fastcall PopAdaptiveConsoleSessionOverrideClear(int a1, int a2)
{
  __int64 v2; // rsi

  v2 = 3LL * a1;
  if ( *((_BYTE *)&PopAdaptiveStandbyLock.SchedulerSharedSystemSlot + 24 * a1) )
  {
    if ( a1 == 1 )
    {
      if ( a2 != 1 )
        return;
      LOBYTE(ExpPlatformBinaryLock.Timer.Dpc) = 0;
      if ( (unsigned int)Feature_UnattendedRebootIdleFix__private_IsEnabledDeviceUsageNoInline() )
        ExQueueWorkItem((PWORK_QUEUE_ITEM)&PopAdaptiveStandbyLock.SuspendEvent, DelayedWorkQueue);
    }
    *((_BYTE *)&PopAdaptiveStandbyLock.SchedulerSharedSystemSlot + 8 * v2) = 0;
    PopDiagTraceAdaptiveOverrideClear();
  }
}
