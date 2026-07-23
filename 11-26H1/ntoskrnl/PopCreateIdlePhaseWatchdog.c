/*
 * XREFs of PopCreateIdlePhaseWatchdog @ 0x140CDBB44
 * Callers:
 *     PoInitSystem @ 0x140CD49D0 (PoInitSystem.c)
 * Callees:
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void *PopCreateIdlePhaseWatchdog()
{
  void *result; // rax
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+34h] [rbp-64h] BYREF
  void *OutputBuffer; // [rsp+A0h] [rbp+8h] BYREF

  OutputBuffer = 0LL;
  memset_0(&v2, 0, 0x5CuLL);
  InputBuffer = 21;
  ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u);
  result = OutputBuffer;
  *(_OWORD *)&PopPdcDeviceListLock.StackBase = 0LL;
  PopPdcDeviceListLock.StackBase = 0LL;
  PopPdcDeviceListLock.StackLimit = OutputBuffer;
  return result;
}
