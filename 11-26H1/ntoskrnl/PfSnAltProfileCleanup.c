/*
 * XREFs of PfSnAltProfileCleanup @ 0x14077CA90
 * Callers:
 *     PfProcessExitNotification @ 0x140A43B50 (PfProcessExitNotification.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6B900 (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall PfSnAltProfileCleanup(__int64 a1)
{
  void *v1; // rcx
  LONG_PTR result; // rax

  v1 = *(void **)(a1 + 48);
  if ( v1 )
    return ObfDereferenceObjectWithTag(v1, 0x73576650u);
  return result;
}
