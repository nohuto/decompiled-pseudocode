/*
 * XREFs of Usbh_BusPause_PdoEvent @ 0x140048CD4
 * Callers:
 *     UsbhCancelEnumeration @ 0x140033B08 (UsbhCancelEnumeration.c)
 * Callees:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x140033458 (SET_PDO_HWPNPSTATE.c)
 *     WPP_RECORDER_SF_q @ 0x14003E898 (WPP_RECORDER_SF_q.c)
 *     UsbhFlushQueuedDriverReset @ 0x140046D48 (UsbhFlushQueuedDriverReset.c)
 *     UsbhSignalSyncDeviceReset @ 0x1400482B8 (UsbhSignalSyncDeviceReset.c)
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
    qword_140070600 = 0LL;
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, *(_BYTE *)(a4 + 132));
    UsbhSignalSyncDeviceReset(a1, a2, a3, 3221225473LL);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    qword_140070600 = 0LL;
    v11 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v11);
  }
}
