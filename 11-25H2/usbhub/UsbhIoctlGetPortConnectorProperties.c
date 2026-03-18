/*
 * XREFs of UsbhIoctlGetPortConnectorProperties @ 0x14004E304
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhReleaseApiLock @ 0x14001EE30 (UsbhReleaseApiLock.c)
 *     UsbhAcquireApiLock @ 0x14001F2B0 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x140020A70 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetPortConnectorProperties(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r15
  _DWORD *v9; // r13
  int v10; // ebx
  __int64 Type; // rbp
  _DWORD *v12; // rax
  __int64 v13; // r9
  __int64 v14; // r10
  __int16 v15; // ax
  __int64 (__fastcall *v16)(_QWORD); // rax
  __int64 v18; // [rsp+28h] [rbp-60h]
  char v19; // [rsp+98h] [rbp+10h] BYREF
  int v20; // [rsp+A0h] [rbp+18h] BYREF

  v19 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Bu,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v20 = 278;
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
  v10 = UsbhAcquireApiLock(a1, 0xF00D0014, &v19);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 278, (__int64)a2, a3, 4u, 0x12u);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      Type = (unsigned __int16)MasterIrp->Type;
      memset(MasterIrp, 0, v8);
      *(_DWORD *)&MasterIrp->Type = Type;
      *(_DWORD *)(&MasterIrp->Size + 1) = 18;
      if ( UsbhGetPortData(a1, Type) )
      {
        v12 = FdoExt(a1);
        Log(a1, 4, 1967604816, (__int64)(v12 + 1056), 0LL);
        if ( (*(_DWORD *)(v14 + 2560) & 1) != 0 )
        {
          v16 = *(__int64 (__fastcall **)(_QWORD))(v13 + 304);
          if ( v16 )
            v15 = v16(*(_QWORD *)(v13 + 8));
          else
            v15 = 0;
        }
        else
        {
          v15 = 0;
        }
        if ( v15 == (_WORD)Type )
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
    LODWORD(v18) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Du,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v18);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0, 91, &v20, 4u, v10, 0, usbfile_ioctl_c, 913, 0);
  if ( v19 )
    UsbhReleaseApiLock(a1, 0xF00D0014);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
