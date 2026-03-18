/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1404BF850
 * Callers:
 *     ExIsProcessorFeaturePresent @ 0x1404BF830 (ExIsProcessorFeaturePresent.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405AEAE8 (HalpIvtProcessDrhdEntry.c)
 *     RtlHpGlobalsInitialize @ 0x1406254D0 (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x140652AA0 (DifExIsProcessorFeaturePresentWrapper.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall RtlIsProcessorFeaturePresent(unsigned int a1)
{
  unsigned __int64 v2; // rdx

  if ( a1 >= 0xC0 )
    return 0;
  if ( a1 < 0x40 )
    return *(_BYTE *)(a1 - 0x87FFFFFFD8CLL);
  v2 = a1 - 64;
  if ( (_KSWAPPABLE_PAGE *)v2 >= stru_140FC01F0.SchedulerSharedSwappablePage )
    return 0;
  else
    return _bittest64((const signed __int64 *)stru_140FC01F0.AutoBoostThreadState + (v2 >> 6), ((_BYTE)a1 - 64) & 0x3F);
}
