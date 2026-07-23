/*
 * XREFs of ?KiLogSingleSchedulingGroupRundown@@YAXPEAU_ETW_SILODRIVERSTATE@@KPEAU_KSCHEDULING_GROUP@@@Z @ 0x1405FBAC4
 * Callers:
 *     KiTraceSchedulingGroupRundown @ 0x1405FBCC0 (KiTraceSchedulingGroupRundown.c)
 * Callees:
 *     EtwTraceScbRundown @ 0x1406C8A04 (EtwTraceScbRundown.c)
 *     EtwTraceSchedulingGroupRundown @ 0x1406C8B1C (EtwTraceSchedulingGroupRundown.c)
 */

void __fastcall KiLogSingleSchedulingGroupRundown(
        struct _ETW_SILODRIVERSTATE *a1,
        int a2,
        struct _KSCHEDULING_GROUP *a3)
{
  int v5; // r14d
  unsigned int v6; // r15d
  unsigned int v7; // edi
  unsigned int *p_Rank; // rbx

  v5 = (int)a1;
  EtwTraceSchedulingGroupRundown();
  v6 = KeNumberProcessors_0;
  v7 = 0;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    p_Rank = &a3->PerProcessor[0].Rank;
    do
    {
      EtwTraceScbRundown(v5, a2, (_DWORD)a3, v7++, *p_Rank, (*(_WORD *)(p_Rank - 3) & 2) != 0);
      p_Rank += 116;
    }
    while ( v7 < v6 );
  }
}
