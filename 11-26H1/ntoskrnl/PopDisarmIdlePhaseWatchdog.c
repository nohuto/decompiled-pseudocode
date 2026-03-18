/*
 * XREFs of PopDisarmIdlePhaseWatchdog @ 0x140A3EEB4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14060D4E0 (PdcPoCurrentPdcPhase.c)
 *     PopProcessSessionDisplayStateChange @ 0x140A3EE2C (PopProcessSessionDisplayStateChange.c)
 * Callees:
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     PopResetIdlePhaseWatchdogDiagnosticContext @ 0x140A3F16C (PopResetIdlePhaseWatchdogDiagnosticContext.c)
 */

__int64 PopDisarmIdlePhaseWatchdog()
{
  __int64 v0; // rbx
  __int64 result; // rax
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  __int64 v3; // [rsp+38h] [rbp-60h]

  v0 = *(_QWORD *)&PopModernStandbyStateNotify.AbCompletedIoQoSBoostCount;
  if ( *(_QWORD *)&PopModernStandbyStateNotify.AbCompletedIoQoSBoostCount )
  {
    memset_0(&InputBuffer, 0, 0x60uLL);
    InputBuffer = 21;
    v3 = v0;
    ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, 0LL, 0);
    return PopResetIdlePhaseWatchdogDiagnosticContext();
  }
  return result;
}
