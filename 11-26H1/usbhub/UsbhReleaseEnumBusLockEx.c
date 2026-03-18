/*
 * XREFs of UsbhReleaseEnumBusLockEx @ 0x14002414C
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x1400011C0 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhPortConnect @ 0x14000BF90 (UsbhPortConnect.c)
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     UsbhDropDevice @ 0x140023AE8 (UsbhDropDevice.c)
 *     UsbhCancelEnumeration @ 0x140033B08 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Close @ 0x140043C48 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x140043D08 (UsbhPCE_HW_Stop.c)
 *     UsbhSyncResetDeviceInternal @ 0x140048448 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHardErrorInvalidData @ 0x140058250 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140058340 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortRecycle @ 0x1400586D0 (UsbhPortRecycle.c)
 *     UsbhReset1Debounce @ 0x140058A70 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x140059170 (UsbhReset2CycleDevice.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14001C060 (UsbhDecHubBusy.c)
 *     _guard_dispatch_icall @ 0x140061C10 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhReleaseEnumBusLockEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rcx
  signed __int32 v9; // eax
  unsigned int v10; // edx
  __int64 v11; // rcx
  __int64 v12; // rdx
  KIRQL v13; // al
  __int64 v14; // rdx
  KIRQL v15; // r10

  v3 = a3;
  v6 = FdoExt(a1);
  v7 = (unsigned int)v6[768];
  if ( (UsbhLogMask & 4) != 0 )
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
        *(_DWORD *)(v12 + v11) = 1398096501;
        *(_QWORD *)(v12 + v11 + 8) = 0LL;
        *(_QWORD *)(v12 + v11 + 16) = v7;
        *(_QWORD *)(v12 + v11 + 24) = v3;
      }
    }
  }
  if ( *((_QWORD *)v6 + 550) )
  {
    v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (_DWORD)v3 && *((_QWORD *)v6 + 385) == a2 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v13);
      UsbhDecHubBusy(a1, v14, *((_QWORD **)v6 + 386));
      *((_QWORD *)v6 + 386) = 0LL;
      v6[768] = 0;
      *((_QWORD *)v6 + 385) = 0LL;
      _InterlockedDecrement(v6 + 774);
      (*((void (__fastcall **)(_QWORD))v6 + 550))(*((_QWORD *)v6 + 529));
    }
    else
    {
      Log(a1, 4, 1967281016, (unsigned int)v6[768], *((_QWORD *)v6 + 385));
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v15);
    }
  }
}
