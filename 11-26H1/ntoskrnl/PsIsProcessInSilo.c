/*
 * XREFs of PsIsProcessInSilo @ 0x14043D820
 * Callers:
 *     PsIsThreadInSilo @ 0x14043D79C (PsIsThreadInSilo.c)
 *     PsLookupProcessByProcessId @ 0x1408EF4E0 (PsLookupProcessByProcessId.c)
 *     ExpGetProcessInformation @ 0x14096767C (ExpGetProcessInformation.c)
 *     ExProcessCounterSetCallback @ 0x140969300 (ExProcessCounterSetCallback.c)
 *     PsLookupThreadByThreadId @ 0x140A10B70 (PsLookupThreadByThreadId.c)
 *     PspThreadFromTicket @ 0x140A191C0 (PspThreadFromTicket.c)
 *     NtAlertThreadByThreadIdEx @ 0x140A33250 (NtAlertThreadByThreadIdEx.c)
 *     NtAlertThreadByThreadId @ 0x140A5D8F0 (NtAlertThreadByThreadId.c)
 *     NtGetNextProcess @ 0x140AEF810 (NtGetNextProcess.c)
 * Callees:
 *     PspGetJobSilo @ 0x14043D870 (PspGetJobSilo.c)
 *     PspIsSiloInSilo @ 0x140AF1B24 (PspIsSiloInSilo.c)
 */

bool __fastcall PsIsProcessInSilo(struct _KPROCESS *a1, __int64 a2)
{
  __int64 JobSilo; // rax

  if ( !a2 || a1 == PsInitialSystemProcess || a1 == PsIdleProcess )
    return 1;
  JobSilo = PspGetJobSilo(a1[1].Padding[3]);
  return (unsigned __int8)PspIsSiloInSilo(JobSilo) != 0;
}
