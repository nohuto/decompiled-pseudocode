/*
 * XREFs of UsbhReset1Debounce @ 0x140058A70
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 *     UsbhReleaseEnumBusLockEx @ 0x14002414C (UsbhReleaseEnumBusLockEx.c)
 *     UsbhAssertBusLock @ 0x1400244C8 (UsbhAssertBusLock.c)
 *     UsbhPCE_QueueChange @ 0x140030160 (UsbhPCE_QueueChange.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 */

__int64 __fastcall UsbhReset1Debounce(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v7; // [rsp+28h] [rbp-30h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x12u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(unsigned __int16 *)(a2 + 4));
  Log(a1, 1024, 1883393603, a2, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v7) = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x13u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v7);
  }
  UsbhAssertBusLock(a1);
  if ( (*(_DWORD *)(a2 + 2408) & 1) == 0 )
    return 1LL;
  Log(a1, 1024, 1852785730, a2, *(unsigned __int16 *)(a2 + 4));
  UsbhCancelResetTimeout(a1, a2, 1);
  UsbhSignalSyncDeviceReset(a1, a3, a2, 3221225473LL);
  UsbhReleaseEnumBusLockEx(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
  UsbhPortDisconnect(a1, a2, a3);
  UsbhPCE_QueueChange(a1, *(_WORD *)(a2 + 4), 1LL, *(_QWORD *)(a2 + 376));
  return 0LL;
}
