/*
 * XREFs of PfSnAltProfileCleanup @ 0x14077F584
 * Callers:
 *     PfProcessExitNotification @ 0x140ACACC4 (PfProcessExitNotification.c)
 *     PfSnSetAltPrefetchParam @ 0x140B6E9FC (PfSnSetAltPrefetchParam.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
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
