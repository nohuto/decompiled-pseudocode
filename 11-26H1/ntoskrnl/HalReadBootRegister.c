/*
 * XREFs of HalReadBootRegister @ 0x140BEF168
 * Callers:
 *     HalpResetSBF @ 0x140BE917C (HalpResetSBF.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB3904 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpGetCmosData @ 0x14058C3AC (HalpGetCmosData.c)
 */

__int64 __fastcall HalReadBootRegister(_BYTE *a1)
{
  if ( !HalpSimpleBootFlagTable )
    return 3221225486LL;
  if ( !a1 )
    return 3221225485LL;
  HalpGetCmosData((__int64)a1, *(unsigned __int8 *)(HalpSimpleBootFlagTable + 36), a1, 1);
  return 0LL;
}
