/*
 * XREFs of GET_FDO_POWER_STATE @ 0x140012D8C
 * Callers:
 *     UsbhPdoSetDx @ 0x140012618 (UsbhPdoSetDx.c)
 *     UsbhSS_PdoWakeWorker @ 0x1400145D0 (UsbhSS_PdoWakeWorker.c)
 *     UsbhPdoDevicePowerState @ 0x1400156F0 (UsbhPdoDevicePowerState.c)
 *     UsbhPdoSetD0 @ 0x140016CD0 (UsbhPdoSetD0.c)
 *     UsbhFdoSystemPowerState @ 0x140028454 (UsbhFdoSystemPowerState.c)
 *     UsbhFdoWakePoComplete_Action @ 0x140029C80 (UsbhFdoWakePoComplete_Action.c)
 * Callees:
 *     FdoExt @ 0x1400196E0 (FdoExt.c)
 */

__int64 __fastcall GET_FDO_POWER_STATE(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  FdoExt(*(_QWORD *)(a1 + 8), a2, a3, a4);
  return *(unsigned int *)(FdoExt(*(_QWORD *)(a1 + 8), v5, v6, v7) + 4172);
}
