/*
 * XREFs of Usbh_BusPnpFreeResources_PdoEvent @ 0x140049308
 * Callers:
 *     UsbhAsyncStop @ 0x14004F794 (UsbhAsyncStop.c)
 *     Usbh_FDO_WaitPnpStop @ 0x140051940 (Usbh_FDO_WaitPnpStop.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhGetPortData @ 0x140008540 (UsbhGetPortData.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x14000FB30 (UsbhUnlinkPdoDeviceHandle.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhAcquirePdoStateLock @ 0x14002E600 (UsbhAcquirePdoStateLock.c)
 */

void __fastcall Usbh_BusPnpFreeResources_PdoEvent(__int64 a1, __int64 a2)
{
  int v4; // r9d
  __int64 v5; // rcx
  unsigned __int16 v6; // bp
  __int64 PortData; // rax
  __int64 v8; // rdi
  int v9; // r14d
  __int64 v10; // rcx
  KIRQL v11; // dl

  Log(a1, 2, 1716671314, 0LL, a2);
  UsbhAcquirePdoStateLock(v5, a2, v4 + 17);
  v6 = 1;
  if ( *((_BYTE *)FdoExt(a1) + 2938) )
  {
    while ( 1 )
    {
      PortData = UsbhGetPortData(a1, v6);
      if ( !PortData )
        goto LABEL_10;
      v8 = *(_QWORD *)(PortData + 392);
      Log(a1, 4, 2018526258, v8, 0LL);
      if ( !v8 )
        goto LABEL_10;
      v9 = PdoExt(v8)[281];
      PdoExt(v8);
      if ( v9 == 1 || v9 == 2 )
        break;
      if ( v9 == 3 )
      {
        *(_DWORD *)(a2 + 136) = 0;
        qword_14006F5A0 = 0LL;
        *(_DWORD *)(a2 + 88) = 1734964085;
        KeReleaseSpinLock(&HubG, *(_BYTE *)(a2 + 132));
        UsbhUnlinkPdoDeviceHandle(a1, v8, 2017740849, 1);
LABEL_9:
        UsbhAcquirePdoStateLock(v10, a2, 17);
      }
LABEL_10:
      if ( ++v6 > *((unsigned __int8 *)FdoExt(a1) + 2938) )
        goto LABEL_11;
    }
    UsbhDeletePdo(a1, v8, v9, 17, a2);
    goto LABEL_9;
  }
LABEL_11:
  *(_DWORD *)(a2 + 136) = 0;
  qword_14006F5A0 = 0LL;
  v11 = *(_BYTE *)(a2 + 132);
  *(_DWORD *)(a2 + 88) = 1734964085;
  KeReleaseSpinLock(&HubG, v11);
}
