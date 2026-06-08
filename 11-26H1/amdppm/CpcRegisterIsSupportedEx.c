/*
 * XREFs of CpcRegisterIsSupportedEx @ 0x140006494
 * Callers:
 *     EnableCpcResourcePriorityRegisters @ 0x1400065E4 (EnableCpcResourcePriorityRegisters.c)
 *     ProcLibCpcRundown @ 0x1400247F0 (ProcLibCpcRundown.c)
 *     InitAcpiCpc @ 0x140026F98 (InitAcpiCpc.c)
 *     ValidateAcpiCPC @ 0x14002FA98 (ValidateAcpiCPC.c)
 *     ValidateCpcResourcePriorities @ 0x140030BD8 (ValidateCpcResourcePriorities.c)
 *     InitCpcStatesInternal @ 0x140032B70 (InitCpcStatesInternal.c)
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
