/*
 * XREFs of UsbhIoctlGetHubCapsEx @ 0x14004D6AC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReleaseApiLock @ 0x14001EE30 (UsbhReleaseApiLock.c)
 *     UsbhAcquireApiLock @ 0x14001F2B0 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x140020A70 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhIoctlGetHubCapsEx(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  _DWORD *p_Type; // r14
  _DWORD *v8; // rbp
  int v9; // ebx
  int v10; // ecx
  int v11; // edx
  __int64 v13; // [rsp+28h] [rbp-60h]
  char v14; // [rsp+98h] [rbp+10h] BYREF
  int v15; // [rsp+A8h] [rbp+20h] BYREF

  v14 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x15u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v15 = 276;
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
  v9 = UsbhAcquireApiLock(a1, 0xF00D0012, &v14);
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
      v11 = v8[640];
      if ( (v11 & 0x8001) == 0x8001 || (v11 & 0x40) != 0 )
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
    LODWORD(v13) = v9;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x17u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v13);
  }
  if ( (v9 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v9) )
    UsbhException(a1, 0, 91, &v15, 4u, v9, 0, usbfile_ioctl_c, 700, 0);
  if ( v14 )
    UsbhReleaseApiLock(a1, 0xF00D0012);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
