/*
 * XREFs of UsbhUnlinkPdoDeviceHandle @ 0x14000FB30
 * Callers:
 *     UsbhDeletePdo @ 0x14000E690 (UsbhDeletePdo.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhInitializeDevice @ 0x14001CFD4 (UsbhInitializeDevice.c)
 *     UsbhPortDisconnect @ 0x14001D240 (UsbhPortDisconnect.c)
 *     UsbhDeregisterPdo @ 0x140046C6C (UsbhDeregisterPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140049308 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhReset2Timeout @ 0x140058EE0 (UsbhReset2Timeout.c)
 *     UsbhPdoPnp_StopDevice @ 0x14005D3D0 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140034810 (Usbh_HubDerefDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x140049748 (Usbh_HubRemoveUsbDevice.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x1400573D0 (UsbhBusIf_SetClearRootPortResumeTime.c)
 */

void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, int a3, char a4)
{
  __int64 v8; // rsi
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // r13
  _DWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  int v19; // [rsp+30h] [rbp-38h]

  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1) + 930);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = *(_QWORD *)(v12 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v12 + 880)) & *(_DWORD *)(v12 + 884));
        *(_DWORD *)v13 = 1146121333;
        *(_QWORD *)(v13 + 8) = 0LL;
        *(_QWORD *)(v13 + 16) = 0LL;
        *(_QWORD *)(v13 + 24) = 0LL;
      }
    }
  }
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v14 = *(_QWORD *)(a1 + 64);
      if ( v14 )
      {
        HIBYTE(v19) = a3;
        LOBYTE(v19) = HIBYTE(a3);
        BYTE1(v19) = BYTE2(a3);
        BYTE2(v19) = BYTE1(a3);
        v15 = *(_QWORD *)(v14 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v14 + 880)) & *(_DWORD *)(v14 + 884));
        *(_DWORD *)v15 = v19;
        *(_QWORD *)(v15 + 8) = 0LL;
        *(_QWORD *)(v15 + 16) = a2;
        *(_QWORD *)(v15 + 24) = 0LL;
      }
    }
  }
  v16 = (int)v11[288];
  if ( (unsigned int)v16 > 1 )
  {
    if ( (_DWORD)v16 == 2 )
    {
      if ( (v11[355] & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *((_QWORD *)v11 + 145), 0LL, 0LL);
        v11[355] &= ~0x20000000u;
      }
      v8 = *((_QWORD *)v11 + 145);
      *((_QWORD *)v11 + 145) = 0xFEFEFEFEFEFEFEFEuLL;
      v11[288] = 1;
      Log(a1, 256, 1970032690, 0, v8);
      Usbh_HubDerefDeviceHandle(a1, v8, a2, 1212441712LL);
    }
  }
  else if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v17 + 880)) & *(_DWORD *)(v17 + 884));
        *(_DWORD *)v18 = 827354229;
        *(_QWORD *)(v18 + 8) = 0LL;
        *(_QWORD *)(v18 + 16) = 0LL;
        *(_QWORD *)(v18 + 24) = v16;
      }
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( a4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
