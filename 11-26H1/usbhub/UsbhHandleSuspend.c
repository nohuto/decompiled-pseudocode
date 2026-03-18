/*
 * XREFs of UsbhHandleSuspend @ 0x140021430
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     UsbhResumeSuspendedPort @ 0x14002ED10 (UsbhResumeSuspendedPort.c)
 *     WPP_RECORDER_SF_ @ 0x14003E310 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDD @ 0x1400546DC (WPP_RECORDER_SF_dDD.c)
 *     UsbhHandleOvercurrent @ 0x14005801C (UsbhHandleOvercurrent.c)
 */

__int64 __fastcall UsbhHandleSuspend(__int64 a1, __int64 a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r14
  unsigned int v7; // ebx
  unsigned int v9; // edi
  __int64 v10; // rcx
  signed __int32 v11; // eax
  unsigned int v12; // edx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  unsigned int v15; // ebx
  unsigned int v16; // ebx

  v5 = a3;
  v7 = a2;
  v9 = 5;
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        a2 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(a2 + v13) = 1347638611;
        *(_QWORD *)(a2 + v13 + 24) = v7;
        *(_QWORD *)(a2 + v13 + 8) = 0LL;
        *(_QWORD *)(a2 + v13 + 16) = a4;
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
  v14 = v7 - 1;
  if ( !v14 )
    return (unsigned int)UsbhPortDisconnect(a1, a4, a5);
  v15 = v14 - 7;
  if ( !v15 )
    return (unsigned int)UsbhHandleOvercurrent(a1, 5, a3, a4, a5);
  v16 = v15 - 262136;
  if ( !v16 )
    return v9;
  if ( v16 == 786432 )
    return (unsigned int)UsbhResumeSuspendedPort(a1, a2, (_BYTE)v5, a4, a5);
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
