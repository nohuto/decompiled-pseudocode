/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x14000C7E0
 * Callers:
 *     UsbhSshResumePort @ 0x1400046E8 (UsbhSshResumePort.c)
 *     UsbhSshSuspendHub @ 0x140006848 (UsbhSshSuspendHub.c)
 *     UsbhArmHubForWakeDetect @ 0x1400070A0 (UsbhArmHubForWakeDetect.c)
 *     UsbhSshResumeDownstream @ 0x140008C2C (UsbhSshResumeDownstream.c)
 *     UsbhSetupDevice @ 0x14000901C (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhFdoPower_WaitWake @ 0x14000B1F0 (UsbhFdoPower_WaitWake.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x14000D840 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 *     UsbhReset1DropDevice @ 0x140023990 (UsbhReset1DropDevice.c)
 *     Usbh_SSH_HubSuspended @ 0x140028CA4 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x140028E08 (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhSshResumeUpstream @ 0x140029894 (UsbhSshResumeUpstream.c)
 *     UsbhFdoD0Worker_Action @ 0x14002B2F0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x140030D10 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x140031278 (UsbhFdoColdStartCheckPort.c)
 *     UsbhSshPropagateResume @ 0x1400341AC (UsbhSshPropagateResume.c)
 *     UsbhQueryBusRelations @ 0x140034C9C (UsbhQueryBusRelations.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhGetDeviceInformation @ 0x14003947C (UsbhGetDeviceInformation.c)
 *     UsbhGetAcpiPortAttributes @ 0x14003B898 (UsbhGetAcpiPortAttributes.c)
 *     UsbhQueueHardReset @ 0x14004C400 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x14004C960 (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140058340 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDeviceTimeout @ 0x140058CD0 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x140058E50 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x1400591E0 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x1400592D0 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x140059450 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14001DA20 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4)
{
  int ActivityIdIrp; // eax
  const GUID *v8; // rdx
  __int128 v9; // [rsp+98h] [rbp+Fh] BYREF

  v9 = 0LL;
  if ( dword_1400706F0 )
  {
    FdoExt(a1, a2, a3, a4);
    if ( a3 )
    {
      ActivityIdIrp = 0;
      v9 = *a3;
    }
    else if ( a2 && g_IoGetActivityIdIrp )
    {
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v9);
    }
    else
    {
      ActivityIdIrp = -1073741823;
    }
    v8 = (const GUID *)&v9;
    if ( ActivityIdIrp < 0 )
      v8 = 0LL;
    UsbhEtwWrite(a4, v8);
  }
}
