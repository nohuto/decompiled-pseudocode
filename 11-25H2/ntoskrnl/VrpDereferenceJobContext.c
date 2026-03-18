/*
 * XREFs of VrpDereferenceJobContext @ 0x140A30C60
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x14046F730 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
