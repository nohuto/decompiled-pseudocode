/*
 * XREFs of GET_FDO_POWER_STATE @ 0x14000DD54
 * Callers:
 *     UsbhSS_PdoWakeWorker @ 0x14000D9A0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoSetDx @ 0x14000E090 (UsbhPdoSetDx.c)
 *     UsbhPdoDevicePowerState @ 0x14000EBA4 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x1400106D0 (UsbhPdoSetD0.c)
 *     UsbhFdoSystemPowerState @ 0x14002F8C0 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x140030460 (UsbhFdoWakePoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x140009560 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1)
{
  FdoExt(*(_QWORD *)(a1 + 8));
  return (unsigned int)FdoExt(*(_QWORD *)(a1 + 8))[1043];
}
