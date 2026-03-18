/*
 * XREFs of OSNotifyDeviceEject @ 0x140063D74
 * Callers:
 *     NotifyHandler @ 0x14001E9B0 (NotifyHandler.c)
 *     OSNotifyDeviceCheck @ 0x140041ADC (OSNotifyDeviceCheck.c)
 * Callees:
 *     ACPIBuildSynchronizationRequestInternal @ 0x140041C64 (ACPIBuildSynchronizationRequestInternal.c)
 *     WPP_RECORDER_SF_qs @ 0x140041F5C (WPP_RECORDER_SF_qs.c)
 */

__int64 __fastcall OSNotifyDeviceEject(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    dword_14008E680 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
    byte_14008E684 = 0;
    WPP_RECORDER_SF_qs(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      0xCu,
      0x19u,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      a1,
      (const char *)&dword_14008E680);
  }
  v5 = *(_QWORD *)(*(_QWORD *)a1 + 104LL);
  if ( v5 )
    ACPIBuildSynchronizationRequestInternal(
      v5,
      (__int64)ACPIBuildIssueNotifyDeviceEject,
      *(_QWORD *)(*(_QWORD *)a1 + 104LL),
      a4,
      1);
  return 0LL;
}
