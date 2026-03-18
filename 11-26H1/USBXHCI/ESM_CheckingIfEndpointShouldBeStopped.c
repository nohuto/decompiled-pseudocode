/*
 * XREFs of ESM_CheckingIfEndpointShouldBeStopped @ 0x140032C00
 * Callers:
 *     <none>
 * Callees:
 *     Endpoint_SM_WasDoorbellRungSinceMappingStart @ 0x140032C1C (Endpoint_SM_WasDoorbellRungSinceMappingStart.c)
 */

__int64 __fastcall ESM_CheckingIfEndpointShouldBeStopped(__int64 a1)
{
  return Endpoint_SM_WasDoorbellRungSinceMappingStart(*(_QWORD *)(a1 + 960));
}
