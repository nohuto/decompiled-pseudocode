/*
 * XREFs of UsbhSoftDisconnectPdo @ 0x1400487A0
 * Callers:
 *     Usbh_PCE_SoftDisconnect_Action @ 0x1400459F4 (Usbh_PCE_SoftDisconnect_Action.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     SET_PDO_HWPNPSTATE @ 0x14002DAD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 *     UsbhSignalSyncDeviceReset @ 0x140048768 (UsbhSignalSyncDeviceReset.c)
 */

void __fastcall UsbhSoftDisconnectPdo(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rsi
  _DWORD *v7; // r14
  __int64 PortData; // rax
  __int64 v9; // r15
  __int64 v10; // rcx
  _DWORD *v11; // rax
  int v12; // edx

  v3 = *(_QWORD *)(a3 + 16);
  FdoExt(a1);
  v7 = PdoExt(v3);
  Log(a1, 2, 1347638561, 0LL, a3);
  PortData = UsbhGetPortData(a1, *((_WORD *)v7 + 714));
  v9 = PortData;
  if ( PortData )
  {
    UsbhCancelResetTimeout(a1, PortData, 1);
    UsbhSignalSyncDeviceReset(a1, v3, v9, -1073741823);
    UsbhAcquirePdoStateLock(v10, a3, a2);
    Log(a1, 4, 1685219152, v9, v3);
    v11 = PdoExt(v3);
    v12 = 3;
    if ( v11[281] != 3 )
    {
      if ( v11[281] != 4 )
      {
LABEL_6:
        *(_DWORD *)(a3 + 136) = 0;
        qword_14006F5A0 = 0LL;
        *(_DWORD *)(a3 + 88) = 1734964085;
        KeReleaseSpinLock(&HubG, *(_BYTE *)(a3 + 132));
        return;
      }
      Log(a1, 4, 1685219123, (__int64)v7, (unsigned int)v7[355]);
      v12 = 4;
    }
    SET_PDO_HWPNPSTATE(v3, v12, a2);
    goto LABEL_6;
  }
}
