/*
 * XREFs of UsbhPdoArmedForWake @ 0x140011274
 * Callers:
 *     UsbhSyncSuspendPdoPort @ 0x1400113C4 (UsbhSyncSuspendPdoPort.c)
 *     UsbhFdoSetPowerDx_Action @ 0x14003743C (UsbhFdoSetPowerDx_Action.c)
 * Callees:
 *     PdoExt @ 0x140016350 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return *(_DWORD *)(PdoExt(a1) + 2352) >= 0;
}
