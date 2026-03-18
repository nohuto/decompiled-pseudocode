/*
 * XREFs of UsbhWcCancelEnumeration @ 0x140036D5C
 * Callers:
 *     UsbhWaitConnect @ 0x140004380 (UsbhWaitConnect.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhBusUnlatchPdo @ 0x14001CCB0 (UsbhBusUnlatchPdo.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     WPP_RECORDER_SF_d @ 0x14003E938 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhWcCancelEnumeration(PDEVICE_OBJECT a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v8; // rbp
  __int64 v9; // r9
  __int64 v10; // rdx

  v5 = (__int64)a1;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        43,
        (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
        *(unsigned __int16 *)(a2 + 4));
  }
  if ( (UsbhLogMask & 0x400) != 0 )
  {
    if ( v5 )
    {
      v6 = *(_QWORD *)(v5 + 64);
      if ( v6 )
      {
        a1 = (PDEVICE_OBJECT)(*(_QWORD *)(v6 + 888)
                            + 32LL
                            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v6 + 880)) & *(_DWORD *)(v6 + 884)));
        *(_DWORD *)&a1->Type = 1313175651;
        a1->DriverObject = 0LL;
        a1->NextDevice = (_DEVICE_OBJECT *)a2;
        a1->AttachedDevice = 0LL;
      }
    }
  }
  if ( a3 )
  {
    v8 = *(_QWORD *)(a2 + 376);
    UsbhAcquirePdoStateLock((__int64)a1, v8, 19);
    if ( PdoExt(a3)[281] == 2 )
    {
      UsbhBusUnlatchPdo(v5, a3, a2, v9, v8 + 132);
      UsbhDeletePdo(v5, a3, 2, 19, v8);
    }
    else
    {
      v10 = *(_QWORD *)(a2 + 376);
      *(_DWORD *)(v10 + 136) = 0;
      qword_14006F5A0 = 0LL;
      *(_DWORD *)(v10 + 88) = 1734964085;
      KeReleaseSpinLock(&HubG, *(_BYTE *)(v10 + 132));
    }
  }
  return 4LL;
}
