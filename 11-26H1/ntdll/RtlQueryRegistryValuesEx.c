/*
 * XREFs of RtlQueryRegistryValuesEx @ 0x180059910
 * Callers:
 *     <none>
 * Callees:
 *     RtlpQueryRegistryValues @ 0x180059B20 (RtlpQueryRegistryValues.c)
 */

__int64 __fastcall RtlQueryRegistryValuesEx(__int64 a1, __int64 a2)
{
  return RtlpQueryRegistryValues(a1, a2);
}
