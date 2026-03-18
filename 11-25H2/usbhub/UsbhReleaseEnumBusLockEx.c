/*
 * XREFs of UsbhReleaseEnumBusLockEx @ 0x14001B830
 * Callers:
 *     Usbh_PCE_psPAUSED_Action @ 0x140002204 (Usbh_PCE_psPAUSED_Action.c)
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     UsbhDropDevice @ 0x140011F44 (UsbhDropDevice.c)
 *     UsbhPortConnect @ 0x140013B30 (UsbhPortConnect.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhCancelEnumeration @ 0x140035C04 (UsbhCancelEnumeration.c)
 *     UsbhPCE_Close @ 0x140044124 (UsbhPCE_Close.c)
 *     UsbhPCE_HW_Stop @ 0x1400441E4 (UsbhPCE_HW_Stop.c)
 *     UsbhSyncResetDeviceInternal @ 0x1400488F4 (UsbhSyncResetDeviceInternal.c)
 *     UsbhHardErrorInvalidData @ 0x140057CF0 (UsbhHardErrorInvalidData.c)
 *     UsbhHardErrorReset1BadEnable @ 0x140057DE0 (UsbhHardErrorReset1BadEnable.c)
 *     UsbhPortRecycle @ 0x140058170 (UsbhPortRecycle.c)
 *     UsbhReset1Debounce @ 0x140058510 (UsbhReset1Debounce.c)
 *     UsbhReset2CycleDevice @ 0x140058C00 (UsbhReset2CycleDevice.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 *     UsbhDecHubBusy @ 0x14000A860 (UsbhDecHubBusy.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     _guard_dispatch_icall @ 0x140061530 (_guard_dispatch_icall.c)
 */

void __fastcall UsbhReleaseEnumBusLockEx(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  __int64 v3; // rbp
  _DWORD *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  KIRQL v10; // al
  __int64 v11; // rdx
  KIRQL v12; // r10

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
        v9 = *(_QWORD *)(v8 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
        *(_QWORD *)(v9 + 8) = 0LL;
        *(_DWORD *)v9 = 1398096501;
        *(_QWORD *)(v9 + 16) = v7;
        *(_QWORD *)(v9 + 24) = v3;
      }
    }
  }
  if ( *((_QWORD *)v6 + 550) )
  {
    v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v6 + 383);
    if ( v6[768] == (_DWORD)v3 && *((_QWORD *)v6 + 385) == a2 )
    {
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v10);
      UsbhDecHubBusy(a1, v11, *((_QWORD **)v6 + 386));
      *((_QWORD *)v6 + 386) = 0LL;
      v6[768] = 0;
      *((_QWORD *)v6 + 385) = 0LL;
      _InterlockedDecrement(v6 + 774);
      (*((void (__fastcall **)(_QWORD))v6 + 550))(*((_QWORD *)v6 + 529));
    }
    else
    {
      Log(a1, 4, 1967281016, v6[768], *((_QWORD *)v6 + 385));
      KeReleaseSpinLock((PKSPIN_LOCK)v6 + 383, v12);
    }
  }
}
