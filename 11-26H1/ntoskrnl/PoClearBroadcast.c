/*
 * XREFs of PoClearBroadcast @ 0x140B33768
 * Callers:
 *     PopDirectedDripsDestroyBroadcast @ 0x140B336CC (PopDirectedDripsDestroyBroadcast.c)
 *     PnprWakeDevices @ 0x140BF2D2C (PnprWakeDevices.c)
 *     PopTransitionSystemPowerStateEx @ 0x140C0B0A0 (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     PpmEndHighPerfRequest @ 0x1404A6098 (PpmEndHighPerfRequest.c)
 *     PopResumeDeviceIdle @ 0x140518024 (PopResumeDeviceIdle.c)
 *     IoFreePoDeviceNotifyList @ 0x140C0A0AC (IoFreePoDeviceNotifyList.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

void PoClearBroadcast()
{
  char *v0; // rbx

  v0 = (char *)qword_140F0FAF0;
  if ( qword_140F0FAF0 )
  {
    PopResumeDeviceIdle();
    xmmword_140F0FAE0 = 0LL;
    qword_140F0FAF0 = 0LL;
    IoFreePoDeviceNotifyList(v0 + 48);
    PpmEndHighPerfRequest(2);
    ExFreePoolWithTag(v0, 0x73734450u);
  }
}
