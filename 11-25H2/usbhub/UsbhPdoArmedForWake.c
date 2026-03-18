/*
 * XREFs of UsbhPdoArmedForWake @ 0x140035280
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1400325B8 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSyncSuspendPdoPort @ 0x140034ED4 (UsbhSyncSuspendPdoPort.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 */

bool __fastcall UsbhPdoArmedForWake(__int64 a1)
{
  return PdoExt(a1)[588] >= 0;
}
