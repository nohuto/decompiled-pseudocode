/*
 * XREFs of Usbh_SSH_HubPendingSuspend @ 0x140028E08
 * Callers:
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 * Callees:
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhUnlockSSH @ 0x140029140 (UsbhUnlockSSH.c)
 *     UsbhLockSSH @ 0x1400291C0 (UsbhLockSSH.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 */

__int64 __fastcall Usbh_SSH_HubPendingSuspend(__int64 a1, int a2, __int64 a3)
{
  _DWORD *v6; // r14
  int v7; // edi
  unsigned int v8; // edi
  int v10; // edi
  int v11; // edi

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_148060912b253a30310845788bec287b_Traceguids);
  v6 = FdoExt(a1);
  v7 = a2 - 1;
  if ( v7 )
  {
    v10 = v7 - 1;
    if ( v10 )
    {
      v11 = v10 - 1;
      if ( v11 )
      {
        if ( v11 == 3 )
        {
          UsbhUnlockSSH(a3);
          UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_RESUME_START);
          KeWaitForSingleObject(v6 + 846, Executive, 0, 0, 0LL);
          v8 = -1073741823;
          if ( (unsigned int)UsbhLockSSH(a3, 6LL) != 6 )
            v8 = 0;
        }
        else
        {
          v8 = -1073741823;
        }
      }
      else
      {
        v8 = 0;
      }
    }
    else
    {
      v8 = 0;
    }
  }
  else
  {
    v8 = 0;
  }
  UsbhUnlockSSH(a3);
  return v8;
}
