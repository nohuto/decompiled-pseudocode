/*
 * XREFs of KeQueryProcessorTaggedCyclesImprecise @ 0x1404708D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall KeQueryProcessorTaggedCyclesImprecise(unsigned int a1, int a2)
{
  __int64 v2; // rcx

  if ( a1 < (unsigned int)KeNumberProcessors_0 && (_mm_lfence(), (v2 = KiProcessorBlock[a1]) != 0) )
    return *(_QWORD *)(v2 + 8LL * a2 + 34440);
  else
    return 0LL;
}
