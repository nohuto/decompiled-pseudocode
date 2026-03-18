/*
 * XREFs of RtlIsNtDdiVersionAvailable @ 0x1404A45A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall RtlIsNtDdiVersionAvailable(ULONG Version)
{
  return !(_WORD)Version && Version <= 0xA000012;
}
