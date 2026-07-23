/*
 * XREFs of PipDmgIsDmaVerifierEnabled @ 0x1407AA5F0
 * Callers:
 *     PipDmgGetDriverDmarCompatLevel @ 0x140B267A0 (PipDmgGetDriverDmarCompatLevel.c)
 *     PipDmgGetDeviceDmarPolicy @ 0x140B3A940 (PipDmgGetDeviceDmarPolicy.c)
 * Callees:
 *     VfIsVerifierEnabled @ 0x1404F5560 (VfIsVerifierEnabled.c)
 *     VfTargetDriversIsEnabled @ 0x140C4CCAC (VfTargetDriversIsEnabled.c)
 */

bool __fastcall PipDmgIsDmaVerifierEnabled(__int64 a1)
{
  return (unsigned int)VfIsVerifierEnabled()
      && (VfRuleClasses & 0x400000) == 0
      && (MmVerifierData & 0x80u) != 0
      && (unsigned int)VfTargetDriversIsEnabled(*(_QWORD *)(a1 + 24)) != 0;
}
