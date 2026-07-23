/*
 * XREFs of KeQueryProcessorTotalCyclesImprecise @ 0x140480A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryProcessorTotalCyclesImprecise(unsigned int a1)
{
  __int64 v1; // rax

  if ( a1 < (unsigned int)KeNumberProcessors_0 && (_mm_lfence(), (v1 = KiProcessorBlock[a1]) != 0) )
    return *(_QWORD *)(v1 + 34432);
  else
    return 0LL;
}
