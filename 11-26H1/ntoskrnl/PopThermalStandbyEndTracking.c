/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140434F64
 * Callers:
 *     PopThermalSxEntry @ 0x1404351B4 (PopThermalSxEntry.c)
 *     PopThermalCsEntry @ 0x1404355E4 (PopThermalCsEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404ED080 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x140607B18 (PopThermalCsExit.c)
 *     PopThermalStateTransitionWorker @ 0x1407D1CA0 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x14060A058 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = BYTE4(stru_140F0F620.KernelShadowStackBase);
  result = 0LL;
  BYTE4(stru_140F0F620.KernelShadowStackBase) = 0;
  if ( BYTE5(stru_140F0F620.KernelShadowStackBase) )
  {
    BYTE5(stru_140F0F620.KernelShadowStackBase) = 0;
    return PopTraceThermalStandbyComplete(
             a1,
             (MEMORY[0xFFFFF78000000008] - stru_140F0F620.KernelShadowStackLimit.AllFields) / 0x989680,
             a3);
  }
  return result;
}
