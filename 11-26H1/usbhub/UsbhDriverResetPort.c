/*
 * XREFs of UsbhDriverResetPort @ 0x140057E20
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhResetPort @ 0x14000A2BC (UsbhResetPort.c)
 *     UsbhAcquireEnumBusLock @ 0x14000A5D8 (UsbhAcquireEnumBusLock.c)
 *     UsbhSignalResumeEvent @ 0x14000BD28 (UsbhSignalResumeEvent.c)
 *     UsbhAllocateTimeoutObject @ 0x1400100D4 (UsbhAllocateTimeoutObject.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
 */

__int64 __fastcall UsbhDriverResetPort(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // esi
  int v9; // eax
  __int64 v10; // r9
  _DWORD *v11; // rax
  _DWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r9
  int v16; // [rsp+28h] [rbp-20h]
  __int64 v17; // [rsp+68h] [rbp+20h] BYREF

  v17 = 0LL;
  Log(a1, 1024, 1884443460, a2, 0LL);
  v8 = 1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v16 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x28u,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      v16);
  }
  UsbhSignalResumeEvent(a1, a2, v6, v7);
  v9 = UsbhAllocateTimeoutObject(a1, a2, &v17);
  if ( v9 < 0 )
  {
    v8 = 0;
    UsbhSignalSyncDeviceReset(a1, a3, a2, (unsigned int)v9);
  }
  else
  {
    *(_DWORD *)(a2 + 2408) |= 1u;
    *(_DWORD *)(a2 + 544) = 0;
    if ( a3 )
    {
      v11 = PdoExt(a3);
      v11[355] &= ~0x1000u;
      v12 = PdoExt(a3);
      UsbhDecHubBusy(a1, v13, *((_QWORD **)v12 + 107));
      *((_QWORD *)PdoExt(a3) + 107) = 0LL;
    }
    UsbhAcquireEnumBusLock(a1, *(_QWORD *)(a2 + 376), *(unsigned __int16 *)(a2 + 4), v10);
    UsbhResetPort(a1, a2, v17, v14);
    _InterlockedExchange((volatile __int32 *)(a2 + 428), 10);
  }
  return v8;
}
