/*
 * XREFs of AcpiMwaitStateIsHalted @ 0x140005E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall AcpiMwaitStateIsHalted(__int64 a1)
{
  return **(_BYTE **)(a1 + 40) == 0;
}
