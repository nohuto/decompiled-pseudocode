/*
 * XREFs of RtlpFcWnfCallback @ 0x180014340
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcUpdateLocalConfiguration @ 0x1800137F4 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcCallChangeCallbacks @ 0x180014374 (RtlpFcCallChangeCallbacks.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0A90], 1);
  RtlpFcCallChangeCallbacks(a4);
  return 0LL;
}
