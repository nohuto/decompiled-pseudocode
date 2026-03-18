/*
 * XREFs of UsbhAcquirePdoStateLock @ 0x14002E600
 * Callers:
 *     Usbh_BusPnpStop_PdoEvent @ 0x1400011A4 (Usbh_BusPnpStop_PdoEvent.c)
 *     UsbhSyncResumeDeviceInternal @ 0x1400111E0 (UsbhSyncResumeDeviceInternal.c)
 *     UsbhReset2Complete @ 0x14001BA40 (UsbhReset2Complete.c)
 *     UsbhQueryBusRelations @ 0x14002D43C (UsbhQueryBusRelations.c)
 *     UsbhBusConnectPdo @ 0x14002DB28 (UsbhBusConnectPdo.c)
 *     Usbh_ErrorDisconnect_PdoEvent @ 0x14002E37C (Usbh_ErrorDisconnect_PdoEvent.c)
 *     UsbhSshPropagateResume @ 0x14002E46C (UsbhSshPropagateResume.c)
 *     UsbhEtwRundown @ 0x14002FFDC (UsbhEtwRundown.c)
 *     UsbhWcCancelEnumeration @ 0x140036D5C (UsbhWcCancelEnumeration.c)
 *     UsbhFdoResetPdoPort @ 0x140040B3C (UsbhFdoResetPdoPort.c)
 *     UsbhCycleDevicePort @ 0x1400469BC (UsbhCycleDevicePort.c)
 *     UsbhSoftDisconnectPdo @ 0x1400487A0 (UsbhSoftDisconnectPdo.c)
 *     Usbh_BusPause_PdoEvent @ 0x140049174 (Usbh_BusPause_PdoEvent.c)
 *     Usbh_BusPnpFreeResources_PdoEvent @ 0x140049308 (Usbh_BusPnpFreeResources_PdoEvent.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1400494A8 (Usbh_BusRemove_PdoEvent.c)
 *     Usbh_PdoRemove_PdoEvent @ 0x14004986C (Usbh_PdoRemove_PdoEvent.c)
 *     Usbh_PdoSurpriseRemove_PdoEvent @ 0x140049AB8 (Usbh_PdoSurpriseRemove_PdoEvent.c)
 *     UsbhSetEnumerationFailed @ 0x1400591B8 (UsbhSetEnumerationFailed.c)
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
  qword_14006F5A0 = a2;
  result = KeGetCurrentThread();
  *(_QWORD *)(a2 + 24) = result;
  return result;
}
