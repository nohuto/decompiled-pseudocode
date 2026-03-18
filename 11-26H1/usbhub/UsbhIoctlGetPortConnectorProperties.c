/*
 * XREFs of UsbhIoctlGetPortConnectorProperties @ 0x14004DEE0
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhReleaseApiLock @ 0x1400249B8 (UsbhReleaseApiLock.c)
 *     UsbhAcquireApiLock @ 0x140024E50 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x140025F40 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetPortConnectorProperties(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r15
  _DWORD *v9; // r13
  int v10; // ebx
  __int64 Type; // rbp
  __int64 v12; // r8
  __int64 v13; // r9
  _DWORD *v14; // rax
  __int64 v15; // r10
  __int16 v16; // ax
  __int64 (__fastcall *v17)(_QWORD); // rax
  __int64 v19; // [rsp+28h] [rbp-60h]
  char v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h] BYREF

  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Bu,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v21 = 278;
  v6 = FdoExt(a1);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v9 = v6;
  Log(a1, 32, 1768898098, (__int64)a2, (__int64)MasterIrp);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Cu,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v10 = UsbhAcquireApiLock(a1, 0xF00D0014, &v20);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 278, (__int64)a2, a3, 4u, 0x12u);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      Type = (unsigned __int16)MasterIrp->Type;
      memset(MasterIrp, 0, v8);
      *(_DWORD *)&MasterIrp->Type = Type;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18;
      if ( UsbhGetPortData(a1, (unsigned __int16)Type, v12, v13) )
      {
        v14 = FdoExt(a1);
        Log(a1, 4, 1967604816, (__int64)(v14 + 1056), 0LL);
        if ( (*(_DWORD *)(v15 + 2560) & 1) != 0 )
        {
          v17 = *(__int64 (__fastcall **)(_QWORD))(v15 + 4528);
          if ( v17 )
            v16 = v17(*(_QWORD *)(v15 + 4232));
          else
            v16 = 0;
        }
        else
        {
          v16 = 0;
        }
        if ( v16 == (_WORD)Type )
          LODWORD(MasterIrp->MdlAddress) |= 2u;
        if ( (*(_DWORD *)(*((_QWORD *)v9 + 377) + 4 * Type) & 0x10) == 0 )
          LODWORD(MasterIrp->MdlAddress) |= 1u;
      }
      a2->IoStatus.Information = 18LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)a2, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Du,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v19);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0, 91, &v21, 4u, v10, 0, usbfile_ioctl_c, 913, 0);
  if ( v20 )
    UsbhReleaseApiLock(a1, 0xF00D0014);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
