/*
 * XREFs of PepNotifyFeedbackRead @ 0x14000EF0C
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x14000ED10 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x14000ED90 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x14000EE10 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x14000EE90 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x140004618 (WPP_RECORDER_SF_D.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(__int64 a1, __int64 a2)
{
  int v2; // ebx
  int v4; // [rsp+28h] [rbp-10h]

  v2 = PoFxProcessorNotification(a1, 10LL, a2);
  if ( v2 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v4 = v2;
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      2u,
      2u,
      0x24u,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
      v4);
  }
  return (unsigned int)v2;
}
