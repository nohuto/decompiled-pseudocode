/*
 * XREFs of UsbhHandleSuspend @ 0x140034A58
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     UsbhResumeSuspendedPort @ 0x140011AE8 (UsbhResumeSuspendedPort.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhPortDisconnect @ 0x14001D240 (UsbhPortDisconnect.c)
 *     WPP_RECORDER_SF_ @ 0x14003E860 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDD @ 0x1400541CC (WPP_RECORDER_SF_dDD.c)
 *     UsbhHandleOvercurrent @ 0x140057ABC (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHandleSuspend(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v7; // ebx
  unsigned int v9; // edi
  __int64 v10; // rcx
  unsigned int v11; // ebx
  unsigned int v12; // ebx
  unsigned int v13; // ebx

  v5 = a3;
  v7 = a2;
  v9 = 5;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      a2 = *(_QWORD *)(a1 + 64);
      if ( a2 )
      {
        v10 = *(_QWORD *)(a2 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(a2 + 880)) & *(_DWORD *)(a2 + 884));
        *(_DWORD *)v10 = 1347638611;
        *(_QWORD *)(v10 + 24) = v7;
        *(_QWORD *)(v10 + 8) = 0LL;
        *(_QWORD *)(v10 + 16) = a4;
      }
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(a4 + 4),
      a3,
      44,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(a4 + 4),
      a3,
      v7);
  v11 = v7 - 1;
  if ( !v11 )
    return (unsigned int)UsbhPortDisconnect(a1, a4, a5);
  v12 = v11 - 7;
  if ( !v12 )
    return (unsigned int)UsbhHandleOvercurrent(a1, 5, a3, a4, a5);
  v13 = v12 - 262136;
  if ( !v13 )
    return v9;
  if ( v13 == 786432 )
    return (unsigned int)UsbhResumeSuspendedPort(a1, a2, v5, a4, a5);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      45,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids);
  Log(a1, 1024, 1937077062, *(unsigned __int16 *)(a4 + 420), v5);
  return 4;
}
