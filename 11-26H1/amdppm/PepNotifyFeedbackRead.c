/*
 * XREFs of PepNotifyFeedbackRead @ 0x14000D00C
 * Callers:
 *     PepDifferentialFrequencyRead @ 0x14000CE10 (PepDifferentialFrequencyRead.c)
 *     PepDifferentialPerfRead @ 0x14000CE90 (PepDifferentialPerfRead.c)
 *     PepInstantaneousFrequencyRead @ 0x14000CF10 (PepInstantaneousFrequencyRead.c)
 *     PepInstantaneousPerfRead @ 0x14000CF90 (PepInstantaneousPerfRead.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x140003760 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall PepNotifyFeedbackRead(__int64 a1, __int64 a2)
{
  int v2; // edx
  int v3; // ebx

  v3 = PoFxProcessorNotification(a1, 10LL, a2);
  if ( v3 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 2;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      v2,
      2,
      36,
      (__int64)&WPP_1487aeacecb639397959f3b22a039f3b_Traceguids,
      v3);
  }
  return (unsigned int)v3;
}
