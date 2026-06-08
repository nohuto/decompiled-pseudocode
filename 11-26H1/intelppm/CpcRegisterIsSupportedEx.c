/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x1400057A0
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x140008BE4 (EnableCpcResourcePriorityRegisters.c)
 *     ProcLibCpcRundown @ 0x14002C048 (ProcLibCpcRundown.c)
 *     InitAcpiCpc @ 0x14002DDA0 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x140033F74 (ValidateAcpiCPC.c)
 *     ValidateCpcResourcePriorities @ 0x140034D18 (ValidateCpcResourcePriorities.c)
 *     InitCpcStatesInternal @ 0x140036530 (InitCpcStatesInternal.c)
 * Callees:
 *     <none>
 */

char __fastcall CpcRegisterIsSupportedEx(__int64 a1)
{
  char result; // al

  result = 0;
  if ( *(_BYTE *)a1 || *(_QWORD *)(a1 + 4) )
    return 1;
  return result;
}
