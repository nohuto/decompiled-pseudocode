/*
 * XREFs of UsbhSyncResumePort @ 0x140010E74
 * Callers:
 *     UsbhSyncResumeDeviceInternal @ 0x1400120E4 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhBusIf_ResumeChildHub @ 0x1400362D0 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhCycleDevicePort @ 0x1400464FC (UsbhCycleDevicePort.c)
 * Callees:
 *     UsbhWaitForPortResume @ 0x140011070 (UsbhWaitForPortResume.c)
 *     UsbhPCE_Enable @ 0x140013680 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x140013878 (UsbhPCE_Resume.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     UsbhException @ 0x14001B7DC (UsbhException.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhSyncResumePort(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 PortData; // rax
  __int64 v7; // rbp
  struct _KEVENT *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  __int64 v14; // rdx
  int v15; // ebx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        79,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        80,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        a3);
  }
  PortData = UsbhGetPortData(a1, a3);
  v7 = PortData;
  if ( PortData )
  {
    v8 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_Resume(a1, a2, a3);
    UsbhPCE_Enable(a1, a2, a3);
    KeSetEvent(v8, 0, 0);
    v9 = *(unsigned __int16 *)(v7 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        if ( v10 )
        {
          v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
          v12 = *(_DWORD *)(v10 + 884);
          v13 = *(_QWORD *)(v10 + 888);
          v14 = 32LL * ((v11 - 1) & v12);
          *(_DWORD *)(v14 + v13) = 2018988624;
          *(_QWORD *)(v14 + v13 + 8) = 0LL;
          *(_QWORD *)(v14 + v13 + 16) = 0LL;
          *(_QWORD *)(v14 + v13 + 24) = v9;
        }
      }
    }
    v15 = UsbhWaitForPortResume(a1, v7, a2);
    if ( v15 < 0 )
      UsbhException(a1, a3, 134, 0, 0, v15, 0, (__int64)usbfile_bus_c, 7196, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v15;
}
