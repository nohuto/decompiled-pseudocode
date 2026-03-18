/*
 * XREFs of UsbhIoctlGetNodeConnectionDriverKeyName @ 0x14004DAC4
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhUnlatchPdo @ 0x140013A70 (UsbhUnlatchPdo.c)
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhLatchPdo @ 0x140017B30 (UsbhLatchPdo.c)
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

__int64 __fastcall UsbhIoctlGetNodeConnectionDriverKeyName(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned __int16 v4; // r15
  __int64 MasterIrp; // r14
  size_t v8; // r13
  _DWORD *v9; // rax
  _QWORD *v10; // r12
  int v11; // ebx
  __int64 v12; // rax
  struct _DEVICE_OBJECT *v13; // rbp
  _DWORD *v14; // rbx
  NTSTATUS DeviceProperty; // eax
  int v16; // r10d
  ULONG v17; // eax
  __int64 v18; // rcx
  int v19; // r10d
  __int64 v20; // rdx
  __int64 v22; // [rsp+28h] [rbp-70h]
  char v23; // [rsp+A8h] [rbp+10h] BYREF
  ULONG ResultLength; // [rsp+B0h] [rbp+18h] BYREF
  int v25; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  v23 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x36u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  MasterIrp = (__int64)a2->AssociatedIrp.MasterIrp;
  v8 = *(unsigned int *)(a3 + 8);
  v25 = 264;
  Log(a1, 32, 1768898101, (__int64)a2, MasterIrp);
  ResultLength = 0;
  v9 = FdoExt(a1);
  v10 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v9 + 434), (__int64)a2, 1430414185, 1);
  if ( v10 )
  {
    v11 = UsbhAcquireApiLock(a1, 0xF00D0005, &v23);
    if ( (v11 & 0xC0000000) != 0xC0000000 )
    {
      v11 = UsbhIoctlValidateParameters(a1, 264, (__int64)a2, a3, 4u, 0xAu);
      if ( (v11 & 0xC0000000) != 0xC0000000 )
      {
        v4 = *(_WORD *)MasterIrp;
        v12 = UsbhLatchPdo(a1, *(_WORD *)MasterIrp, (__int64)a2, 0x496C3035u);
        v13 = (struct _DEVICE_OBJECT *)v12;
        if ( v12 )
        {
          v14 = PdoExt(v12);
          if ( (v14[355] & 0x400) != 0 )
          {
            memset((void *)MasterIrp, 0, v8);
            *(_DWORD *)MasterIrp = *((unsigned __int16 *)v14 + 714);
            ResultLength = v8 - 10;
            DeviceProperty = IoGetDeviceProperty(
                               v13,
                               DevicePropertyDriverKeyName,
                               v8 - 10,
                               (PVOID)(MasterIrp + 8),
                               &ResultLength);
            Log(a1, 32, 1768383600, (__int64)a2, DeviceProperty);
            v11 = 0;
            if ( v16 != -1073741789 )
              v11 = v16;
            if ( (v11 & 0xC0000000) != 0xC0000000 )
            {
              v17 = ResultLength + 10;
              *(_DWORD *)(MasterIrp + 4) = ResultLength + 10;
              if ( (unsigned int)v8 < v17 )
              {
                *(_WORD *)(MasterIrp + 8) = 0;
                v18 = 10LL;
              }
              else
              {
                v18 = v17;
              }
              a2->IoStatus.Information = v18;
            }
          }
          else
          {
            v11 = -1073741436;
          }
          UsbhUnlatchPdo(a1, (__int64)v13, (__int64)a2, 0x496C3035u);
        }
        else
        {
          v11 = -1073741811;
        }
      }
    }
  }
  else
  {
    v11 = -1073741670;
  }
  Log(a1, 32, 1768897589, (__int64)a2, v11);
  if ( (v11 & 0xC0000000) == 0xC0000000 )
  {
    if ( !Usb_Disconnected(v11) )
    {
      UsbhException(a1, v4, 91, &v25, 4u, v11, v19, usbfile_ioctl_c, 2659, v19);
      LOWORD(v19) = 0;
    }
    if ( (unsigned int)v8 >= 0xA )
    {
      *(_WORD *)(MasterIrp + 8) = v19;
      *(_DWORD *)(MasterIrp + 4) = 10;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
    && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v19 )
  {
    LODWORD(v22) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      2u,
      0x37u,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v22);
  }
  if ( v23 )
    UsbhReleaseApiLock(a1, 0xF00D0005);
  UsbhIoctlTraceOutput(a1, (__int64)a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v20, v10);
  a2->IoStatus.Status = v11;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v11;
}
