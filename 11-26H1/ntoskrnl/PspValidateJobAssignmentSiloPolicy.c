/*
 * XREFs of PspValidateJobAssignmentSiloPolicy @ 0x140AF0A90
 * Callers:
 *     PspAssignProcessToJob @ 0x140AC5D48 (PspAssignProcessToJob.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140216800 (PsGetEffectiveServerSilo.c)
 *     PsIsServerSilo @ 0x140216838 (PsIsServerSilo.c)
 *     PsGetProcessServerSilo @ 0x140476BF0 (PsGetProcessServerSilo.c)
 */

char __fastcall PspValidateJobAssignmentSiloPolicy(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 EffectiveServerSilo; // rbx

  if ( ((a4 - 1) & 0xFFFFFFF9) != 0 || a4 == 7 )
  {
    return a4 != 4 || !PsIsServerSilo(a1);
  }
  else
  {
    EffectiveServerSilo = PsGetEffectiveServerSilo(a1);
    if ( PsGetEffectiveServerSilo(a2) == EffectiveServerSilo )
      return 1;
    return EffectiveServerSilo == PsGetProcessServerSilo(a3);
  }
}
