/*
 * XREFs of PipDmgIsDmaVerifierEnabled @ 0x1407A7A40
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140B24300 (PipDmgGetDriverDmarCompatLevel.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x140B38730 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404FC020 (VfIsVerifierEnabled.c)
 *     VfTargetDriversIsEnabled @ 0x140C46C9C (VfTargetDriversIsEnabled.c)
 */

bool __fastcall PipDmgIsDmaVerifierEnabled(__int64 a1)
{
  return (unsigned int)VfIsVerifierEnabled()
      && (VfRuleClasses & 0x400000) == 0
      && (MmVerifierData & 0x80u) != 0
      && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) != 0;
}
