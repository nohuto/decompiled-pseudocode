/*
 * XREFs of GetCpcRegisterDefinitionTable @ 0x140008C78
 * Callers:
 *     ProcLibCpcResourcePriorityRundown @ 0x14002BE44 (ProcLibCpcResourcePriorityRundown.c)
 *     ProcLibCpcRundown @ 0x14002C048 (ProcLibCpcRundown.c)
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     AcpiEval_CPC @ 0x14002E460 (AcpiEval_CPC.c)
 *     Display_CPC @ 0x140031398 (Display_CPC.c)
 *     ValidateAcpiCPC @ 0x140033F74 (ValidateAcpiCPC.c)
 *     ValidateCpcSymmetry @ 0x1400351D0 (ValidateCpcSymmetry.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
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
