/*
 * XREFs of ApiSetQueryApiSetPresenceEx @ 0x1800E2950
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetQueryApiSetPresenceEx(__int64 a1, __int64 a2, __int64 a3)
{
  return ApiSetQuerySchemaInfo(NtCurrentPeb()->ApiSetMap, a1, a2, a3);
}
