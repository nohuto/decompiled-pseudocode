/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExV2 @ 0x14001EF24
 * Callers:
 *     UsbhFdoDeviceControl @ 0x140021D60 (UsbhFdoDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhLatchPdo @ 0x1400082B0 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhUnlatchPdo @ 0x14000D730 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x14000F810 (Usb_Disconnected.c)
 *     UsbhReleaseApiLock @ 0x14001EE30 (UsbhReleaseApiLock.c)
 *     UsbhAcquireApiLock @ 0x14001F2B0 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x140020A70 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140023120 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140061900 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExV2(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // r13
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v11; // edi
  int Type; // r15d
  int MdlAddress; // ebx
  int v14; // ecx
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v20; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h]
  int v22; // [rsp+A8h] [rbp+20h] BYREF

  v20 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      30,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v22 = 279;
  v6 = FdoExt(a1);
  MasterIrp = a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v9 = *(_QWORD *)(a1 + 64);
      if ( v9 )
      {
        v21 = 1665036137;
        v10 = *(_QWORD *)(v9 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
        *(_DWORD *)v10 = v21;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a2;
        *(_QWORD *)(v10 + 24) = MasterIrp;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      31,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v11 = UsbhAcquireApiLock(a1, 4027383829LL, &v20);
  if ( (v11 & 0xC0000000) != 0xC0000000 )
  {
    v11 = UsbhIoctlValidateParameters(a1, 279, (_DWORD)a2, a3, 16, 16);
    if ( (v11 & 0xC0000000) != 0xC0000000 )
    {
      if ( *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u )
      {
        Type = (unsigned __int16)MasterIrp->Type;
        MdlAddress = (int)MasterIrp->MdlAddress;
        memset(MasterIrp, 0, v8);
        *(_DWORD *)&MasterIrp->Type = Type;
        if ( (MdlAddress & 4) != 0 && UsbhGetPortData(a1, Type) )
        {
          *(_DWORD *)(&MasterIrp->Size + 1) = 16;
          a2->IoStatus.Information = 16LL;
          v14 = LODWORD(MasterIrp->MdlAddress) | 1;
          LODWORD(MasterIrp->MdlAddress) = v14;
          if ( (v6[640] & 0x8000) != 0 )
            LODWORD(MasterIrp->MdlAddress) = v14 | 2;
          v15 = UsbhLatchPdo(a1, Type, (__int64)a2, 0x496F3063u);
          v16 = v15;
          if ( v15 )
          {
            if ( (PdoExt(v15)[355] & 0x80000) != 0 )
              HIDWORD(MasterIrp->MdlAddress) |= 2u;
            UsbhUnlatchPdo(a1, v16, (__int64)a2, 0x496F3063u);
          }
        }
        else
        {
          v11 = -1073741811;
        }
      }
      else
      {
        v11 = -1073741811;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v21 = 1664905065;
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = v21;
        *(_QWORD *)(v18 + 24) = v11;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      32,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v11);
  if ( (v11 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v11) )
    UsbhException(a1, 0, 91, &v22, 4u, v11, 0, usbfile_ioctl_c, 1062, 0);
  if ( v20 )
    UsbhReleaseApiLock(a1, 0xF00D0015);
  UsbhIoctlTraceOutput(a1, a2);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
