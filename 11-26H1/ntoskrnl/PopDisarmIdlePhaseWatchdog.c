/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x1409FA8D4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406105F0 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x1409FA84C (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     ZwPowerInformation @ 0x140728BA0 (ZwPowerInformation.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x1409FAB8C (PopResetIdlePhaseWatchdogDiagnosticContext.c)
 */

__int64 PopDisarmIdlePhaseWatchdog()
{
  void *volatile StackLimit; // rbx
  __int64 result; // rax
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  void *volatile v3; // [rsp+38h] [rbp-60h]

  StackLimit = PopPdcDeviceListLock.StackLimit;
  if ( PopPdcDeviceListLock.StackLimit )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v3 = StackLimit;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    return PopResetIdlePhaseWatchdogDiagnosticContext();
  }
  return result;
}
