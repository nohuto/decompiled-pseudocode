/*
 * XREFs of Amd64PauseProfiling @ 0x1405A71E0
 * Callers:
 *     <none>
 * Callees:
 *     Amd64PauseProfilingInternal @ 0x1405A7200 (Amd64PauseProfilingInternal.c)
 */

__int64 __fastcall Amd64PauseProfiling(__int64 a1, __int64 a2)
{
  LODWORD(a2) = KeGetPcr()->Prcb.Number;
  return Amd64PauseProfilingInternal(a1, a2);
}
