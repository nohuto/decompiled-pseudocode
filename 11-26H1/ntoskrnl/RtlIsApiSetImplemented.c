/*
 * XREFs of RtlIsApiSetImplemented @ 0x14080CE90
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetQuerySchemaInfo2 @ 0x1406DD094 (ApiSetQuerySchemaInfo2.c)
 *     PsQueryCurrentApiSetSchema @ 0x1407F4270 (PsQueryCurrentApiSetSchema.c)
 */

NTSTATUS __cdecl RtlIsApiSetImplemented(PCSTR ApiSetName)
{
  struct _LIST_ENTRY *CurrentApiSetSchema; // rax
  NTSTATUS result; // eax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = 0;
  CurrentApiSetSchema = PsQueryCurrentApiSetSchema();
  result = ApiSetQuerySchemaInfo2((__int64)CurrentApiSetSchema, ApiSetName, &v4);
  if ( result >= 0 )
    return v4 != 0 ? 0xC0000225 : 0;
  return result;
}
