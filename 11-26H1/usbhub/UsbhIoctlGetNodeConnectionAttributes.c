/*
 * XREFs of UsbhIoctlGetNodeConnectionAttributes @ 0x14004D834
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x14001C1F0 (UsbhIncHubBusy.c)
 *     UsbhReleaseApiLock @ 0x1400249B8 (UsbhReleaseApiLock.c)
 *     UsbhAcquireApiLock @ 0x140024E50 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x140025F40 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionAttributes(__int64 a1, IRP *a2, __int64 a3)
{
  _IRP *MasterIrp; // r14
  size_t v7; // r15
  _DWORD *v8; // rax
  _QWORD *v9; // r12
  int v10; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 PortData; // rbp
  __int64 v14; // rdx
  __int64 v16; // [rsp+28h] [rbp-60h]
  char v17; // [rsp+98h] [rbp+10h] BYREF
  int v18; // [rsp+A0h] [rbp+18h] BYREF

  v17 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x26u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v7 = *(unsigned int *)(a3 + 8);
  v18 = 272;
  Log(a1, 32, 1768898145, (__int64)a2, (__int64)MasterIrp);
  v8 = FdoExt(a1);
  v9 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v8 + 434), (__int64)a2, 1430414185, 1);
  if ( v9 )
  {
    v10 = UsbhAcquireApiLock(a1, 0xF00D000A, &v17);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      v10 = UsbhIoctlValidateParameters(a1, 272, (__int64)a2, a3, 4u, 0xCu);
      if ( (v10 & 0xC0000000) == 0xC0000000 )
      {
        v10 = -1073741811;
      }
      else
      {
        PortData = UsbhGetPortData(a1, (unsigned __int16)MasterIrp->Type, v11, v12);
        memset(MasterIrp, 0, v7);
        if ( PortData )
        {
          v10 = 0;
          *(_DWORD *)&MasterIrp->Type = *(unsigned __int16 *)(PortData + 4);
          *(_QWORD *)(&MasterIrp->Size + 1) = *(unsigned int *)(PortData + 428);
          a2->IoStatus.Information = 12LL;
        }
      }
    }
  }
  else
  {
    v10 = -1073741670;
  }
  Log(a1, 32, 1768897633, (__int64)a2, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v16) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x27u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v16);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0, 91, &v18, 4u, v10, 0, usbfile_ioctl_c, 1863, 0);
  if ( v17 )
    UsbhReleaseApiLock(a1, 0xF00D000A);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v14, v9);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
