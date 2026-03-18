/*
 * XREFs of UsbhAcquirePdoStateLock @ 0x140010E10
 * Callers:
 *     UsbhReset2Complete @ 0x14000A840 (UsbhReset2Complete.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400120E4 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhWcCancelEnumeration @ 0x1400212B0 (UsbhWcCancelEnumeration.c)
 *     UsbhEtwRundown @ 0x140028180 (UsbhEtwRundown.c)
 *     UsbhBusConnectPdo @ 0x140032B60 (UsbhBusConnectPdo.c)
 *     UsbhSshPropagateResume @ 0x1400341AC (UsbhSshPropagateResume.c)
 *     UsbhQueryBusRelations @ 0x140034C9C (UsbhQueryBusRelations.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x140036870 (Usbh_ErrorDisconnect_PdoEvent.c)
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400386BC (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhFdoResetPdoPort @ 0x14004063C (UsbhFdoResetPdoPort.c)
 *     UsbhCycleDevicePort @ 0x1400464FC (UsbhCycleDevicePort.c)
 *     UsbhSoftDisconnectPdo @ 0x1400482F0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x140048CD4 (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140048E68 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x140049018 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x1400493F8 (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x14004964C (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhSetEnumerationFailed @ 0x140059728 (UsbhSetEnumerationFailed.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall UsbhAcquirePdoStateLock(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax

  *(_BYTE *)(a2 + 132) = KeAcquireSpinLockRaiseToDpc(&HubG);
  *(_DWORD *)(a2 + 136) = 1;
  *(_DWORD *)(a2 + 92) = a3;
  *(_DWORD *)(a2 + 88) = 2018460752;
  qword_140070600 = a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
