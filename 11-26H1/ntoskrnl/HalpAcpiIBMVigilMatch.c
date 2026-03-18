/*
 * XREFs of HalpAcpiIBMVigilMatch @ 0x140CB52A0
 * Callers:
 *     HalpAcpiIBMExaMatch @ 0x140CB5260 (HalpAcpiIBMExaMatch.c)
 * Callees:
 *     HalpInterruptModel @ 0x140427BB0 (HalpInterruptModel.c)
 */

__int64 HalpAcpiIBMVigilMatch()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
    HalpInterruptPhysicalModeOnly = 1;
  return result;
}
