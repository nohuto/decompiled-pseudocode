/*
 * XREFs of UsbhUnlinkPdoDeviceHandle @ 0x1400081E4
 * Callers:
 *     UsbhDeletePdo @ 0x140007770 (UsbhDeletePdo.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     UsbhInitializeDevice @ 0x140038404 (UsbhInitializeDevice.c)
 *     UsbhDeregisterPdo @ 0x1400467AC (UsbhDeregisterPdo.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048E68 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhReset2Timeout @ 0x140059450 (UsbhReset2Timeout.c)
 *     UsbhPdoPnp_StopDevice @ 0x14005D9C0 (UsbhPdoPnp_StopDevice.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     Usbh_HubDerefDeviceHandle @ 0x140030108 (Usbh_HubDerefDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1400492D4 (Usbh_HubRemoveUsbDevice.c)
 *     UsbhBusIf_SetClearRootPortResumeTime @ 0x140057930 (UsbhBusIf_SetClearRootPortResumeTime.c)
 */

void __fastcall UsbhUnlinkPdoDeviceHandle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // r12
  int v5; // ebp
  __int64 v8; // rsi
  KSPIN_LOCK *v9; // r15
  KIRQL v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rcx
  signed __int32 v13; // eax
  unsigned int v14; // edx
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  signed __int32 v18; // eax
  unsigned int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rax
  __int64 v25; // r9
  __int64 v26; // r8
  __int64 v27; // r9
  int v28; // [rsp+30h] [rbp-38h]

  v4 = a4;
  v5 = a3;
  v8 = 0LL;
  v9 = (KSPIN_LOCK *)(FdoExt(a1, a2, a3, a4) + 3720);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  v11 = PdoExt(a2);
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v12 = *(_QWORD *)(a1 + 64);
      if ( v12 )
      {
        v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v12 + 880), 0xFFFFFFFF);
        v14 = *(_DWORD *)(v12 + 884);
        v15 = *(_QWORD *)(v12 + 888);
        v16 = 32LL * ((v13 - 1) & v14);
        *(_DWORD *)(v16 + v15) = 1146121333;
        *(_QWORD *)(v16 + v15 + 8) = 0LL;
        *(_QWORD *)(v16 + v15 + 16) = 0LL;
        *(_QWORD *)(v16 + v15 + 24) = 0LL;
      }
    }
  }
  if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v17 = *(_QWORD *)(a1 + 64);
      if ( v17 )
      {
        HIBYTE(v28) = v5;
        LOBYTE(v28) = HIBYTE(v5);
        BYTE1(v28) = BYTE2(v5);
        BYTE2(v28) = BYTE1(v5);
        v18 = _InterlockedExchangeAdd((volatile signed __int32 *)(v17 + 880), 0xFFFFFFFF);
        v19 = *(_DWORD *)(v17 + 884);
        v20 = *(_QWORD *)(v17 + 888);
        v21 = 32LL * ((v18 - 1) & v19);
        *(_DWORD *)(v21 + v20) = v28;
        *(_QWORD *)(v21 + v20 + 8) = 0LL;
        *(_QWORD *)(v21 + v20 + 16) = a2;
        *(_QWORD *)(v21 + v20 + 24) = 0LL;
      }
    }
  }
  v22 = *(int *)(v11 + 1152);
  if ( (unsigned int)v22 > 1 )
  {
    if ( (_DWORD)v22 == 2 )
    {
      if ( (*(_DWORD *)(v11 + 1420) & 0x20000000) != 0 )
      {
        UsbhBusIf_SetClearRootPortResumeTime(a1, *(_QWORD *)(v11 + 1160), 0LL, 0LL);
        *(_DWORD *)(v11 + 1420) &= ~0x20000000u;
      }
      v8 = *(_QWORD *)(v11 + 1160);
      *(_QWORD *)(v11 + 1160) = 0xFEFEFEFEFEFEFEFEuLL;
      *(_DWORD *)(v11 + 1152) = 1;
      Log(a1, 256, 1970032690, 0, v8);
      Usbh_HubDerefDeviceHandle(a1, v8, a2, 1212441712LL);
    }
  }
  else if ( _bittest(&UsbhLogMask, 8u) )
  {
    if ( a1 )
    {
      v23 = *(_QWORD *)(a1 + 64);
      if ( v23 )
      {
        v24 = (unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880));
        v25 = *(unsigned int *)(v23 + 884);
        v26 = *(_QWORD *)(v23 + 888);
        v27 = 32 * (v24 & v25);
        *(_DWORD *)(v27 + v26) = 827354229;
        *(_QWORD *)(v27 + v26 + 8) = 0LL;
        *(_QWORD *)(v27 + v26 + 16) = 0LL;
        *(_QWORD *)(v27 + v26 + 24) = v22;
      }
    }
  }
  KeReleaseSpinLock(v9, v10);
  if ( v8 )
  {
    if ( v4 )
      Usbh_HubRemoveUsbDevice(a1, v8);
  }
}
