/*
 * XREFs of Usbh_Disconnect_PdoEvent @ 0x14002350C
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     UsbhDropDevice @ 0x140023AE8 (UsbhDropDevice.c)
 *     Usbh_PCE_BusDisconnect_Action @ 0x1400446B8 (Usbh_PCE_BusDisconnect_Action.c)
 * Callees:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDeregisterPdo @ 0x1400467AC (UsbhDeregisterPdo.c)
 */

void __fastcall Usbh_Disconnect_PdoEvent(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  int v13; // r8d
  KIRQL v14; // dl

  *(_BYTE *)(a4 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(a4 + 136) = 1;
  *(_DWORD *)(a4 + 88) = 2018460752;
  *(_DWORD *)(a4 + 92) = a3;
  qword_140070600 = a4;
  *(_QWORD *)(a4 + 24) = KeGetCurrentThread();
  if ( (UsbhLogMask & 2) != 0 )
  {
    if ( a1 )
    {
      v8 = *(_QWORD *)(a1 + 64);
      if ( v8 )
      {
        v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(v8 + 880), 0xFFFFFFFF);
        v10 = *(_DWORD *)(v8 + 884);
        v11 = *(_QWORD *)(v8 + 888);
        v12 = 32LL * ((v9 - 1) & v10);
        *(_DWORD *)(v12 + v11) = 1985106790;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = 0LL;
        *(_QWORD *)(v12 + v11 + 24) = a4;
      }
    }
  }
  FdoExt(a1);
  if ( (PdoExt(a2)[355] & 0x200) != 0 )
    USBD_MarkDeviceAsDisconnected(a2);
  v13 = PdoExt(a2)[281];
  if ( v13 == 1 || v13 == 2 )
  {
    UsbhDeletePdo(a1, a2, v13, a3, a4);
  }
  else if ( v13 == 3 )
  {
    UsbhDeregisterPdo(a1, a2, 3, a3, a4);
  }
  else
  {
    *(_DWORD *)(a4 + 136) = 0;
    qword_140070600 = 0LL;
    v14 = *(_BYTE *)(a4 + 132);
    *(_DWORD *)(a4 + 88) = 1734964085;
    KeReleaseSpinLock(&HubG, v14);
  }
}
