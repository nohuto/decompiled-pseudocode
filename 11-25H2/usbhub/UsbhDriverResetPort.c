/*
 * XREFs of UsbhDriverResetPort @ 0x1400578C0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     UsbhResetPort @ 0x140012B44 (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x140012E54 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalResumeEvent @ 0x1400138D4 (UsbhSignalResumeEvent.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAllocateTimeoutObject @ 0x14001D1A8 (UsbhAllocateTimeoutObject.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSyncDeviceReset @ 0x140048768 (UsbhSignalSyncDeviceReset.c)
 */

__int64 __fastcall UsbhDriverResetPort(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3)
{
  unsigned int v6; // esi
  int v7; // eax
  _DWORD *v8; // rax
  _DWORD *v9; // rax
  __int64 v10; // rdx
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF

  v13 = 0LL;
  Log((__int64)a1, 1024, 1884443460, a2, 0LL);
  v6 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x28u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v12);
  }
  UsbhSignalResumeEvent((__int64)a1, a2);
  v7 = UsbhAllocateTimeoutObject((__int64)a1, a2, &v13);
  if ( v7 < 0 )
  {
    v6 = 0;
    UsbhSignalSyncDeviceReset((__int64)a1, a3, a2, v7);
  }
  else
  {
    *(_DWORD *)(a2 + 2408) |= 1u;
    *(_DWORD *)(a2 + 544) = 0;
    if ( a3 )
    {
      v8 = PdoExt(a3);
      v8[355] &= ~0x1000u;
      v9 = PdoExt(a3);
      UsbhDecHubBusy((__int64)a1, v10, *((_QWORD **)v9 + 107));
      *((_QWORD *)PdoExt(a3) + 107) = 0LL;
    }
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(_WORD *)(a2 + 4));
    UsbhResetPort((__int64)a1, a2, v13);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 10);
  }
  return v6;
}
