/*
 * XREFs of OSNotifyDeviceWakeCallBack @ 0x140033C00
 * Callers:
 *     OSNotifyDeviceWake @ 0x14001EBC8 (OSNotifyDeviceWake.c)
 *     OSNotifyDeviceWakeByGPEEvent @ 0x140032208 (OSNotifyDeviceWakeByGPEEvent.c)
 *     ACPIWakeDisableAsync @ 0x140032438 (ACPIWakeDisableAsync.c)
 *     OSNotifyDeviceWakeByInterrupt @ 0x14004E18C (OSNotifyDeviceWakeByInterrupt.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002EC00 (WPP_RECORDER_SF_q.c)
 *     ACPIWakeCompleteRequestQueue @ 0x140033C74 (ACPIWakeCompleteRequestQueue.c)
 */

void __fastcall OSNotifyDeviceWakeCallBack(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  if ( (_QWORD *)*a4 == a4 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 2;
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        a2,
        21,
        29,
        (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
        (char)a4);
    }
  }
  else
  {
    ACPIWakeCompleteRequestQueue(a4, a2);
  }
  ExFreePoolWithTag(a4, 0);
}
