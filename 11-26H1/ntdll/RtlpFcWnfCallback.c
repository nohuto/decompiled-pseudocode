/*
 * XREFs of RtlpFcWnfCallback @ 0x18005FA70
 * Callers:
 *     <none>
 * Callees:
 *     RtlpFcUpdateLocalConfiguration @ 0x18005EF24 (RtlpFcUpdateLocalConfiguration.c)
 *     RtlpFcCallChangeCallbacks @ 0x18005FAA4 (RtlpFcCallChangeCallbacks.c)
 */

__int64 __fastcall RtlpFcWnfCallback(__int64 a1, __int64 a2, __int64 a3, _RTL_SRWLOCK *a4)
{
  RtlpFcUpdateLocalConfiguration(a4, MEMORY[0x7FFE0A90], 1);
  RtlpFcCallChangeCallbacks(a4);
  return 0LL;
}
