/*
 * XREFs of PsQuitNextSession @ 0x140A94380
 * Callers:
 *     PspDetachSession @ 0x1404B05B0 (PspDetachSession.c)
 *     PsQueryCpuQuotaInformation @ 0x14052D4BC (PsQueryCpuQuotaInformation.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PsQuitNextSession(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x79517350u);
}
