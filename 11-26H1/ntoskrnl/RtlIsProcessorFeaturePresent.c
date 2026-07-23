/*
 * XREFs of RtlIsProcessorFeaturePresent @ 0x1404B90A0
 * Callers:
 *     ExIsProcessorFeaturePresent @ 0x1404B9080 (ExIsProcessorFeaturePresent.c)
 *     HalpIvtProcessDrhdEntry @ 0x1405B12F8 (HalpIvtProcessDrhdEntry.c)
 *     RtlHpGlobalsInitialize @ 0x140628520 (RtlHpGlobalsInitialize.c)
 *     DifExIsProcessorFeaturePresentWrapper @ 0x140656680 (DifExIsProcessorFeaturePresentWrapper.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsProcessorFeaturePresent(ULONG ProcessorFeature)
{
  unsigned __int64 v2; // rdx

  if ( ProcessorFeature >= 0xC0 )
    return 0;
  if ( ProcessorFeature < 0x40 )
    return *(_BYTE *)(ProcessorFeature - 0x87FFFFFFD8CLL);
  v2 = ProcessorFeature - 64;
  if ( (_KSWAPPABLE_PAGE *)v2 >= stru_140FC11F0.SchedulerSharedSwappablePage )
    return 0;
  else
    return _bittest64(
             (const signed __int64 *)stru_140FC11F0.AutoBoostThreadState + (v2 >> 6),
             ((_BYTE)ProcessorFeature - 64) & 0x3F);
}
