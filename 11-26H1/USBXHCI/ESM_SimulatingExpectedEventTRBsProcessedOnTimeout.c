/*
 * XREFs of ESM_SimulatingExpectedEventTRBsProcessedOnTimeout @ 0x140056070
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x14002E028 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall ESM_SimulatingExpectedEventTRBsProcessedOnTimeout(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *(_QWORD *)(v1 + 80),
      2,
      13,
      126,
      (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
      *(_QWORD *)(v1 + 24));
  return 150LL;
}
