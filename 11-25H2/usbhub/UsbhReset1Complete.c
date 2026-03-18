/*
 * XREFs of UsbhReset1Complete @ 0x140012800
 * Callers:
 *     <none>
 * Callees:
 *     Usbh_UsbdReadFrameCounter @ 0x140005DFC (Usbh_UsbdReadFrameCounter.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C5A0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     UsbhCreateDevice @ 0x140012398 (UsbhCreateDevice.c)
 *     UsbhResetPort @ 0x140012B44 (UsbhResetPort.c)
 *     UsbhWait @ 0x140014114 (UsbhWait.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x14001D1A8 (UsbhAllocateTimeoutObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x1400467EC (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 *     __security_check_cookie @ 0x1400614F0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  KSPIN_LOCK *v8; // rbx
  KIRQL v9; // al
  int FrameCounter; // eax
  int v11; // ecx
  int v12; // eax
  _DWORD *Pool2; // rax
  int v15; // eax
  int v16; // ebp
  __int64 v17; // [rsp+20h] [rbp-88h]
  __int64 v18; // [rsp+20h] [rbp-88h]
  __int64 v19; // [rsp+28h] [rbp-80h]
  __int64 v20; // [rsp+28h] [rbp-80h]
  PVOID P; // [rsp+58h] [rbp-50h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp-48h] BYREF
  __int16 v23; // [rsp+68h] [rbp-40h]
  __int16 v24; // [rsp+6Ah] [rbp-3Eh]

  v24 = 0;
  P = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v6 = *(_QWORD *)(a1 + 64);
      if ( v6 )
      {
        v7 = *(_QWORD *)(v6 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884));
        *(_DWORD *)v7 = 1664176752;
        *(_QWORD *)(v7 + 8) = 0LL;
        *(_QWORD *)(v7 + 16) = a2;
        *(_QWORD *)(v7 + 24) = 0LL;
      }
    }
  }
  v8 = (KSPIN_LOCK *)(FdoExt(a1) + 766);
  v9 = KeAcquireSpinLockRaiseToDpc(v8);
  KeReleaseSpinLock(v8, v9);
  UsbhCancelResetTimeout(a1, a2, 0);
  LODWORD(v19) = 0;
  LODWORD(v17) = *(unsigned __int16 *)(a2 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, (const EVENT_DESCRIPTOR *)"!", v17, v19);
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v11 = *(_DWORD *)(a2 + 544);
  *(_DWORD *)(a2 + 852) = FrameCounter;
  v12 = FrameCounter - *(_DWORD *)(a2 + 848);
  v22[1] = v11;
  v22[0] = v12;
  v23 = *(_WORD *)(a2 + 4);
  UsbhWait(a1, v11 != 0 ? 100 : 32);
  if ( (int)UsbhCreateDevice(a1, a3, *(_WORD *)(a2 + 420), *(_WORD *)(a2 + 4)) >= 0 )
  {
    LODWORD(v20) = 0;
    LODWORD(v18) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE, v18, v20);
    if ( (*(_WORD *)(a2 + 420) & 0x400) != 0
      && !*(_DWORD *)(a2 + 544)
      && !dword_14006F6CC
      && (FdoExt(a1)[640] & 0x8000000) == 0 )
    {
      return UsbhReset2Complete(a1, a2, a3);
    }
    Pool2 = (_DWORD *)ExAllocatePool2(64LL, 20LL, 1112885333LL);
    if ( Pool2 )
    {
      *Pool2 = 1867468116;
      Pool2[4] = *(_DWORD *)(a2 + 400);
      UsbhResetPort(a1, a2);
      return 2LL;
    }
    Log(a1, 1024, 1635020577, a2, 0LL);
  }
  v15 = UsbhAllocateTimeoutObject(a1, a2, &P);
  v16 = v15;
  if ( *(_DWORD *)(a2 + 544) >= 3u )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  else if ( P )
  {
    LODWORD(v20) = v15;
    LODWORD(v18) = *(unsigned __int16 *)(a2 + 4);
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY, v18, v20);
    UsbhWait(a1, 500LL);
    ++*(_DWORD *)(a2 + 544);
    UsbhClearTt(a1, a2, 0LL);
    UsbhResetPort(a1, a2);
    return 1LL;
  }
  UsbhSetEnumerationFailed(a1, a2, a3, 3, (__int64)v22, v16);
  return 0LL;
}
