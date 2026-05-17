/*
 * XREFs of RtlAreLongPathsEnabled @ 0x1800DBC00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 RtlAreLongPathsEnabled()
{
  return NtCurrentPeb()->BitField >> 7;
}
