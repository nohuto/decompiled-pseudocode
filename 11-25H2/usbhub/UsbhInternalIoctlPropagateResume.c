/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x1400357D4
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x140035740 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x140009870 (Usbh_SSH_Event.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax
  void *DeviceExtension; // rdx
  __int64 v6; // rcx
  int v8; // [rsp+28h] [rbp-10h]

  v4 = FdoExt((__int64)a1);
  Usbh_SSH_Event(a1, 8u, (__int64)(v4 + 478));
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      DeviceExtension = a1->DeviceExtension;
      if ( DeviceExtension )
      {
        v6 = *((_QWORD *)DeviceExtension + 111)
           + 32LL
           * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)DeviceExtension + 220) & *((_DWORD *)DeviceExtension + 221));
        *(_DWORD *)v6 = 1382834791;
        *(_QWORD *)(v6 + 8) = 0LL;
        *(_QWORD *)(v6 + 16) = a2;
        *(_QWORD *)(v6 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = 0;
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v8);
  }
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
