/*
 * XREFs of UsbhSyncResumePort @ 0x1400358D0
 * Callers:
 *     UsbhSyncResumeDeviceInternal @ 0x1400111E0 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhBusIf_ResumeChildHub @ 0x140037F80 (UsbhBusIf_ResumeChildHub.c)
 *     UsbhCycleDevicePort @ 0x1400469BC (UsbhCycleDevicePort.c)
 * Callees:
 *     UsbhException @ 0x140006C1C (UsbhException.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     UsbhPCE_Enable @ 0x14000D168 (UsbhPCE_Enable.c)
 *     UsbhPCE_Resume @ 0x14000D350 (UsbhPCE_Resume.c)
 *     UsbhWaitForPortResume @ 0x140035AC8 (UsbhWaitForPortResume.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhSyncResumePort(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  int v3; // esi
  __int64 PortData; // rax
  __int64 v7; // rbp
  struct _KEVENT *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // ebx

  v3 = a3;
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
        v3);
  }
  PortData = UsbhGetPortData(a1, v3);
  v7 = PortData;
  if ( PortData )
  {
    v8 = (struct _KEVENT *)(PortData + 520);
    KeWaitForSingleObject((PVOID)(PortData + 520), Executive, 0, 0, 0LL);
    UsbhPCE_Resume(a1, a2, v3);
    UsbhPCE_Enable(a1, a2, v3);
    KeSetEvent(v8, 0, 0);
    v9 = *(unsigned __int16 *)(v7 + 4);
    if ( (UsbhLogMask & 0x10) != 0 )
    {
      if ( a1 )
      {
        v10 = *(_QWORD *)(a1 + 64);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v10 + 880)) & *(_DWORD *)(v10 + 884));
          *(_DWORD *)v11 = 2018988624;
          *(_QWORD *)(v11 + 8) = 0LL;
          *(_QWORD *)(v11 + 16) = 0LL;
          *(_QWORD *)(v11 + 24) = v9;
        }
      }
    }
    v12 = UsbhWaitForPortResume(a1, v7, a2);
    if ( v12 < 0 )
      UsbhException(a1, v3, 134, 0LL, 0, v12, 0, usbfile_bus_c, 7196, 0);
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v12;
}
