/*
 * XREFs of UsbhIoctlGetHubCaps @ 0x1400246CC
 * Callers:
 *     UsbhFdoDeviceControl @ 0x14001BCE0 (UsbhFdoDeviceControl.c)
 * Callees:
 *     Usb_Disconnected @ 0x140013CE4 (Usb_Disconnected.c)
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
 */

__int64 __fastcall UsbhIoctlGetHubCaps(__int64 a1, IRP *a2, int a3)
{
  _DWORD *v6; // r15
  _DWORD *p_Type; // r14
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  _DWORD *v13; // rax
  _QWORD *v14; // r12
  int v15; // edi
  __int64 v16; // rcx
  signed __int32 v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rdx
  unsigned int v23; // edx
  int v24[18]; // [rsp+50h] [rbp-48h] BYREF
  char v25; // [rsp+A8h] [rbp+10h] BYREF
  int v26; // [rsp+B8h] [rbp+20h]

  v25 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      19,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids);
  v24[0] = 271;
  v6 = FdoExt(a1);
  p_Type = &a2->AssociatedIrp.MasterIrp->Type;
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v26 = 842952553;
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = v26;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = a2;
        *(_QWORD *)(v12 + v11 + 24) = p_Type;
      }
    }
  }
  v13 = FdoExt(a1);
  v14 = (_QWORD *)UsbhIncHubBusy(a1, (__int64)(v13 + 434), (__int64)a2, 1430414185, 1);
  if ( v14 )
  {
    v15 = UsbhAcquireApiLock(a1, 4027383810LL, &v25);
    if ( (v15 & 0xC0000000) != 0xC0000000 )
    {
      v15 = UsbhIoctlValidateParameters(a1, 271, (_DWORD)a2, a3, 0, 4);
      if ( (v15 & 0xC0000000) != 0xC0000000 )
      {
        v23 = *p_Type | 1;
        if ( (v6[640] & 0x8000) == 0 )
          v23 = *p_Type & 0xFFFFFFFE;
        *p_Type = v23;
      }
    }
  }
  else
  {
    v15 = -1073741670;
  }
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v16 = *(_QWORD *)(a1 + 64);
      if ( v16 )
      {
        v26 = 842821481;
        v17 = _InterlockedExchangeAdd((volatile signed __int32 *)(v16 + 880), 0xFFFFFFFF);
        v18 = *(_DWORD *)(v16 + 884);
        v19 = *(_QWORD *)(v16 + 888);
        v20 = 32LL * ((v17 - 1) & v18);
        *(_DWORD *)(v20 + v19) = v26;
        *(_QWORD *)(v20 + v19 + 24) = v15;
        *(_QWORD *)(v20 + v19 + 8) = 0LL;
        *(_QWORD *)(v20 + v19 + 16) = a2;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      20,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      v15);
  if ( (v15 & 0xC0000000) == 0xC0000000 && !Usb_Disconnected(v15) )
    UsbhException(a1, 0, 91, v24, 4u, v15, 0, usbfile_ioctl_c, 573, 0);
  if ( v25 )
    UsbhReleaseApiLock(a1, 4027383810LL);
  UsbhIoctlTraceOutput(a1, a2);
  FdoExt(a1);
  UsbhDecHubBusy(a1, v21, v14);
  a2->IoStatus.Status = v15;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v15;
}
