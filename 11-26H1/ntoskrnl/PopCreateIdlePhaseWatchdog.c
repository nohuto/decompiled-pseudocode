/*
 * XREFs of PopCreateIdlePhaseWatchdog @ 0x140CD57F0
 * Callers:
 *     PoInitSystem @ 0x140CCE870 (PoInitSystem.c)
 * Callees:
 *     ZwPowerInformation @ 0x140723FD0 (ZwPowerInformation.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 PopCreateIdlePhaseWatchdog()
{
  __int64 result; // rax
  int InputBuffer; // [rsp+30h] [rbp-68h] BYREF
  int v2; // [rsp+34h] [rbp-64h] BYREF
  __int64 OutputBuffer; // [rsp+A0h] [rbp+8h] BYREF

  OutputBuffer = 0LL;
  memset_0(&v2, 0, 0x5CuLL);
  InputBuffer = 21;
  ZwPowerInformation(PowerInformationInternal, &InputBuffer, 0x60u, &OutputBuffer, 8u);
  result = OutputBuffer;
  *(_OWORD *)&PopModernStandbyStateNotify.ForegroundLossTime = 0LL;
  *(_QWORD *)&PopModernStandbyStateNotify.ForegroundLossTime = 0LL;
  *(_QWORD *)&PopModernStandbyStateNotify.AbCompletedIoQoSBoostCount = OutputBuffer;
  return result;
}
