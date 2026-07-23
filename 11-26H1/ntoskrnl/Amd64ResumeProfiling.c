/*
 * XREFs of Amd64ResumeProfiling @ 0x1405A73E0
 * Callers:
 *     <none>
 * Callees:
 *     Amd64ResumeProfilingInternal @ 0x1405A741C (Amd64ResumeProfilingInternal.c)
 */

__int64 Amd64ResumeProfiling()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  Amd64ResumeProfilingInternal(0LL, Number);
  Amd64ResumeProfilingInternal(100LL, Number);
  return Amd64ResumeProfilingInternal(101LL, Number);
}
