/*
 * XREFs of ApiSetReleaseSchema @ 0x1406DD040
 * Callers:
 *     PspSiloLoadApiSets @ 0x1407F557C (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x140850A14 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x140850BC4 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
