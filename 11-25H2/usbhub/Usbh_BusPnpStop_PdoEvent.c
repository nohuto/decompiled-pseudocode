/*
 * XREFs of Usbh_BusPnpStop_PdoEvent @ 0x1400011A4
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x140001FCC (UsbhBusPnpStop_Action.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     SET_PDO_HWPNPSTATE @ 0x14002DAD4 (SET_PDO_HWPNPSTATE.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 */

void __fastcall Usbh_BusPnpStop_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 i; // bp
  __int64 PortData; // rax
  __int64 v8; // rbx
  __int64 v9; // r14
  KIRQL v10; // r12
  __int64 v11; // rax
  __int64 v12; // rcx
  KIRQL v13; // dl

  Log(a1, 2, 1716736630, 0, a2);
  UsbhAcquirePdoStateLock(v5, a2, (unsigned int)(v4 + 5));
  for ( i = 1; i <= *(unsigned __int8 *)(FdoExt(a1) + 2938); ++i )
  {
    PortData = UsbhGetPortData(a1, i);
    if ( PortData )
    {
      v8 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526257, v8, 0LL);
      if ( v8 )
      {
        v9 = PdoExt(v8);
        v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v9 + 2808));
        if ( *(_DWORD *)(v9 + 2816) == 1 )
        {
          *(_DWORD *)(v9 + 2816) = 2;
          USBD_RemoveDeviceFromGlobalList(v8);
        }
        KeReleaseSpinLock((PKSPIN_LOCK)(v9 + 2808), v10);
        v11 = PdoExt(v8);
        if ( *(_DWORD *)(v11 + 1124) == 1 || *(_DWORD *)(v11 + 1124) == 2 )
        {
          UsbhDeletePdo(a1, v8, *(unsigned int *)(v11 + 1124), 5LL, a2);
          UsbhAcquirePdoStateLock(v12, a2, 5LL);
        }
        else if ( *(_DWORD *)(v11 + 1124) == 3 )
        {
          SET_PDO_HWPNPSTATE(v8, 3LL, 5LL);
        }
      }
    }
  }
  *(_DWORD *)(a2 + 136) = 0;
  qword_14006F5A0 = 0LL;
  v13 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v13);
}
