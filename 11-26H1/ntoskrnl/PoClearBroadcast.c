/*
 * XREFs of PoClearBroadcast @ 0x140B35BB8
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x140B35B1C (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140BF8D2C (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C112B0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x14049F728 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x140511A94 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140C102BC (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140F103F0;
  if ( qword_140F103F0 )
  {
    PopResumeDeviceIdle();
    PopCurrentBroadcast = 0LL;
    qword_140F103F0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
