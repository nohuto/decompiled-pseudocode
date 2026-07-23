/*
 * XREFs of RtlIsApiSetImplemented @ 0x1801482C0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetQuerySchemaInfo2 @ 0x180111A5C (ApiSetQuerySchemaInfo2.c)
 */

NTSTATUS __cdecl RtlIsApiSetImplemented(PCSTR ApiSetName)
{
  NTSTATUS result; // eax
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0;
  result = ApiSetQuerySchemaInfo2((__int64)NtCurrentPeb()->ApiSetMap, ApiSetName, &v2);
  if ( result >= 0 )
    return v2 != 0 ? 0xC0000225 : 0;
  return result;
}
