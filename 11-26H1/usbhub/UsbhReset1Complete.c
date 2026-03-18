/*
 * XREFs of UsbhReset1Complete @ 0x14000E460
 * Callers:
 *     <none>
 * Callees:
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhWait @ 0x14000C584 (UsbhWait.c)
 *     UsbhEtwLogHubIrpEvent @ 0x14000C7E0 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhAllocateTimeoutObject @ 0x1400100D4 (UsbhAllocateTimeoutObject.c)
 *     UsbhCreateDevice @ 0x14001016C (UsbhCreateDevice.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_UsbdReadFrameCounter @ 0x14001FDB0 (Usbh_UsbdReadFrameCounter.c)
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhClearTt @ 0x14004632C (UsbhClearTt.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 *     __security_check_cookie @ 0x140061BD0 (__security_check_cookie.c)
 */

__int64 __fastcall UsbhReset1Complete(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  unsigned int v7; // r15d
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  KSPIN_LOCK *v12; // rbx
  KIRQL v13; // al
  int FrameCounter; // eax
  int v15; // ecx
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r9
  int v22; // eax
  __int64 v23; // r9
  PVOID v24; // rbx
  int v25; // r14d
  int v26; // eax
  int v27; // [rsp+20h] [rbp-60h]
  PVOID P; // [rsp+58h] [rbp-28h] BYREF
  _DWORD v29[2]; // [rsp+60h] [rbp-20h] BYREF
  __int16 v30; // [rsp+68h] [rbp-18h]
  __int16 v31; // [rsp+6Ah] [rbp-16h]

  v31 = 0;
  v5 = a2;
  P = 0LL;
  v7 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      28,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a2 + 4));
  if ( _bittest(&UsbhLogMask, 0xAu) )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        a2 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(a2 + v11) = 1664176752;
        *(_QWORD *)(a2 + v11 + 8) = 0LL;
        *(_QWORD *)(a2 + v11 + 16) = v5;
        *(_QWORD *)(a2 + v11 + 24) = 0LL;
      }
    }
  }
  v12 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 3064);
  v13 = KeAcquireSpinLockRaiseToDpc(v12);
  KeReleaseSpinLock(v12, v13);
  UsbhCancelResetTimeout(a1, v5, 0LL);
  v27 = *(unsigned __int16 *)(v5 + 4);
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, (const EVENT_DESCRIPTOR *)"!");
  FrameCounter = Usbh_UsbdReadFrameCounter(a1);
  v15 = *(_DWORD *)(v5 + 544);
  *(_DWORD *)(v5 + 852) = FrameCounter;
  v16 = FrameCounter - *(_DWORD *)(v5 + 848);
  v29[1] = v15;
  v29[0] = v16;
  v30 = *(_WORD *)(v5 + 4);
  UsbhWait(a1, v15 != 0 ? 100 : 32);
  if ( (int)UsbhCreateDevice(a1, a3, *(unsigned __int16 *)(v5 + 420), *(unsigned __int16 *)(v5 + 4), v27, 0) < 0 )
    goto LABEL_17;
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_ENUM_CREATE_DEVICE_COMPLETE);
  if ( _bittest16((const signed __int16 *)(v5 + 420), 0xAu)
    && !*(_DWORD *)(v5 + 544)
    && !dword_14007072C
    && (*(_DWORD *)(FdoExt(a1, v17, v18, v19) + 2560) & 0x8000000) == 0 )
  {
    return UsbhReset2Complete(a1, v5, a3, v20);
  }
  v22 = UsbhAllocateTimeoutObject(a1, v5, &P);
  v24 = P;
  v25 = v22;
  if ( v22 >= 0 )
  {
    v7 = 2;
LABEL_21:
    UsbhResetPort(a1, v5, (__int64)v24, v23);
    return v7;
  }
  if ( !P )
  {
LABEL_17:
    v26 = UsbhAllocateTimeoutObject(a1, v5, &P);
    v24 = P;
    v25 = v26;
  }
  if ( *(_DWORD *)(v5 + 544) >= 3u )
  {
    if ( v24 )
      ExFreePoolWithTag(v24, 0);
  }
  else if ( v24 )
  {
    UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_ENUM_RETRY);
    UsbhWait(a1, 0x1F4u);
    ++*(_DWORD *)(v5 + 544);
    UsbhClearTt(a1, v5, 0LL);
    goto LABEL_21;
  }
  UsbhSetEnumerationFailed(a1, v5, a3, 3, (__int64)v29, v25);
  return 0LL;
}
