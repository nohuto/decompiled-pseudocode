/*
 * XREFs of VrpDereferenceJobContext @ 0x140AB7D10
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x1404A29C0 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140265890 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
