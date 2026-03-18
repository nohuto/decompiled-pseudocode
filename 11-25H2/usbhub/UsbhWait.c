/*
 * XREFs of UsbhWait @ 0x140014114
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1400089B0 (UsbhPdoInternalDeviceControl.c)
 *     UsbhCancelResetTimeout @ 0x140012034 (UsbhCancelResetTimeout.c)
 *     UsbhReset1Complete @ 0x140012800 (UsbhReset1Complete.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhInitializeDevice @ 0x14001CFD4 (UsbhInitializeDevice.c)
 *     Usbh_PCE_Suspend_Action @ 0x1400275AC (Usbh_PCE_Suspend_Action.c)
 *     UsbhFdoSetD0Cold @ 0x14002C4AC (UsbhFdoSetD0Cold.c)
 *     UsbhSyncPowerOnPorts @ 0x14002D264 (UsbhSyncPowerOnPorts.c)
 *     UsbhFdoSetD0Warm @ 0x140038FD4 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1400398C0 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhInitialize @ 0x14003D6A0 (UsbhInitialize.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FF90 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1400448AC (UsbhQueueSoftConnectChange.c)
 *     UsbhHardReset_Action @ 0x14004C548 (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x140058240 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhRawWait @ 0x140014184 (UsbhRawWait.c)
 */

__int64 __fastcall UsbhWait(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx

  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v2 = *(_QWORD *)(a1 + 64);
      if ( v2 )
      {
        v3 = *(_QWORD *)(v2 + 888)
           + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v2 + 880)) & *(_DWORD *)(v2 + 884));
        *(_QWORD *)(v3 + 8) = 0LL;
        *(_QWORD *)(v3 + 24) = 0LL;
        *(_DWORD *)v3 = 1953063287;
        *(_QWORD *)(v3 + 16) = a2;
      }
    }
  }
  return UsbhRawWait(a2);
}
