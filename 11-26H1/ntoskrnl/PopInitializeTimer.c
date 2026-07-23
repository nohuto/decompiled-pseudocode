/*
 * XREFs of PopInitializeTimer @ 0x1407CBCB8
 * Callers:
 *     PopCheckPowerSourceAfterRtcWakeInitialize @ 0x14060A9A4 (PopCheckPowerSourceAfterRtcWakeInitialize.c)
 *     PopPowerRequestInitialize @ 0x140CD69F8 (PopPowerRequestInitialize.c)
 *     PpmPerfInitialize @ 0x140CD72F0 (PpmPerfInitialize.c)
 *     PopUserShutdownScenarioInitialize @ 0x140CD78F0 (PopUserShutdownScenarioInitialize.c)
 *     PopThermalInit @ 0x140CD7954 (PopThermalInit.c)
 *     PopDripsWatchdogInitialize @ 0x140CDCC40 (PopDripsWatchdogInitialize.c)
 *     PopDripsWatchdogInitializeCallbackTimer @ 0x140CDCE20 (PopDripsWatchdogInitializeCallbackTimer.c)
 * Callees:
 *     KeInitializeTimer2 @ 0x14044E740 (KeInitializeTimer2.c)
 */

__int64 __fastcall PopInitializeTimer(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  KeInitializeTimer2(a1, a2, a3, 8LL);
  _InterlockedExchange((volatile __int32 *)(a1 + 168), 0);
  result = a5;
  *(_QWORD *)(a1 + 152) = a4;
  *(_QWORD *)(a1 + 160) = a5;
  *(_QWORD *)(a1 + 136) = 0LL;
  return result;
}
