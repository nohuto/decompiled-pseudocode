/*
 * XREFs of UsbhIoctlGetNodeConnectionInfoExV2 @ 0x140024AB8
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     UsbhReleaseApiLock @ 0x1400249B8 (UsbhReleaseApiLock.c)
 *     UsbhAcquireApiLock @ 0x140024E50 (UsbhAcquireApiLock.c)
 *     UsbhIoctlTraceOutput @ 0x140025F40 (UsbhIoctlTraceOutput.c)
 *     UsbhIoctlValidateParameters @ 0x140027160 (UsbhIoctlValidateParameters.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     memset @ 0x140061FC0 (memset.c)
 */

__int64 __fastcall UsbhIoctlGetNodeConnectionInfoExV2(__int64 a1, IRP *a2, __int64 a3)
{
  _DWORD *v6; // r13
  _IRP *MasterIrp; // r14
  size_t v8; // r12
  __int64 v9; // rcx
  signed __int32 v10; // eax
  unsigned int v11; // edx
  __int64 v12; // rcx
  __int64 v13; // rdx
  int v14; // edi
  int Type; // r15d
  int MdlAddress; // ebx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // rcx
  signed __int32 v23; // eax
  unsigned int v24; // edx
  __int64 v25; // rcx
  __int64 v26; // rdx
  char v28; // [rsp+98h] [rbp+10h] BYREF
  int v29; // [rsp+A0h] [rbp+18h]
  int v30; // [rsp+A8h] [rbp+20h] BYREF

  v28 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      30,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v30 = 279;
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
        v29 = 1665036137;
        v10 = _InterlockedExchangeAdd((volatile signed __int32 *)(v9 + 880), 0xFFFFFFFF);
        v11 = *(_DWORD *)(v9 + 884);
        v12 = *(_QWORD *)(v9 + 888);
        v13 = 32LL * ((v10 - 1) & v11);
        *(_DWORD *)(v13 + v12) = v29;
        *(_QWORD *)(v13 + v12 + 8) = 0LL;
        *(_QWORD *)(v13 + v12 + 16) = a2;
        *(_QWORD *)(v13 + v12 + 24) = MasterIrp;
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
  v14 = UsbhAcquireApiLock(a1, 4027383829LL, &v28);
  if ( (v14 & 0xC0000000) != 0xC0000000 )
  {
    v14 = UsbhIoctlValidateParameters(a1, 279, (_DWORD)a2, a3, 16, 16);
    if ( (v14 & 0xC0000000) != 0xC0000000 )
    {
      if ( *(_DWORD *)(&MasterIrp->Size + 1) >= 0x10u )
      {
        Type = (unsigned __int16)MasterIrp->Type;
        MdlAddress = (int)MasterIrp->MdlAddress;
        memset(MasterIrp, 0, v8);
        *(_DWORD *)&MasterIrp->Type = Type;
        if ( (MdlAddress & 4) != 0 && UsbhGetPortData(a1, (unsigned __int16)Type, v17, v18) )
        {
          *(_DWORD *)(&MasterIrp->Size + 1) = 16;
          a2->IoStatus.Information = 16LL;
          v19 = LODWORD(MasterIrp->MdlAddress) | 1;
          LODWORD(MasterIrp->MdlAddress) = v19;
          if ( (v6[640] & 0x8000) != 0 )
            LODWORD(MasterIrp->MdlAddress) = v19 | 2;
          v20 = UsbhLatchPdo(a1, Type, (__int64)a2, 0x496F3063u);
          v21 = v20;
          if ( v20 )
          {
            if ( (PdoExt(v20)[355] & 0x80000) != 0 )
              HIDWORD(MasterIrp->MdlAddress) |= 2u;
            UsbhUnlatchPdo(a1, v21, (__int64)a2, 0x496F3063u);
          }
        }
        else
        {
          v14 = -1073741811;
        }
      }
      else
      {
        v14 = -1073741811;
      }
    }
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(a1 + 64);
      if ( v22 )
      {
        v29 = 1664905065;
        v23 = _InterlockedExchangeAdd((volatile signed __int32 *)(v22 + 880), 0xFFFFFFFF);
        v24 = *(_DWORD *)(v22 + 884);
        v25 = *(_QWORD *)(v22 + 888);
        v26 = 32LL * ((v23 - 1) & v24);
        *(_DWORD *)(v26 + v25) = v29;
        *(_QWORD *)(v26 + v25 + 24) = v14;
        *(_QWORD *)(v26 + v25 + 8) = 0LL;
        *(_QWORD *)(v26 + v25 + 16) = a2;
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
      v14);
  if ( (v14 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v14) )
    UsbhException(a1, 0, 91, &v30, 4u, v14, 0, usbfile_ioctl_c, 1062, 0);
  if ( v28 )
    UsbhReleaseApiLock(a1, 0xF00D0015);
  UsbhIoctlTraceOutput(a1, a2);
  a2->IoStatus.Status = v14;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v14;
}
