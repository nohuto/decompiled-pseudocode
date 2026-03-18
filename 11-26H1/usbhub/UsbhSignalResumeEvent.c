/*
 * XREFs of UsbhSignalResumeEvent @ 0x14000BD28
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x14001EC90 (UsbhHubDispatchPortEvent.c)
 *     UsbhWaitConnect @ 0x1400205C0 (UsbhWaitConnect.c)
 *     UsbhPortDisconnect @ 0x140021F00 (UsbhPortDisconnect.c)
 *     UsbhResumeSuspendedPort @ 0x14002ED10 (UsbhResumeSuspendedPort.c)
 *     Usbh_CheckPortHwPendingStatus @ 0x140030018 (Usbh_CheckPortHwPendingStatus.c)
 *     Usbh_PCE_wChangeERROR_Action @ 0x140045820 (Usbh_PCE_wChangeERROR_Action.c)
 *     UsbhDriverResetPort @ 0x140057E20 (UsbhDriverResetPort.c)
 *     UsbhPortCycle @ 0x140058480 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x1400586D0 (UsbhPortRecycle.c)
 *     UsbhPortResumeFailed @ 0x1400587A0 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhLogSignalResumeEvent @ 0x14000BE24 (UsbhLogSignalResumeEvent.c)
 */

void __fastcall UsbhSignalResumeEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  KIRQL v6; // al
  __int64 v7; // r10
  KIRQL v8; // r9
  __int64 v9; // r11
  __int64 v10; // rdx
  signed __int32 v11; // eax
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // r8

  if ( (unsigned int)UsbhLogSignalResumeEvent(a1, a2, a3, a4) )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 440));
    v7 = *(unsigned __int16 *)(a2 + 4);
    v8 = v6;
    v9 = *(int *)(a2 + 12);
    *(_DWORD *)(a2 + 448) = 1;
    if ( (UsbhLogMask & 0x10) != 0 && a1 )
    {
      v10 = *(_QWORD *)(a1 + 64);
      if ( v10 )
      {
        v11 = _InterlockedExchangeAdd((volatile signed __int32 *)(v10 + 880), 0xFFFFFFFF);
        v12 = *(_DWORD *)(v10 + 884);
        v13 = *(_QWORD *)(v10 + 888);
        v14 = 32LL * ((v11 - 1) & v12);
        *(_DWORD *)(v14 + v13) = 1986359664;
        *(_QWORD *)(v14 + v13 + 8) = 0LL;
        *(_QWORD *)(v14 + v13 + 16) = v9;
        *(_QWORD *)(v14 + v13 + 24) = v7;
      }
    }
    *(_DWORD *)(32LL * *(unsigned int *)(a2 + 2400) + a2 + 1396) = 30;
    *(_DWORD *)(a2 + 448) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 440), v8);
  }
}
