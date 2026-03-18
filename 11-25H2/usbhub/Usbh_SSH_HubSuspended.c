/*
 * XREFs of Usbh_SSH_HubSuspended @ 0x14002B258
 * Callers:
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 * Callees:
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhSshResumeDownstream @ 0x14002A3C4 (UsbhSshResumeDownstream.c)
 *     UsbhSshResumeUpstream @ 0x14002A798 (UsbhSshResumeUpstream.c)
 *     UsbhUnlockSSH @ 0x14002B510 (UsbhUnlockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubSuspended(struct _DEVICE_OBJECT *a1, int a2, __int64 a3)
{
  int v6; // ebx
  int v7; // ebx
  int v8; // ebx
  int v9; // ebx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  __int64 v14; // [rsp+20h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_03d34bb4a9b33093dcdc7450a7e79093_Traceguids);
  v6 = a2 - 1;
  if ( !v6 )
  {
    UsbhUnlockSSH(a3);
    return 0;
  }
  v7 = v6 - 1;
  if ( !v7 || (v8 = v7 - 1) == 0 || (v9 = v8 - 1) == 0 || (v10 = v9 - 1) == 0 )
  {
LABEL_16:
    UsbhUnlockSSH(a3);
    return (unsigned int)-1073741823;
  }
  v11 = v10 - 1;
  if ( v11 )
  {
    if ( v11 == 2 )
    {
      UsbhUnlockSSH(a3);
      UsbhSshResumeDownstream(a1, a3, 1);
      return 0;
    }
    goto LABEL_16;
  }
  UsbhUnlockSSH(a3);
  LODWORD(v14) = 0;
  UsbhEtwLogHubIrpEvent((__int64)a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START, v14, 0);
  v12 = UsbhSshResumeUpstream(a1, a3);
  if ( v12 < 0 )
    Usbh_SSH_Event(*(struct _DEVICE_OBJECT **)(a3 + 8), 9u, a3);
  return (unsigned int)v12;
}
