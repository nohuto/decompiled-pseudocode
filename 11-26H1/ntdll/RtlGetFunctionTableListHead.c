/*
 * XREFs of RtlGetFunctionTableListHead @ 0x180126880
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 *RtlGetFunctionTableListHead()
{
  return &RtlpDynamicFunctionTable;
}
