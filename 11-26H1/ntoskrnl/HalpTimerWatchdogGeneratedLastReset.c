/*
 * XREFs of HalpTimerWatchdogGeneratedLastReset @ 0x1407845D0
 * Callers:
 *     HalpTimerWatchdogLogReset @ 0x140784620 (HalpTimerWatchdogLogReset.c)
 * Callees:
 *     Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline @ 0x140578F90 (Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline.c)
 *     HalpTimerDidAbnormalResetOccur @ 0x140587914 (HalpTimerDidAbnormalResetOccur.c)
 */

bool HalpTimerWatchdogGeneratedLastReset()
{
  __int64 v0; // rbx
  int IsEnabledDeviceUsageNoInline; // eax
  int v2; // ecx

  v0 = HalpWatchdogTimer;
  if ( HalpWatchdogTimer )
  {
    IsEnabledDeviceUsageNoInline = Feature_Servicing_HalAbnormalResetDetection__private_IsEnabledDeviceUsageNoInline();
    v2 = *(_DWORD *)(v0 + 224) & 0x40000;
    if ( !IsEnabledDeviceUsageNoInline )
      return v2 != 0;
    if ( v2 || HalpTimerDidAbnormalResetOccur() )
      return 1;
  }
  return 0;
}
