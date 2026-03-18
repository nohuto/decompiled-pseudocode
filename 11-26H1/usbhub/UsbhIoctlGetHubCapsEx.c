/*
 * XREFs of UsbhIoctlGetHubCapsEx @ 0x14004D280
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhReleaseApiLock @ 0x1400249B8 (UsbhReleaseApiLock.c)
 *     UsbhAcquireApiLock @ 0x140024E50 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x140025F40 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhIoctlGetHubCapsEx(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  _DWORD *p_Type; // r14
  _DWORD *v8; // rbp
  int v9; // ebx
  int v10; // r8d
  __int64 v12; // [rsp+28h] [rbp-60h]
  char v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+A8h] [rbp+20h] BYREF

  v13 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x15u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v14 = 276;
  v6 = FdoExt(a1);
  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  v8 = v6;
  Log(a1, 32, 1768898098, (__int64)a2, (__int64)p_Type);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x16u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v9 = UsbhAcquireApiLock(a1, 0xF00D0012, &v13);
  if ( (v9 & 0xC0000000) != 0xC0000000 )
  {
    v9 = UsbhIoctlValidateParameters(a1, 271, (__int64)a2, a3, 0, 4u);
    if ( (v9 & 0xC0000000) != 0xC0000000 )
    {
      *p_Type = 0;
      v10 = 0;
      if ( (v8[640] & 0x8000) != 0 )
      {
        *p_Type = 1;
        v10 = 1;
      }
      if ( (v8[640] & 0x80u) != 0 )
      {
        v10 |= 8u;
        *p_Type = v10;
      }
      if ( (v8[640] & 0x10000) != 0 )
      {
        v10 |= 4u;
        *p_Type = v10;
      }
      if ( (v8[640] & 0x40) != 0 || (v8[640] & 0x8001) == 32769 )
      {
        v10 |= 2u;
        *p_Type = v10;
      }
      if ( (v8[640] & 0x80000) != 0 )
      {
        v10 |= 0x20u;
        *p_Type = v10;
      }
      if ( (v8[640] & 1) != 0 )
        *p_Type = v10 | 0x10;
      a2->IoStatus.Information = 4LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)a2, v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v12) = v9;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x17u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v12);
  }
  if ( (v9 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v9) )
    UsbhException(a1, 0, 91, &v14, 4u, v9, 0, usbfile_ioctl_c, 700, 0);
  if ( v13 )
    UsbhReleaseApiLock(a1, 0xF00D0012);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
