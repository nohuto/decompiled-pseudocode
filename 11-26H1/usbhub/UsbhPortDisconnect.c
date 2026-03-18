/*
 * XREFs of UsbhPortDisconnect @ 0x140021F00
 * Callers:
 *     UsbhHandleSuspend @ 0x140021430 (UsbhHandleSuspend.c)
 *     UsbhPortCycle @ 0x140058480 (UsbhPortCycle.c)
 *     UsbhReset1Debounce @ 0x140058A70 (UsbhReset1Debounce.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1400081E4 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x140021BAC (UsbhBusUnlatchPdo.c)
 *     UsbhDeleteUxdSettings @ 0x140022594 (UsbhDeleteUxdSettings.c)
 *     UsbhSignalSuspendEvent @ 0x140022970 (UsbhSignalSuspendEvent.c)
 *     Usbh_Disconnect_PdoEvent @ 0x14002350C (Usbh_Disconnect_PdoEvent.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPortDisconnect(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // rcx
  signed __int32 v8; // eax
  unsigned int v9; // edx
  __int64 v10; // rcx
  __int64 v11; // rdx
  _DWORD *v12; // rax
  __int64 v13; // r9
  _DWORD *v14; // rbp
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // r9

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  v6 = *(unsigned __int16 *)(a2 + 4);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = _InterlockedExchangeAdd((volatile signed __int32 *)(v7 + 880), 0xFFFFFFFF);
        v9 = *(_DWORD *)(v7 + 884);
        v10 = *(_QWORD *)(v7 + 888);
        v11 = 32LL * ((v8 - 1) & v9);
        *(_DWORD *)(v11 + v10) = 1397310576;
        *(_QWORD *)(v11 + v10 + 8) = 0LL;
        *(_QWORD *)(v11 + v10 + 16) = a2;
        *(_QWORD *)(v11 + v10 + 24) = v6;
      }
    }
  }
  v12 = PdoExt(a3);
  LOBYTE(v13) = 1;
  v14 = v12;
  UsbhUnlinkPdoDeviceHandle(a1, a3, 2017740853LL, v13);
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
        v19 = *(_DWORD *)(v17 + 884);
        v20 = *(_QWORD *)(v17 + 888);
        v21 = 32LL * ((v18 - 1) & v19);
        *(_DWORD *)(v21 + v20) = 860112996;
        *(_QWORD *)(v21 + v20 + 8) = 0LL;
        *(_QWORD *)(v21 + v20 + 16) = a3;
        *(_QWORD *)(v21 + v20 + 24) = 0LL;
      }
    }
  }
  UsbhSignalResumeEvent(a1, a2, v15, v16);
  UsbhSignalSuspendEvent(a1, a2);
  if ( (v14[355] & 0x20000) == 0 )
    UsbhDeleteUxdSettings(a1, a3, 2LL);
  UsbhBusUnlatchPdo(a1, a3, a2, v22, 0LL);
  Usbh_Disconnect_PdoEvent(a1, a3, 3LL, *(_QWORD *)(a2 + 376));
  return 0LL;
}
