/*
 * XREFs of ACPIEcGpioDpcRoutine @ 0x14004EB80
 * Callers:
 *     <none>
 * Callees:
 *     AcpiEcCommonDpcHandler @ 0x14001E93C (AcpiEcCommonDpcHandler.c)
 *     ACPIEcUnmaskInterrupt @ 0x14002023C (ACPIEcUnmaskInterrupt.c)
 */

_UNKNOWN **__fastcall ACPIEcGpioDpcRoutine(__int64 a1, __int64 a2)
{
  _UNKNOWN **result; // rax

  result = (_UNKNOWN **)AcpiEcCommonDpcHandler(a2);
  if ( (*(_BYTE *)(a2 + 2298) & 1) == 0 )
    return ACPIEcUnmaskInterrupt(a2);
  return result;
}
