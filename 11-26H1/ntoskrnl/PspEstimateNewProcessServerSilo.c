/*
 * XREFs of PspEstimateNewProcessServerSilo @ 0x140AE0144
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     PsGetEffectiveServerSilo @ 0x140216B30 (PsGetEffectiveServerSilo.c)
 *     PsIsHostSilo @ 0x140467DB0 (PsIsHostSilo.c)
 *     PsGetProcessServerSilo @ 0x140470370 (PsGetProcessServerSilo.c)
 *     HalSystemVectorDispatchEntry @ 0x1404B6E40 (HalSystemVectorDispatchEntry.c)
 */

__int64 __fastcall PspEstimateNewProcessServerSilo(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 ProcessServerSilo; // rbx
  __int64 i; // rbx
  __int64 EffectiveServerSilo; // rdi

  if ( a1 )
  {
    ProcessServerSilo = PsGetProcessServerSilo(a1);
    if ( !PsIsHostSilo(ProcessServerSilo) )
      return ProcessServerSilo;
  }
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= a3 )
      return HalSystemVectorDispatchEntry();
    EffectiveServerSilo = PsGetEffectiveServerSilo(*(_QWORD *)(a2 + 8 * i));
    if ( !PsIsHostSilo(EffectiveServerSilo) )
      break;
  }
  return EffectiveServerSilo;
}
