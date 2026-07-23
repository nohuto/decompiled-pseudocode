/*
 * XREFs of PopThermalStandbyEndTracking @ 0x140423E3C
 * Callers:
 *     PopThermalSxEntry @ 0x14042408C (PopThermalSxEntry.c)
 *     PopThermalCsEntry @ 0x140424BC0 (PopThermalCsEntry.c)
 *     PopCheckAndHandleThermalConditions @ 0x1404E6660 (PopCheckAndHandleThermalConditions.c)
 *     PopThermalCsExit @ 0x14060A6D4 (PopThermalCsExit.c)
 *     PopThermalStateTransitionWorker @ 0x1407D4D40 (PopThermalStateTransitionWorker.c)
 * Callees:
 *     PopTraceThermalStandbyComplete @ 0x14060CC18 (PopTraceThermalStandbyComplete.c)
 */

__int64 __fastcall PopThermalStandbyEndTracking(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  LOBYTE(a3) = byte_140F0FE7C;
  result = 0LL;
  byte_140F0FE7C = 0;
  if ( byte_140F0FE7D )
  {
    byte_140F0FE7D = 0;
    return PopTraceThermalStandbyComplete(a1, (MEMORY[0xFFFFF78000000008] - qword_140F0FE80) / 0x989680uLL, a3);
  }
  return result;
}
