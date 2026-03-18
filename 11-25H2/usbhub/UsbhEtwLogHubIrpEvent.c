/*
 * XREFs of UsbhEtwLogHubIrpEvent @ 0x14000C5A0
 * Callers:
 *     UsbhReset1DropDevice @ 0x140011DF0 (UsbhReset1DropDevice.c)
 *     UsbhReset1Complete @ 0x140012800 (UsbhReset1Complete.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhGetDeviceInformation @ 0x14001A9A8 (UsbhGetDeviceInformation.c)
 *     UsbhSetupDevice @ 0x14001ADE8 (UsbhSetupDevice.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhSshResumePort @ 0x140028064 (UsbhSshResumePort.c)
 *     UsbhSshSuspendHub @ 0x1400297BC (UsbhSshSuspendHub.c)
 *     UsbhArmHubForWakeDetect @ 0x14002A004 (UsbhArmHubForWakeDetect.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     Usbh_SSH_HubSuspended @ 0x14002B258 (Usbh_SSH_HubSuspended.c)
 *     Usbh_SSH_HubPendingSuspend @ 0x14002B3BC (Usbh_SSH_HubPendingSuspend.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x14002CA60 (UsbhFdoColdStartPdo.c)
 *     UsbhFdoColdStartCheckPort @ 0x14002CFB0 (UsbhFdoColdStartCheckPort.c)
 *     UsbhQueryBusRelations @ 0x14002D43C (UsbhQueryBusRelations.c)
 *     UsbhSshPropagateResume @ 0x14002E46C (UsbhSshPropagateResume.c)
 *     UsbhFdoD0Worker_Action @ 0x14002F4B0 (UsbhFdoD0Worker_Action.c)
 *     UsbhFdoWaitWake_IoCompletion @ 0x140036460 (UsbhFdoWaitWake_IoCompletion.c)
 *     UsbhFdoPower_WaitWake @ 0x140036A90 (UsbhFdoPower_WaitWake.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhGetAcpiPortAttributes @ 0x14003BE24 (UsbhGetAcpiPortAttributes.c)
 *     UsbhQueueHardReset @ 0x14004C830 (UsbhQueueHardReset.c)
 *     Usbh_HRS_Queued @ 0x14004CD8C (Usbh_HRS_Queued.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140057DE0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhReset1DropDeviceTimeout @ 0x140058770 (UsbhReset1DropDeviceTimeout.c)
 *     UsbhReset1Timeout @ 0x1400588F0 (UsbhReset1Timeout.c)
 *     UsbhReset2DropDevice @ 0x140058C70 (UsbhReset2DropDevice.c)
 *     UsbhReset2DropDeviceTimeout @ 0x140058D60 (UsbhReset2DropDeviceTimeout.c)
 *     UsbhReset2Timeout @ 0x140058EE0 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwWrite @ 0x14000AB60 (UsbhEtwWrite.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void UsbhEtwLogHubIrpEvent(__int64 a1, __int64 a2, __int128 *a3, const EVENT_DESCRIPTOR *a4, ...)
{
  _DWORD *v7; // rax
  int v8; // edx
  int ActivityIdIrp; // eax
  const GUID *v10; // rdx
  int v11; // [rsp+60h] [rbp-29h] BYREF
  __int16 v12; // [rsp+64h] [rbp-25h]
  __int16 v13; // [rsp+66h] [rbp-23h]
  __int16 v14; // [rsp+68h] [rbp-21h]
  __int16 v15; // [rsp+6Ah] [rbp-1Fh]
  _WORD v16[2]; // [rsp+70h] [rbp-19h] BYREF
  int v17; // [rsp+74h] [rbp-15h]
  int v18; // [rsp+78h] [rbp-11h]
  int v24; // [rsp+90h] [rbp+7h]
  __int128 v25; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v26; // [rsp+100h] [rbp+77h] BYREF
  va_list va; // [rsp+100h] [rbp+77h]
  va_list va1; // [rsp+108h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v26 = va_arg(va1, _QWORD);
  v17 = 0;
  v25 = 0LL;
  if ( dword_14006F690 )
  {
    v7 = FdoExt(a1);
    v11 = v7[1298];
    v12 = *((_WORD *)v7 + 2598);
    v13 = v7[1300];
    v14 = *((_WORD *)v7 + 2614);
    v15 = *((_WORD *)v7 + 2615);
    v16[0] = *((_WORD *)v7 + 1274);
    v16[1] = *((_WORD *)v7 + 1275);
    v17 = 0;
    v18 = *((unsigned __int16 *)v7 + 2604);
    v8 = *((_WORD *)v7 + 2604) != 0;
    v17 = v8;
    if ( *((unsigned __int16 *)v7 + 2605) )
      v17 = ++v8;
    if ( *((unsigned __int16 *)v7 + 2606) )
      v17 = ++v8;
    if ( *((unsigned __int16 *)v7 + 2607) )
      v17 = ++v8;
    if ( *((unsigned __int16 *)v7 + 2608) )
      v17 = ++v8;
    if ( *((unsigned __int16 *)v7 + 2609) )
      v17 = v8 + 1;
    v24 = v7[634];
    if ( a3 )
    {
      ActivityIdIrp = 0;
      v25 = *a3;
    }
    else if ( a2 && g_IoGetActivityIdIrp )
    {
      ActivityIdIrp = g_IoGetActivityIdIrp(a2, &v25);
    }
    else
    {
      ActivityIdIrp = -1073741823;
    }
    v10 = (const GUID *)&v25;
    if ( ActivityIdIrp < 0 )
      v10 = 0LL;
    UsbhEtwWrite(a4, v10, &v11, 12LL, v16, 36LL, va, 4LL, va1, 4LL, 0LL);
  }
}
