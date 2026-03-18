/*
 * XREFs of UsbhInternalIoctlPropagateResume @ 0x140033A08
 * Callers:
 *     UsbhFdoInternalDeviceControl @ 0x140033970 (UsbhFdoInternalDeviceControl.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_SSH_Event @ 0x14001B400 (Usbh_SSH_Event.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhInternalIoctlPropagateResume(__int64 a1, IRP *a2)
{
  _DWORD *v4; // rax
  __int64 v5; // rcx
  signed __int32 v6; // eax
  unsigned int v7; // edx
  __int64 v8; // rcx
  __int64 v9; // rdx

  v4 = FdoExt(a1);
  Usbh_SSH_Event(a1, 8u, (__int64)(v4 + 478));
  if ( (UsbhLogMask & 0x20) != 0 )
  {
    if ( a1 )
    {
      v5 = *(_QWORD *)(a1 + 64);
      if ( v5 )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 880), 0xFFFFFFFF);
        v7 = *(_DWORD *)(v5 + 884);
        v8 = *(_QWORD *)(v5 + 888);
        v9 = 32LL * ((v6 - 1) & v7);
        *(_DWORD *)(v9 + v8) = 1382834791;
        *(_QWORD *)(v9 + v8 + 8) = 0LL;
        *(_QWORD *)(v9 + v8 + 16) = a2;
        *(_QWORD *)(v9 + v8 + 24) = 0LL;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      2,
      58,
      (__int64)&WPP_0e71f174ec2935c2faef2b76cf668edd_Traceguids,
      0);
  a2->IoStatus.Status = 0;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
