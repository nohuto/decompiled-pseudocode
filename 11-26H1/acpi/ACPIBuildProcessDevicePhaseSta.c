/*
 * XREFs of ACPIBuildProcessDevicePhaseSta @ 0x140047240
 * Callers:
 *     <none>
 * Callees:
 *     ACPIBuildCompleteMustSucceed @ 0x140027FA0 (ACPIBuildCompleteMustSucceed.c)
 *     WPP_RECORDER_SF_Lqss @ 0x140034360 (WPP_RECORDER_SF_Lqss.c)
 *     ACPIDetectDuplicateHID @ 0x140047354 (ACPIDetectDuplicateHID.c)
 *     ACPIRegisterForDeviceNotificationsByDeviceExtension @ 0x140049968 (ACPIRegisterForDeviceNotificationsByDeviceExtension.c)
 *     LinkNodeAddLinkNode @ 0x140071980 (LinkNodeAddLinkNode.c)
 */

__int64 __fastcall ACPIBuildProcessDevicePhaseSta(__int64 a1)
{
  ULONG_PTR v1; // rbx
  char v3; // r8
  const char *v4; // rax
  const char *v5; // rcx
  __int64 v6; // rdx

  v1 = *(_QWORD *)(a1 + 40);
  if ( (*(_DWORD *)(v1 + 8) & 0x2000LL) != 0 )
  {
    KeInitializeSpinLock((PKSPIN_LOCK)(v1 + 184));
    *(_DWORD *)(v1 + 196) = 0;
    ACPIRegisterForDeviceNotificationsByDeviceExtension(v1, ACPICMButtonNotifyByDeviceExtension, v1);
  }
  v3 = 0;
  *(_DWORD *)(a1 + 32) = 14;
  v4 = byte_140075A82;
  v5 = byte_140075A82;
  if ( v1 )
  {
    v6 = *(_QWORD *)(v1 + 8);
    v3 = v1;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v4 = *(const char **)(v1 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v5 = *(const char **)(v1 + 616);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_Lqss(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      4u,
      6u,
      0x30u,
      (__int64)&WPP_5bab3af2503233a3d44df37daf259dd7_Traceguids,
      0,
      v3,
      v4,
      v5);
  ACPIDetectDuplicateHID(v1);
  if ( (*(_DWORD *)(v1 + 8) & 0x10000000) != 0 )
    LinkNodeAddLinkNode((PVOID)v1);
  ACPIBuildCompleteMustSucceed(0LL, 0, 0LL, a1);
  return 0LL;
}
