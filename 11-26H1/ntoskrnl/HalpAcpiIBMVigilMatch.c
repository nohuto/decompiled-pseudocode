/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140CBB2E0
 * Callers:
 *     HalpAcpiIBMExaMatch @ 0x140CBB2A0 (HalpAcpiIBMExaMatch.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
