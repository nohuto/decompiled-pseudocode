/*
 * XREFs of UsbhSignalResumeEvent @ 0x1400138D4
 * Callers:
 *     UsbhWaitConnect @ 0x140004380 (UsbhWaitConnect.c)
 *     UsbhHubDispatchPortEvent @ 0x140004D00 (UsbhHubDispatchPortEvent.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x1400119F8 (Usbh_CheckPortHwPendingStatus.c)
 *     UsbhResumeSuspendedPort @ 0x140011AE8 (UsbhResumeSuspendedPort.c)
 *     UsbhPortDisconnect @ 0x14001D240 (UsbhPortDisconnect.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045CE4 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDriverResetPort @ 0x1400578C0 (UsbhDriverResetPort.c)
 *     UsbhPortCycle @ 0x140057F20 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x140058170 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x140058240 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x1400139C4 (UsbhLogSignalResumeEvent.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r10
  __int64 v6; // r11
  __int64 v7; // r8
  __int64 v8; // rdx

  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2) )
  {
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v5 = *(unsigned __int16 *)(a2 + 4);
    v6 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v7 = *(_QWORD *)(a1 + 64);
      if ( v7 )
      {
        v8 = *(_QWORD *)(v7 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v7 + 880)) & *(_DWORD *)(v7 + 884));
        *(_QWORD *)(v8 + 8) = 0LL;
        *(_DWORD *)v8 = 1986359664;
        *(_QWORD *)(v8 + 16) = v6;
        *(_QWORD *)(v8 + 24) = v5;
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v4);
  }
}
