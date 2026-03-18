/*
 * XREFs of UsbhWait @ 0x14000C584
 * Callers:
 *     Usbh_PCE_Suspend_Action @ 0x140004A34 (Usbh_PCE_Suspend_Action.c)
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x14000E460 (UsbhReset1Complete.c)
 *     UsbhPdoInternalDeviceControl @ 0x140018B20 (UsbhPdoInternalDeviceControl.c)
 *     UsbhCancelResetTimeout @ 0x140023BD8 (UsbhCancelResetTimeout.c)
 *     UsbhFdoSetD0Cold @ 0x140030750 (UsbhFdoSetD0Cold.c)
 *     UsbhSyncPowerOnPorts @ 0x140031538 (UsbhSyncPowerOnPorts.c)
 *     UsbhFdoSetD0Warm @ 0x140037E34 (UsbhFdoSetD0Warm.c)
 *     UsbhInitializeDevice @ 0x140038404 (UsbhInitializeDevice.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x140038F0C (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhInitialize @ 0x14003D130 (UsbhInitialize.c)
 *     UsbhOvercurrentResetWorker @ 0x14003FA80 (UsbhOvercurrentResetWorker.c)
 *     UsbhQueueSoftConnectChange @ 0x1400443D0 (UsbhQueueSoftConnectChange.c)
 *     UsbhHardReset_Action @ 0x14004C11C (UsbhHardReset_Action.c)
 *     UsbhPortResumeFailed @ 0x1400587A0 (UsbhPortResumeFailed.c)
 * Callees:
 *     UsbhRawWait @ 0x14000C600 (UsbhRawWait.c)
 */

__int64 __fastcall UsbhWait(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rcx
  signed __int32 v4; // eax
  unsigned int v5; // edx
  __int64 v6; // rcx
  __int64 v7; // rdx

  v2 = a2;
  if ( (UsbhLogMask & 8) != 0 )
  {
    if ( a1 )
    {
      v3 = *(_QWORD *)(a1 + 64);
      if ( v3 )
      {
        v4 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 880), 0xFFFFFFFF);
        v5 = *(_DWORD *)(v3 + 884);
        v6 = *(_QWORD *)(v3 + 888);
        v7 = 32LL * ((v4 - 1) & v5);
        *(_DWORD *)(v7 + v6) = 1953063287;
        *(_QWORD *)(v7 + v6 + 8) = 0LL;
        *(_QWORD *)(v7 + v6 + 16) = v2;
        *(_QWORD *)(v7 + v6 + 24) = 0LL;
      }
    }
  }
  return UsbhRawWait((unsigned int)v2);
}
