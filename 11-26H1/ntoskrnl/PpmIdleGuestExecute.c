/*
 * XREFs of PpmIdleGuestExecute @ 0x14049AF80
 * Callers:
 *     <none>
 * Callees:
 *     HalProcessorIdle @ 0x140722A90 (HalProcessorIdle.c)
 */

__int64 __fastcall PpmIdleGuestExecute(__int64 a1, __int64 a2, int a3)
{
  if ( a3 )
    __readmsr(0x400000F0u);
  else
    HalProcessorIdle(a1);
  return 0LL;
}
