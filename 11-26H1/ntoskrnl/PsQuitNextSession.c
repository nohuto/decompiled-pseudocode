/*
 * XREFs of PsQuitNextSession @ 0x140A8F6B0
 * Callers:
 *     PspDetachSession @ 0x1404B6D7C (PspDetachSession.c)
 *     PsQueryCpuQuotaInformation @ 0x14052AF9C (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextSession(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x79517350u);
}
