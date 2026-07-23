/*
 * XREFs of HalReadBootRegister @ 0x140BF5168
 * Callers:
 *     HalpResetSBF @ 0x140BEF17C (HalpResetSBF.c)
 *     HalpSetupAcpiPhase0 @ 0x140CB9944 (HalpSetupAcpiPhase0.c)
 * Callees:
 *     HalpGetCmosData @ 0x14058EB2C (HalpGetCmosData.c)
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
