/*
 * XREFs of ApiSetReleaseSchema @ 0x1406D8EB0
 * Callers:
 *     PspSiloLoadApiSets @ 0x1407EFA1C (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14084A704 (ApiSetLoadSchemaWithExtensions.c)
 *     ApiSetpLoadSchemaExtension @ 0x14084A8B4 (ApiSetpLoadSchemaExtension.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
