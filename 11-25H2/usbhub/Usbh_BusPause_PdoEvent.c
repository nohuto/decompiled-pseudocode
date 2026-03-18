/*
 * XREFs of Usbh_BusPause_PdoEvent @ 0x140049174
 * Callers:
 *     UsbhCancelEnumeration @ 0x140035C04 (UsbhCancelEnumeration.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     SET_PDO_HWPNPSTATE @ 0x14002DAD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     WPP_RECORDER_SF_q @ 0x14003EDC0 (WPP_RECORDER_SF_q.c)
 *     UsbhFlushQueuedDriverReset @ 0x140047204 (UsbhFlushQueuedDriverReset.c)
 *     UsbhSignalSyncDeviceReset @ 0x140048768 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall Usbh_BusPause_PdoEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  _DWORD *v9; // rax
  __int64 v10; // rdx
  KIRQL v11; // dl

  UsbhFlushQueuedDriverReset(a1, a3);
  UsbhAcquirePdoStateLock(v8, a4, 10);
  Log(a1, 2, 1716736630, 0LL, a4);
  v9 = PdoExt(a2);
  v10 = (unsigned int)v9[281];
  if ( v9[281] == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_q(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v10,
        1u,
        0x45u,
        (__int64)&WPP_e45bf104894738235e8d472f481bb2e2_Traceguids,
        a2);
    Log(a1, 4, 1685283663, a2, a4);
    UsbhDeletePdo(a1, a2, 1, 10, a4);
  }
  else if ( v9[281] == 2 || (unsigned int)(v9[281] - 3) < 2 )
  {
    SET_PDO_HWPNPSTATE(a2, v10, 10);
    *(_DWORD *)(a4 + 136) = 0;
    qword_14006F5A0 = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a4 + 132));
    UsbhSignalSyncDeviceReset(a1, a2, a3, -1073741823);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    qword_14006F5A0 = 0LL;
    v11 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v11);
  }
}
