/*
 * XREFs of Amd64RestartProfiling @ 0x140BF5A80
 * Callers:
 *     <none>
 * Callees:
 *     Amd64RestartProfilingInternal @ 0x140BF5ABC (Amd64RestartProfilingInternal.c)
 */

__int64 Amd64RestartProfiling()
{
  unsigned int Number; // ebx

  Number = KeGetPcr()->Prcb.Number;
  Amd64RestartProfilingInternal(0LL, Number);
  Amd64RestartProfilingInternal(100LL, Number);
  return Amd64RestartProfilingInternal(101LL, Number);
}
