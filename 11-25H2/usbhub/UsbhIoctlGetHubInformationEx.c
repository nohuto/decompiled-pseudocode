/*
 * XREFs of UsbhIoctlGetHubInformationEx @ 0x14004D974
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
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetHubInformationEx(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // rax
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  _DWORD *v9; // rbp
  int v10; // ebx
  __int64 v12; // [rsp+28h] [rbp-60h]
  char v13; // [rsp+98h] [rbp+10h] BYREF
  int v14; // [rsp+A0h] [rbp+18h] BYREF

  v13 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x18u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v14 = 277;
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
      0x19u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v10 = UsbhAcquireApiLock(a1, 0xF00D0013, &v13);
  if ( (v10 & 0xC0000000) != 0xC0000000 )
  {
    v10 = UsbhIoctlValidateParameters(a1, 277, (__int64)a2, a3, 0, 0x4Du);
    if ( (v10 & 0xC0000000) != 0xC0000000 )
    {
      memset(MasterIrp, 0, v8);
      *(&MasterIrp->Size + 1) = *((unsigned __int8 *)FdoExt(a1) + 2938);
      if ( (v9[640] & 1) != 0 )
      {
        *(_DWORD *)&MasterIrp->Type = 1;
      }
      else
      {
        *(_DWORD *)&MasterIrp->Type = 2;
        *(_OWORD *)(&MasterIrp->Size + 2) = *(_OWORD *)(v9 + 734);
        *(_OWORD *)((char *)&MasterIrp->Flags + 6) = *(_OWORD *)(v9 + 738);
        *(_LIST_ENTRY *)((char *)&MasterIrp->ThreadListEntry + 6) = *(_LIST_ENTRY *)(v9 + 742);
        *(_IO_STATUS_BLOCK *)((char *)&MasterIrp->IoStatus + 6) = *(_IO_STATUS_BLOCK *)(v9 + 746);
        *(_DWORD *)&MasterIrp->ApcEnvironment = v9[750];
        WORD1(MasterIrp->IoRingContext) = *((_WORD *)v9 + 1502);
        BYTE4(MasterIrp->IoRingContext) = *((_BYTE *)v9 + 3006);
      }
      a2->IoStatus.Information = 77LL;
    }
  }
  Log(a1, 32, 1768897586, (__int64)a2, v10);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v12) = v10;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x1Au,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v12);
  }
  if ( (v10 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v10) )
    UsbhException(a1, 0, 91, &v14, 4u, v10, 0, usbfile_ioctl_c, 799, 0);
  if ( v13 )
    UsbhReleaseApiLock(a1, 0xF00D0013);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  a2->IoStatus.Status = v10;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v10;
}
