/*
 * XREFs of VrpDereferenceJobContext @ 0x140AB9350
 * Callers:
 *     VrpOriginalKeyNameParameterCleanup @ 0x14049C3E0 (VrpOriginalKeyNameParameterCleanup.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 */

LONG_PTR __fastcall VrpDereferenceJobContext(void *a1)
{
  return ObfDereferenceObjectWithTag(a1, 0x67655256u);
}
