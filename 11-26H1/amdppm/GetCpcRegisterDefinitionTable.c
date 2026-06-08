/*
 * XREFs of GetCpcRegisterDefinitionTable @ 0x1400066D0
 * Callers:
 *     ProcLibCpcResourcePriorityRundown @ 0x1400245EC (ProcLibCpcResourcePriorityRundown.c)
 *     ProcLibCpcRundown @ 0x1400247F0 (ProcLibCpcRundown.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     AcpiEval_CPC @ 0x140027B5C (AcpiEval_CPC.c)
 *     Display_CPC @ 0x14002C024 (Display_CPC.c)
 *     ValidateAcpiCPC @ 0x14002FA98 (ValidateAcpiCPC.c)
 *     ValidateCpcSymmetry @ 0x140031090 (ValidateCpcSymmetry.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

void *__fastcall GetCpcRegisterDefinitionTable(__int64 a1, _QWORD *a2, _DWORD *a3)
{
  void *result; // rax

  switch ( *(_DWORD *)(a1 + 4) )
  {
    case 1:
      *a3 = 15;
      result = &CpcRegisterTable;
      break;
    case 2:
      *a3 = 19;
      result = &Cpc2RegisterTable;
      break;
    case 3:
      *a3 = 21;
      result = &Cpc3RegisterTable;
      break;
    default:
      *a3 = 22;
      result = &Cpc4RegisterTable;
      break;
  }
  *a2 = result;
  return result;
}
