/*
 * XREFs of UsbhWcCancelEnumeration @ 0x1400212B0
 * Callers:
 *     UsbhWaitConnect @ 0x1400205C0 (UsbhWaitConnect.c)
 * Callees:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhBusUnlatchPdo @ 0x140021BAC (UsbhBusUnlatchPdo.c)
 *     WPP_RECORDER_SF_d @ 0x14003E3EC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWcCancelEnumeration(PDEVICE_OBJECT ProcessorHistory, __int64 a2, __int64 a3)
{
  __int64 v5; // rdi
  signed __int32 v6; // eax
  unsigned int Next_high; // edx
  __int64 v8; // rdx
  __int64 v10; // rbp
  int v11; // r9d
  __int64 v12; // rdx

  v5 = (__int64)ProcessorHistory;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    ProcessorHistory = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        43,
        (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
        *(_WORD *)(a2 + 4));
  }
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( v5 )
    {
      ProcessorHistory = *(PDEVICE_OBJECT *)(v5 + 64);
      if ( ProcessorHistory )
      {
        v6 = _InterlockedExchangeAdd((volatile signed __int32 *)&ProcessorHistory[2].Dpc.DpcListEntry, 0xFFFFFFFF);
        Next_high = HIDWORD(ProcessorHistory[2].Dpc.DpcListEntry.Next);
        ProcessorHistory = (PDEVICE_OBJECT)ProcessorHistory[2].Dpc.ProcessorHistory;
        v8 = 32LL * ((v6 - 1) & Next_high);
        *(_DWORD *)((char *)&ProcessorHistory->Type + v8) = 1313175651;
        *(_DRIVER_OBJECT **)((char *)&ProcessorHistory->DriverObject + v8) = 0LL;
        *(_DEVICE_OBJECT **)((char *)&ProcessorHistory->NextDevice + v8) = (_DEVICE_OBJECT *)a2;
        *(_DEVICE_OBJECT **)((char *)&ProcessorHistory->AttachedDevice + v8) = 0LL;
      }
    }
  }
  if ( a3 )
  {
    v10 = *(_QWORD *)(a2 + 376);
    UsbhAcquirePdoStateLock((__int64)ProcessorHistory, v10, 19);
    if ( PdoExt(a3)[281] == 2 )
    {
      UsbhBusUnlatchPdo(v5, a3, a2, v11, v10 + 132);
      UsbhDeletePdo(v5, a3, 2, 19, v10);
    }
    else
    {
      v12 = *(_QWORD *)(a2 + 376);
      *(_DWORD *)(v12 + 136) = 0;
      qword_140070600 = 0LL;
      *(_DWORD *)(v12 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v12 + 132));
    }
  }
  return 4LL;
}
