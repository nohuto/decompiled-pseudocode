/*
 * XREFs of Usbh_BusPnpStop_PdoEvent @ 0x1400386BC
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140011CAC (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhAcquirePdoStateLock @ 0x140010E10 (UsbhAcquirePdoStateLock.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhGetPortData @ 0x1400186A0 (UsbhGetPortData.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     SET_PDO_HWPNPSTATE @ 0x140033458 (SET_PDO_HWPNPSTATE.c)
 */

void __fastcall Usbh_BusPnpStop_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 i; // bp
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 PortData; // rax
  __int64 v10; // rdi
  KSPIN_LOCK *v11; // r14
  KIRQL v12; // r12
  int v13; // r8d
  __int64 v14; // rcx
  KIRQL v15; // dl

  Log(a1, 2, 1716736630, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 5);
  for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i, v7, v8);
    if ( PortData )
    {
      v10 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526257, v10, 0LL);
      if ( v10 )
      {
        v11 = (KSPIN_LOCK *)PdoExt(v10);
        v12 = KeAcquireSpinLockRaiseToDpc(v11 + 351);
        if ( *((_DWORD *)v11 + 704) == 1 )
        {
          *((_DWORD *)v11 + 704) = 2;
          USBD_RemoveDeviceFromGlobalList(v10);
        }
        KeReleaseSpinLock(v11 + 351, v12);
        v13 = PdoExt(v10)[281];
        if ( v13 == 1 || v13 == 2 )
        {
          UsbhDeletePdo(a1, v10, v13, 5, a2);
          UsbhAcquirePdoStateLock(v14, a2, 5);
        }
        else if ( v13 == 3 )
        {
          SET_PDO_HWPNPSTATE(v10, 3, 5);
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  qword_140070600 = 0LL;
  v15 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v15);
}
